#include <iostream>
using namespace std;

    int contain(int a[],int n){
      int low=0,mid=0,high=n-1;
      while(mid<=high){
        if(a[mid]==0){
            swap(a[mid],a[low]);
            low++;
            mid++;
        }
        else if(a[mid]==1){
            mid++;
        }
        else{
            swap(a[mid],a[high]);
            high--;
        }
      }
    }
    int print(int a[],int n){
        for(int i=0;i<n;i++){
            cout<<a[i];
        }
    }
int main(){
     int a[5]={1,0,2,1,0}; //only work for output like 0 ,1 and2s not for 3 and other  
    contain(a,5);
    print(a,5);
}
