#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long int m = -1;
    long long int n = 1;
    long long int maxNb = 1e6;

    int cpt = 1;
    vector<long long int> cpts;
    cpts.resize(maxNb, -1);
    cpts[0] = 1;
    for (long long int i = 2; i < maxNb; ++i)
    {
        int cpti = 0;
        m = i;
        while (m != 1)
        {
            ++cpti;
            if (m % 2 == 0 && m / 2 < i)
            {
                cpti += cpts[m / 2 - 1];
                break;
            }

            // m >= i && m / 2 >= i
            if (m%2 == 0)
            {
                m = m / 2;
            }
            // m >= i && m odd
            else
            {
                m = 3 * m + 1;
            }
        }
        cpts[i - 1] = cpti;
        if (cpti > cpt)
        {
            cpt = cpti;
            n = i;
        }
    }


    cout << "the longest chain has been found for the number " << n << " under " << maxNb << "." << endl;
    cout << "this chain is " << cpt << " long." << endl;
    return 0;
}
