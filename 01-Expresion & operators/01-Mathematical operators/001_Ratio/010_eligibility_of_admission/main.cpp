#include <iostream>

using namespace std;

int main()
{
    float Maths , Phy , Chem ;
    cout <<"Enter Maths Degree = " ;
    cin >> Maths ;
    cout <<"Enter Phy Degree = " ;
    cin >> Phy ;
    cout <<"Enter Chem Degree = " ;
    cin >> Chem ;
    if(Maths+Phy+Chem >=180|| \
      (Maths+Phy >=140) || \
      (Maths+Chem >=140) )
    cout << "ths candidate is eligible for admission" ;
    else
    cout << "ths candidate is not eligible for admission" ;

    return 0;
}
