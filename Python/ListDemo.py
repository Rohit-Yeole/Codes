print("Demonstration of list")

#   Characteristics of list :
#   Data : Heteregeneous
#   Ordered :   Yes
#   Indexed :   Yes
#   Mutable :   Yes
#   Duplicates  :   Yes

data = [11,21,51,101,21,11]
data1 = [11, 90.80, True, "Hello"]  #   Heterogeneous

print("Data is Heterogeneous : ",data1)
print("Data is ordered : ",data1)
print("Data at Index 2 : ",data1[2])
print("Data with duplicates element : ",data)

print("List is mutable")
data.append(201)
print("Data after append",data)
data.pop(6)
print("Data after pop",data)
