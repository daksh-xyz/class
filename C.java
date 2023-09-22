class Add{
    int a,b;
    Add(int x, int y){
        a = x;
        b = y;
    }
    int adder(){
        return a + b;
    }
}

class Addition extends Add{
    Addition(int x, int y) {
        super(x, y);
    }

    int adder(){
        System.out.println(super.adder());
        return 0;
    }
}