## LinkedList Revision
1- fast and slow pointer : The idea is slow pointer moves by x and fast moves by 2x so when fast reaches the end, the slow should be somewhere at the middle.
Used to find middle of the linkedlist, detect cycle etc
2- Dummy Node: This node is created to bypass the edge cases. Used when creating a node and on each iteration you want its next to point at newly created node.
Ex seen in "merge 2 sorted list"