import java.util.Scanner;


public class multiplechoice {
    
    public static void main(String[] args){
        String question = "What is the integral of e^x^2?";
        String answer1 = "1.) 0";
        String answer2 = "2.) e^x^2";
        String answer3 = "3.) infinite";

        System.out.println(question);
        System.out.println(answer1);
        System.out.println(answer2);
        System.out.println(answer3);

        Scanner input = new Scanner(System.in);
        int answer = input.nextInt();

        if(answer == 2)
        {
            System.out.println("Correct, the answer was 2");
        }
        else{
            System.out.println("Incorrect, the answer was 2");
        }




    }

}
