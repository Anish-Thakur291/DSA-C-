#include<iostream>
using namespace std;
bool is_possible(int a[], int n, int mid,int m){
    int studentcount=1;
    int pagesum=0;
    for(int i=0;i<n;i++){
        if(pagesum + a[i]<=mid){
            pagesum +=a[i];
        }
        else{
            studentcount++;
            if(studentcount>m || a[i]>mid){
                return false;
            }
            pagesum=a[i];
        }

    }
    return true;
}
// using binary sarch 
int allocation(int a[],int n, int m){
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(is_possible(a,n,mid,m)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

 
int main (){
    int m=2;
   int a[5]={10,20,30,40,50};
   int ans=allocation(a,5,m);
   cout<<"the answer is"<<ans;


}