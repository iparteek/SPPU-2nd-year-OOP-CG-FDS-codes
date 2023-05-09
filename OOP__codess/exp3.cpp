#include<iostream>
using namespace std ;

class publication
{
    string title ;
    float price ;
        public :
            void get()
            {
                cout << "Enter title of book / audio cassette : " ;
                cin >> title ;
                cout << "Enter price of book / audio cassette : " ;
                cin >> price ;
            }

            void display()
            {
                cout << "Title of book / audio cassette is : " << title << endl ;
                cout << "Price of book / audio cassette is : " << price << endl ;
            }
};

class book : public publication 
{
    int pagecount ;
    public :
        void get()
        {
            publication :: get() ;
            cout << "Enter pagecount of book / audio cassette : " ;
            cin >> pagecount ;
        }

        void display()
        {
            publication :: display() ;
            try
            {
                if(pagecount <= 0)
                {
                    throw(99) ;
                }
            }
            catch(int)
            {
                pagecount = 0 ;
                cout << "Wrong pages \n" ;
            }
            cout << "Pagecount of book / audio cassette is : " << pagecount << endl ;
        }
};

class tape : public publication
{
    float playingTime ;
    public :
        void get()
        {
            publication :: get() ;
            cout << "Enter playing time of book / audio cassette : " ;
            cin >> playingTime ;
        }
        void display()
        {
            publication :: display() ;
            try
            {
                if(playingTime <= 0)
                {
                    throw(99.99) ;
                }
            }
            catch(float)
            {
                playingTime = 0.00 ;
                cout << "Wrong time \n" ;
            }
            cout << "Playing time of book / audio cassette is : " << playingTime << endl ;
        }
};

int main()
{
    book b[10] ;
    tape t[10] ;
    int bookcount = 0 ;
    int tapecount = 0 ;
    int choice ;
    while(1)
    {
        cout << "Enter 1 to add book \nEnter 2 to display book \nEnter 3 to add tape \nEnter 4 to display tape \nEnter 5 to exit \n" ;
        cin >> choice ;
        switch(choice)
        {
            case 1:
            {
                b[bookcount].get() ;
                bookcount ++ ;
                break ;
            }
            case 2:
            {
                for(int i = 0;i < bookcount;i++)
                {
                    b[i].display() ;
                }
                cout << endl ;
                break ;
            }
            case 3:
            {
                t[tapecount].get() ;
                tapecount ++;
                break ;
            }
            case 4:
            {
                for(int i = 0;i < tapecount;i++)
                {
                    t[i].display() ;
                }
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