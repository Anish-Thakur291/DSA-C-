#include<iostream>
using namespace std;
int print(int a[], int n){
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int sort(int a[],int n){
    int left=0;
    int right=n-1;
    while(left<right){
        while(a[left]==0){
            left++;
        }
        while (a[right]==1)
        {
            right--;
        }
        swap(a[left],a[right]);
        left++;
        right--;
    



    }
}
int main(){
    int a[6]={3,0,0,2,1,0};
    sort(a,6);
    print(a,6);
}