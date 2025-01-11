// # include<iostream>
// # include<vector>
// using namespace std;
// vector<int> reverse(vector<int> v){
//     int s=0,e=v.size()-1;
//     while(s<=e){
//         swap(v[s],v[e]);
//         s++;
//         e--;
//     }
//     return v ;
// }
// void print(vector<int> v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }

// }

// int main (){
//     vector<int> v;
//     v.push_back(11);
//     v.push_back(7);
//     v.push_back(3);
//     v.push_back(12);
//     v.push_back(4);
//     vector<int> ans=reverse(v);
//     print(ans);
// }

//----------------------------merge two array---------------------------------
# include<iostream>
# include<vector>
using namespace std;
int merge(int a1[],int n,int a2[],int m,int a3[]){
  int i=0 ,j=0,k=0;
  while(i<n && j<m){
    if(a1[i]<a2[j]){
        a3[k]=a1[i];
        k++;
        i++;
    }
    else{
        a3[k]=a2[j];
        k++;
        j++;
    }
  }
  while(i<n){
    a3[k]=a1[i];
        k++;
        i++;
  }
  while(j<m){
    a3[k]=a2[j];
        k++;
        j++;
  }
}
void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}


int main(){
    int a1[5]={1,3,5,7,9};
    int a2[3]={2,4,6};
    int a3[8]={0};
  merge(a1,5,a2,3,a3);
  print(a3,8);


}