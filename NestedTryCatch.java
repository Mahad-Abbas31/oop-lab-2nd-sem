import java.util.Scanner;

public class NestedTryCatch {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        try {
            try {
                System.out.print("Enter first number: ");
                int a = scanner.nextInt();

                System.out.print("Enter second number: ");
                int b = scanner.nextInt();

                int result = a / b;
                System.out.println("Result: " + result);
            }
            catch(ArithmeticException e) {
                System.out.println("Arithmetic Exception: Cannot divide by zero");
            }
        }
        catch(Exception e) {
            System.out.println("Outer Catch: Invalid input or general error");
        }

        scanner.close();
    }
}