#include<iostream>
using namespace std;
int firstocc(int a[],int n, int x){
    int ans;
    int st=0;
    int end=n-1;
    int mid=st+(end-st)/2;
    while(st<=end){
        if(a[mid]==x){
            ans=mid;
            end=mid-1;
        } else if(x<a[mid]){
            end=mid-1;
        }
        else{
            st=mid+1;
        }
       
        mid=st+(end-st)/2;

    }
    return ans; 
}
int lastocc(int a[],int n, int x){
    int st=0;
    int end=n-1;
    int ans=-1;
    int mid=st+(end-st)/2;
    while(st<=end){
        if(a[mid]==x){
            st=mid+1;
            ans=mid;
        }
       else if(x>a[mid]){
            st=mid+1;
        }
        else if(x<a[mid]){
            end=mid-1;
        }
        mid=st+(end-st)/2;

    }
    return ans;
}

int totalocc(int a[],int n, int x){
    int res=0;
    for(int i=0;i<n;i++)
    if(x==a[i])
    res++;
    return res;
}
int main (){
    int a[7]={2,5,6,9,6,8,9};
    cout<<"first occ is"<<" "<<firstocc(a,7,9)<<endl;
    cout<<"last occ is"<<" "<<lastocc(a,7,9)<<endl;
    cout<<"totalocc is"<<" "<<totalocc(a,7,9)<<" "<<endl;

   
   
}