//eg{1,100,3,99}
//index k=2;
// output after rotate{3,99,1,100}

// for(   )
// temp[(i+k)%nums.size()]=nums[i]
// nums=temp;

//---------------------------check if array is sorted and rotated
# include<iostream>
using namespace std;
int check(int a[],int n){
    int count=0;
    for(int i=1;i<n;i++){
        if(a[i-1]>a[i]){
            count++;
        }
    }
    if(a[n-1]>a[0]){
        count++;
    }
    return count<=1;
}
int main(){
int a[6]={1,2,3,4,5,6};
cout<<"check"<<" "<<check(a,6);
}
