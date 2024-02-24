#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float num1 ,num2 ;
    cout <<"Enter num 1 : " ;
    cin >>num1  ;
    cout <<"Enter num 2 : " ;
    cin >>num2  ;
    cout << fixed << setprecision(2)<<endl;
    cout << float(num1*num2) ;
    return 0;
}
