#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a , b , c ;
    cout <<"enter value of a : " ;
    cin >> a ;
    cout <<"enter value of b : " ;
    cin >> b ;
    cout <<"enter value of c : " ;
    cin >> c ;

    if((a==0)&&(b==0))
        cout<<"no solution"<<endl ;
    else if((a==0))
        cout <<"One Root = "<<(-c/b) ;
    else if ((pow(b,2)-4*a*c)<0)
        cout <<"NO Root" <<endl ;
    else
    {
        cout <<"Two Roots " <<endl ;
        cout <<"First Root = "<<(-b+sqrt((pow(b,2)-4*a*c)))/(2*a)<<endl ;
        cout <<"Second Root = "<<(-b-sqrt((pow(b,2)-4*a*c)))/(2*a)<<endl ;
    }
    return 0;
}
