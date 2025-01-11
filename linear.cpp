#include <iostream>
using namespace std;
bool searchelement(int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int a[6] = {2, 3, 5, 7, 8, 1};
    int key;
    cin >> key;
    bool found = searchelement(a, 6, key);
    if (found)
    {
        cout << "element found" << endl;
    }
    else
    {
        cout << "not found";
    }
}