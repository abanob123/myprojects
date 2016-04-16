#include <iostream>

using namespace std;

int main()
{
    int x ,z=0 ;
    cout<<"Please enter your number : " ;
    cin>>x ;
    if (x==1)cout<< "your number you have entered is not prime" ;

    else if (x==2)cout<< "your number you have entered is not prime" ;

    else if (x==0)cout<< "your number you have entered is not prime" ;
    else
    {
        for (int y=2 ; x>y ; y++ )
        {
            if ( x%y==0)


                z=z+1 ;



        }
        {
            if (z==0 ) cout<<"no is prime";
            else cout<< "your number you have entered is not prime" ;
        }
    }
    return 0;
}
