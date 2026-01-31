#include<iostream>
using namespace std;
int  OddEven(int x){
    if (x%2==0)
    {
        cout<<"Even";
    }else{
        cout<<"Odd";
    }
    
}
int main(){
    OddEven(51);
}