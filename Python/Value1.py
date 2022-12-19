
class Value:
    def __init__(self,Data):
        self.No = Data

    def SumFactors(self):
        Sum = 0
        for i in range(1,self.No):
            if(self.No % i == 0):
                Sum = Sum + i

        return Sum
    def CheckPerfect(self):
        Ans = self.SumFactors()

        if(self.No == Ans):
            return true
        else:
            return false

def main():
    print("Please enter element")
    A = int(input())

    obj = Value(A)
    Output = obj.CheckPerfect()
    if(Output == True):
        print("{} is a perfect number",format(A))

    else:
        print("{} is not a perfect number", format(A))
if __name__ == "__main__":
    main()