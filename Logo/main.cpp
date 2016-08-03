#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>

using namespace std;

void getPos()
{


}

void getDist()
{

}

int main()
{
    int n = 0;
    double pi = acos(-1);
    double theta = 0.0;
    cin >> n;

    while(n--){

            int cmds = 0;
            cin >> cmds;
            double distx = 0.0, disty = 0.0;
            for(int j = 0 ; j < cmds ; j++ ){
                string k;
                int alt = 0;

                cin >> k >> alt;

                switch(k.at(0))
                {
                case 'l':
                        theta += alt;
                        theta = fmod(theta,360);
                        break;
                case 'f':
                        distx += (alt * cos(theta * pi / 180));
                        disty += (alt * sin(theta * pi / 180));
                        break;
                case 'b':
                        distx -= (alt * cos(theta * pi / 180));
                        disty -= (alt * sin(theta * pi / 180));
                        break;
                case 'r':
                        theta -= alt;
                        theta = fmod(theta,360);
                        break;
                default:
                        break;
                }

            }
            printf("%.0f",sqrt(distx*distx + disty*disty));

    }

    return 0;
}
