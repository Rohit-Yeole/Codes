from sys import *
from os import *

def Script_Task(No):
    if((No % 2) == 0):
        print("It is even number")
    else:
        print("It is odd number")


def main():
    print("-------------Marvellous Infosystems Automations---------------------")
    print("Automation script started with name : ",argv[0])

    if(len(argv) != 2):
        print("Insufficient arguments")
        print("Use -h for help and -u for usage of the script")
        exit()
    if((argv[1] == "-h") or (argv[1] == "-H")):
        print("Help : This script is used to perform ___________")

    elif((argv[1] == "-u") or (argv[1] == "-U")):
        print("Usage : Provide ________ number of arguments as")
        print("First Arguments as : _______")
        print("Second Arguments as : _______")
        exit()

    else:
        Script_Task(int(argv[1]))

if __name__ == "__main__":
    main()
