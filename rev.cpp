// #include <iostream>
// using namespace std;
// int rev(int a[], int n)
// {
//     int start = 0;
//     int end = n - 1;
//     while (start <= end)
//     {
//         swap(a[start], a[end]);
//         start++;
//         end--;
//     }
// }
// int print(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i];
//     }
// }
// int main()
// {
//   int n=6;
//     int a[6] = {2, 3, 4, 5, 67, 6};
// //   cout<<"enter the numer";
// //   cin>>n;
// //   cout<<"enter the element";
// //   int a[n];
// //   for(int i=0;i<n;i++){
// //     cin>>a[i];
// //   }
//     rev(a, n);
//     print(a, n);
// }

#include<iostream>
using namespace std;
int rvr(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
int print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
int  main(){
    int ar[5]={2,1,4,6,5};
    rvr(ar,5);
    print(ar,5);
}