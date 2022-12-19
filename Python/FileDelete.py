import os

def Delete_file(FileName):
    if(os.path.exists(FileName)):
        os.remove(FileName)

    else:
        print("There is not such file")
        return


def main():
    print("Enter the file name to Delete")
    Name = input()
    Delete_file(Name)

if __name__ == "__main__":
    main()