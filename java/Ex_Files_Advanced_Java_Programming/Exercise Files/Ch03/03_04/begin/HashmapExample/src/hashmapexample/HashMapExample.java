
package hashmapexample;

import java.util.HashMap;

/**
 *
 * @author bethan
 */
public class HashMapExample {
    
    public static void main(String[] args) {  
        
        HashMap<String, Integer> phonebook = new HashMap<>();
        phonebook.put("Kevin", 12345);
        phonebook.put("Jill", 98765);
        phonebook.put("Brenda", 123123);
        phonebook.put("Brenda", 222333);
        if(phonebook.containsKey("Brenda")){
            phonebook.remove("Brenda");
        }
        System.out.println(phonebook);
        
    }
    
}