//INCLUSION EXCLUSION PRINCIPLE
//Q- How many number b/t 1 and 1000 are divisible by 5 and 7
#include<iostream>
using namespace std;

int divisible(int n,int a,int b){
    int n1 = n /a;
    int n2 = n/b;
    int n3 = n /(a*b);

    return n1+n2-n3;

}

int main(){
    int n{},a{},b{};
    cout<<"Values: ";
    cin>>n>>a>>b;
   
    cout<<divisible(n,a,b);

    return 0;
}