def SieveOfEratosthenes(m):
    primes = []
    n = 1000005
    prime = [True for i in range(n + 1)]
    p = 2
    while (p * p <= n):
        # If prime[p] is not changed,
        # then it is a prime
        if (prime[p] == True):
            # Update all multiples of p
            for i in range(p * p, n + 1, p):
                prime[i] = False       
        p += 1
    # Print all prime numbers
    for p in range(2, n + 1):
        if prime[p]:
            primes.append(p)
    return primes[m]

if __name__ == '__main__':
    
    n = 10001
    print(n, "th prime number is", SieveOfEratosthenes(n-1));
