#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x;
    cout<<"Enter the value of x"<<endl;
    cin>>x;
    if (x<1 || x==0 )
    {
        cout<<"Invalid Input";
    }
    for (int i = 2; i <= x; i++)
    {
        int j;
        for ( j = 2; j*j < i; j++)
        {
            if (i%j==0)
            {
                break;
            }        
        }
        if (j*j>i)
        {
            cout<<i<<" Is Prime"<<endl;
        }    
    }
}