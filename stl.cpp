#include<iostream>
#include<array>
#include<vector>
#include<stack>

using namespace std;
int main(){
    // int a[4]={23,4,5,6};
    // array<int,4>a={1,2,4,5};
    // cout<<"numbr eis"<<a.at(2);
    // cout<<"numbr eis"<<a.empty();

    // cout<<"numbr eis"<<a.front();
    // cout<<"numbr eis"<<a.back();


// ------------------------vector-------------------------------------------------

// vector<int> v;
// cout<<"size"<<v.capacity()<<endl;
// v.push_back(3);
// v.push_back(1);
// v.push_back(2);

// cout<<"capacity"<<v.capacity()<<endl;   // kitna space pda hai  ,double kr leta hai space ko after each elemnt we push 
// cout<<"size"<<v.size()<<endl;         // v.size show how much space occupied
// cout<<"numbr eis"<<v.at(0);
// cout<<"before pop"<<endl;
// for(int i:v){
//     cout<<i<<" ";
// }
// v.pop_back();
// cout<<"after pop"<<endl;
// for(int i:v){
//     cout<<i<<" ";
// }

// ------------------------------satck----------------------------------------------
cout<<"stack"<<endl;
stack<int> s;
s.push(2);
s.push(1);
s.push(3);
cout<<"top"<<s.top();
cout<<"poop"<<endl;
s.pop();
cout<<"top"<<s.top();


}

