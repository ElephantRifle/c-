#include<iostream>
using namespace std;
int main(){
    //Rectangle 
    int col{},row{};
    cout<<"Enter col: ";
    cin>>col;

    cout<<"Enter row: ";
    cin>>row;

    for(int i{1};i <=row;i++)
    {
        for(int j{1};j <= col;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<"=========================================="<<endl;

    //Hollow Rectangle

    for(int i{1};i <= row;i++){
        for(int j{1};j <=col;j++){
          if(i == row || i == 1 || j == 1 || j == col){
            cout<<"*";
          }else{
            cout<<" ";
          }        
        }
        cout<<endl;
    }

    cout<<"=========================================="<<endl;

    //Invered Half Pyramid
    int n{};
    cout<<"Enter a number: ";
    cin>>n;

    for(int i{1};i <= n;i++){
        for(int j{n-i};j >= 0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }

    //OR

    for(int i{n};i >= 1;i--){
        for(int j{1};j <= i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }


    cout<<"=========================================="<<endl;

    //Opposite Triangle
    for(int i{1};i <= n;i++){
        for(int k{1}; k <= i;k++){
            cout<<" ";
        }
        for(int j{n-i};j >= 0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<"=========================================="<<endl;


    //Half Pyramid after 180 degree rotation
    for(int i{1};i <= n;i++){
        for(int k{n-i};k >= 1;k--){
            cout<<"  ";
        }
        for(int j{1};j <= i ;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    

    //Better Approach
    for(int i{1};i <= n;i++){
        for(int j{1};j <= n;j++){
            if(j <= n-i){
                cout<<"  ";
            }else{
                cout<<"* ";
            }
        }
        cout<<endl;
        
    }
    cout<<"=========================================="<<endl;

    //Half Pyramid Using numbers
    for(int i{1};i <= n;i++){
        for(int j{n};j > n-i;j--){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    cout<<"=========================================="<<endl;
    

    return 0;
}

