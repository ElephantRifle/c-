#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<string>

class Account{
    private:
    //Attributes
    std::string name;
    double balance;

    public:
    //Methods
    //Declared inline
    void set_balance(double bal){balance=bal;}
    double get_balance(){return balance;}

    //Methods that will be declared outside the class declaration
    void set_name(std::string n);
    std::string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};


#endif