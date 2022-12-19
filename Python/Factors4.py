#   Assignment on Factors

def DisplayFactors(no):
    print("Factors are : ")
    i = 1
    while (i < int(no / 2) + 1):
        if (no % i == 0):
            print(i)
        i = i + 1

def main():
    print("Enter Number : ")
    no = int(input())

    DisplayFactors(no)

if __name__ == "__main__":
    main()