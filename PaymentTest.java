class PaymentException extends Exception {
    PaymentException(String message) {
        super(message);
    }
}

class LoggingException extends Exception {
    LoggingException(String message) {
        super(message);
    }
}

abstract class Payment {
    abstract void processPayment(double amount) throws PaymentException;
    abstract void refundPayment(double amount) throws PaymentException;

    void logTransaction(String message) {
        System.out.println("Transaction Log: " + message);
    }
}

abstract class SecurePayment extends Payment {
    abstract void secureLog(String message) throws LoggingException;
}

class CreditCardPayment extends SecurePayment {
    String cardNumber;
    String cardHolderName;

    CreditCardPayment(String cardNumber, String cardHolderName) {
        this.cardNumber = cardNumber;
        this.cardHolderName = cardHolderName;
    }

    @Override
    void processPayment(double amount) throws PaymentException {

        if(amount <= 0)
            throw new PaymentException("Invalid payment amount");

        System.out.println("Credit Card Payment Processed: " + amount);
    }

    @Override
    void refundPayment(double amount) throws PaymentException {
        if(amount <= 0)
            throw new PaymentException("Invalid refund amount");

        System.out.println("Credit Card Refund Processed: " + amount);
    }

    @Override
    void secureLog(String message) throws LoggingException {
        if(message == null || message.isEmpty())
            throw new LoggingException("Log message cannot be empty");
        
        System.out.println("Secure Credit Card Log: " + message);
    }

}

class PayPalPayment extends SecurePayment {
    String email;

    PayPalPayment(String email) {
        this.email = email;
    }

    @Override
    void processPayment(double amount) throws PaymentException {
        if(amount <= 0)
            throw new PaymentException("Invalid payment amount");

        System.out.println("PayPal Payment Processed: " + amount);
    }

    @Override
    void refundPayment(double amount) throws PaymentException {
        if(amount <= 0)
            throw new PaymentException("Invalid refund amount");

        System.out.println("PayPal Refund Processed: " + amount);
    }

    @Override
    void secureLog(String message) throws LoggingException {
        if(message == null || message.isEmpty())
            throw new LoggingException("Log message cannot be empty");

        System.out.println("Secure PayPal Log: " + message);
    }
}

class BankTransferPayment extends SecurePayment {
    String accountNumber;
    String bankName;

    BankTransferPayment(String accountNumber, String bankName) {
        this.accountNumber = accountNumber;
        this.bankName = bankName;
    }

    @Override
    void processPayment(double amount) throws PaymentException {
        if(amount <= 0)
            throw new PaymentException("Invalid payment amount");

        System.out.println("Bank Transfer Payment Processed: " + amount);
    }

    @Override
    void refundPayment(double amount) throws PaymentException {

        if(amount <= 0)
            throw new PaymentException("Invalid refund amount");

        System.out.println("Bank Transfer Refund Processed: " + amount);
    }

    @Override
    void secureLog(String message) throws LoggingException {
        if(message == null || message.isEmpty())
            throw new LoggingException("Log message cannot be empty");

        System.out.println("Secure Bank Log: " + message);
    }
}

public class PaymentTest {
    public static void main(String[] args) {
        CreditCardPayment credit = new CreditCardPayment("123456789","Mahad Abbas");

        PayPalPayment paypal = new PayPalPayment("mahad@gmail.com");

        BankTransferPayment bank = new BankTransferPayment("PK00998877","HBL");

        try {
            credit.processPayment(5000);
            credit.refundPayment(1000);
            credit.secureLog("Credit card transaction successful");

            System.out.println();

            paypal.processPayment(3000);
            paypal.refundPayment(500);
            paypal.secureLog("PayPal transaction successful");

            System.out.println();

            bank.processPayment(7000);
            bank.refundPayment(2000);
            bank.secureLog("Bank transaction successful");
        }

        catch(PaymentException e) {
            System.out.println("Payment Error: " + e.getMessage());
        }

        catch(LoggingException e) {
            System.out.println("Logging Error: " + e.getMessage());
        }

        catch(Exception e) {
            System.out.println("General Error: " + e.getMessage());
        }
    }
}