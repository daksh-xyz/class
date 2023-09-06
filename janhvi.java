class Student {
    String name;
    int[] marks = new int[5];

    Student(String name, int[] marks) {
        this.name = name;
        this.marks = marks;
    }

    // Compare marks of two students and return true if they are the same
    static int compareMarks(Student student1, Student student2) {
        int count=0;
        for(int j=0; j<student1.marks.length; j++){
            for (int i = 0; i < student2.marks.length; i++) {
                if (student1.marks[j] == student2.marks[i]) {
                    count += 1;
                }
            }
        }
        return count;
    }

    public static void main(String[] args) {
        int[] marks1 = { 85, 90, 75, 88, 92 };
        int[] marks2 = { 75, 90, 75, 85, 91 };

        Student student1 = new Student("Alice", marks1);
        Student student2 = new Student("Bob", marks2);

        if (compareMarks(student1, student2)>0) {
            System.out.println("Marks of students are the same. Count: " + compareMarks(student1, student2));
        } else {
            System.out.println("Marks of students are different.");
        }
    }
}
    