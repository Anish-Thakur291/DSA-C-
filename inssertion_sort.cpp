#include<iostream>
using namespace std;
int insertion_sort(int a[],int n){
for(int i=1;i<n;i++){
    int min=a[i];
    int j=i-1;
    for(;j<n;j++){
        if(a[j]>min)
        a[j+1]= a[j];
    else{
        break;
    }
    }
   a[j+1]=min;
}
}
   int print(int a[],int n){
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
            cout<<endl;
        }
    }
int main(){
    int a[4]={67,32,11,1};
    cout<<insertion_sort(a,4);
    cout<<print(a,4);
}

