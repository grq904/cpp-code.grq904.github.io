#include <iostream>
using namespace std;

int main()
{
    double m ;
    cin >> m ;
    if ( m >= 90 && m <= 100 )cout << " A " ;
    if ( m >= 80 && m < 90 )cout << " B " ;
    if ( m >= 70 && m < 80 )cout << " C " ;
    if ( m >= 60 && m < 70 )cout << " D " ;
    if ( m < 60 )cout << " E " ;
    return 0;
}
