#include <iostream>

using namespace std;


int main()
{

    unsigned long long int dp[55] = {0,1,2};

    for (int i = 3 ; i < 55 ; i++)
        dp[i] = dp[i-1] + dp[i-2];

    int n = 0;
    while(cin >> n)
    {
        if(n == 0)
            break;

        cout<<dp[n]<<endl;


    }
    return 0;
}
