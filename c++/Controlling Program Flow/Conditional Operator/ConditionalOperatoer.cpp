#include<iostream>
using namespace std;
int main(){
    // int num{};
    // cout<<"Enter a number: ";
    // cin>>num;
    
    // if(num % 2==0 )
    //   cout<<num<<" is even...."<<endl;
    // else 
    //   cout<<num<<" is odd.... "<<endl;  
    
    // cout<<num<<" is "<<((num%2==0)?" even":" odd");

    int num1{},num2{};
    cout<<"Enter two numbers separated with space: ";
    cin>>num1>>num2;

    if(num1 != num2){
      cout<<"Largest: "<<((num1 > num2)? num1:num2)<<endl;
      cout<<"Smallest: "<<((num1 < num2)? num1:num2)<<endl;

    }else{
      cout<<"They are equal."<<endl;
    }

    return 0;
}