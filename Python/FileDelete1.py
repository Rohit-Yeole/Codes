import os

def Delete_file(FileName):
    if(os.path.exists(FileName)):
        filesize = os.path.getsize(FileName)
        if(filesize == 0):
            os.remove(FileName)
        else:
            print("Are you sure you want to delete the file? Y/N")
            option = input()

            if(option == "Y" or option == "y"):
                os.remove(FileName)
            else:
                print("File deletion process stopped")
    else:
        print("There is not such file")
        return


def main():
    print("Enter the file name to Delete")
    Name = input()
    Delete_file(Name)

if __name__ == "__main__":
    main()