#include <iostream>
using namespace std;
bool isPow2 (int n)
{
    return (n&&(n&(n-1))==0); 
}

int main()
{
    int n ; 
    cout << " Enter the number "<<endl ;
    cin >> n;
	cout << ("%s", isPow2(n)? "The number is a power of two ":"The number is not a power of two");

    
}