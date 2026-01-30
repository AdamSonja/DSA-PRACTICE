#include<iostream>
using namespace std;
int main(){
    int arr[]={12,21,43,23,5,3,243,231,43};
    int n = sizeof(arr)/sizeof(arr[0]);
    int smallest =arr[0];
    for (int  i = 0; i < n; i++)
    {
        if (arr[i]<smallest)
        {
            smallest=arr[i];
        }
        
    }
    cout<<smallest;
    
}