package Clases;

import java.util.Scanner;

public class Personajes {
    /***************************************************************************
    ************************ A T R I B U T O S *********************************
    ***************************************************************************/
    String piel;
    int cantidadOjos, lvlF, lvlMk, lvlD;
    double high;
    
    /*--------------------------------------------------------------------------
    -------------------- C O N S T R U C T O R E S -----------------------------
    --------------------------------------------------------------------------*/
    // Contructor vacio (Por default)
    public Personajes(){
        System.out.println("Ejecutando constructor por default");
    }
    
    // Constructor de creación de personaje
    public Personajes(String piel, int cantidadOjos, int lvlF, int lvlMk, int lvlD, double high){
        this.piel = piel;
        this.cantidadOjos = cantidadOjos;
        this.lvlF = lvlF;
        this.lvlMk = lvlMk;
        this.lvlD = lvlD;
    }
    
    // Contructor de no creacion de personaje
    public Personajes(String piel, int cantidadOjos, int lvlF, int lvlD, double high){
        this.piel = piel;
        this.cantidadOjos = cantidadOjos;
        this.lvlF = lvlF;
        this.lvlD = lvlD;
    }
    
    /*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    +++++++++++++++++++++++++++ M E T O D O S ++++++++++++++++++++++++++++++++++
    ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
    // Metodo para definir color
    public void defColores(){
        Scanner in = new Scanner(System.in);
        System.out.println("Cantidad de ojos: "); cantidadOjos = in.nextInt();
        System.out.println("Color de piel: "); piel = in.next();
    }
    
    // Metodo de fuerza
    public void medFuerza(){
        System.out.println("El personaje más fuerte es el tercero");
    }
}