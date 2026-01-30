#include<iostream>
using namespace std;
int main(){
int arr[]={21,32,1,32,23,4,23,54,653,3,2};
int n = sizeof(arr)/sizeof(arr[0]);
    int largest =arr[0];
    for(int i = 0; i < n; i++)
    {
        if (arr[i]>largest)
        {
            largest= arr[i];
        }   
    }
    cout<<largest<<endl;
    return 0;
}