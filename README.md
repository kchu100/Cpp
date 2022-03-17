**C++ Definitions, Syntax and Concepts**

C++ is a programming language that is a superset of C wherein additional features are made in the C language.
C++ have features like function overloading, friend functions, inheritance, templates and virtual functions.
C++ handles exceptions at the language level while C in the if-else style.
C++ supports procedural and object-oriented programming approaches.

Namespace is used to resolving the name conflict of the identifier which is accomploshed by placing them under various namespaces, which helps
in the logical division of the different codes.

Function overloading: When more than one function have the same name but with a different type and number of parameters.

Operator overloading: allows the redefining the way an operator works for user-define types.

Reference variable: variable name and reference variable share the same memory location which helps in updating the original variable.

**Object Oriented Programming**

  Class is referred to as the designing of the user-defined data type. 
  It reflects the different entities, attributes and actions.
  
  Class template is a name for a generic class and is used to pass any data type as a parameter so there is 
  no need to write the same code for different data types.
  
  Storage class resemble life or the scope of symbols including variables and functions.
  Examples: mutable, auto, static, extern, register
  
**'this' pointer:**
  Is a constant pointer and holds the memory address of the current object. It passes as a hidden argument to all the nonstatic member
  function calls. It is available as a local variable within the body of all nonstatic functions.
  
  Virtual Functions:
    A member function which is declared within a base class and is re-defined (overridden) by a derived class. 
  
**Access Specifiers:**

  Public: members can be accessed throughout the entire program
  
  Private: members that can't be accessed outside the class 
  
  Protected: members can only be accessed inside its class OR through inheritance 
  
**Object:**
  An instance of the class. It can have fields, methods, constructors and related. 
  For example, a bike is an object but it has various features such as brakes, color, size and design which are instances of the class.
    
**Encapsulation:** 
  Process of binding together the data and functions in a class. It is applied to prevent direct access to the data for security reasons. 
  Sensistive information are hidden from the user and are only accessible through getter and setter functions.
  
**Abstraction:** 
  Hiding background details/implementations and displaying only the essential details. 
  Data members and member functions are grouped using access specifiers.

**Inheritance:**
  When classes are allowed to access the properties of another class

**Polymorphism:**
  A call to a member function will cause a different function to be executed depending on the type of object that invokes the function.
  This function has the same name as in the base and derived class.
