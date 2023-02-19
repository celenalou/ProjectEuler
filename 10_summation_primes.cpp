#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

typedef long long int INT;

INT SieveOfEratosthenes(int n)
{
    INT sum = 0;
    vector<bool> prime(n + 1, true);

    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
            sum += p;

    return sum;
}

int main()
{
    int n = 2e6;

    INT sum = SieveOfEratosthenes(n);
    cout << "The sum of the prime numbers below " << n << " is " << sum << "." << endl;

    return 0;
}
