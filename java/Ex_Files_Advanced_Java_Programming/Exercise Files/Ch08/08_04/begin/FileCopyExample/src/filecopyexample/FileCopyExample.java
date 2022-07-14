/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package filecopyexample;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

/**
 *
 * @author Bethan Palmer
 */
public class FileCopyExample {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here

        try{Path source = Paths.get("example.txt");
        Path dest = Paths.get("new.txt");
        Files.copy(source, dest);}
        catch(IOException ex){
            ex.printStackTrace();
        }
    }
    
}
