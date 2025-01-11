#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    // int n, i = 0;
    // float ans = 0;
    // cout << "enter the number";
    // cin >> n;
    // while (n != 0)
    // {
    //     int bit = n & 1;
    //     ans = (bit * pow(10, i)) + ans;
    //     n = n >> 1;
    //     i++;
    // }
    // cout << "answer is" << ans;
    // return 0;

//----------------------------------------------------------------binary to decimal-------------------------------------------------------------
// int n,i=0;
// int ans=0;
// cout<<"enter the number";
// cin>>n;
// while(n!=0){
//     int digit=n%10;
//     ans=(digit*pow(2,i))+ans;
//     n=n/10;
//     i++;
// }
// cout<<"binary to decimal number is :"<<ans;

//-----------------------(normal case) to revese integer (123-321)------------------------------------------------------------------------------
    
    // exception case me RANGE GIVEN HOGI INTEGR KI(POW(2,31))

    // if((ans>INT_MAX/10)||(ans<INT_MIN/10)) THEN RETURN 0;
    
    int n,result=0;
    cout<<"enter the number";
    cin>>n;
    int ans=0;
    while(n!=0){
    int digit=n%10;
    ans= (ans*10)+digit;
    n=n/10;
    result=result+digit;
    }
    cout<<result;

}
