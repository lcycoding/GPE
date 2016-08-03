#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a[50];

    cin>>a[0];
    cin>>a[1];

    for (int i = 0 ; i < 2 ; i ++ )
        cout << a[i].at(i) <<endl;

    return 0;
}
