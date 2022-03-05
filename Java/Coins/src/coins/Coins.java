package coins;

import java.util.*;

public class Coins {
    public static void main(String[] args) {
        int diez = 0;
        int cinco = 0;
        int dos = 0;
        int uno = 0;
        int reserva = 0;
        int cantidad = 0;
        
        Scanner entrada = new Scanner(System.in);
        
        System.out.println("Ingrese la cantidad: $");
        cantidad =  entrada.nextInt();
        
        if (cantidad >= 1 && cantidad <= 1000){
            diez = cantidad / 10;
            reserva = cantidad % 10;
            
            cinco = reserva / 5;
            reserva = reserva % 5;
            
            dos = reserva / 2;
            reserva = reserva % 2;
            
            uno =  reserva / 1;

            System.out.println("\n\t\t DESGLOCE\n");
            System.out.println("Monedas de 10: " + diez);
            System.out.println("Monedas de 5: " + cinco);
            System.out.println("Monedas de 2: " + dos);
            System.out.println("Monedas de 1: " + uno);
            
        }else {
            System.out.println("\n\nERROR CANTIDAD INLEGIBLE...");
        }
    }
}