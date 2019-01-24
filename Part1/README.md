# Mutex and Channel basics

### What is an atomic operation?
> An atomic operation is an indivisible operation that completes in a single step relative to other threads. In other words, when a thread performs an atomic operation, other threads see an instantaneous change. 

### What is a semaphore?
> A semaphore is a variable used to control a common resource by multiple processes in a concurrent system. It is used to acheive process synchronization. (Kan tenkes på som en dørvakt på et utested - hvis det er full kapasitet blir du stoppet og må vente til noen andre drar.)

We distinguish between counting semaphore and binary semaphore, where the latter is limited to 0's or 1's.

> Kilder: https://en.wikipedia.org/wiki/Semaphore_(programming) og https://barrgroup.com/Embedded-Systems/How-To/RTOS-Mutex-Semaphore


### What is a mutex?
> 
A Mutex (Mutual Exclution) is similar to binary semaphore, but additionally has the property of ownership, ie. only the one who occupies the resource can make it available again.

> Kilde: fra forelesningsnotater


### What is the difference between a mutex and a binary semaphore?
> Answered above. 

### What is a critical section?
> A critical section is the part of the program that uses shared resources. This means that the only time a process can create race contitions is if it is in a critical section. We can therefore avoid race conditions by making sure that to processes never enter their critical sections at the same time. 

> Kilde: https://en.wikipedia.org/wiki/Critical_section

### What is the difference between race conditions and data races?
 > Race condition is an error that occurs as a result of timing or sequence of processes affecting the outcome of the program.

 
 > Data race is an error that occurs when to threads access the same memory location at the same time, and at least one of the threads modifies the data. 

> Kilde: https://blog.regehr.org/archives/490

### List some advantages of using message passing over lock-based synchronization primitives.
> - Increase the scalability of the program
> - Easier to avoid concurrency bugs


### List some advantages of using lock-based synchronization primitives over message passing.
> - The program alogrithm tends to be simpler.
> - 
