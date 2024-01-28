#include <iostream>
using namespace std;
#include <climits>
int main() {
    int n;
    cin>>n;
    // Write C++ code here
 int array[n];
  for (int i=0 ; i<n ;i++){
      cin>>array[i];
  }
int maxNo = INT_MIN;// Initializing the  maxNo with the value of the minimalistics value so that there is no garbage value and than when we check the array it gets updated
int minNo = INT_MAX;// same is done with the minNo

 for( int i ; i<n ; i++){
     maxNo = max(maxNo , array[i]);// max compares btw  maxNo and array[i] and returns the max between them 
 
     if( array[i] < minNo){// this is another way to do the same we can also use min
     minNo = array[i];
 }
 }
 
 cout<< maxNo<<endl;
 cout<< minNo << endl;
    return 0 ;
}