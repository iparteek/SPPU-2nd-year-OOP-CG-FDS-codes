#include<iostream>
#include<map>
using namespace std ;

int main()
{
    typedef map <string,int> mapType ;
    mapType populationMap ;
    populationMap.insert(pair < string,int > ("Maharashra",7026257)) ;
    populationMap.insert(pair < string,int > ("Punjab",112233)) ;
    populationMap.insert(pair < string,int > ("Himachal pradesh",223344)) ;
    populationMap.insert(pair < string,int > ("Uttarakhand",334455)) ;
    populationMap.insert(pair < string,int > ("Gujrat",445566)) ;
    populationMap.insert(pair < string,int > ("Uttar pradesh",556677)) ;
    populationMap.insert(pair < string,int > ("Bihar",667788)) ;
    populationMap.insert(pair < string,int > ("West bengal",778899)) ;
    populationMap.insert(pair < string,int > ("Karnataka",889900)) ;
    populationMap.insert(pair < string,int > ("Rajasthan",112453)) ;

    mapType::iterator iter ;
    cout << "**********  Population of states in India  **********\n" ;
    cout << " size of population " << populationMap.size() << "\n" ;
    string stateName ;
    cout << "Enter name of state : " ;
    cin >> stateName ;
    iter = populationMap.find(stateName) ;
    if(iter != populationMap.end())
        cout << stateName << "'s population is " << iter -> second ;
    else
        cout << "key is not population map \n" ;
        populationMap.clear() ;
}
