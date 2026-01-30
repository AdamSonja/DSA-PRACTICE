#include<iostream>
using namespace std;
int main(){
    char A;
    cout<<"Enter a Character"<<"\n";
    cin>>A;
    if ((A>='a'&& A<='z')||(A>='A'&& A<='Z'))
    {
        if (A=='A'||A=='a'||A=='E'||A=='e'||A=='I'||A=='i'||A=='O'||A=='o'||A=='U'||A=='u')
        {
            cout<<"The Character "<<A<<" Is a Vowel"<<"\n";
        }
        else{
            cout<<A<<" is consonent";
        }
    }
    
    else{
        cout<<"Invalid Character Or Symbol , Numbers Not Supported";
    }
    

}