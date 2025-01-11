#include<iostream>
using namespace std;
int main(){
int n;
int count=0;
cout<<"enter the number";
cin>>n;
while(n){
    int bit=n&1;
    count=count+bit;
    n=n>>1;
}
if(count==1){
    cout<<"it is power of two";

}
else{
    cout<<"not power of two";
}
 

}