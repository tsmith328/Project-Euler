# Project Euler Problem 6
# Tyler M Smith
# tsmith328@gatech.edu

def main():
    squares = [x**2 for x in range(1, 101)]
    nums = [x for x in range(1,101)]
    sum_sq = sum(squares)
    sq_sum = (sum(nums))**2
    print("The difference between the sum of squares and square of sums is " + str(abs(sum_sq-sq_sum)))

if __name__ == "__main__":
    main()