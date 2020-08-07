#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int r , h , ans ;
    double t ;
    cin >> h >> r ;
    t = 3.14159 * r * r * h ;
    ans = 20 * 1000 / t+1 ;
    cout << ans ;
    return 0;
}
