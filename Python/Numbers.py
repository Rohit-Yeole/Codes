def DisplayFactors(no):
    print("Factors are : ")
    i = 1
    while (i < int(no / 2) + 1):
        if (no % i == 0):
            print(i)
        i = i + 1