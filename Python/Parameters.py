# Positional Argument   /   Keyword Argument
def Add1(No1,No2):
    print("Value of No1 : ",No1)
    print("Value of No2 : ",No2)
    return  No1 + No2

def Sub1(No1,No2):
    print("Value of No1 : ",No1)
    print("Value of No2 : ",No2)
    return  No1 - No2



def main():
    Ans = 0
    Ans = Add1(10,11)
    print("Addition is : ",Ans)

    Ans = Sub1(No2= 10, No1= 11)        # No2 No1 yachyat keyword aahe
    print("Subtraction is : ",Ans)

    Ans = Sub1(No1= 10, No2= 11)
    print("Subtraction is : ",Ans)


if __name__ == "__main__":
    main()