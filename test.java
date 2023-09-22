// class Student{
//     String name;
//     Student(String s){
//         name = s;
//     }
//     public static void main(String[] args) {
//         Student s1 = new Student("daksh");
//         Student s2 = s1;
//         s2.name = "Daksh Lal";
//         System.out.println(s1.name);
//         System.out.println(s2.name);
//     }
// }

class Addishon{
    int a,b;
    Addishon(int i, int j){
        a = i;
        b = j;
    }
    static int getAddishon(Addishon o){
        return o.a + o.b;
    }
    public static void main(String[] args) {
        Addishon a = new Addishon(3, 4);
        int sum = getAddishon(a);
        System.out.println(sum);
    }
}