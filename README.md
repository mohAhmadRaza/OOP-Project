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

# BankAccount Problem With Classes
Problem statemen is:
1) Consider a simple bank account management system where each account has an account number, balance, and account type (e.g., savings, checking). You're tasked with implementing the following functionalities:
2) Friend Function for Balance Transfer:
3) Implement a friend function transferBalance() outside the BankAccount class to facilitate transferring funds between two bank accounts. This function should have access to the private members of BankAccount.
4) Copy Constructor for Account Duplication:
Define a copy constructor in the BankAccount class to duplicate an existing account when needed.
5) Main Function to Demonstrate Operations:
6) a main() function to create multiple bank accounts, perform balance transfers using the friend function.

What can someone learn from this problem:
1) How to define own copy constructor in user defined classes
2) How to perform assignment in OOPs
3) How can we transfer data members values from one object to another object
4) What is friend function
5) How to define static members, their implementations, syntax, accessing etc.

# Day of the Year Class
Here I User will enter the day of the year like 234 and I have to tell him that the entered day is like 15 september etc.Its just an example.
And here I used classes and all the functoins of OOPs and Oerator Overloading.

# Defining appropriate month and number class
Here I Design a class where if user enters month than I have to assign a number of the month AND,
if user enters month number than I have to assign month name and return that name.
More ever I have overloaded the (++) operator for both post and prefixes because they are not defaultly understandable by the compiler
Similarly Overloaded the (--) Operator to define this,if I use these operators with the classes objects in main function.

# Overloading Of "++(post & pre), --(post & pre), <<, >>" Operators
1) The program defines a class named Months to represent months of the year
2) Overloads the << (output stream) and >> (input stream) operators as friend functions for the Months class.
3) Private member variables include monthsNum (integer) and monthsName (string).
4) Initializes a static array mon containing the names of months.
5) The program defines a class named `Months` to represent months of the year.
6) Overloads the `<<` (output stream) and `>>` (input stream) operators as friend functions for the `Months` class.
7) Private member variables include `monthsNum` (integer) and `monthsName` (string).
8) Initializes a static array `mon` containing the names of months.
9) Includes various member functions for setting and getting month information (`setNum`, `setName`, `getNum`, `getName`, `getCheckNum`, `display`).
10) Defines multiple constructors for the `Months` class with different parameter combinations.
11) Implements input validation in member functions like `checking1` and `checking2` to ensure valid month names and numbers.
12) Overloads unary operators `++` (post-increment), `++` (pre-increment), `--` (post-decrement), and `--` (pre-decrement) for the `Months` class.
13) Uses friend functions (`operator<<` and `operator>>`) to overload stream insertion and extraction operators.
14) Demonstrates the usage of the `Months` class by creating instances and performing operations like input/output.
15) Creates instances of the `Months` class (`m`, `m2`, `m3`, `m4`) with different constructors and initializes them with values.
16) Calls the `display` function to print month information for instances.
17) Takes user input for a `Months` object using `cin >> ' which is already overloaded.
18) Displays the output using cout.
   
# ClockType Class
Here I overloaded Insertion ,extension operators.
Also I overloaded increment operators
Here I designed copy constructor

