#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char ch  ;
    cout <<"Enter char to check if vowel or not : " ;
    cin >>ch  ;
    switch(ch)
    {
        case 'a' :
        case 'e' :
        case 'o' :
        case 'i' :
        case 'u' :
        case 'A' :
        case 'E' :
        case 'O' :
        case 'I' :
        case 'U' :cout<<ch<<" is a vowel" <<endl ; break ;
        default  :cout<<ch<<" Not Vowel" <<endl ;break ;
    }
    return 0;
}
