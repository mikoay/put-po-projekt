class Account
{
public:
    // CONSTRUCTORS 
    Account();
    // SETTERS
    void set_balance(float new_balance);
    // GETTERS
    float get_balance();
private:
    float balance;
};

class SavingAccount
    : public Account
{
public:
    float interest_rate;
};