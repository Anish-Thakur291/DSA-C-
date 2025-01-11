#include <iostream>
using namespace std;
int getmax(int a[],int n){
    int max=INT8_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
int getmin(int a[],int n){
    int min=INT16_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}

int main (){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int a[1000];

        cout<<"enter the element in array";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
 
    cout<<"max number is"<<getmax(a,5);
    cout<<"min number is:"<<getmin(a,n);
}
