def sumSquared(n):
    return n*(n+1)*(2*n+1)/6

def squaredSum(n):
    return (n*(n+1)/2)**2

if __name__ == '__main__':
    print(squaredSum(100)-sumSquared(100))
