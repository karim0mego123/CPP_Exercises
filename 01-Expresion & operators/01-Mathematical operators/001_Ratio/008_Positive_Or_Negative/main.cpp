#include <iostream>

using namespace std;

int main()
{
    int num1 ;
    cout << "enter number to check pos or neg = " ;
    cin >> num1 ;
    if(num1>0)
        cout<<"Pos number"<<endl ;
    else if(num1<0)
        cout<<"Neg number"<<endl ;
    else
        cout<<"Zero" <<endl ;
    return 0;
}
