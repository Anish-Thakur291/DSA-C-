#include<iostream>
using namespace std;
  int removeElement(int nums[], int n,int val) {
        int index=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                nums[index]=nums[i];
                index++;
            }
        }
        return index;
    }
int main(){
int n=6;
int k=1;
int a[6]={1,2,1,2,4,2};
int ans=removeElement(a,6,k);
cout<<"aray is"<<ans;

}