#include <iostream>
#include <vector>
using namespace std;

int two_odd_ocurring(vector<int> &v)
{

    int res = 0;
    int res_1 = 0;
    int x = 0;
    for (int i = 0; i < v.size(); i++)
    {
        x ^= v[i];
    }
    int k = x & (~(x - 1));
    for (int i = 0; i < v.size(); i++)
    {
        if ((v[i] & k) != 0)
        {
            res = res ^ v[i];
        }
        else
            res_1 = res_1 ^ v[i];
    }

   cout << "the smaller number occuring odd number of times "<< res<<  endl ;
   cout << "the larger  number occuring odd number of times "<< res_1<< endl ;
    
}
int main()
{
    int n;
    cout << "Enter the number of the elemnts of the array " << endl;
    cin >> n;
    vector<int> v;
    int ele;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element of the array " << endl;
        cin >> ele;
        v.push_back(ele);
    }
two_odd_ocurring (v);

    return 0;
}