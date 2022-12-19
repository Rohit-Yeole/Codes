# Accept two numbers from user and perform addition and subtraction of it

# Class = Characteristics + Behaviours
# Class = Data + Functions

# kay karaycha aahe?            -> Behaviours(Functions)
# Addition and Subtraction

# Te karayla kay lagnar aahe?       -> Characteristics(Data)
# Two numbers

class Arithematic:
    def __init__(self,A,B):
        self.No1 = A
        self.No2 = B

    def Add(self):
        return self.No1 + self.No2

    def Sub(self):
        return self.No1 - self.No2

def main():
    print("Enter first number")
    Value1 = int(input())
    print("Enter second number")
    Value2 = int(input())

    obj = Arithematic(Value1,Value2)

    Ans = obj.Add()                     # 0X100.Add() -> Add(0X100) internally asa hoil
    print("Addition is : ",Ans)

    Ans = obj.Sub()                     # 0X100.Sub() -> Sub(0X100) internally asa hoil
    print("Subtraction is : ",Ans)

if __name__ == "__main__":
    main()