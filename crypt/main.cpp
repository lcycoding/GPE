#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;
char tempchar[26]={0};

void quicks(int a[], int ln , int rn){
    if( ln >= rn )
        return ;

    int pivot = a[ln];

    int i = ln + 1;
    int j = rn;

    while(1){

        while(i <= rn)
        {
            if(a[i] > pivot)
                break;

            i++;
        }

        while(j < ln)
        {
            if(a[j] < pivot)
                break;

            j--;

        }

        if (i > j) break;

        int tmp = a[i];
        char ctmp = tempchar[i];
        a[i] = a[j];
        tempchar[i] = tempchar[j];
        a[j] = tmp;
        tempchar[j] = ctmp;

        quicks(a, ln, j-1);
        quicks(a, j+1, rn);
    }


}




int main()
{

    int n = 0;

        (cin >> n).get();
        string S;
        int s[26] = {0};

        for(int i = 0 ; i < 26 ; i++)
            tempchar[i] = i + 65;


        for( int k = 0 ; k < n ; k++) {

            getline(cin,S);

            int len = S.length();

            for ( int i = 0 ; i < ( len - 1 ) ; i++ )
            {
                    if( islower( S.at(i) ) )
                        s[S.at(i)-97]++;
                    if( isupper( S.at(i) ) )
                        s[S.at(i)-65]++;
            }

        }

        quicks(s, 0, 25);

        for(int i = 0 ; i < 26 ; i++)
        {
            if(s[i] == 0)
                break;

            cout<<tempchar[i]<<" "<<s[i]<<endl;
        }



    return 0;
}
