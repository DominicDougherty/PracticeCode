
package fileexample;


import java.io.File;
import java.io.IOException;

public class FileCreationExample {

    public static void main(String[] args) {
        try {
            File myFile = new File("C:\\Users\\ddarm\\desktop\\myFile.txt");
            myFile.createNewFile();

        } catch (IOException e)
        {
            e.printStackTrace();
        }

    }
    
}