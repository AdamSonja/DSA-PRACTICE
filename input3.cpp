#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter the value of x , y & z"<<"\n";
    cin>>x>>y>>z;

    if (x>y && x>z)
    {
        cout<<"X is the Greatest";
    }
     if (y>x && y>z)
    {
        cout<<"Y is the greatest";
    }
    else{
        cout<<"Z is the Greatest";
    }
    


}