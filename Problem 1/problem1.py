# Project Euler Problem 1
# Tyler M Smith
# tsmith328@gatech.edu


def main():
    multiples = []
    for i in range(1000):
        if mult3(i) or mult5(i):
            multiples.append(i)
    print("The sum of all multiples of 3 and 5 below 1000 is:")
    print(sum(multiples))


def mult3(i):
    return mult(3,i)

def mult5(i):
    return mult(5,i)

def mult(k, i):
    return i % k == 0

if __name__ == '__main__':
    main()