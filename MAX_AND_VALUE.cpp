#include <iostream>
#include <vector>
using namespace std;
int check(vector<int>&arr, int num)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if ((arr[i] & num) == num)
            count++;
    }
    return count;
}
int maxAND(vector<int> &arr)
{

    int ans = 0;
    for (int i = 18; i >= 0; i--)
    {
        int x = ans | (1 << i);
        int c = check(arr, x);

        if (c >= 2)
        {
            ans = x;
        }
    }
    return ans;
}

int main()
{
    vector<int> v;
    int ele;
    int n;
    cout << "Enter the size of the array " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element " << endl;
        cin >> ele;
        v.push_back(ele);
    }
    cout <<maxAND(v) ;
}