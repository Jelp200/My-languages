// Main programm
package strings;

// Main class programm
public class Strings {
    
    // Main function
    public static void main(String[] args) {
        var user = "Jorge"; var title = "Electronic and telecomunications engineer"; var union = title + " - " + user;
        System.out.println("union = " + union);
        
        var n1 = 13; var n2 = 16;
        System.out.println(n1 + n2);
        System.out.println(n1 + n2 + " " + user);   /*
                          -------->
                          (int + int) +  + strg
        */
        System.out.println(user + n1 + n2);   /*
                          ----->
                          strg + strg + strg
        */
        System.out.println(user + (n1 + n2));   /*
                          ----->
                          strg  + (int + int)
        */
    }
    
}
