#include <iostream>
using namespace std;
int main() {
int n ;
cin>> n;
int a[n];
 for(int i=0; i<n ; i++){
     cin>>a[i];
 }
int ans = 2;
    int pd = a[1] - a[0];
    int j = 2;
    int current = 2;
    while(j < n) {
        if(pd == a[j] - a[j-1]) {
            current++;
        } else {
            pd = a[j] - a[j-1];
            current = 2;
        }
        ans = max(ans, current);
        j++;
    }
    cout << ans << endl;
    return 0;
}
// Step-by-Step Explanation:
// The input array is [1, 2, 3, 5, 7, 9].
// pd is initialized to 1 (difference between the second and first elements).
// Loop starts from j = 2 (third element).
// At j = 2, the difference between 3 and 2 is 1, which is equal to pd. So, current becomes 3.
// At j = 3, the difference between 5 and 3 is 2, which is not equal to pd. So, pd becomes 2, and current resets to 2.
// At j = 4, the difference between 7 and 5 is 2, which is equal to pd. So, current becomes 3.
// At j = 5, the difference between 9 and 7 is 2, which is equal to pd. So, current becomes 4.
// At j = 6, the loop exits as there are no more elements.
// The length of the longest arithmetic subarray found is 4, so the output is 4.
// This code efficiently finds the length of the longest arithmetic subarray in the given array.