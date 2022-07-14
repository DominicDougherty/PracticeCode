
package linkedlistexample;

import java.util.LinkedList;

/**
 *
 * @author bethan
 */
public class LinkedListExample {
    
    
    public static void main(String[] args) {

        LinkedList<String> myList = new LinkedList();
        myList.add("a");
        myList.add("b");
        myList.add(1, "c");
        System.out.println(myList);

        myList.remove("b");
        System.out.println(myList);
        
        
    }

    
}
