import java.util.Scanner;

class myException extends Exception{
    public myException(String str){
        super(str);
    }
}

class User{
    static void validate(String str) throws myException{
        if(str.equalsIgnoreCase("bruh")){
            System.out.println("Welcome to the program bruh");
        }else{
            throw new myException("Invalid input !");
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string: ");
        String str = sc.nextLine();
        try{
            validate(str);
        }catch(myException ex){
            System.out.println(ex.getMessage());
        }
    }
}