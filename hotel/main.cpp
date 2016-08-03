#include <iostream>

using namespace std;

int main()
{
    long long n1 , n2;
    while ( cin >> n1 >> n2 ){
        long long i = n1, sum = 0;
        while (1){
            sum += i;
            if(sum >= n2){
                cout<<i<<endl;
                break;
            }
            i++;
        }

    }
    return 0;
}
