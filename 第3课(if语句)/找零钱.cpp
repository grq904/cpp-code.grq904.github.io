#include <iostream>
using namespace std;

int main()
{
    int t , a ;
    cin >> t >> a ;

    if ( t >= a )
    {
        cout << t - a ;
    }
    else
    {
        cout << "Not Enough!" ;
    }

    return 0;
}