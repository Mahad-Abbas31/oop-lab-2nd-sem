import java.util.Scanner;

public class Student {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int students;

        try{
            System.out.println("Enter the NO. of Students: ");
            students = scanner.nextInt();
            
            if(students > 55){
                throw new Exception("There can't be more than 55 students in single class");
            }
        }

        catch(Exception e){
            System.out.println(e);
        }
        
        System.out.println("Successfull");

    }
}

class CustomException extends Exception{
    public CustomException(String  message){
        super(message);
    }
}
