#include <iostream>
#include <vector>

using namespace std;
typedef long int INT;

int NbOfDivisors(INT n)
{
    int nbFactors = 0;
    // if i is a factor of sqrt(n) then i and n/i are both factors. However if sqrt(n) is a factor, that just adds one to the total
    // since sqrt(n) = n/sqrt(n) => the number of factors for n is 2*NbOfDivisors(sqrt(n))-1
    for (int i = 1; i*i <= n; ++i) // computing i*i is faster than computing sqrt(n)
    {
        if (n % i == 0)
        {
            ++nbFactors;
        }
    }
    // cout << "There is " << nbFactors << " for the number " << n << endl;

    return nbFactors*2 - 1;
}

int main()
{
    int n = 500;
    INT j = 1;
    INT i = j;
    while (NbOfDivisors(i) < n)
    {
        ++j;
        i += j;
    }
    cout << i << endl;
}
