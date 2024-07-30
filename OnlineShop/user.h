#ifndef USER_H
#define USER_H

#include <string>

using namespace std;

class User
{
    string name;
    string phoneNumber;
    string address;

public:
    User();
    void setName(string name);
    void setPhoneNumber(string number);
    string getName();
    string getPhoneNumber();
};

#endif // USER_H
