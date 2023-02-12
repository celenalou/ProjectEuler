import math

def PythagoreanTriplet1000():
    for i in range(0, 1000):
        for j in range(i, 1000):
            sqc = i*i + j*j
            c = math.sqrt(sqc)
            if (c > j and i + j + c == 1000):
                return (str(i) + "x" + str(j) + "x" + str(int(c)) + "=" + str(int(i*j*c)))

if __name__ == '__main__':
    print(PythagoreanTriplet1000())
