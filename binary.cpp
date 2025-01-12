// //bs is always in increasing order or decreasing order
// #include<iostream>
// using namespace std;
// int binarysearch(int a[],int n,int key)
//     {
//         int st=0;
//         int end=n-1;
//         int mid=(st+end)/2;
//         while(st<=end){
//             if(a[mid]==key){
//                 return mid;
//             }
//             if(key>a[mid]){
//                 st=mid+1;
//             }
//             else{
//                 end=mid-1;
//             }
//             mid=(st+end)/2;
//         }
//         return -1;

//     }
  
// int main(){
//    int a[8]={1,2,3,4,5,6,7,8,};
//    int key;
//    cout<<"enter the key";
//    cin>>key;

// int index=binarysearch(a,8,key);
// cout<<"key of index is"<<index;
// }
#include<iostream>
using namespace std;
int neg(int a[],int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(a[mid]<0){
            swap(a[mid],a[low]);
            mid++;
            low++;
        }
        else{
            high--;
        }
    }
}
    int print(int a[],int n){
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";

        }
    }
    int main(){
        int a[6]={1,2,-3,-2,-5,9};
        neg(a,6);
        print(a,6);
    }
    