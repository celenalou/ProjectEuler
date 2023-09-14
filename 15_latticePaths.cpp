#include <iostream>
#include <vector>
#include <gmpxx.h>

using namespace std;
typedef mpz_class INT;

INT factorial(int n)
{
    if (n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int n = 20;
    INT test = factorial(2*n);
    INT test2 = 2*factorial(n);
    INT binomialCoeff = test / test2;
    cout << "the lattice paths is " << test << "/" << test2 << " = " << binomialCoeff << " long" << endl;
    return 0;
}
