#include <iostream>

using namespace std;
void swap(int* , int*) ;
int main()
{
    int num1 ,num2 ;
    cout <<"Enter num 1 : " ;
    cin >>num1  ;
    cout <<"Enter num 2 : " ;
    cin >>num2  ;
    swap(&num1,&num2) ;
    cout << "First number = "<<num1 <<endl;
    cout << "Second number = "<<num2
     <<endl;

    return 0;
}
void swap(int* num1 , int* num2 )
{
    int temp ;
    temp = *num1 ;
    *num1 = *num2 ;
    *num2 = temp ;
}
