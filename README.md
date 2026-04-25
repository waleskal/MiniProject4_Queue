#mini project 2 modular circular queue 

The overview of this project is that this project will implement a circular queue data structure by using a array with a fixed size. It will demonstrate modular programming by seperating the interface from the implentation. 

include/queue.h this is a header file that holds the queue class
src/queue.cpp is the implementation of teh circular queue logic and math
src/main.cpp is the driver program that has an menu in order to test the queue 
testing.md is the documentation of the tests done 

to run this program run the commands 
g++ -std=c++11 src/main.cpp src/Queue.cpp -I include -o QueueApp

and to run the appl run the command 
./QueueApp


example uses of this program are..
chose enqueue to add number to the back of queue
dequeue to get rid of the first integer in the array 
peek would display the front item and not remove it 
print will display everything in the current queue 

testing notes: 

at full capacity, the attempted addition of a 6th number will display a queue full message to the userr

dequeueuing from an empty queue will display a message saying queue empty to the user. 

the circular logic in this program will make sure that after dequeueing a new item will wrap around and fill the empty space at the start of the array. 