// # include<iostream>
// using namespace std;
// int selection(int a[],int n){
//     int min;
// for(int i=0;i<n-1;i++){
//      min=i;
// for(int j=i+1;j<n;j++){
//        if(a[j]<a[min]){
//        min=j;
//        }
// }
// if(min!=i)
//    swap(a[min],a[i]);
// }
//     }
//     int print(int a[],int n){
//         for(int i=0;i<n;i++){
//             cout<<a[i]<<" ";
//             cout<<endl;
//         }
//     }
// int main(){
//     int a[4]={67,32,11,1};
//     cout<<selection(a,4);
//     cout<<print(a,4);
// }

# include<iostream>
using namespace std;
int max_number(int a[],int n){
int max=INT16_MIN;
int second_max=INT16_MIN;
for(int i=0;i<n;i++){
if(a[i]>max){
    second_max=max;
max=a[i];
}
else{
    if(a[i]>second_max && a[i]<max){
        second_max=a[i];
    }
}
}
// return second_max;
return max;
}

int main(){
int a[4]={67,32,11,1};
cout<<"max vlaue is"<<max_number(a,4)<<endl;

}