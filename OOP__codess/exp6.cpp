#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;

class Item
{
    public :
        string name ;
        int code ;
        float cost ;
        int quantity = 0 ;
        bool operator ==(const Item &i1)
        {
            if(code == i1.code)
                return 1 ;
            return 0 ;
        }

        bool operator < (const Item &i1)
        {
            if(code < i1.code)
                return 1 ;
            return 0 ;
        }
};
  // vector is container of stl
 // storing itme class data in vector
// o1 is object  
 
vector<Item> o1 ;

// in insert function inserting values in vector item
void insert()
{
    Item i1 ;
    cout << "Enter item name : " ;
    cin >> i1.name ;
    cout << "Enter item code : " ;
    cin >> i1.code ;
    cout << "Enter item cost : " ;
    cin >> i1.cost ;
    cout << "Enter item quantity : " ;
    cin >> i1.quantity ;
    // pushing inserted data in vector using obejct o1
    o1.push_back(i1) ;
}

void print(Item &i1)
{
    cout << "name of item is : " << i1.name  << endl ;
    cout << "code of item is : " << i1.code  << endl ;
    cout << "cost of item is : " << i1.cost  << endl ;
    cout << "quantity of item is : " << i1.quantity  << endl ;
    cout << endl ;
}

void display()
{
    // using for each loop form begining to end and calling print function
    for_each(o1.begin(),o1.end(),print) ;
}

void search()
{
    vector<Item>::iterator p ;
    Item i1 ;
    cout << "Enter item code to search : " ;
    cin >> i1.code ;
    p = find(o1.begin(),o1.end(),i1) ;
    if(p == o1.end())
    {
        cout << "Not found \n" ;
    }
    else
    {
        cout << "Found \n" ;
        cout << "Item name : " << p -> name << endl ;
        cout << "Item code : " << p -> code << endl ;
        cout << "Item cost : " << p -> cost << endl ;
        cout << "Item quantity : " << p -> quantity << endl ;
    }
}

void dlt()
{
    vector<Item>::iterator p ;
    Item i1 ;
    cout << "Enter item code to delete : " ;
    cin >> i1.code ;
    p = find(o1.begin(),o1.end(),i1) ;
    if(p == o1.end())
    {
        cout << "Item not found \n" ;
    }
    else
    {
        o1.erase(p) ;
        cout << "Deleted \n" ;
    }
}

bool compare(const Item &i1 , const Item &i2)
{
    return i1.cost < i2.cost ;
}

int main()
{
    int choice ;
    while(1)
    {
        cout << "Enter 1 to insert \n" ;
        cout << "Enter 2 to display \n" ;
        cout << "Enter 3 to search \n" ;
        cout << "Enter 4 to sort \n" ;
        cout << "Enter 5 to delete \n" ;
        cout << "Enter 6 to exit \n" ;
        cin >> choice ;
        switch(choice)
        {
            case 1:
            {
                insert() ;
                break ;
            }
            case 2:
            {
                display() ;
                break ;
            }
            case 3:
            {
                search() ;
                break ;
            }
            case 4:
            {
                sort(o1.begin(),o1.end(),compare) ;
                cout << "Sorted on cost\n" ;
                break ;
            }
            case 5:
            {
                dlt() ;
                break ;
            }
            case 6:
            {
                exit(0) ;
            }
        }
    }
}