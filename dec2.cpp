#include<iostream>
#include<math.h>
using namespace std;
int print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
int swap(int a[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
        swap(a[i],a[i+1]);
        }

    }
}
int main (){
   int sw[100];
   int n;
   cout<<"enter the number";
   cin>>n;
   cout<<"enter the element";
   

    swap(sw,n);
    print(sw,n);

    // int n;
    // cin>>n;
    // for(int i=0;i<=30;i++){
    //     int ans=pow(2,i);
    
    //     if (ans==n)
    //     {
    //        cout<<"true";
    //        break;
    //     }
    //     }


    
}