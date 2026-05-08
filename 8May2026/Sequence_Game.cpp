#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        vector<int> givenSeq(n);
        for (int i = 0; i < n; i++)
        {
            cin >> givenSeq[i];
        }

        vector<int> gussedSeq;
        gussedSeq.push_back(givenSeq[0]);

        for (int i = 1; i < n; i++)
        {
            if (givenSeq[i] >= givenSeq[i - 1])
            {
                gussedSeq.push_back(givenSeq[i]);
            }
            else
            {
                gussedSeq.push_back(givenSeq[i]);
                gussedSeq.push_back(givenSeq[i]);
            }
        }

        cout << gussedSeq.size();
        for (int x : gussedSeq)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}