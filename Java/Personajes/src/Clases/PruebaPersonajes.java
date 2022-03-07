package Clases;

import java.util.Scanner;

public class PruebaPersonajes {
    public static void main(String[] args) {
        int opc, opc2;
        Scanner var = new Scanner(System.in);
        
        // Creación de objetos y contructores
        Personajes p1 = new Personajes("Amarillo", 2, 25000, 80000, 5000, 2.50);
        Personajes p2 = new Personajes("Morado", 1, 8000, 9, 500, 5.00);
        Personajes p3 = new Personajes("Rojo", 4, 869555, 90000, 0, 1.92);
        
        // Menú de personajes
        System.out.println("1.- Personaje A.");
        System.out.println("2.- Personaje B.");
        System.out.println("3.- Personaje C.");
        System.out.println("Seleccione un personaje: "); opc = var.nextInt();
        
        switch (opc){
            case 1:
                System.out.println("Desea cambiar el color de la piel y cantidad de ojos? (1 = SI/0 = NO): "); opc2 = var.nextInt();
                if(opc2 == 1){
                    p1.defColores();
                }else{
                    p1.medFuerza();
                }
                break;
            case 2:
                System.out.println("Desea cambiar el color de la piel y cantidad de ojos? (1 = SI/0 = NO): "); opc2 = var.nextInt();
                if(opc2 == 1){
                    p2.defColores();
                }else{
                    p2.medFuerza();
                }
                break;
            case 3:
                System.out.println("Desea cambiar el color de la piel y cantidad de ojos? (1 = SI/0 = NO): "); opc2 = var.nextInt();
                if(opc2 == 1){
                    p3.defColores();
                }else{
                    p3.medFuerza();
                }
                break;
            default:
                System.out.println("De una opción correcta...");
                break;
        }
    }
}