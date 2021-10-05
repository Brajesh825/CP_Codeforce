import java.util.Scanner;

public class Elephant{
	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);
		int n=sc.nextInt();
		double m=Math.ceil(n/5.0);
		n=(int)m;
		System.out.println(n);
	}
}