import java.util.Scanner;
public class whileloop{
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        boolean isOnRepeat = true;

        while(isOnRepeat){
            System.out.println("PLaying currentsong");
            System.out.println("Take song off repeat? If so, type Yes");
            String userInput = input.next();

            if(userInput.equals("yes"))
            {
                isOnRepeat = false;
            }
        }
    }
}
