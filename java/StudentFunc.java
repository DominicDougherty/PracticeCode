public class StudentFunc {
    public static void main(String[] args)
    {
        studentClass DD = new studentClass("Dominic", "Dougherty", 2020, 3.35, "Aerospace Engineering");
        System.out.println("current grad year = " + DD.GradYear);
        DD.incGradYear();
        System.out.println("New grad year = " + DD.GradYear);

    }
}
