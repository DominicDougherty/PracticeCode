import java.util.Scanner;

public class functionexample {

    public static void announce(){
        System.out.println("Waiting for developer tea time...");
        System.out.println("Type in a word and press enter");
        Scanner input = new Scanner(System.in);
        input.next();
        System.out.println("It's tea time");
    }


    public static void main(String[] args){
        announce();
    } 
    
}
