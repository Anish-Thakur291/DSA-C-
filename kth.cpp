#include<iostream>
using namespace std;
int sort(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                i++;
                j++;
            }
        }
    }
}
    int print(int a[],int n){
for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
} 
}
int kth(int a[],int n,int k){
    int small=a[k-1];
    int larger=a[n-k];
    return larger;

    }

int main(){
    int a[5]={5,6,7,8,9};
    int k=2;
    cout<<kth(a,5,k)<<endl;
   

}