#include <iostream>
using namespace std;

int main()
{
    int hou , min , sec , tem ;
    cin >> hou >> min >> sec ;
    tem = hou * 3600 + min * 60 + sec ;
    tem = sec ;
    cout << sec ;
    return 0;
}

int main()
{
    int hou , min , sec , tem , a , b ;
    cin >> hou >> min >> sec ;
    a = hou * 3600 ;
    b =  min * 60 ;
    tem = a + b + sec ;
    sec = tem ;
    cout << sec ;
    return 0;
}
