import os

def Write_file(FileName):
    if(os.path.exists(FileName)):
        print("Enter the data that you want to write into the file")
        Data = input()

        fd = open(FileName, "a")
        fd.write(Data)

    else:
        print("File is not existing")
        return


def main():
    print("Enter the file name to create")
    Name = input()
    Write_file(Name)

if __name__ == "__main__":
    main()