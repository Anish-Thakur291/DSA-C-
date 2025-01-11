// #include<iostream>
// using namespace std;
// int count=0;
//     void f(){
//         if(count==4)
//         return;
//         cout<<count;
//         count++;
//         f();

//     }
// int main(){
// f();
// }


//------------f name five times----------------------
// #include<iostream>
// using namespace std;
// void f(int i,int n){
//     if(i>n)
//     return;
//     cout<<" anish \n";
//     f(i+1,n);
// }
//  main(){
//     int n;
//     cout<<"enter the number";
//       cin>>n;
//       f(1,n);
// }
// //-------------------------print number n times--------
// #include<iostream>
// using namespace std;
// void f(int i,int n){
//     if(i>n)
//     return;
//     cout<<i<<" ";
//     f(i+1,n);
// }
//  main(){
//     int n;
//     cout<<"enter the number";
//       cin>>n;
//       f(1,n);
// }

//---------------------print number in revrse order
#include<iostream>
using namespace std;
void f(int i,int n){
    if(i<1)
    return;
    cout<<i;
    f(i-1,n);
}
int main(){
    int n;
  cout<<"enter the number";
      cin>>n;
      f(n,n);
}