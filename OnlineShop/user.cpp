#include "user.h"

User::User() {}

void User::setName(string name)
{
    this->name = name;
}

void User::setPhoneNumber(string number)
{
    this->phoneNumber = number;
}

string User::getName()
{
    return this->name;
}

string User::getPhoneNumber()
{
    return this->phoneNumber;
}
