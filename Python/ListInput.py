# take elements from user and store it in list

def main():
    Arr = list()                                                    # This is how we can create empty list aani itha internally object pn tayar hoil list class cha
    print("Enter how many elements you want to store")
    size = int(input())

    print("Please enter the elements")

    for i in range(0,size):
         no = int(input())
         Arr.append(no)          # Arr.insert(i,no)

    print(Arr)
   # i = 0
   # while i < size:
   #     no = int(input())
   #     Arr.insert(i,no)
   #     i = i + 1
   # print(Arr)

if __name__ == "__main__":
    main()