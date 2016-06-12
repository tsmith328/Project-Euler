# Project Euler Problem 4
# Tyler M Smith
# tsmith328@gatech.edu

def main():
    biggest = 0
    for i in range(999, 99, -1):
        for j in range(999, 99, -1):
            num = i * j
            numstr = str(num)
            if isPalindrome(numstr):
                if num > biggest:
                    biggest = num
    print(str(biggest) + " is the largest palindromic product of two three-digit numbers.")

def isPalindrome(s):
    i = 0
    j = len(s) - 1
    while i < j:
        if s[i] != s[j]:
            return False
        i += 1
        j -= 1
    return True

if __name__ == "__main__":
    main()