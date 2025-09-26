from collections import deque


def parse(string: str) -> list[str | float]:
    """parse raw string into tokens(numbers and operators)"""
    num_buffer: str = ''
    parsed: list[str | float] = []

    for s in string:
        if s == ' ': continue
        if s in '0123456789.':
            num_buffer += s
            continue
        if num_buffer:
            parsed.append(float(num_buffer))
            num_buffer = ''
        parsed.append(s)
    if num_buffer: parsed.append(float(num_buffer))

    return parsed


def evaluate(parsed: list[str | float]) -> float:
    """evaluate parsed expression"""
    stack: deque[str | float] = deque()
    for s in parsed:
        if s != ')':
            stack.append(s)
        else:
            t = stack.pop()
            min_eq: deque[str | float] = deque()
            while t != '(':
                min_eq.appendleft(t)
                t = stack.pop()
            stack.append(eval_min(min_eq))

    return eval_min(stack)


def eval_min(min_eq: deque[str | float]) -> float:
    """evaluate expression without parenthesis"""
    if min_eq[0] == '-':
        min_eq.appendleft(0.0)

    for ops in ('^', '*/', '+-'):
        i: int = 0
        while i < len(min_eq):
            if str(min_eq[i]) in ops:
                a = min_eq[i - 1]
                b = min_eq[i + 1]
                match min_eq[i]:
                    case '+':
                        min_eq[i] = a + b
                    case '-':
                        min_eq[i] = a - b
                    case '*':
                        min_eq[i] = a * b
                    case '/':
                        min_eq[i] = a / b
                    case '^':
                        min_eq[i] = a ** b
                del min_eq[i - 1]
                del min_eq[i]
            else:
                i += 1

    return min_eq[0]


def main():
    string: str = input('Enter an expression: ')
    parsed: list[str | float] = parse(string)
    result: float = evaluate(parsed)
    print(f'{result=}')


if __name__ == '__main__':
    main()
