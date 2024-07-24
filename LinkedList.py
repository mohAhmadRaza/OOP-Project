class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        

class LinkedList:
    def __init__(self):
        self.head = None


    def insertAtBegin(self, data):
        newNode = Node(data)
        newNode.next = self.head
        self.head = newNode

    def insertAtIndex(self, data, index):
        position = 0
        currentNode = self.head
        
        while position + 1 < index and currentNode:
            position += 1
            currentNode = currentNode.next
        
        if currentNode:
            newNode = Node(data)
            newNode.next = currentNode.next
            currentNode.next = newNode
        
        current = self.head
        while current:
            print(current.data, end="->" if current.next else "\n")
            current = current.next
    def insertAtEnd(self, data):
        current = self.head
        
        while current.next:
            current = current.next
        
        newNode = Node(data)
        current.next = newNode
        current = self.head
        while current:
            print(current.data, end="->" if current.next else "\n")
            current = current.next
    def updateValue(self, data, index):
        position = 0
        current = self.head
        
        while current and position < index:
            position += 1
            current = current.next
        if current:
            current.data = data
        
    
# Example usage
ll = LinkedList()
ll.insertAtBegin(12)
ll.insertAtBegin(10)
ll.insertAtBegin(4)
ll.insertAtBegin(3)
ll.insertAtBegin(2)
ll.insertAtBegin(1)



# Insert data at index 4
ll.insertAtEnd(10)
