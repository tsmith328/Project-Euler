# Project Euler
# Tyler M Smith
# tsmith328@gatech.edu

def main():
    fibs = getFibs(4000000)
    fibs = onlyEven(fibs)
    print("The summ of all Fibonacci numbers less than 4 million is:")
    print(sum(fibs))

def onlyEven(aList):
    newList = [x for x in aList if x % 2 == 0]
    return newList

def getFibs(maxVal):
    a = 1
    b = 2
    retList = []
    retList.append(a)
    retList.append(b)
    newVal = a + b
    while newVal < 4000000:
        retList.append(newVal)
        a = b
        b = newVal
        newVal = a + b
    return retList

if __name__ == "__main__":
    main()