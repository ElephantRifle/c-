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

/*Q - 43. Write a C++ program that accepts the radius of a circle from the user and 
computes the area and circumference.
*/
// int main(){
//     const double pie{3.141};
//     double radius{},area{},circumference{};

//     cout<<"Enter radius: ";
//     cin>>radius;

//     area = pie*radius*radius;
//     circumference = 2*pie*radius;

//     cout<<"Area: "<<area<<endl;
//     cout<<"Circumference: "<<circumference<<endl;

//     return 0;
// }

/*Q- 44. Write a C++ program to get the volume of a sphere with radius 6.*/
// int main(){
//     const double pie{3.141};
//     double rad{},volume{};

//     cout<<"Enter radius: ";
//     cin>>rad;

//     volume = (4*pie*rad*rad*rad)/3;

//     cout<<"Volume: "<<volume<<endl;

//     return 0;
// }

/*Q -47. Write a C++ program to calculate the sum of all even and odd numbers in an 
array.*/
// int main(){
//     int arr[]{12,11,45,34,67,88,90,76,51,21,43};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int even_t{};
//     int odd_t{};

//     for(int i{0};i < size;i++){
//         if(arr[i] % 2 == 0){
//             even_t+= arr[i];
//         }else{
//             odd_t+= arr[i];
//         }
//     }
//     cout<<even_t<<endl;
//     cout<<odd_t<<endl;

//     return 0;
// }
/*Q- 59. Write a C++ program to compute the distance between two points on the surface of the 
earth.*/
// int main(){
//     double distance{},la1{},la2{},lo1{},lo2{};
//     double r{0.01745327};//conversion factor pi/180
//     double earth_rad{6371.01};

//     cout<<"Enter latitude and logitude of Point A: "<<endl;
//     cin>>la1>>lo1;

//     cout<<"Enter latitude and logitude of Point B: "<<endl;
//     cin>>la2>>lo2;

//     la1*=r; 
//     lo1*=r; 
//     la2*=r; 
//     lo2*=r; 

//     distance = earth_rad * acos((sin(la1) * sin(la2)) + (cos(la1) * cos(la2) * cos(lo1 - lo2)));

//     cout<<"The distance between two points are: "<<distance<<" km"<<endl;

//     return 0;
// }

/*Q - 60. Write a C++ program to add two binary numbers.*/

// string binary_addition(string &b1 ,string &b2){
//     int carry{};
//     int i{},j{};
//     string result{};

//     i = b1.length()-1;
//     j = b2.length()-1;

//     while(i >= 0 || j >= 0 || carry!=0){
//         int sum = carry;

//         if(i >= 0){
//             sum+=b1[i] -'0';
//             i--;
//         }
//         if(j >= 0){
//             sum+=b2[j] - '0';
//             j--;
//         }
//         carry = sum/2;
//         sum = sum % 2;
//         result = to_string(sum) + result;
//     }
//     return result;
// }

// int main(){
//     string b1{},b2{};

//     cout<<"Enter binary no1: "; 
//     cin>>b1;
//     cout<<"Enter binary no2: ";
//     cin>>b2;

//     string sum =binary_addition(b1,b2);
//     cout<<sum;

//     return 0;
// }
/*Q - 61. Write a C++ program to swap the first and last digits of any number.*/
// int main(){
//     int number{};
//     int size{};
//     cout<<"Enter a number: ";
//     cin>>number;

//     string n = to_string(number);
//     size = n.length()-1; 
    
//     char t = n[0];
//     n[0] = n[size];
//     n[size] = t;

//     cout<<n;
 
//     return 0;
// }
/*Q - 62. Write a C++ program that reads the integer n and prints a twin prime that 
has the maximum size among twin primes less than or equal to n.*/
//Primality refers to the property of a number being prime.
int main(){
    int n{};
    cout<<"Enter a number: ";
    cin>>n;

    vector<int>prime{};

    for(int i{2}; i<=n;i++){
        bool isprime = true;

        for(int j{2};j * j <= i;j++){
            if(i % j == 0){
                isprime = false;
                break;
            }
        }
        if(isprime){
            prime.push_back(i);
        }
    }

    for(size_t t : prime){
        cout<<t<<" ";
    }

    return 0;
}