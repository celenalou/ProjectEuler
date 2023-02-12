import math

if __name__ == '__main__':
    largest = 1
    n = 600851475143 
    while (n%2 == 0):
        n = n/2
    for i in range(3, int(math.sqrt(n))+1, 2):
        while (n%i == 0):
            largest = i
            n = n/i
    print(largest)
