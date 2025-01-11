 #include<iostream>
 using namespace std;
 int main (){
  int n;
    cout<<"enter the number";
    cin>>n;
    cout<<"ente the element";
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                cout<<a[j]<<" ";
            }

        }
        

    }
    return 0;
}

