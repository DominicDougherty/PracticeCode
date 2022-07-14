
package scannerexample;

import java.util.Scanner;

/**
 *
 * @author bethan
 */
public class PersonCreator {
    
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a name, age, and phone number: ");
        String name = scanner.next();
        //System.out.print("Enter their age: ");
        int age = scanner.nextInt();
        //System.out.print("Enter a phone number: ");
        long phonenumber = scanner.nextLong();

        Person person = new Person(name, age, phonenumber);
        


        
    }
    
}
