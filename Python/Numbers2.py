
class Numbers:
    def __int__(self):
        self.Size = 0
        self.Arr = list()

    def Accept(self):
        print("How many Elements you want : ")
        self.Size = int(input())

        print("Please Enter the elements : ")
        Value = 0
        for i in range(0,self.Size):
            Value = int(input())
            self.Arr.append(Value)

    def Display(self):
        print("Elements from list are : ")
        for i in range(0,self.Size):
            print(self.Arr[i])

    def Summation(self):
        Sum = 0
        for i in range(0,self.Size):
            Sum = Sum + self.Arr[i]

        return  Sum

def main():
    obj = Numbers()
    obj.Accept()
    obj.Display()

    Output = obj.Summation()
    print("Addition is : ",Output)

if __name__ == "__main__":
    main()