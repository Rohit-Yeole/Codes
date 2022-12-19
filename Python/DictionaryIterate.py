print("Demonstration of Dictionary")

#   Characteristics of tuple :
#   Data : Heteregeneous
#   Ordered :   Yes
#   Indexed :   No
#   Mutable :   Yes
#   Duplicates  :   No

Batches = {"PPA" : 18000, "LB" : 16700, "Python" : 16500, "Angular" : 15000}

print("Data of Dictionary is : ",Batches)

print("Data traversal using for loop")
for x in Batches:
    print(x)

print("Data traversal using for loop")
for x in Batches:
    print(x,Batches[x])

print("Data traversal using for loop")
for x in Batches:
    print(x,Batches.get(x))

KeyBatches = Batches.keys()
print(type(KeyBatches))
print(KeyBatches)

valueBatches = Batches.values()
print(type(valueBatches))
print(valueBatches)

for i in range(0,len(Batches)):
    print("Batch name is : ",KeyBatches[i], end = " ")
    print("Fees are : ",valueBatches[i])


