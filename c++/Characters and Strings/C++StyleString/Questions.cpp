#include<iostream>
#include<string>
using namespace std;
//Comment out the 
//#define FIRST_MAIN //First Question
//#define SECOND_MAIN  //Second Question
#define THIRD_MAIN   //Third Question



#ifdef FIRST_MAIN
//Question - Convert entire string to lower case and upper case
int main(){
    string str = "fdbnbbviefgsdh";

    //Convert into Upper Case
    for(int i{0};i < str.size();i++){
        if(str[i] >= 'a' && str[i] <= 'z')
          str[i] -= 32;
    }
    cout<<str<<endl;

    string str2 = "FRJFIESCNVKEIH";

    //Convert to Lower Case
    for(int i{0};i < str2.size();i++){
        if(str2[i] >= 'A' && str2[i] <= 'Z')
          str2[i] += 32;
    }
    cout<<str2<<endl;

    return 0;
}
#endif

#ifdef SECOND_MAIN
//Question2 - Form the biggest number in numeric string "52341" -> "54321"

void sorting (string str){//Using SELECTION SORT Algorithm
    int size = str.size();
    for(int i{0};i < size - 1;i++){
        for(int j{i + 1};j < size;j++){
            if(str[i] <= str[j]){
                char temp = str[j];
                str[j] = str[i];
                str[i] = temp;
            }
        }
    }
    cout<<str<<endl;
}
int main(){
    string str = "8997470504";
    sorting(str);//To sort numeric value in string

    return 0;
}
#endif

#ifdef THIRD_MAIN
int main(){


    return 0;
}

#endif