#   Assignment on Factors

def main():
    print("Enter Number : ")
    no = int(input())

    print("Factors are : ")
    for i in range(1,no,1):
        if no % i == 0:
            print(i)
        i = i + 1

if __name__ == "__main__":
    main()