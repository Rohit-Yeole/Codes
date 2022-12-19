import time
import threading

def DisplayEven(No):
    for i in range(1,No,1):
        if(i % 2 == 0):
            print("Even number : ",i)


def DisplayOdd(No):
    for i in range(1,No,1):
        if(i % 2 != 0):
            print("Odd number : ",i)

def main():
    print("Demonstration of Parallel programming using multiple threads")

    Number = 2000
    p1 = threading.Thread(target =  DisplayEven, args = (Number,))       #Number, comma because it is list      call back function target lihala te
    p2 = threading.Thread(target =  DisplayOdd, args = (Number,))

    p1.start()          # here p1 will wait for its chance then its scheduled
    p2.start()

    p1.join()
    p2.join()
    
    print("End of main")

if __name__ == "__main__":
    start_time = time.process_time()                        # execution time of process
    main()
    end_time = time.process_time()
    print("Execution time is : ",end_time - start_time)
