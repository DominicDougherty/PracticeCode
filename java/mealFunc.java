public class mealFunc {

    public static double total(double lmp, double tipRate, double taxRate){
        double tip = tipRate * lmp;
        double tax = taxRate*lmp;
        double result = lmp + tip + tax;
        System.out.println("Your total meal price is " + result);
        return result;

    }
    public static void main(String[] args){


        double bill = total(100, 0.2, 0.08);

        System.out.println("Everyone owes " + bill/5);

    }
    
}
