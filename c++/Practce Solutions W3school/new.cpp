#include<iostream>
#include<vector>
#include<iomanip>
#include<cmath>
#include<ctime>
using namespace std;
/*Q - 31. Write a C++ program to input a single-digit number and print it 
in a rectangular form of 4 columns and 6 rows.*/
// int main(){
//     int n{};
//     int rows{6},columns{4};
//     cout<<"Enter a number: ";
//     cin>>n;

//     for(int i{1};i <= rows;i++){
//         for(int j{1}; j <= columns;j++){
//             if((j>=2 && j<=3)&& (i>=2 && i<6)){
//                 cout<<" ";
//             }else{
//                 cout<<n;
//             }
//         }
//         cout<<endl;
//     }

//     return 0;
// }

/*Q -32 Write a program in C++ to check whether a number is positive, negative or 
zero.*/
// int main(){
//     int n{};
//     cout<<"Enter a number: ";
//     cin>>n;

//     if(n > 0){
//         cout<<n<<" is positive.";
//     }else if (n < 0){
//         cout<<n<<" is negative.";
//     }else{
//         cout<<n<< "is zero.";
//     }
    
//     return 0;
// }
/* Q-34 Write a C++ program to display the current date and time.*/
// int main(){
//     time_t t = time(NULL); 
//     tm* tPtr = localtime(&t);

//     cout<<" seconds: "<<(tPtr->tm_sec)<<endl;
//     cout<<" minutes: "<<(tPtr->tm_min)<<endl;
//     cout<<" hour: "<<(tPtr->tm_hour)<<endl;
//     cout<<" day: "<<(tPtr->tm_mday)<<endl;
//     cout<<" month: "<<(tPtr->tm_mon)<<endl;
//     cout<<" year: "<<(tPtr->tm_year)+1900<<endl;
//     cout<<" weekday: "<<(tPtr->tm_wday)<<endl;
//     cout << " day of year = " << (tPtr->tm_yday) << endl; 
//     cout << " daylight savings = " << (tPtr->tm_isdst) << endl;

//     cout << " Current Date: " <<(tPtr->tm_mday)<<"/"<< (tPtr->tm_mon)+1 <<"/"<< (tPtr->tm_year)+1900<< endl; 
//     cout << " Current Time: " << (tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec) << endl; 


//     return 0;
// }
/*Q -35. Write a program in C++ to compute the specified expressions and print 
the output.*/
// int main(){
//     double result{};
//     result = (25.5 * 3.5 - 3.5 * 3.5) / (40.5 - 4.5) ;
//     cout<<setprecision(3);

//     cout<<" (25.5 * 3.5 - 3.5 * 3.5) / (40.5 - 4.5): ";
//     cout<<result<<endl;


//     return 0;
// }
/*Q -36. Write a program in C++ to test Type Casting.*/
// int main(){
//     int i1{7};
//     int i2{2};
//     cout<<setprecision(2);
//     cout<<i1/i2<<endl;
//     cout<<static_cast<double>(i1) / i2 <<endl;
//     cout<<i1 / static_cast<double>(i2) <<endl;

//     cout<<"------------------------------------"<<endl;
    
//     double j1{12.5};
//     double j2{10.56};
//     cout<<j1/j2<<endl;
//     cout<<j1/static_cast<int>(j2) <<endl;
//     cout<<static_cast<int>(j1 / j2) <<endl;
//     cout<<int(j1/j2)<<endl;

//     return 0;
// }
/*Q - 37. Write a C++ program to print a mystery series from 1 to 50.*/
// int main(){
//     int n{50};
//     vector<int>series{};
//     int count{1};
//     while(true){
//         count++;
//         if(count % 3 == 0)
//           continue;
//         if( count == 50)
//           break;
//         if( count % 2 == 0){
//           count+=3;
//           series.push_back(count);
//         }else{ 
//           count-=3;
//           series.push_back(count);
//         }     
//     }
//     for( size_t st:series){
//         cout<<st<<" ";
//     }

//     return 0;
// }
/*Q -38. Write a C++ program that takes a number as input and prints its 
multiplication table up to 10.*/
// int main(){
//     int number{};

//     cout<<"Enter a number: ";
//     cin>>number;

//     for(int i{1};i <= 10;i++){
//         cout<<number<<" * "<<i<<" = "<<number*i<<endl;
//     }

//     return 0;
// }
/*Q - 39. Write a C++ program to print the following pattern.*/
int main(){
    int n{7};
    

    return 0;
}