
#import Numbers
#from Numbers import DisplayFactors
#from Numbers import *
import Numbers as NUM

def main():
    print("Enter Number : ")
    no = int(input())

    #Numbers.DisplayFactors(no)
    #DisplayFactors(no)
    NUM.DisplayFactors(no)

if __name__ == "__main__":
    main()