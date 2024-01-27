// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int binarytodecimal(int n ){
    int ans=0 ;
    int x=1;
    while(n>0){
        int y = n%10;
        ans += x*y;
        x *= 2;
        n /=10;
    }
    return ans;
}
int octaltodecimal(int n ){
    int ans=0 ;
    int x=1;
    while(n>0){
        int y = n%10;
        ans += x*y;
        x *= 8;
        n /=10;
    }
    return ans;
}

int decimalTobinary(int n){
    int x=1;
    int ans = 0;
    while(x<=n){
        x*=2;
        x/=2;
    }
    while(x>0){
        int lastdigit = n/x;
        n-= lastdigit*n;
        x/=2;
        ans = ans*10 + lastdigit;
    }
    return ans;
}
int decimalToOctal(int n){
    int x=1;
    int ans = 0;
    while(x<=n){
        x*=8;
        x/=8;
    }
    while(x>0){
        int lastdigit = n/x;
        n-= lastdigit*n;
        x/=8;
        ans = ans*10 + lastdigit;
    }
    return ans;
}
int main() {
    // Write C++ code here
    int n ;
    cin>>n;
    
    int result = octaltodecimal(n);
    cout<<result<<endl;

    return 0;
}