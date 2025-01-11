// #include<iostream>
// using namespace std;
// int main (){
// int  i=0,j=0;
// int a[5]={2,3,45,6,3};
// int a2[4]={1,5,9,5};

// while(i<5&&j<4){
//         if(a[i]==a2[j]){
//             cout<<a[i]<<" ";
//             i++;
//             j++;
//         }
//         else if(a[i]>a2[j]){
//             j++;
//         }
//         else{
//             i++;
//         }
//     }

// return 0;

// }
#include <iostream>
using namespace std;
int main()
{
    int i = 0, j = 0;
    int a[5] = {2, 3, 45, 6, 3};
    int a2[4] = {2, 5, 6, 5};
    while (i < 5 && j < 4)
    {
        if (a[i] == a2[j]){
            cout << a[i];
        i++;
        j++;
    }
    else if (a[i] > a[j])
    {
        j++;
    }
    else
    {
        i++;
    }
}
return 0;
}
