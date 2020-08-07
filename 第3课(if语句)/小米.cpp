#include <iostream>
using namespace std;

int main()
{
    int father , mother , me , c ;
    cin >> father >> mother >> me ;
    if ( me == 1 )
    {
        c = ( father + mother + 13 ) / 2 ;
    }
    else 
    {
        c = ( father + mother - 13 ) / 2 ;
    }

    cout << c ;
    return 0;
}
