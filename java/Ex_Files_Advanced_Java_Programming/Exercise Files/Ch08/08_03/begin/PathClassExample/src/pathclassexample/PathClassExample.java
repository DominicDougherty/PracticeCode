/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pathclassexample;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

/**
 *
 * @author Bethan Palmer
 */
public class PathClassExample {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here

        try{ Path path = Paths.get("C:\\Users\\ddarm\\example\\java\\Ex_Files_Advanced_Java_Programming\\Exercise Files\\Ch08\\08_03\\begin\\PathClassExample\\Hello World.txt");
        Files.deleteIfExists(path);}
        catch(IOException ex){}
    }
    
}
