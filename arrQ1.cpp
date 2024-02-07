//  in this question we get the highest on as we iterate throught the array the current max will be compared with thhe current element  and printed as we go by 
//ahead such as  0 -9 1 3 5 
// so first 0 is greater than again 0 and -9 we get 0 as highest than 0 -9 1 we get 1 as highest an so on..
#include <iostream>
using namespace std;
int main() {
 int mx = -199999;
 int n ;
 cin>>n;
 int arr[n];
  for(int i=0 ; i<n ; i++){
      cin>>arr[i];
  }
for(int i =0 ; i<n ; i++){
    mx = max(mx , arr[i]);
    cout<<mx<<endl;
}
    return 0;
}