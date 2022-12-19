
def CheckEven(No):
    return (No % 2 == 0)

def Doubles(No):
    return (No * 2)
                                                # Sum aani reduceX mg main madhey reduce cha call use Sir way which is written in Comment
def Summation(No,Data):                         # def Sum(A,B):
    Sum = 0                                     #   return A+B
    for No in Data:
        Sum = Sum + No
    return Sum

def filterX(Helper_Function,Data):
    Result = []
    for No in Data:
        if(Helper_Function(No) == True):
            Result.append(No)
    return Result

def mapX(Helper_Function,Data):
    Result = []
    for No in Data:
        Value = Helper_Function(No)
        Result.append(Value)
    return Result

def reduceX(Helper_Function,Data):              # def reduceX(Helper_Function,Data):
    Add = 0                                     #   Ans = 0
    for No in Data:                             #   for No in Data:
        Add = Helper_Function(No,Data)          #       Ans = Helper_Function(Ans,No)
    return Add                                  #   return Ans

def main():
    iSize = 0
    print("Please enter the number of elements")
    iSize =  int(input())

    Data_Input = []
    print("Please enter the data")

    for iCnt in range(0,iSize,1):
        Value = int(input())
        Data_Input.append(Value)

    print("Data is : ",Data_Input)

    Data_Filter = filterX(CheckEven,Data_Input)

    print("Data after filter is : ",Data_Filter)

    Data_Map = mapX(Doubles,Data_Filter)

    print("Data after map is : ",Data_Map)

    Data_Reduce = reduceX(Summation,Data_Map)               # Output = reduceX(Sum,Data_Map)

    print("Result after reduce is : ",Data_Reduce)            # print("Result after reduce is : ",Output)

if __name__ == "__main__":
    main()