#ifndef QUEUE_H 
#define QUEUE_H

const int CAP = 5; 

class Queue{

private: 
    int arr[CAP];
    int frontIdx; 
    int rearIdx;
    int numItems; 

public: 
    Queue(); 

    bool enqueue(int item); 
    int dequeue ();
    int peek() const; 

    bool isEmpty() const;
    bool isFull() const;
    int size() const; 
    void clear();

    void display() const; 

};

#endif