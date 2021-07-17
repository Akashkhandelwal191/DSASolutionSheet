#include<iostream>
#include<conio.h>
//Problem 1- Find Missing Element in a Sorted Array.
//Using Summation Method Time Complexity is O(n)
using namespace std;


int main()
{

   int n,sum=0,sumtotal=0;
   cout<<"Enter the size of the array";
   cin>>n;
   int arr[n];
   cout<<"Enter the elements of the array";

   for(int i=0;i<n;i++)
   { 
      cin>>arr[i];
      sum += arr[i];  
   }
    
   
   sumtotal = ((n+1)*(n+2)) / 2;

   cout<<"Missing Number is:"<<(sumtotal-sum)<<endl;




    return 0;
}