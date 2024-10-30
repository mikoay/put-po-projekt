#include "Customer.h"

Customer::Customer()
{
    // TODO
}

Customer::Customer(std::string input_name, std::string input_surname, std::string input_pesel, std::string input_phone_number)
{
    this->set_name(input_name);
    this->set_surname(input_surname);
    this->set_pesel(input_pesel);
    this->set_phone_number(input_phone_number);
}

Customer::~Customer()
{
    // TODO
}

void Customer::set_name(std::string input_name)
{
    this->name=input_name;
}

void Customer::set_surname(std::string input_surname)
{
    this->surname=input_surname;
}

void Customer::set_pesel(std::string input_pesel)
{
    if(input_pesel.length()==11)
        this->pesel=input_pesel;
}

void Customer::set_phone_number(std::string input_phone_number)
{
    if(input_phone_number.length()==9)
        this->phone_number=input_phone_number;
}

std::string Customer::get_name()
{
    return this->name;
}

std::string Customer::get_surname()
{
    return this->surname;
}

std::string Customer::get_pesel()
{
    return this->pesel;
}

std::string Customer::get_phone_number()
{
    return this->phone_number;
}

void Customer::open_account()
{
    this->accounts.push_back(new Account());
}

void Customer::close_account()
{
    // TODO
}

bool Customer::verified(std::string input_password)
{
    if(input_password==this->password)
        return true;
    return false;
}
