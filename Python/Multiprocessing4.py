import time
import multiprocessing

def DisplayEven(No):
    for i in range(1,No,1):
        if(i % 2 == 0):
            print("Even number : ",i)


def DisplayOdd(No):
    for i in range(1,No,1):
        if(i % 2 != 0):
            print("Odd number : ",i)

def main():
    print("Demonstration of Parallel programming using multiple processess")

    Number = 2000
    p1 = multiprocessing.Process(target =  DisplayEven, args = (Number,))       #Number, comma because it is list
    p2 = multiprocessing.Process(target =  DisplayOdd, args = (Number,))

    p1.start()          # here p1 is scheduled
    p2.start()

    print("End of main")

if __name__ == "__main__":
    start_time = time.process_time()                        # execution time of process
    main()
    end_time = time.process_time()
    print("Execution time is : ",end_time - start_time)
