import java.util.Scanner;

public class DominoPiling{
	public static void main(String [] args){
		Scanner sc=new Scanner(System.in);
		int n,m,product;
		n=sc.nextInt();
		m=sc.nextInt();
		product=m*n;
		System.out.println((int)Math.floor(product/2));

	}
}