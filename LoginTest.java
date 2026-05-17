import java.util.Scanner;
class LoginException extends Exception {

    LoginException(String message) {
        super(message);
    }

    @Override
    public String getMessage() {
        return super.getMessage();
    }
}

public class LoginTest {
    static void login(String username, String password)
            throws LoginException {

        if(username.isEmpty())
            throw new LoginException("Username cannot be empty");

        if(password.length() < 6) {
            throw new LoginException(
                "Password must be at least 6 characters"
            );
        }

        System.out.println("Login Successful");
    }

    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        String uName, password;

        System.out.println("Enter Username: ");
        uName = scanner.nextLine();

        System.out.println("Enter Password: ");
        scanner.nextLine();
        password = scanner.nextLine();

        try {
            login(uName, password);
        }
        catch(LoginException e) {
            System.out.println(e.getMessage());
        }

        scanner.close();
    }
}