#include<iostream>
using namespace std ;
int main()
{
        int x,counter=0;
        cout<<"Enter the value of x";
        cin>>x;
        while(x!=0){
            x=x/10;
            counter++;
        }
        cout<<counter;
}