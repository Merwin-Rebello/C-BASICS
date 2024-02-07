
#include <iostream>
using namespace std;
int main() {
  int n ;
  cin>>n;
  int arr[n];
  for(int i=0 ;i<n-1;i++){
      cin>>arr[i];
  }
  // i<n-1 because we want the loop to not go to  position which is after  n which i goes because of the looping conditon and the comparision contion should not apply to with the non existsing condition.
     for(int i=0; i<n-1;i++){
         for(int j=i+1;j<n;j++){
             if(arr[j]<arr[i]){
                 int temp=arr[j];
                     arr[j]=arr[i];
                     arr[i]=temp;
             }
         }
     }
     for(int i=0 ; i<n ; i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;
    return 0;
}