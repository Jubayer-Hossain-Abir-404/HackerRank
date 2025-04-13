def checkPalindrome(number):
    reverse = 0
    while (number != 0):
        reverse *= 10
        reverse += (number % 10)
        number = int(number / 10)
    return reverse;

if __name__ == '__main__':
    number = int(input('Enter a number to check if it is a palidrome or not '))
    result = checkPalindrome(number)
    if (number == result):
        outcome = str(number) + ' is a palindrome number'
    else: 
        outcome = str(number) + ' is not a palindrome number'
    
    print (outcome)