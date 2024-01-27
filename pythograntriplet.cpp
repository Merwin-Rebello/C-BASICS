// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

bool check(int x , int y , int z){
 int a = max(x , max(y,z));
 int b , c;
 if(a == x){
     b=y;
     c=z;
 }
 else if (a==y){
     b=x;
     c=z;
 }
 else {
     b=x;
     c=y;
 }
if(a*a == b*b + c*c)
     return true;

else
    return false;

}

int main() {
    // Write C++ code here
    
 int x , y, z; 
 cin>>x>>y>>z;
 
 if(check(x, y, z)){
     cout<<"it is a pythogrean triplet"<<endl;
 }
 else{
     cout<<"it is not a pythongrean triplet"<<endl;
 }
    return 0;
}