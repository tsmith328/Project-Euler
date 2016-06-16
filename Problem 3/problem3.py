# Project Euler
# Tyler M Smith
# tsmith328@gatech.edu

def main():
    factors = getFactors(600851475143)
    primes = onlyPrimes(factors)
    biggest = max(primes)
    print("The largest prime of that big number is:")
    print(biggest)

def onlyPrimes(aList):
    return [x for x in aList if isPrime(x)]

def isPrime(i):
    if i < 2:
        return False
    if i == 2:
        return True
    for j in range(1, int(i**(0.5))+2):
        if j != 1 and i % j == 0: #Divisible by something other than 1 and itself
            return False
    return True

def getFactors(num):
    factors = []
    for i in range(1, int(num**(0.5))+2):
        k = float(num) / i
        if k == int(k): # is integer
            factors.append(i) # i is a factor
            factors.append(int(k)) # so is k
    return factors

if __name__ == "__main__":
    main()