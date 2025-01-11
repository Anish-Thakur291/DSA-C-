#include<iostream>
using namespace std;
int twosum(int arr[],int n ,int target){
    int s=0;
    int e=n-1;
    int ans1;
    while(s<e){
        int sum=arr[s]+arr[e]==target;
        if(sum==target){
             ans1=arr[s],arr[e];
        }
        else if(sum>target){
            e--;
        }
        else{
            s++;
        }

    }
  return ans1;
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    int target=11;
    int ans=twosum(arr,6,target);
    cout<<"sum of two number is ",ans;

}