# JAVA NOTES
## WHAT IS JAVA ?
Java is a <mark> programming language and a platform.</mark> Java is a high level, robust, object-oriented and secure programming language.

Before Java, its name was Oak. 
Since Oak was already a registered company, so James Gosling and his team changed the name from Oak to Java.

**Platform:** Any hardware or software environment in which a program runs, is known as a platform. Since Java has a runtime environment (JRE) and API, it is called a platform

## FEATURES OF JAVA
1. Simple
2. Object-Oriented
3. Portable
4. Platform independent
5. Secured
6. Robust
7. Architecture neutral
8. Interpreted
9. High Performance
10. Multithreaded
11. Distributed
12. Dynamic

## OOPs
Basic concepts of OOPs are:
1. Object
2. Class
3. Inheritance
4. Polymorphism
5. Abstraction
6. Encapsulation

**NOTE** - JAVA IS BOTH INTERPRETED AND COMPILED..

    SOURCE CODE --> compiler --> Byte Code
                                           ⬇️
    MACHINE CODE  <--   interepreter   <--

## Disadvantages of OOP
1. The length of the programmes developed using OOP language is much larger than the procedural approach. Since the programme becomes larger in size, it requires more time to be executed that leads to slower execution of the programme.
2. We can not apply OOP everywhere as it is not a universal 
language. It is applied only when it is required. It is not suitable for all types of problems.
3. Programmers need to have brilliant designing skill and 
programming skill along with proper planning because using OOP is little bit tricky.
4. OOPs take time to get used to it. The thought process involved in object-oriented programming may not be natural for some people.
5. Everything is treated as object in OOP so before applying it we need to have excellent thinking in terms of objects.

## Advantages of OOP
1. OOP is faster and easier to execute.
2. OOP provides a clear structure for the programs.
3. OOP helps to keep the Java code DRY "Don't Repeat Yourself", and makes the code easier to maintain, modify and debug.
4. OOP makes it possible to create full reusable applications with less code and shorter development time.

## Interpreter vs Compiler
    -The interpreter scans the program|the compiler scans the 
    line by line and translates it    |entire program first 
    into machine code                 |and then translates it
                                      |into machine code
    The interpreter shows one error   |the compiler 
                                      |shows all errors and |warnings at the same time
     at a time 

## CONSTRUCTOR
It is a block of code similar to method which creates values at the time of object creation
### There are 2 types of constructors : 
1. default (no argument) 
2. parameterized
### Rules for creating a constructor:
1. Constructor name must be same as the name of class
2. A constructor must not have an explicit return type
3. A java constructor cannot be static, final, abstract or synchronized
4. We can use access modifiers (private, public, protected or default) hwile declaring a constructor
### Synatx of default constructor :
    class_name(){}
### <mark> Why use parameterized constructor ? </mark>
#### Answer :
    parameterized constructor is used to provide different values to distinct objects. However, you can give the same values also.

### Sample Code :
    class Bank{
    String name, AccountType;
    int number, balance;
        Bank(int num, int Balance){
            name = "Daksh";
            AccountType = "Savings";
            number = num;
            balance = Balance; 
            System.out.println(num + " " + Balance);
        }
        public static void main(String[] args){
            Bank w = new Bank(123456789, 999);
            Bank d = new Bank(123456789, 100000000);
        }
    }
## Difference between constructor and method
![image difference between constructor and method](./diff.jpg)

