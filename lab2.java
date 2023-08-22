public class lab2{
    public static void wait(int S){
        try{
            Thread.sleep(S);
        }
        catch(InterruptedException ex){
            Thread.currentThread().interrupt();
        }
    }
    public static void main(String[] args) {
        for(int i=0; i<=10; i++){
            System.out.print("\r");
            System.out.print("Hello");
            wait(1000);
            System.out.print("\r");
            System.out.print("Daksh");
            wait(1000);
        }
    }
}
