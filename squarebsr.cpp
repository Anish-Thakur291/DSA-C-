#include<iostream>
using namespace std;
long long int sqbsr(int k){
    int s=0;
    int end=k;
    long long int mid=s+(end-s)/2;
    long long int ans =-1;
    while(s<=end){
       long long int square=mid *mid;
        if(square==k){
            return mid;
        }
        else if(square<k){
            ans=mid;
            s=mid+1;
        }
        else {
            end=mid-1;
        }
        mid=s+(end-s)/2;
    }

    return ans;
}
int main(){
    int k=49;
    cout<<"square root of the number is"<<sqbsr(k);

}
