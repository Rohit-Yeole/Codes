print("Demonstration of tuple")

#   Characteristics of tuple :
#   Data : Heteregeneous
#   Ordered :   Yes
#   Indexed :   Yes
#   Mutable :   No
#   Duplicates  :   Yes

Data = (11,21,51,101)
print("_____________________________________")
print("Output using for")
for no in Data:
    print(no, end = " ")
print("\n___________________________________")

print("Output using for with index")
for i in range(0,len(Data)):
    print(Data[i], end = " ")
print("\n_____________________________________")

print("Output using while with index")
i = 0
while(i < len(Data)):
    print(Data[i], end = " ")
    i += 1
print("\n_____________________________________")
