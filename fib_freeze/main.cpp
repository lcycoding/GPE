#include <iostream>
#include <cstdio>

using namespace std;

int fibs[5001][500] = {0};


void run_in_advance(){
    fibs[1][0] = 1;
    for(int i = 2 ; i <= 5000 ; i++)
    {
        for(int j = 0 ; j < 500 ; j++)
        {
            fibs[i][j] += fibs[i-1][j] + fibs[i-2][j];

            if(fibs[i][j] > 1000)
            {
             fibs[i][j] -= 1000;
             fibs[i][j+1]++;
            }
        }
    }
}


int main()
{
    int n = 0;
    run_in_advance();
    while( cin >> n ){
        cout<<"The Fibonacci number for "<<n<<" is ";

        if(!n) cout<<"0"<<endl;
        else{
            int i = 500;
            while(fibs[n][--i] == 0);
            cout<<fibs[n][i--];
            for(; i >= 0 ; i--) printf("%.3d",fibs[n][i]);
            cout<<endl;
        }


    }
    return 0;
}
