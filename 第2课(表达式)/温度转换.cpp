#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    double f ;
    int c ;
    cin >> c ;
    f = 9 / 5.0 * c + 32 ;
    cout << setprecision(2) << fixed <<f ;
    return 0;
}
