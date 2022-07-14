public class triangle {
    static int numSides = 3;

    double base;
    double height;
    double len1;
    double len2;
    double len3;

    public triangle(double base, double height, double len1, double len2, double len3)
    {
        this.base = base;
        this.height = height;
        this.len1 = len1;
        this.len2 = len2;
        this.len3 = len3;
    }

    public double findArea(){
        return (this.base * this.height)/2;
    }
    
}
