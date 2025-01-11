#include <iostream>
using namespace std;
// int power(int a,int n){
//     int ans=1;
//     for(int i=0;i<n;i++){
//         ans=ans*a;
//     }
//     return ans;
// }
int main()
{
//     int a, n;
//     cout<<"enter the value for a:";
//     cin>>a;
//     cout<<"enter the value for b:";
//     cin>>n;
//     int ans;
//    ans= power(a,n);
//    cout<<"answer is"<<ans;
        int n;
    int sum=0;
    int count=0;
    cout<<"enter the number";
    cin>>n;
    while (n){
int bit=n&1;
//     OR
//if(bit);
//count++;
//n=n>>1;

count=count+bit;
n=n>>1;

    }
    cout<<count;

    
}








    


