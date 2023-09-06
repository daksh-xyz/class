class st{
    int a, b;
    // Constructor 1
    st(st t1){
        a = t1.a;
        b = t1.b;
    }
    // Constructor 2
    st(int m, int n){
        a = m;
        b = n;
    }
    void add(st t1){
        System.out.println(t1.a+t1.b);
    }
    public static void main(String args[]){
        st ob1 = new st(20,40);
        st ob2 = new st(ob1);
        // ob2.add(); // calls constructor 1
        // ob1.add(); // calls constructor 2
        ob1.add(ob2);
    }
}