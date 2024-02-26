#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Player{
    public:
    string name;            //Attribute
    int xp;                 //Attribute
    int health;             //Attribute
    
    //Methods
    void talk(string text_to_say){cout<<name<<" says "<<text_to_say<<endl;}  
    bool is_dead();       

};
class Account{
    public:
    //Attributes , we can initialize these attributes in c++
    string name;
    double balance;

    //Methods
    void deposit(double bal){balance+=bal;cout<<"In deposit"<<endl;};  
    void withdraw(double bal){balance-=bal;cout<<"In Withdraw"<<endl;};
};

int main(){
    Account franks_account;
    franks_account.name="Franks_account";
    franks_account.balance=5000;
    franks_account.deposit(1000.0);
    franks_account.withdraw(200);



    Player frank{};
    frank.name="Frank";
    frank.xp=70;
    frank.health=100;
    frank.talk("Hello");/*when we call talk method from frank object these 
    attributes(player attributes) are available  to that method*/

    Player *enemy=new Player;//if we derefference the pointer we get the object
    (*enemy).name="Enemy";
    (*enemy).xp=15;
    enemy->health=100;
    enemy->talk("I will destroy you!");

    delete enemy;

    return 0;
}