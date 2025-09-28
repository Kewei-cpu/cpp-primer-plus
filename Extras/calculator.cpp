#include <iostream>
#include <string>
#include <variant>
#include <deque>
#include <vector>
#include <cctype>
#include <cmath>

using namespace std;

using namespace std;
using Token = variant<string, double>;
using TokenDeque = deque<Token>;

vector<Token> parse(const string& str) {
    string num_buffer;
    vector<Token> parsed;
    for (char ch : str) {
        if (ch == ' ') continue;
        if (isdigit(ch) || ch == '.') {
            num_buffer += ch;
            continue;
        }
        if (!num_buffer.empty()) {
            parsed.emplace_back(stod(num_buffer));
            num_buffer.clear();
        }
        parsed.emplace_back(string(1, ch));
    }
    if (!num_buffer.empty()) parsed.emplace_back(stod(num_buffer));
    return parsed;
}

double eval_min(TokenDeque& min_eq) {
    if (holds_alternative<string>(min_eq.front()) &&
        get<string>(min_eq.front()) == "-") {
        min_eq.emplace_front(0.0);
    }
    for (const string& ops : {"^", "*/", "+-"}) {
        for (size_t i = 0; i < min_eq.size(); ) {
            if (holds_alternative<string>(min_eq[i]) &&
                ops.find(get<string>(min_eq[i])) != string::npos) {
                double a = get<double>(min_eq[i - 1]);
                double b = get<double>(min_eq[i + 1]);
                double res = 0;
                string op = get<string>(min_eq[i]);
                if (op == "+") res = a + b;
                else if (op == "-") res = a - b;
                else if (op == "*") res = a * b;
                else if (op == "/") res = a / b;
                else if (op == "^") res = pow(a, b);
                min_eq[i] = res;
                min_eq.erase(min_eq.begin() + i - 1, min_eq.begin() + i);
                min_eq.erase(min_eq.begin() + i);
                --i;
            } else {
                ++i;
            }
        }
    }
    return get<double>(min_eq.front());
}

double evaluate(const vector<Token>& parsed) {
    TokenDeque stack;
    for (const auto& s : parsed) {
        if (holds_alternative<string>(s) && get<string>(s) == ")") {
            Token t = stack.back(); stack.pop_back();
            TokenDeque min_eq;
            while (!(holds_alternative<string>(t) && get<string>(t) == "(")) {
                min_eq.push_front(t);
                t = stack.back(); stack.pop_back();
            }
            stack.emplace_back(eval_min(min_eq));
        } else {
            stack.push_back(s);
        }
    }
    return eval_min(stack);
}

int main() {
    string input;
    cout << "Enter an expression: ";
    getline(cin, input);
    auto parsed = parse(input);
    double result = evaluate(parsed);
    cout << "result=" << result << endl;
    return 0;
}
