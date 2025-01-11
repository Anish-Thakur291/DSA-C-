#include<iostream>
using namespace std;
int peak(int a[],int n){
    int st=0;
   int end=n-1;
    int mid=st+(end-st)/2;
    while(st<end){
        if(a[mid]<a[mid+1]){
            st=mid+1;
        }
        else{
            end =mid;
        }
           //updating mid
         mid=st+(end-st)/2;
    }
    return st;
}
int main (){
    int a[6]={9,8,7,6,5,4};
    cout<<"The index of peak element of an array is ==> "<<" "<<peak(a,6);
    
}