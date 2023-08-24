// public class Class1{
//     // defining fields
//     int students=89; // field or data member or instance variable
//     String name = "daksh";
//     public static void main2(String[] args) {
//         // syntax 
//         // <access specifier> class class_name (superclass name if any)
//         // modifier: a class can be public or has default access
//         // superclass (if any): the name of the class's parent class
//         // interfaces(if any):
//         // instance variable is a variable which is defined withtin a class but outside it is known as an instance variable
//         // it doesn't get memory at compile time. it gets memory at runtime when an object or instance is created...
//         // "NEW" KEYWORD: used to allocate memory at runtime. All objects get memory at heap memory area
//         Class1 s = new Class1();        // creating an instance
//         System.out.println(s.students); // accessing member through reference variable
//         System.out.println(s.name);
//     }
// }

// // this class will get called because it has the main method
// class TestStudent{
//     public static void main1(String[] args) {
//         Student s1 = new Student();
//         System.out.println(s1.id);
//         System.out.println(s1.name);
//     }
// }

// class Notes{
//     /*
//     There are three ways to initialize an object:
//     1. by reference
//     2. by method
//     3. by constructor
//     Q) WAP TO ADD 2 NUMBERS USING CLASS
//     */
// }
// class Student{
//     // gets changed by individually calling variable
//     int id = 23;
//     String name = "yoyo";
// }
// class Student1{
//     //  roll and name gets assigned by using method...
//     int roll;
//     String name;
//     void InsertRecord(int r, String n){
//         roll = r;
//         name = n;
//     }
//     void DisplayInfo(){
//         System.out.println(roll + " " + name);
//     }
// }
// class code{
//     public static void main(String[] args) {
//         // initialize through reference
//         Student s2 = new Student();
//         s2.id = 25;
//         s2.name = "Janhvi";
//         System.out.println(s2.id + " " + s2.name);
//         // initialize through method
//         Student1 s3 = new Student1();
//         s3.InsertRecord(32,"Daksh");
//         s3.DisplayInfo();
//     }
// }


// class question{
//     int sum;
//     void sum(int c, int d){
//         sum = c+d;
//     }
//     void DisplayRes(){
//         System.out.println(sum);
//     }
// }
// class Result{
//     public static void main(String[] args) {
//         question q = new question();
//         q.sum(5, 6);
//         q.DisplayRes();
//     }
// }

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