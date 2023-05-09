#include<iostream>
using namespace std ;

template < class T >
int swap(T &a,T&b)
{
    T temp = a ;
    a = b ;
    b = temp ;
    return a,b ;
}

template < class T >
void getArray(T arr[],int n)
{
    cout << "Size of array is " << n << endl ;
    cout << "Enter elements of the array : " ;
    for(int i = 0;i < n;i++)
    {
        cin >> arr[i] ;
    }
    cout << endl ;
    //return arr ;
}

template < class T >
void displayArray(T arr[], int n)
{
    cout << "The array elements are : " ;
    for(int i = 0;i < n;i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl ;
}


template < class T >
void selectionSort(T arr[] , int n)
{
    int minIndex ;
    for(int i = 0;i < n - 1;i++)
    {
        minIndex = i ;
        for(int j = i + 1;j < n;j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j ;
                
        }
       swap(arr[i],arr[minIndex]) ;
            } 
    }
    cout << "Array sorted by selection sort \n" ;
    //return arr ;

}

int main()
{
    int n1,n2,n3 ;
    cout << "Enter size of integer array : " ;
    cin >> n1 ;
    cout << "Enter size of float array : " ;
    cin >> n2 ;
    int arr1[n1] ;
    float arr2[n2] ;
    int ch1,ch2 ;
    while(1)
    {
        cout << "Enter 1 to work on integer array \nEnter 2 to work on float array \nEnter 3 to exit\n" ;
        cin >> ch1 ;
        switch(ch1)
        {
            case 1:
            {
                char flag = 'y' ;
                cout << "**********  Weclome to integer array  **********\n" ;
                do
                {
                    cout << "Enter 1 to get array \nEnter 2 to display array \nEnter 3 to sort array \nEnter 4 to go back to previous menu \n" ;
                    cin >> ch2 ;
                    switch(ch2)
                    {
                        case 1:
                        {
                            getArray(arr1,n1) ;
                            break ;
                        }
                        case 2:
                        {
                            displayArray(arr1,n1) ;
                            break ;
                        }
                        case 3:
                        {
                            selectionSort(arr1,n1) ;
                            break ;
                        }
                        case 4:
                        {
                            flag = 'n' ;
                        }
                    }
                } while (flag != 'n');
                break ;
            }
            case 2:
            {
                char flag = 'y' ;
                cout << "**********  Weclome to float array  **********\n" ;
                do
                {
                    cout << "Enter 1 to get array \nEnter 2 to display array \nEnter 3 to sort array \nEnter 4 to go back to previous menu \n" ;
                    cin >> ch2 ;
                    switch(ch2)
                    {
                        case 1:
                        {
                            getArray(arr2,n2) ;
                            break ;
                        }
                        case 2:
                        {
                            displayArray(arr2,n2) ;
                            break ;
                        }
                        case 3:
                        {
                            selectionSort(arr2,n2) ;
                            break ;
                        }
                        case 4:
                        {
                            flag = 'n' ;
                            cout<<"invalid choice";
                        }
                    }
                } while (flag != 'n');
                break ;
            }
            
            case 3:
            {
                exit(0) ;
            }
        }
    }
}
