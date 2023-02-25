<<<<<<< HEAD
def isPalindrom(n):
    resu = True
    strProd = str(n)
    for i in range(len(strProd)//2):
        if (strProd[i] != strProd [-i-1]):
            resu = False
            break
    return resu

if __name__ == '__main__':
    prod = 0
    maxi = 0
    imax = 0
    jmax = 0
    for i in range(100, 999):
        for j in range(100, 999):
            prod = i * j
            if (prod > maxi):
                if (isPalindrom(prod)):
                    maxi = prod
                    imax = i
                    jmax = j
    print(imax, "x", jmax, "=", maxi)
=======
def isPalindrom(n):
    resu = True
    strProd = str(n)
    for i in range(len(strProd)//2):
        if (strProd[i] != strProd [-i-1]):
            resu = False
            break
    return resu

if __name__ == '__main__':
    prod = 0
    maxi = 0
    imax = 0
    jmax = 0
    for i in range(100, 999):
        for j in range(100, 999):
            prod = i * j
            if (prod > maxi):
                if (isPalindrom(prod)):
                    maxi = prod
                    imax = i
                    jmax = j
    print(imax, "x", jmax, "=", maxi)
>>>>>>> 6ec343c5e938f1246dd8e84cbc249aa0c361025b
