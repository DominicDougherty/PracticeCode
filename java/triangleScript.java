
public class triangleScript {
    public static void main(String[] args)
    {
        triangle triangleA = new triangle(15, 8, 15, 8, 8);

        double area = triangleA.findArea();
        
        System.out.println("Trianlge A len1 = " + triangleA.len1);
        System.out.println("Trianlge A len2 = " + triangleA.len2);
        System.out.println("Trianlge A len3 = " + triangleA.len3);
        System.out.println("Area of TriangleA = " + area);
        System.out.println(triangle.numSides);
    }
}
