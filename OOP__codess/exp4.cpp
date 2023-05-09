#include<iostream> 
#include<fstream>
using namespace std;
class student
{
    private:
        string name; 
        int rno;
    public:
        void getdata()
        {
            fstream fs;
            fs.open("test.txt",ios::app); 
            if(!fs)
            {
                cout<<"\nfile creation failed";
            }
            else
            {
                cout<<"\nenter name: "; 
                cin>>name;
                cout<<"\nenter roll number: "; 
                cin>>rno;
                fs<<"\n";
                fs<<name<<" "; //write name to file 
                fs<<rno<<"\n"; //write rno to file
                fs.close();
            }
        }
        void display()
        {
            fstream fs;
            fs.open("test.txt",ios::in); 
            if(!fs)
            { //checking whether file exists or not
                cout<<"\nno such file exists";
            }
            else
            {
                while(!fs.eof())// read till end of the file
                {
                    fs>>name; // Reading name from file 
                    fs>>rno; // Reading rollno from file 
                    if(!fs.eof()) // checking whether reached eof
                    {
                        cout<<name<< " "; 
                        cout<<rno;
                        cout<<"\n"; // Message display on screen
                    }// end of if
                } // end of while
            fs.close();
            }
        }
};
int main()
{
    int ch; 
    student s;
    //fstream fs;
    do
    {
        cout<<"\n1-add info\n2-display info\n3-exit"; 
        cout<<"\nenter choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                s.getdata(); 
                break;
            case 2:
                s.display(); 
                break;
            case 3:
                cout<<"\nexiting.."; 
                break;
            default:
                cout<<"\ninvalid choice"; 
                break;
        }
    }
    while(ch!=3); 
    return 0;
}
