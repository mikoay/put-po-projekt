#include <iostream>
#include <vector>
#include <string>
#include "Account.h"

class Customer
{
public:
    // CONSTRUCTORS
    Customer();
    Customer(std::string input_name, std::string input_surname, std::string input_pesel, std::string input_phone_number);
    // DESTRUCOTR
    ~Customer();
    // SETTERS
    void set_name(std::string input_name);
    void set_surname(std::string input_surname);
    void set_pesel(std::string input_pesel);
    void set_phone_number(std::string input_phone_number);
    // GETTERS
    std::string get_name();
    std::string get_surname();
    std::string get_pesel();
    std::string get_phone_number();
    // CUSTOMER'S ACCOUNTS' OPERATIONS
    void open_account();
    void close_account();
    // OTHER
    bool verified(std::string input_password);
private:
    // CUSTOMER INFO
    std::string login, password, name, surname, pesel, phone_number;
    // CUSTOMER ACCOUNTS
    std::vector<Account*> accounts;
};