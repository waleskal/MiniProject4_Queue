### teseting documentation - circular queue 

#this will verify the funcntion and edge cases of the circ. queue implementation $

#1 enqueue unitl the array is full 
goal is to verify the queue will correctly know when it is at capacity (5) 
for this, we enqueue 5 items, 10,20,30,40, and when i try to add a 6th attempt it should display that the queue is full and will not add 60. the size will stay at (5) status = PASSED

#2 dequeue until array is empty 
the goal was to verify that the queue knows when it is empty. 
for this we dequeue all the 5 items that were added, try to dequeue onece more, then the program shoudl tell the user the the queue is empty and will return -1, the size will be at 0. status = PASS

#3 wrap aroujd tests (circulst infrxing) 
goal is to make sure the rearIdx will wrap back to the 0th index using the modulus operation
for this i enqueud the 5 items to fill up the array, and then i dequeued 2 items ( index 0 and 1), then i enqueued a new item, the program should place the new item at the 0th index (start of array) then displau the queue starting with the old items and ending with the new one. status = PASSED 

#4 mixed operations testing sequence 
goal is to check the stability throughout a sequence of different commands.
for this I enqueued 100 and 200, the peek would return 100, the dequeue would reutnr 100, the size would return 1, and the clear would turn the size to 0. the queue pointers and item counts should update right after each operation. status = PASS

