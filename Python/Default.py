
def Area(Radius,PI = 3.14):
    Result = PI * Radius * Radius
    return  Result

def main():
    RValue = 10.5
    PIValue = 3.14

    #Positional Argument
    Ans = Area(RValue,PIValue)                  # Ans = Area(10.5,3.14)
    print("Area of Circle is : ",Ans)

    # Keyword Argument
    Ans = Area(PI = PIValue,Radius = RValue)    # Ans = Area(10.5,3.14)
    print("Area of Circle is : ",Ans)

    # Positional Argument and second is default
    Ans = Area(10.5)                            # Ans = Area(10.5)
    print("Area of Circle is : ",Ans)

    # Keyword Argument and second is default
    Ans = Area(Radius = 10.5)                   # Ans = Area(10.5)
    print("Area of Circle is : ",Ans)

    # Keyword Argument
    Ans = Area(PI = 7.10,Radius = 10.5)         # Ans = Area(10.5,7.10)
    print("Area of Circle is : ",Ans)

if __name__ == "__main__":
    main()