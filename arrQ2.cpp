// sum of all the subarrays[ part of an array which is continuus] of the array 

#include <iostream>
using namespace std;
int main() {
   int n ;
   cin>> n ;
   int arr[n];
   
   for(int i=0 ; i<n ; i++){
       cin>>arr[i];
   }
 int current=0 ;
 for( int i=0 ; i<n ;i++){// outer loop  to start of the array
     current=0;
     for(int j=i ;j<n ;j++){// starting point ke baad wala  part of the array to iterate
         current +=arr[j];
         cout<<current<<endl;
     }
 }
    return 0;
}