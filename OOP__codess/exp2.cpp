#include<iostream>
#include<string.h>
using namespace std ;

class student
{
    public :
    static int count ;
    int rollNo,classNo,telephoneNo ;
    string name,bloodGroup,dateOfBirth ;
    char division ;

        student()
        {
            cout << "Default constructor called \n" ;
            name = "abc" ;
            rollNo = 1 ;
            classNo = 10 ;
            division = 'A' ;
            dateOfBirth = "07-05-12" ;
            bloodGroup = "B+ve" ;
            telephoneNo = 1122334455 ;
            cout << endl ;
        }

        static void show() ;

        student(string name,int rollNo,int classNo,char division,string dateOfBirth,string bloodGroup,int telephoneNo)
        {
            cout << "parameterised constructor called \n" << endl ;
            this -> name = name ;
            this -> rollNo = rollNo ;
            this -> classNo = classNo ;
            this -> division = division ;
            this -> dateOfBirth = dateOfBirth ;
            this -> bloodGroup = bloodGroup ;
            this -> telephoneNo = telephoneNo ;
        }

        student(student &s)
        {
            cout << "Copy constructor called \n" ;
            name = s.name ;
            rollNo = s.rollNo ;
            classNo = s.classNo ;
            division = s.division ;
            dateOfBirth = s.dateOfBirth ;
            bloodGroup = s.bloodGroup ;
            telephoneNo = s.telephoneNo ;
            cout << endl ;
        }

        void display()
        {
            cout << "The name of student is : " <<  name << endl ;
            cout << "The roll no of student is : " <<  rollNo << endl ;
            cout << "The class no of student is : " <<  classNo << endl ;
            cout << "The division of student is : " <<  division << endl ;
            cout << "The date of birth of student is : " <<  dateOfBirth << endl ;
            cout << "The blood group of student is : " <<  bloodGroup << endl ;
            cout << "The telephone no of student is : " <<  telephoneNo << endl ;
            cout << endl ;
        }

      
        ~student()
        {
            cout << "Destructor called \n" ;
        }
        friend class database ;
};

int student :: count = 0 ;

void student :: show()
{
    count ++ ;
    cout << "The count students is : " << count << endl ;
}

class database
{
    int drivingLicenseNo ;
    string contactAddress ;
    student *s ;
    int n ;
    public :
        database()
        {
            drivingLicenseNo = 99 ;
            contactAddress = "Nashik" ;
        }  

        void get(student *s)
        {
            cout << "Enter name of student :\n" ;
            cin >> s-> name ;
            cout << "Enter roll no of student :\n" ;
            cin >> s-> rollNo ;
            cout << "Enter class no of student :\n" ;
            cin >> s-> classNo ;
            cout << "Enter division of student :\n" ;
            cin >> s-> division ;
            cout << "Enter date of birth of student :\n" ;
            cin >> s-> dateOfBirth ;
            cout << "Enter blood group of student :\n" ;
            cin >>  s-> bloodGroup ;
            cout << "Enter contact adress of student :\n" ;
            cin >> contactAddress ;
            cout << "Enter telephone no of student :\n" ;
            cin >>  s-> telephoneNo ;
            cout << "Enter driving license no of student :\n" ;
            cin >>  drivingLicenseNo ;
            cout << endl ;
        }

        inline void display(student *s)
        {
            cout << "The name of student is : " <<  s-> name << endl ;
            cout << "The roll no of student is : " <<  s-> rollNo << endl ;
            cout << "The class no of student is : " <<  s-> classNo << endl ;
            cout << "The division of student is : " <<  s-> division << endl ;
            cout << "The date of birth of student is : " <<  s-> dateOfBirth << endl ;
            cout << "The blood group of student is : " <<  s-> bloodGroup << endl ;
            cout << "The contact adress of student is : " <<  contactAddress << endl ;
            cout << "The telephone no of student is : " <<  s-> telephoneNo << endl ;
            cout << "The driving license no of student is : " << drivingLicenseNo << endl ;
            cout << endl ;
        }

    friend class student ;
};


int main()
{
    {
        student s ;
        s.display() ;
        s.show() ;
        student s1("Aadesh",2,3,'B',"09-09-2003","AB+ve",98765) ;
        s1.display() ;
        s.show() ;
        student s2(s1) ;
        s2.display() ;
        s2.show() ;
    }

    int ch,n = 0 ;
    student *st[10] ;
    database *d[10] ;

    while(1)
    {
        cout << "Enter 1 to insert data \nEnter 2 to display data \nEnter 3 exit \n" ;
        cin >> ch ;
        switch(ch)
        {
            case 1 :
            {
                st[n] = new student ;
                d[n] = new database ;
                d[n] -> get(st[n]) ;
                n ++ ;
                break ;
            }
            case 2:
            {
                for(int i = 0;i < n;i++)
                {
                    d[i] -> display(st[i]) ;
                }
                break ;
            }
            case 3:
            {
                exit(0) ;
            }
        }
    }
    return 0 ;
}