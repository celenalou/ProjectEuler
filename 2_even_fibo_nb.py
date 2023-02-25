<<<<<<< HEAD
if __name__ == '__main__':
    sum = 0
    fibo1 = 1
    fibo2 = 2
    lim = 4e6
    while (fibo1 <= lim and fibo2 <= lim):
        if (fibo1%2 == 0):
            sum += fibo1
        tmp = fibo2
        fibo2 = fibo1 + fibo2
        fibo1 = tmp

    if (fibo1%2 == 0):
        sum += fibo1
    print(sum)
=======
if __name__ == '__main__':
    sum = 0
    fibo1 = 1
    fibo2 = 2
    lim = 4e6
    while (fibo1 <= lim and fibo2 <= lim):
        if (fibo1%2 == 0):
            sum += fibo1
        tmp = fibo2
        fibo2 = fibo1 + fibo2
        fibo1 = tmp

    if (fibo1%2 == 0):
        sum += fibo1
    print(sum)
>>>>>>> 6ec343c5e938f1246dd8e84cbc249aa0c361025b
