# C++
***--------------------------------------------Definitions, Syntax and Concepts-------------------------------------------------***  
C++ is a programming language that is a superset of C wherein additional features are made in the C language.  
C++ have features like function overloading, friend functions, inheritance, templates and virtual functions.  
C++ handles exceptions at the language level while C in the if-else style.  
C++ supports procedural and object-oriented programming approaches.  

**Data Types**  
&emsp; boolean: 1 byte  
&emsp; char: 1 byte  
&emsp; int: 2 or 4 bytes  
&emsp; long: 8 bytes  
&emsp; float: 4 bytes  
&emsp; double: 8 bytes  
**Functions** is a block of code which only runs when it is called. They are used to perform certain actions, and they are important 
for reusing code: Define the code once, and use it many times.   

***Loops***  
&emsp;&emsp; **While:**  
&emsp;&emsp;&emsp; executes a block of code as long a specified condition is true  
&emsp;&emsp; **Do/While:**  
&emsp;&emsp;&emsp; will always execute a block of code once then keeps looping as long a specified condition is true  
&emsp;&emsp; **For:**  
&emsp;&emsp;&emsp; will execute a block of code the amount of times specified  

***Pointers*** is a variable that stores the memory address as its value.  
It points to a datatype of the **same** type and is created with the * operator.  
Get the value of the variable by using the * operator (dereference operator).  
Syntax:  
&emsp;&emsp; string food = "Pizza";  
&emsp;&emsp; string *ptr = &food; //Pointer declaration  
&emsp;&emsp; cout << ptr; //Reference: output the memory address of food with the pointer which is (0x6dfed4)  
&emsp;&emsp; cout << *ptr; //Dereference: output the value of the food with the pointer which is (Pizza)  

**Namespace** is used to resolving the name conflict of the identifier which is accomplished by placing them under various namespaces, which helps
in the logical division of the different codes.  
**Function overloading:** When more than one function have the same name but with a different type and number of parameters.  
**Operator overloading:** Allows the redefining the way an operator works for user-define types.
**Reference variable:** variable name and reference variable share the same memory location which helps in updating the original variable.  
***---------------------------------------------Data Structures---------------------------------------------------------------------***  
A way of organizing data so that it can be used effectively.  

***Array***  
A collection of items stored at contiguous memory locations.  
Stored multiple items of the same type together.  
&emsp; **Fixed:** size or length is determined when the array is created  
&emsp; **Dynamic:** random access, variable-size list that allows elements to be added or removed. It overcomes a limit of static arrays.

***Linked List***  
Is linear, not stored at contiguous memory locations.  
Items are linked using pointers.  
Consists of nodes where each node contains a data field and reference to the next node.  

***Stack***  
Is linear, follows a particular order in which when an item is placed.  
Referred to as Last In, First Out (LIFO) or First In, Last Out (FILO)

***Queue***  
Is linear, follows a particular order in which when an item is placed.  
Referred to as First In, First Out (FIFO)

***Hashing***  
A technique in mapping keys, values into the hash table by using a hash function.  
It provides a faster access to elements.  
Efficiency depends on the hash function.

***Tree***  
&emsp; **Binary Tree:**  
&emsp;&emsp; A tree whose elements have at most 2 children.  
&emsp;&emsp; Children are typically named a left and right child.  

&emsp; **Binary Search Tree:**  
&emsp;&emsp; Is a node-based binary tree.  
&emsp;&emsp; Left child node is less than parent node.  
&emsp;&emsp; Right child node is greater then parent node.  
&emsp;&emsp; Left and right subtree must also be a Binary Search Tree.  

&emsp; **Heap**  
&emsp;&emsp; A special Tree in which it is a complete binary tree.  
&emsp;&emsp;&emsp; **Max-Heap**  
&emsp;&emsp;&emsp;&emsp; Parent node must be the greatest among all other key nodes  
&emsp;&emsp;&emsp; **Min-Heap**  
&emsp;&emsp;&emsp;&emsp; Parent node must be the minimum among all other key nodes  
***---------------------------------------------Object Oriented Programming----------------------------------------------------***  
  Structures (struct) are a way to group several related variables into one place.  
  Can contain many different data types.  
  Is public by default.  
  
  Class is referred to as the designing of the user-defined data type.   
  It reflects the different entities, attributes and actions.  
  Is private by default.  
  
  Class template is a name for a generic class and is used to pass any data type as a parameter so there is 
  no need to write the same code for different data types.  
  
  Storage class resemble life or the scope of symbols including variables and functions.
  Examples: mutable, auto, static, extern, register  
  
  There are 3 types of constructors (Default, Parameterized, Copy):  
  ***Default:***  
  1. No parameters.  
  2. Created even if not provided.   
  
  ***Parameterized:***  
  1. Can have X amout of parameters.  
  2. Used to initialize an object.  
  3. Used to overload constructors.  
  
  ***Copy:***  
  1. Creates an object by initializing it with an object of the same class
  2. Initialize one object from another of the same type.  
  3. Copy an object to pass it as an argumet to a function.  
  4. If it is not defined in a class, the compiler will make one.  

***Destructors:***  
  1. Is an instance member fuction which is invoked automatically whenever an object is going to be destroyed.  
  2. This will always be the very last function to be called before an object is destroyed.  
  3. It uses "delete" to free memory space.  
  4. No arguments.  
  
***'this' pointer:***  
  Is a constant pointer that holds the memory address of the current object. It passes as a hidden argument to all the nonstatic member
  function calls. It is available as a local variable within the body of all nonstatic functions.
  
  ***Virtual Functions:***  
  A member function which is declared within a base class and is re-defined (overridden) by a derived class. 
  
  ***Friend Class and Functions:***  
  &emsp; **Friend Class:**  
  &emsp;&emsp; Can access private and protected members of other class.  
  &emsp;&emsp; Example:  
  &emsp;&emsp;&emsp; class Node {  
  &emsp;&emsp;&emsp;&emsp; private:  
  &emsp;&emsp;&emsp;&emsp;&emsp; int key; Node* next;  
  &emsp;&emsp;&emsp;&emsp;&emsp; //class LinkedList can access private members of Node  
  &emsp;&emsp;&emsp;&emsp;&emsp; friend class LinkedList;  
  
  &emsp; **Friend Function:**  
  &emsp;&emsp; Can be given a special grant to access private and protected members.  
  &emsp;&emsp; Can be a member of another class or a global function.  
  &emsp;&emsp; Example:  
  &emsp;&emsp;&emsp; class Node {  
  &emsp;&emsp;&emsp;&emsp; private:  
  &emsp;&emsp;&emsp;&emsp;&emsp; int key; Node* next;  
  &emsp;&emsp;&emsp;&emsp;&emsp; //only search function of LinkedList can access private members  
  &emsp;&emsp;&emsp;&emsp;&emsp; friend int LinkedList::search();  
  
  **Key points**
  1. Friends should only be used for limited purposes as using too many defeats the purpose of encapsulation.  
  2. Frindship is not mutual. If clas A is a friend of B, then B doesn't automatically become a friend of A.  
  3. Friendship is not inherited.  
  
***Access Specifiers:***  
  Public: members can be accessed throughout the entire program  
  Private: members that can't be accessed outside the class  
  Protected: members can only be accessed inside its class OR through inheritance  
  
***Object:***  
  An instance of the class. It can have fields, methods, constructors and related. 
  For example, a bike is an object but it has various features such as brakes, color, size and design which are instances of the class.  
    
***Encapsulation:***  
  Process of binding together the data and functions in a class. It is applied to prevent direct access to the data for security reasons.
  Sensistive information are hidden from the user and are only accessible through getter and setter functions.  
  
***Abstraction:***  
  Hiding background details/implementations and displaying only the essential details. 
  Data members and member functions are grouped using access specifiers.  

***Inheritance:***  
  When classes are allowed to access the properties of another class.  

***Polymorphism:***  
  A call to a member function will cause a different function to be executed depending on the type of object that invokes the function.
  This function has the same name as in the base and derived class.  
  
***Exceptions:***  
  Different errors can occur like coding error by the programmer, wrong input or any unforseeable things.  
  Exception handling consists of three keywords: **try, catch, throw**.  
  **Try** and **Catch** are used in pairs.  
  
  &emsp; The **try** statement allows you to define a block of code to be tested for errors while it is being executed.  
  &emsp; The **catch** statement allows you to define a block of code to be executed, if an error occurs in the try block.  
  &emsp;&emsp; - can take a parameter or ". . ."  
  &emsp; The **throw** keyword throws an exception when a problem is detected, which lets us create a custom error.   
  
  
  
  
