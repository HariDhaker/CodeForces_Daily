#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin>>n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        int parity = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            parity += arr[i];
            int rem = abs(sum - parity);

            if ((rem % 2) && (parity % 2))
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}