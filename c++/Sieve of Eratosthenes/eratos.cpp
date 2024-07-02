#include<iostream>
using namespace std;
//Normal Way of finding Prime Numbers 
// int main(){
//     int a{};
//     cout<<"number: ";
//     cin>>a;
//     bool flag{true};
//         if(a <= 1){
//             flag = false;

//         }else{
//             for(int i{2};i < a/2;i++){//or use sqrt instead of a /2 write sqrt(a)
//                 if(a % i == 0){
//                     flag = false;
//                     break;
//                 }
//         cout<<"It is a Prime number."<<endl;
//     }else{
//         cout<<"It is not a Prime number."<<endl;
//     }

//     return 0;
// }
//Normal Way of finding Prime Numbers 
// int main(){
//     int arr[]{11,13,4,56,101,34,78,110,17,19};
//     int size = sizeof(arr) / sizeof(arr[0]);


//     for(int i{0};i < size;i++){
//         bool flag{true};
//         int a = arr[i];

//         if(a <= 1){
//             flag = false;
//         }else{
//             for(int j{2};j <= a/2;j++){
//                 if(a % j == 0){
//                   flag = false;
//                   break;
//                 }
//             }
//         }
//         if(flag)
//             cout<<a<<" is a Prime Number."<<endl;
//     }
//     return 0;
// }


//Sieve of Eratosthenes Method
//"sieve" refers to a method for finding all prime numbers up to a given limit
int main(){
    int arr[50]{};
    for(int i{2};i < 50;i++){
        arr[i-2] = i;
    }
    for(int j{0};j < 50;j++){
        cout<<arr[j]<<endl;
    }
    
    //diff answer
    // int arr[50]{};
    // for(int i{0};i < 50;i++){
    //     arr[i] = i+2;
    // }
    // for(int j{0};j < 50;j++){
    //     cout<<arr[j]<<endl;
    // }

    return 0;
}
