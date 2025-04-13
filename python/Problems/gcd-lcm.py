def GCD(number1, number2):
    leastNumber = 0
    if (number1 < number2):
        leastNumber = number1
    else:
        leastNumber = number2

    gcd = number1
    for i in range(2, int((leastNumber/2)+1)):
        if (number1 % i == 0 and number2 % i ==0):
           gcd = i 
    return gcd;

if __name__ == '__main__':
    number1, number2 = map(int, input('Enter two integer number ').split())
    gcd = GCD(number1, number2)
    print (gcd)
    print (int((number1 * number2) / gcd))