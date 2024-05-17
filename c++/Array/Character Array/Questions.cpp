#include<iostream>
using namespace std;

//Sentence is a Palindrome or Not
// int  main(){
//     int size{};
//     cout<<"Size: ";
//     cin>>size;

//     char arr[size + 1];
//     cout<<"Word: ";
//     cin>>arr;

//     bool flag{true};
//     for(int i{0};i < size-1;i++){
//         if(arr[i] != arr[size-1-i])
//           flag = false;
//     }
//     if(flag){
//         cout<<"Word is a Palindrome."<<endl;
//     }else{
//         cout<<arr<<" is ! a Palindrome."<<endl;
//     }

//     return 0;
// }
//--------------------------------------------------------------------------------------
int main(){
    int size{};
    cout<<"Size: ";
    cin>>size;
    cin.ignore();

    char arr[size+1];
    cin.getline(arr,size);
    cin.ignore();

    cout<<arr;


    return 0;
}