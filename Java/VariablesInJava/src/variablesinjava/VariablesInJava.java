// Main programm
package variablesinjava;
// Main class programm
public class VariablesInJava {
    
    // Main function
    public static void main(String[] args) {
        // Integer type
        int myFistVariable = 13;
        System.out.println(myFistVariable);                                     // "sout"
        // We can modify the value of the variable arround all the programm
        myFistVariable = 16;
        System.out.println(myFistVariable);
        
        // String type (Is a Java class)
        String mySecondVariable = "Hi ESIME Z how are you?";
        System.out.println(mySecondVariable);
        
        // We can modify the value of the variable arround all the programm
        mySecondVariable = "Hi Prepa 7 of the UNAM";
        System.out.println(mySecondVariable);                                   // With CTRL + CLICK we can found the declaration of the variable.
        
        // We can use var - Inference of Java types
        
        var varVariable = 5; var varVariable2 = "Mexico";                       // int varVariable = 5;
        
        System.out.println(varVariable);
        System.out.println("varVariable2 = " + varVariable2);                   // "soutv"
        
        /*
            To use "var" we need a version of JDK > to 10 
        */
        
        
    }
    
}
