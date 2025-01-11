// // // eg {1,2,0,0,4,3}
// // //output{1,2,3,4,0,0}
# include<iostream>
# include<vector>
using namespace std;
int sort(int a[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(a[j]!=a[i]){
            swap(a[i],a[j]);
            j++;
        }
    }
}
void print (int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
int main(){
    int a[6]={2,1,0,0,2,5};
    sort(a,6);
    print(a,6);
}


