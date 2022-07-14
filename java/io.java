import java.util.Scanner;

public class io {
    public static void main(String[] args){
        int studentAge = 15;
        double GPA = 3.45;
        String name = "Dominic D";
        char firstInitial = name.charAt(0);
        char lastInitial = name.charAt(8);
        boolean perfectAttendance = false;
        System.out.println(name + "'s GPA = " + GPA);

        System.out.println("Input new GPA");
        Scanner input = new Scanner(System.in);
        GPA = input.nextDouble();

        System.out.println("New GPA = " + GPA);


    }
}
