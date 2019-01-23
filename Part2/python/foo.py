# Python 3.3.3 and 2.7.6
# python fo.py
import threading # lagt til av Stine
from threading import Thread

# Potentially useful thing:
#   In Python you "import" a global variable, instead of "export"ing it when you declare it
#   (This is probably an effort to make you feel bad about typing the word "global")
i = 0
lock = threading.Lock() # lagt til av Stine

def incrementingFunction():
    global i
    # TODO: increment i 1_000_000 times
    
    #  lagt til av Stine:
    for j in range(1000000):
        lock.acquire()  
        i += 1
        lock.release()

def decrementingFunction():
    global i
    # TODO: decrement i 1_000_000 times
    
    # lagt til av Stine:
    for j in range(1000000):
        lock.acquire()
        i -= 1
        lock.release()



def main():
    global i

    incrementing = Thread(target = incrementingFunction, args = (),)
    decrementing = Thread(target = decrementingFunction, args = (),)
    
    # TODO: Start both threads
    
    incrementing.start() # lagt til av Stine
    decrementing.start() # lagt til av Stine
    
    incrementing.join()
    decrementing.join()
    
    print("The magic number is %d" % (i))


main()
