#include<iostream>
using namespace std;
int neg(int a[],int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(a[mid]<0){
            swap(a[mid],a[low]);
            mid++;
            low++;
        }
        else{
            high--;
        }
    }
}
    int print(int a[],int n){
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";

        }
    }
    int main(){
        int a[6]={1,2,-3,-2,-5,9};
        neg(a,6);
        print(a,6);
    }
    
