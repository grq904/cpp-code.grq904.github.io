#include <iostream>
using namespace std;

int main()
{
    int yy , mm ;
    cin >> yy >> mm ;
    if ( mm == 2 )
    {
        if ( yy % 4 == 0 && yy %100 != 0 | yy % 400 == 0 )
        {
            cout << 29 ;
        }
        else
        {
            cout << 28 ;
        }
        
        
    }
    else 
    {
        if ( mm == 1 | mm == 3 | mm == 5 | mm == 7 | mm == 8 | mm == 10 | mm == 12 )
        {
            cout << 31 ;
        }
        else
        {
            cout << 30 ;
        }
        
    }
    
    return 0;
}
