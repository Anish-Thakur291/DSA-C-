#include<iostream>
using namespace std;
int swap(int a[],int n){
for(int i=0;i<n;i+=2){
if(i<n){
swap(a[i],a[i+1]);
}
}
}
int print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
int main(){
int a[6]={2,3,4,5,7,6};
swap(a,6);
print(a,6);

}