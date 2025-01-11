
#include<iostream>
using namespace std;
int unique(int a[], int n){
    int ans=0;
    int i=0;
    for(;i<n;i++){
        ans=ans^a[i];
    }
    return a[i] ;
}
int main(){
    int a[5]={2,3,7,2,3};
    cout<<"unique numbber is "<<" "<<unique(a,5);

}