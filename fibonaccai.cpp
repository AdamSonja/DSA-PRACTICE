//fibonacci series -> 0 1 1 2 3 5  8 13 21 34 ...
#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,c,x;
    cout<<"Enter the Value of X"<<endl;
    cin>>x;

    for (int i = 0; i < x; i++)
    {
        cout<<a<<" ";
        int c = a+b;
        a=b;
        b=c;
    }
    return 0;
    

}