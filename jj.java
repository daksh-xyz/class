// import java.util.Arrays;
// import java.util.Scanner;
// class Student {
//     int id;
//     int marks[];
//     String name, branch;
//     static String college;
//     Student(int id) {
//         this.id = id;
//     }
//     Student(int id, int marks[]) {
//         this.id = id;
//         this.marks = marks;
//     }
//     Student(String name) {
//         this.name = name;
//     }
//     Student(String name, String branch) {
//         this.name = name;
//         this.branch = branch;
//     }
//     Student(String name, String branch, String c){
//         this.name = name;
//         this.branch = branch;
//         college = c;
//     }
//     void display() {
//         System.out.println("ID: " + id + " Marks: " + Arrays.toString(marks) + " Name: " + name + " Branch: " + branch + " College: " + college);
//     }

//     static Student input(){
//         Scanner sc = new Scanner(System.in);
//         String naam = sc.nextLine();
//         String kaam = sc.nextLine();
//         String iskul = sc.nextLine();
//         int pehchan = sc.nextInt();
//         int numbar[] = new int[5];
//         for(int i=0; i<5; i++){
//             numbar[i] = sc.nextInt();
//         }
//         return  Student(naam,kaam,pehchan,iskul,numbar);
//     }
//     public static void main(String[] args) {
//         Student st = new Student(pehchan);
//         Student st2 = new Student(pehchan, numbar);
//         Student st3 = new Student(naam);
//         Student st4 = new Student(naam, kaam);
//         Student st5 = new Student(naam, kaam, iskul);
//         st.display();
//         st2.display();
//         st3.display();
//         st4.display();
//         st5.display();
//     }
// }
