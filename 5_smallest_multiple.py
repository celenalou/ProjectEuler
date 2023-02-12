def lcm(a, b):
    return a * b // gcd(a, b)

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def smallest_multiple(n):
    lcm_of_all = 1
    for i in range(2, n+1):
        lcm_of_all = lcm(lcm_of_all, i)
    return lcm_of_all

if __name__ == '__main__':
    print(smallest_multiple(20))

