#include "Queue.h" 
#include <iostream> 

Queue::Queue() {

    frontIdx = 0; 
    rearIdx = -1; 
    numItems = 0; 
}

bool Queue::isFull() const { return numItems == CAP; }
bool Queue::isEmpty() const {return numItems == 0; }
int Queue::size() const { return numItems; }

bool Queue::enqueue(int item) {
    if (isFull()){
        std::cout<< "cant add" << item << ". queue is full." << std::endl;
        return false;
    }
    rearIdx = (rearIdx + 1) % CAP; 
    arr[rearIdx] = item; 
    numItems++; 
    return true;
} 

int Queue::dequeue() { 
    if (isEmpty()){
        std::cout << "cant remove, queue empty" << std:: endl;
        return -1; 
    }
     int value = arr[frontIdx];
     frontIdx = (frontIdx +1 ) % CAP;
     numItems--;
    return value; 
}

int Queue::peek() const{ 
    if (isEmpty()) return -1;
    return arr[frontIdx];
}

void Queue::clear(){
    frontIdx = 0; 
    rearIdx = -1; 
    numItems = 0; 
}

void Queue::display() const{
    if (isEmpty()){
        std::cout << "empty queue"; 
    } else{
        for (int i = 0; i < numItems; i++){
            std::cout << arr[(frontIdx +i)% CAP] << " ";
        }
    }
    
    std::cout << std::endl;

}