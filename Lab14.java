interface InterfaceA {
    void methodA();        
    void sameMethod1();    
    void sameMethod2();    
}

interface InterfaceB {
    void methodB();        
    void sameMethod1();    
    void sameMethod2();    
}

class ChildClass implements InterfaceA, InterfaceB {

    public void methodA() {
        System.out.println("Method A from InterfaceA");
    }

    public void methodB() {
        System.out.println("Method B from InterfaceB");
    }

    public void sameMethod1() {
        System.out.println("Same Method 1 defined in ChildClass");
    }

    public void sameMethod2() {
        System.out.println("Same Method 2 defined in ChildClass");
    }
}

public class Lab14 {
    public static void main(String[] args) {
        ChildClass obj = new ChildClass();

        obj.methodA();
        obj.methodB();
        obj.sameMethod1();
        obj.sameMethod2();
    }
}