#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool comp(string s1 , string s2){
    string x = s1+s2;
    string y = s2+s1;
    return x > y;
}

int main()
{
    int n;

    while(cin >> n){
        if(n == 0)
            break;

        vector<string> Nums;

        for(int i = 0 ; i < n ; i++)
        {
           string S;
           cin>>S;
           Nums.push_back(S);
        }
        sort(Nums.begin(), Nums.end() , comp);
        for(int i = 0 ; i < n ; i++)
            cout<<Nums.at(i);
        cout<<endl;
    }


    return 0;
}
