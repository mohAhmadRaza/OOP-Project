#### OOP-Project

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

##### Game of 21:
1) How to make separate files for classes, their implementations and their driver program.
2) How to add classes to main main
3) How to deal with classes
4) How to deal with Accessors and mutaters
5) How to deal with private member functions

##### Cash Register Problem
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

##### Day of the year Class
1) Used private data members so that no one can use access it without public member functions
2) Constructor Overloading:
Three constructors are provided, allowing the creation of objects in different ways, each has its own parameters.
3) Private Member Function:
Used a private function used to validate and adjust the day to a valid value.
4) Initialization of member arrays
5) The code includes a private function (checking()) to validate the day and adjust it if necessary.

##### BankAccount Problem With Classes
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

#### Day of the Year Class
Here I User will enter the day of the year like 234 and I have to tell him that the entered day is like 15 september etc.Its just an example.
And here I used classes and all the functoins of OOPs and Oerator Overloading.

##### Defining appropriate month and number class
Here I Design a class where if user enters month than I have to assign a number of the month AND,
if user enters month number than I have to assign month name and return that name.
More ever I have overloaded the (++) operator for both post and prefixes because they are not defaultly understandable by the compiler
Similarly Overloaded the (--) Operator to define this,if I use these operators with the classes objects in main function.

#  Overloading Of "++(post & pre), --(post & pre), <<, >>" Operators
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

# Person Class
Here I did:
1) Class Declaration and Implementation:
The code defines a class `Person` with private members `age` and `name`.
2) Constructors, a copy constructor, a destructor, and an overloaded assignment operator are implemented.
3) Memory Management:
Dynamic memory allocation and deallocation are used for the `name` attribute using `new` and `delete[]`.
4) Operator Overloading:
Overloaded the `<<` operator for streaming to display information about a `Person` object.
5) Friend Function:
Utilized a friend function for overloading `<<` operator to access private members of the `Person` class.
6) String Handling:
Used C-style strings and functions (`strcpy_s`) for string manipulation.
7) Object Creation and Copying:
Created instances of the `Person` class with different constructors.
Demonstrated object copying using both copy constructor and overloaded assignment operator.
8) Error Handling:
Implemented checks in the overloaded assignment operator to handle self-assignment and proper memory management.

# Pay Roll Class
This C++ code defines a class called `PayRoll` that represents the payroll information for employees. Here are the important concepts in the code:

**Class Definition (`PayRoll`)**:
   - The class has private data members `hourlyPay`, `numOfHours`, and `total`.
   - There is a private member function `check(int a) const` that checks whether the input is a valid number of hours (between 1 and 60 inclusive).
   - Two constructors are defined: a default constructor (`PayRoll()`) and a parameterized constructor (`PayRoll(int i)`).
   - Public member functions include `set(int a)`, `gethours()`, and `gettotal()`.

2. **Constructor Initialization**:
   - In the default constructor, `hourlyPay` is initialized to 4.5, `numOfHours` to 0, and `total` to 0.0.
   - In the parameterized constructor, `hourlyPay` is set to the value passed as an argument, and `numOfHours` and `total` are initialized to 0.

3. **Member Function `check(int a) const**:
   - It checks whether the input `a` is a valid number of hours.
   - Returns `true` if valid, and prints an error message and returns `false` otherwise.

4. **Member Function `set(int a)**:
   - Sets the number of hours worked (`numOfHours`) using the provided value `a`.
   - Calculates the total income (`total`) based on the product of `numOfHours` and `hourlyPay`.
   - If the input is invalid (checked using the `check` function), the total income is set to 0.

5. **Member Functions `gethours()` and `gettotal()**:
   - `gethours()` returns the number of hours worked.
   - `gettotal()` returns the total income.

6. **Main Function (`main58`)**:
   - Creates an array of `PayRoll` objects dynamically using `new PayRoll[7]`.
   - Takes user input for the number of hours worked for each employee using a loop.
   - Calls the `set` function to set the hours and calculate the total income for each employee.
   - Displays the number of hours and total income for each employee in another loop.
   - Deletes the dynamically allocated array using `delete[]`.
   - 

# Array Class
This code defines a simple C++ program that works with an array of floating-point numbers. Here are some important concepts and functionalities in the code:
1. **Class Definition (Array)**:
   - The `Array` class represents an array of floating-point numbers.
   - It has private data members: `size` (to store the size of the array) and `arr` (a pointer to dynamically allocate memory for the array).
   - Member function `check(int)` is a private utility function to check the validity of an index.

2. **Constructor and Destructor:**
   - The class has two constructors: a default constructor and a parameterized constructor that takes the size of the array and initializes it with zero values.
   - The destructor (`~Array()`) is responsible for releasing the dynamically allocated memory when the object goes out of scope.

3. **Member Functions:**
   - `store(int, int)`: Stores an element at the specified index in the array.
   - `retrieve(int)`: Retrieves the element at the specified index.
   - `check(int)`: Checks if the given index is valid for the array.
   - `highest()`: Returns the highest value in the array.
   - `lowest()`: Returns the lowest value in the array.
   - `average()`: Calculates and returns the average value of the array.

4. **Main Function:**
   - The `main` function gets the size of the array from the user, creates an instance of the `Array` class, and populates the array with user-input elements.
   - It then displays the array, highest value, lowest value, and average value using the member functions of the `Array` class.

5. **Input and Output:**
   - The program prompts the user to enter the size of the array and the elements.
   - It then displays the array and the calculated highest, lowest, and average values.

6. **Issues in the Code:**
   - There is a typo in the `for` loops inside the `main` function. The comma `,` should be replaced with a semicolon `;` in the loop conditions.
   - In the `average()` function, the calculation of the average is incorrect. It is currently returning `double(average/sum)`, which will always be zero. It should be `double(sum/size)`.

7. **Potential Improvements:**
   - The code could benefit from additional error handling and input validation, especially when taking user input.
   - The use of `float` for the array elements might lead to precision issues. Using `double` might be more appropriate for floating-point calculations.
   - Consider using `std::vector` instead of manual memory management for the array. It simplifies memory management and provides dynamic sizing.
  
# Scores Class with Manager Class
This C++ code defines two classes: `Scores2` and `ScoresManager`, and provides a simple example in the `main69` function to demonstrate their usage.

# `Scores2` Class:
1. **Data Members:**
   - `name`: a string representing the name of the student.
   - `scoresList`: a pointer to an array of integers to store the scores.
   - `numScores`: an integer indicating the number of scores.

2. **Member Functions:**
   - `Scores2()`: Default constructor initializing `name` to an empty string and `numScores` to 0.
   - `Scores2(string n, int num)`: Parameterized constructor initializing `name` and `numScores` and allocating memory for the scores list.
   - `setScores()`: Takes input for scores from the user and stores them in the `scoresList` array.
   - `displayInfo() const`: Displays the student's name and scores.
   - `~Scores2()`: Destructor to deallocate dynamic memory for `scoresList`.

# `ScoresManager` Class:
1. **Data Members:**
   - `size`: an integer indicating the size of the `ptr` array.
   - `ptr`: a pointer to an array of `Scores2` objects.

2. **Member Functions:**
   - `ScoresManager(int s)`: Constructor that initializes the size and dynamically allocates memory for an array of `Scores2` objects.
   - `set(int index, Scores2& obj)`: Sets the `Scores2` object at the specified index in the `ptr` array.
   - `print()`: Prints information for all `Scores2` objects in the `ptr` array.
   - `~ScoresManager()`: Destructor to deallocate dynamic memory for the array of `Scores2` objects.

3. **`main` Function**:
1. Creates three `Scores2` objects (`s1`, `s2`, and `s3`) with different names and a common number of scores (3).
2. Calls the `setScores()` method on each `Scores2` object to input scores for each student.
3. Creates a `ScoresManager` object `m` with a size of 3.
4. Calls the `set` method to set each `Scores2` object in the `ptr` array of the `ScoresManager`.
5. Calls the `print` method to display information for all students in the `ScoresManager`.

Note: The use of `inline` functions is present for small member functions, suggesting that the compiler may try to inline these functions for potential performance improvements.

# Fraction Class
This C++ code defines a simple Fraction class and overloads the input and output stream operators (`>>` and `<<`) to facilitate input and output operations for objects of the Fraction class.

Here are the important concepts in this code:

1. **Fraction Class:**
   - The Fraction class has private data members `numerator` and `denominator`.
   - It has two constructors, one default constructor initializing both numerator and denominator to 0, and another parameterized constructor taking two integers as arguments.
   - The class also has friend functions to overload `<<` and `>>` operators.

2. **Overloaded Stream Operators:**
   - The `<<` operator is overloaded to display the numerator and denominator of a Fraction object.

   - The `>>` operator is overloaded to take input for the numerator and denominator of a Fraction object.

3. **Main Function:**
   - In the `main` function, an object `f` of the Fraction class is created.
   - User input is taken for the numerator and denominator using the overloaded `>>` operator.
   - The overloaded `<<` operator is used to display the values of the numerator and denominator.
This code demonstrates the use of operator overloading for input and output operations with a Fraction class.

# DayFormate Class (Assignment):
This C++ code defines a class `DayFormate` that represents a date with various functionalities and overloads the increment, decrement, and subtraction operators. Here are some key concepts and features you can learn from this code:
1. **Operator Overloading:**
   - The code demonstrates overloading of prefix and postfix increment (`++`) and decrement (`--`) operators, as well as the subtraction operator (`-`).
   - The code also overloads the insertion (`<<`) and extraction (`>>`) operators for input and output.
2. **Class Implementation:**
   - The `DayFormate` class is used to represent a date with year, month, and day components.
   - It contains member functions to set individual components of the date and to set the entire date at once.
   - The class has functions to validate the month and day to ensure they fall within valid ranges.
3. **Date Formatting:**
   - The class provides three different date formatting options through `firstFormate()`, `secondFormate()`, and `thirdFormate()` functions.
4. **Array Usage:**
   - The `months` array is used to store the number of days and corresponding month names.
5. **Increment and Decrement Logic:**
   - The `increment()` and `decrement()` functions are implemented to handle the logic of incrementing and decrementing the date while considering the number of days in each month.
6. **Operator Overloading for Date Difference:**
   - The subtraction operator is overloaded to calculate the difference between two dates and return a new `DayFormate` object representing the duration between them.
7. **Friend Functions:**
   - The `operator<<` and `operator>>` functions are declared as friend functions to allow access to private members of the `DayFormate` class.
8. **Usage in Main Function:**
   - The `main` function demonstrates the usage of the `DayFormate` class by creating instances, performing operations like incrementing and decrementing, calculating differences, and displaying date formats.
9. **Input and Output Streams:**
   - The code uses `iostream` and `string` headers for input and output operations.
10. **Namespace Usage:**
    - The code uses the `std` namespace for simplifying the usage of standard C++ library components.
11. **Error Handling:**
    - The code includes basic error-handling mechanisms, such as re-prompting the user for input if the entered month or day is invalid.
12. **Understanding of Object-Oriented Concepts:**
    - The code demonstrates the use of object-oriented concepts like encapsulation and operator overloading to create a versatile and reusable `DayFormate` class.

# Rational Fraction class All problems And overloading
This C++ code defines a class named `Rational` that represents rational numbers (fractions) and overloads various operators to perform arithmetic operations and comparisons on objects of this class. Here are the main concepts you can learn from this code:
1. **Class Definition:**
   - The class `Rational` has private data members `numerator` and `denominator` to represent the rational number.
   - Member functions are provided for setting and getting the numerator and denominator, as well as for simplifying the rational number.
2. **Operator Overloading:**
   - Various operators are overloaded to perform arithmetic operations and comparisons on `Rational` objects. These include `+`, `-`, `*`, `/`, `+=`, `-=`, `*=`, `/=`, `++`, `--`, `==`, `>`, `<`, `<=`, `!=`, and `>=`.
   - There are also overloads for these operators when one operand is an integer.
3. **Input and Output Overloading:**
   - The `<<` and `>>` operators are overloaded to facilitate input and output of `Rational` objects.
4. **Simplification of Rational Numbers:**
   - The `simplify` function is defined to simplify a `Rational` object by finding the greatest common divisor (GCD) of the numerator and denominator and dividing both by it.
5. **Vector Usage:**
   - Vectors (`a`, `b`, and `c`) are used to store factors for the numerator and denominator during the simplification process.
6. **Conditional Statements:**
   - Conditional statements are used to handle cases where the denominator is zero or negative, and appropriate default values are set.
7. **Double Conversion:**
   - Double conversion is used in comparison operators to handle floating-point calculations for more accurate results.
8. **Pre-increment and Post-increment Overloading:**
   - Both pre-increment (`++`) and post-increment (`++(int)`) operators are overloaded.
9. **Input Validation:**
   - Input validation is not extensive, and it assumes that users will provide valid input.
10. **Friend Functions:**
    - `friend` functions are used for the input and output operators to allow them access to private members of the `Rational` class.
