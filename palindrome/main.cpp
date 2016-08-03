#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

bool isPal(string k){
    int len = k.length();

    bool isPl = true;

    for(int i = 0 ; i < len/2 ; i++)
    {
        if(k[i] != k[len-i-1])
            isPl = false;
    }

    return isPl;
}

string RevAdd(string k){
    int temp1,temp2;
    stringstream ss(k);
    ss>>temp1;
    reverse(k.begin(),k.end());
    stringstream ss2(k);
    ss2>>temp2;

    ss.str("");
    ss.clear();

    ss << temp1+temp2;
    ss >> k;

    return k;
}



int main()
{
    int n = 0;
    cin >> n ;

    for( int i = 0 ; i < n ; i++){
        string tmp;
        cin >> tmp;
        int cnt = 0;
        while(!isPal(tmp)){
            tmp = RevAdd(tmp);
            cnt++;
        }

        cout<<cnt<<" "<<tmp<<endl;
    }

    return 0;
}
