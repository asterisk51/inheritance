#include <iostream>
using namespace std;
using namespace std;
class Account
{
public:
    void deposit(double amount);
    void withdraw(double amount);
    
};


void Account::deposit(double amount)
{
    std::cout << "Account deposit called with " << amount << std::endl;
}

void Account::withdraw(double amount)
{
    std::cout << "Account withdraw called with " << amount << std::endl;
}


class Saving_Account : public Account
{
public:
    
    void deposit(double amount);
    void withdraw(double amount);
};


void Saving_Account::deposit(double amount)
{
    std::cout << "Saving Account deposit called with " << amount << std::endl;
}

void Saving_Account::withdraw(double amount)
{
    std::cout << "Saving account withdraw called with " << amount << std::endl;
}

int main()
{

    cout << "\n=== Account =============================================" << endl;
    Account acc{};
    acc.deposit(2000.0);
    acc.withdraw(500.0);

    cout << endl;

    Account *p_acc{nullptr};
    p_acc = new Account{};
    p_acc->deposit(1000.0);
    p_acc->withdraw(500.0);
    delete p_acc;

    cout << "\n=== Saving Account =====================================" << endl;
    Saving_Account sav_acc{};
    sav_acc.deposit(2000.0);
    sav_acc.withdraw(500.0);

    cout << endl;

    Saving_Account *p_sav_acc{nullptr};
    p_sav_acc = new Saving_Account();
    p_sav_acc->deposit(1000.0);
    p_sav_acc->withdraw(500.0);
    delete p_sav_acc;

    cout << "\n============================================================" << endl;

    return 0;
}
