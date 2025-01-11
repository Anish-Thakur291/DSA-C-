# include<iostream>
using namespace std;
int painter_possibel(int a[],int n,int p,int mid){
int painter=1;
int area_alloted=0;
for(int i=0;i<n;i++){
    if(area_alloted+a[i]<=mid){
        area_alloted +=a[i];
    }
    else{
        painter++;
        if(a[i]>mid || painter>p){
            return false;
        }
        painter=a[i];
    }
}
return true;
}
int painter_partion(int a[],int n,int p){
int s=0;
int sum=0;
for(int i=0;i<n;i++){
   sum +=a[i];
}
int e=sum;
int ans=-1;
int mid=s+(e-s)/2;
while(s<=e){
    if(painter_possibel(a,n,p,mid)){
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
int main(){
    int p=2;
int a[5]={5,5,5,5,5};
int ans =painter_partion(a,5,p);
cout<<"alloted space is :"<<ans;
}
  