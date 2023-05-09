#include<iostream>
using namespace std ;

class complex
{
    float real ;
    float imag ;
    public:
        complex()
        {
            real = 0 ;
            imag = 0 ;
        }

        complex operator +(complex c2)
        {
            complex c3 ;
            c3.real = real + c2.real ;
            c3.imag = imag + c2.imag ;
            return c3 ;
        }

        complex operator *(complex c2)
        {
            complex c3;
            c3.real = ((real * c2.real) - (imag * c2.imag)) ;
            c3.imag = ((real * c2.imag) + (imag * c2.real)) ;
            return c3 ;
        }

        friend istream & operator >>(istream &input,complex &c)
        {
            cout << "Enter real part :\n" ;
            input >> c.real ;
            cout << "Enter imagnary part :\n" ;
            input >> c.imag ;
            return input ;
        }

        friend ostream & operator <<(ostream &output,complex &c)
        {
            output << c.real << "+i" << c.imag ;
            return output ;
        }
};

int main()
{
    complex c1,c2,c3 ;
    int ch ;
    while(1)
    {
        cout << "Enter 1 insert complex number \nEnter 2 to display complex number \nEnter 3 to perform addition \nEnter 4 perform multiplication \nEnter 5 to exit \n" ;
        cin >> ch ;
        switch(ch)
        {
            case 1:
            {
                cout << "Enter a complex number :" << endl ;
                cin >> c1 ;
                cout << "Enter another complex number :" << endl ;
                cin >> c2 ;
                cout << endl ;
                break ;
            }
            case 2:
            {
                cout << "The first complex number is :" ;
                cout << c1 << endl ;
                cout << "The second complex number is :" ;
                cout << c2 << endl ;
                cout << endl ;
                break ;
            }
            case 3:
            {
                c3 = c1 + c2 ;
                cout << "The addiion of " << c1 << " and " << c2 << " is " << c3 << endl ;
                cout << endl ;
                break ;
            }
            case 4:
            {
                c3 = c1 * c2 ;
                cout << "The multiplication of " << c1 << " and " << c2 << " is " << c3 << endl ;
                cout << endl ;
                break ;
            }
            case 5:
            {
                exit(0) ;
            }
        }
    }
    return 0 ;
}



