# Project Euler Problem 5
# Tyler M Smith
# tsmith328@gatech.edu

def main():
    num = 20
    while True:
        if (divisible(num)):
            print(str(num) + " is divisible by all numbers 1-20.")
            return
        num += 20

def divisible(num):
    for i in range(2,21):
        if num % i != 0:
            return False
    return True

if __name__ == "__main__":
    main()