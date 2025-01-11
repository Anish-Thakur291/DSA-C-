#include<iostream>
using namespace std;
int bubble_sort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
   
}
 int print(int a[],int n){
        for(int i=0;i<n;i++){
            cout<<" "<<a[i]<<" ";
            
        }
    }
int main(){
    int a[5]={67,32,11,1,2};
    cout<<bubble_sort(a,5);
    cout<<"sorted array :";
    cout<<print(a,5);
}