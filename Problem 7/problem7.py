# Project Euler
# Tyler M Smith
# tsmith328@gatech.edu

def main():
    count = 0;
    i = 1;
    lastPrime = 0;
    while count < 10001:
        if isPrime(i):
            count += 1
            lastPrime = i
        i += 1
    
    print("The 10,001st prime is " + str(lastPrime))


def isPrime(i):
    if i <= 1:
        return False
    if i == 2:
        return True
    for j in range(2, int(i**(0.5))+2):
        if i % j == 0:
            return False
    return True

if __name__ == "__main__":
    main()
