import java.util.Scanner;

public class Rules {
    static int calculateParity(String binaryMessage, int rule) {
        int count = 0;
        if(rule == 0){
            for (char bit : binaryMessage.toCharArray()) {
                if (bit == '1') {
                    count++;
                }
            }
            return (count % 2 == 0) ? 0 : 1;
        }
        else{
            for (char bit : binaryMessage.toCharArray()) {
                if (bit == '0') {
                    count++;
                }
            }
            return (count % 2 == 0) ? 1 : 0;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Choose rule for the message (0 or 1): ");
        int rule = sc.nextInt();
        sc.nextLine(); 
        System.out.print("Enter your message (7 bits, binary): ");
        String binaryMessage = sc.nextLine();
        if (binaryMessage.length() != 7 || !binaryMessage.matches("[01]+")) {
            System.out.println("Invalid binary message, please enter an 8-bit binary value.");
            return;
        }
        if (rule == 0 || rule == 1) {
            int parityBit = calculateParity(binaryMessage, rule);
            String encodedMessage = binaryMessage + parityBit;
            System.out.println("Encoded message with "+rule+"parity: " + encodedMessage);
        }
        else {
            System.out.println("Invalid rule selected...");
        }
    }
}
