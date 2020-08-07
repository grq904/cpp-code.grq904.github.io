#include <iostream>
using namespace std;

int main()
{
    int a , k , ans ;
    cin >> a >> k ;
    ans = ( a + 1 ) * k % 8 ;
    cout << ans ;
    return 0;
}
