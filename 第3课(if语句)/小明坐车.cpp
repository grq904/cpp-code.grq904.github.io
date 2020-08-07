#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    double km , money;
    cin >> km ;
    if ( km <= 2.5 )
    {
        cout << 10 ;
    }
    else 
    {
        money = ( km -2.5 ) * 2.6 + 10 ;
        cout << fixed << setprecision(0) << money ;
    }
    
    return 0;
}
