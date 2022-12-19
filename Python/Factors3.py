#   Assignment on Factors

def main():
    print("Enter Number : ")
    no = int(input())

    print("Factors are : ")
    i = 1
    while(i < int(no/2)+1):        #   also    while(i <= int(no/2)):
        if(no % i == 0) :
            print(i)
        i = i + 1

if __name__ == "__main__":
    main()