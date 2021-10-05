import java.util.Scanner;

public class BearAndBigBrother {
	
	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);
		int limak,bob,year=0;
		limak=sc.nextInt();
		bob=sc.nextInt();

		while(bob>=limak){
			limak*=3;
			bob*=2;
			year++;
		}
		System.out.print(year);
	}
}