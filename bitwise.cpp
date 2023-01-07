#include <iostream>
using namespace std;

int bitwise(int n)
{
    int res = 0;
    while (n > 0)
    {
        res++;

        n = n >> 1;
    }
    return res;
}
int main()
{
    int n;
    cout << "Enter the number " << endl;
    cin >> n;
    cout << bitwise(n) << endl ;
    cout << (1<<16) ;
}