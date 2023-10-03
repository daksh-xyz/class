interface printable1{
    void print();
}
interface printable2 extends printable1{
    void print2();
}
class call implements printable2{
    public void print(){
        System.out.print("Hello ");
    }
    public void print2(){
        System.out.println("World!");
    }
    public static void main(String[] args) {
        call ob = new call();
        ob.print();
        ob.print2();
    }
}

interface Drawable{
    void draw();
}

class Circle implements Drawable{
    public void draw(){
        System.out.println("Draw Circle !");
    }
}

class Rectangle implements Drawable {
    public void draw(){
        System.out.println("Draw Rectangle !");
    }
}

class Testclass{
    public static void main(String[] args) {
        Drawable cd = new Circle();
        Drawable rd = new Rectangle();
        Circle c = new Circle();
        Rectangle r = new Rectangle();
        cd.draw();
        rd.draw();
        c.draw();
        r.draw();
        cd = new Rectangle();
        cd.draw();
    }
}