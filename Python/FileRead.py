import os

def Read_file(FileName):
    if(os.path.exists(FileName)):
        fd = open(FileName, "r")
        Data = fd.read()
        print("Data from the file is")
        print(Data)
        fd.close()

    else:
        print("File is not existing")
        return


def main():
    print("Enter the file name to create")
    Name = input()
    Read_file(Name)

if __name__ == "__main__":
    main()