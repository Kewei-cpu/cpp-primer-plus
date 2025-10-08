#include <atomic>
#include <iostream>
#include <string>

class Account
{
    unsigned long long id = 0;
    double balance = 0.0;
    const std::string& full_name;

public:
    Account(const unsigned long long id, const std::string& full_name) : id(id), full_name(full_name)
    {
    };

    [[nodiscard]] unsigned long long get_id() const;
    [[nodiscard]] const std::string& get_full_name() const;
    [[nodiscard]] double get_balance() const;

    void print_info() const;

    void withdraw(double amount);
    void deposit(double amount);
};

unsigned long long Account::get_id() const
{
    return id;
}

double Account::get_balance() const
{
    return balance;
}

const std::string& Account::get_full_name() const
{
    return full_name;
}

void Account::print_info() const
{
    std::cout << "=====================\n";
    std::cout << "Bank account #" << id << std::endl;
    std::cout << "Name: " << full_name << std::endl;
    std::cout << "Balance: $" << balance << std::endl;
    std::cout << "=====================\n";
}

void Account::deposit(const double amount)
{
    balance += amount;
    std::cout << "Deposited $" << amount << std::endl;
    std::cout << "Current balance: $" << balance << std::endl;
}


void Account::withdraw(const double amount)
{
    if (balance < amount)
    {
        std::cout << "Current balance: $" << balance << std::endl;
        std::cout << "Trying to withdraw $" << amount << std::endl;
        std::cout << "Insufficient balance! Transaction aborted.";
        return;
    }

    balance -= amount;
    std::cout << "Withdrawn $" << amount << std::endl;
    std::cout << "Current balance: $" << balance << std::endl;
}

int main()
{
    Account account{59312, "name23"};

    account.deposit(100.0);
    account.deposit(500.0);
    account.print_info();
    account.withdraw(300.0);
    account.print_info();
    account.withdraw(500.0);
}
