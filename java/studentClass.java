public class studentClass {
    
    String FirstName;
    String LastName;
    int GradYear;
    double GPA;
    String Major;


    public studentClass(String FirstName, String LastName, int GradYear, double GPA, String Major)
    {
        this.FirstName = FirstName;
        this.LastName = LastName;
        this.GradYear = GradYear;
        this.GPA = GPA;
        this.Major = Major;
    }

    public int incGradYear()
    {
        this.GradYear = GradYear + 1;
        return GradYear;
    }
    
}
