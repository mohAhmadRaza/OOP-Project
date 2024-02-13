# OOP-Project

Here I used and learn:
1) How to define user-defined(Data types) classes and their instances.
2) How to declare their objects
3) How to initialize data members within "Constructors".
4) What is constructor Overloading
5) Default Constructors
6) How to allocate dynamic memory on heap
7) How to destroy data members's dynamic memory via "Destructors"
8) How to use mutators and accessors
9) How to use inline functions
10) How to perform input validation
11) Where to use getline,why and uses

# Game of 21:
1) How to make separate files for classes, their implementations and their driver program.
2) How to add classes to main main
3) How to deal with classes
4) How to deal with Accessors and mutaters
5) How to deal with private member functions

# Cash Register Problem
The code uses classes (InventoryItem and Cash)  having related functionality and data.
It demonstrates the use of private and public members in a class.
The InventoryItem class uses dynamic memory allocation (through the use of new) to create arrays for descriptions, costs, and units.
The InventoryItem class has a constructor that initializes the dynamic arrays with default values.
The InventoryItem class provides setter and getter methods to manipulate and retrieve the values of private members.
The program uses loops to gather information about inventory items, such as their names, costs, and units.
It takes user input to determine the size of the inventory and specific details for each item.
The getCosts function in the InventoryItem class is overloaded to take either an index or a name to retrieve the cost of an item.
The code is divided into multiple files (InventoryItem.h, InventoryItem.cpp, Cash.h, Cash.cpp) for better organization and modularity.
The private members in the classes are encapsulated, ensuring that the internal implementation details are hidden from the outside world.

# Day of the year Class
1) Used private data members so that no one can use access it without public member functions
2) Constructor Overloading:
Three constructors are provided, allowing the creation of objects in different ways, each has its own parameters.
3) Private Member Function:
Used a private function used to validate and adjust the day to a valid value.
4) Initialization of member arrays
5) The code includes a private function (checking()) to validate the day and adjust it if necessary.
