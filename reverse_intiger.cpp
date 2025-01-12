#include<iostream>
using namespace std;
int rvr(int n){
    int ans=0;
    while(n){
        int k=n%10;
        ans=ans*(10)+k;
        n=n/10;
    }
    return ans;
}
int main(){
    int n=321;
   
        cout<<"ans is "<<rvr(n);
}