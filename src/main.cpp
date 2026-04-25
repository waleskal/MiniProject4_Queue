#include "Queue.h"
#include <iostream> 

int main(){

    Queue myQueue; 
    int choice, value; 

    std::cout << "mini project 2: circular queue";

    do{
        std::cout << "enqueue add\n2. dequeue remove \n3. peek front items \n4. size \n5. print queue\n6. clear\n7. exit\n";
        std::cout << "enter choice: " ;
        
        if(!(std::cin >> choice)){
            std::cout << "invalid input, please enter a number. \n";
            std::cin.clear(); 
            std::cin.ignore(100, '\n');
            continue; 
        }

        switch (choice){
            case 1:
                std::cout << "enter value to add: ";
                std::cin >> value; 
                myQueue.enqueue(value); 
                break; 

            case 2: 
                value = myQueue.dequeue(); 
                if(value != -1) std::cout << "removed: " << value << "\n";
                break;

            case 3:
                value = myQueue.peek(); 
                if (value != -1) std::cout << "front is: " << value << "\n";
                break;

            case 4: 
                std::cout << "current size: " << myQueue.size() << "\n";
                break; 
            case 5:
                std::cout << "queue: ";
                myQueue.display(); 
                break; 
            case 6: 
                myQueue.clear(); 
                std::cout << "queue cleared. \n";
                break; 
        }
    } while (choice != 7); 

    std::cout << "exiting program, bye\n";
    return 0; 
}