print("Demonstration of set")

#   Characteristics of set:
#   Data : Heteregeneous
#   Ordered :   No
#   Indexed :   No
#   Mutable :   Yes
#   Duplicates  :   No

data = {11,21,51,101,21,11}         # Duplicates elements set madhey store ch nhi hoth so display madhey pn nhi sagle unique values yetil
data1 = {11, 90.80, True, "Hello"}  #   Heterogeneous

print("First set is : ",data)
print("Length of data is : ",len(data))
print("Data is Heterogeneous : ",data1)
print("Data is unordered : ",data1)
#print("Data at Index 2 : ",data1[2])
#print("Data with duplicates element : ",data)

print("set is mutable")

#   Insert an element
data.add(211)
print("Data after insertion",data)

#   Removal of element
data.remove(211)
print("Data after removal",data)
data.discard(201)
print("Data after discard",data)

