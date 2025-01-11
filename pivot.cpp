#include<iostream>
using namespace std;
int pivot(int a[],int n){
    int st=0;
    int end=n-1;
    int mid=st+(end-st)/2;
    while(st<end){
        if(a[mid]>=a[0]){
            st=mid+1;
        }
        else{
            end =mid;
        }
     mid=st+(end-st)/2;
    }
        return st;
}
int main (){
    int a[6]={4,8,10,1,2,7 };
    cout<<"pivot element is"<<pivot(a,6);

}