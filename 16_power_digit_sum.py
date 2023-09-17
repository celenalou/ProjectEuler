power = str(2**1000)
add = 0
for digit in power:
    digit_int = int(digit)
    add += digit_int

print("the sum of the digits is ", add)
