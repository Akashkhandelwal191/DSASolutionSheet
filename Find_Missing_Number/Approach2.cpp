#include<iostream>
#include<conio.h>
//Problem1 - Find Missing Element in a sorted Array 
//Using XOR Method Time Complexity : O(n) and Auxillary Space O(1)

using namespace std;


int main(){
   
    int n,xor1,xor2;
    cout<<"Enter the Size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }

    xor1 = arr[0];

    for(int i=1;i<n;i++)
    {
        xor1 ^= arr[i];
    }

    xor2 = 1;
    for(int i=2;i<=n+1;i++)
    {
        xor2 ^= i;
    }

    cout<<(xor1^xor2)<<endl;

    return 0;
}