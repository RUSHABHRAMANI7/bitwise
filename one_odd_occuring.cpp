#include <iostream>
#include <vector>
using namespace std;

int odd_ocurring(vector<int> &v)
{

    int res = 0;

    for (int i = 0; i < v.size(); i++)
    {
        res ^= v[i];
    }
    return res;
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
    cout <<"Therefore the odd occuring element is : " << odd_ocurring(v);

    return 0;
}