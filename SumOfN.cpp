#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter The Value of N";
    cin>>n;

    for (int i = 0; i <n+1 ; i++)
    {
         sum = sum+i;
    }
    cout<<sum<<endl;
    
}