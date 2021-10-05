import java.util.Scanner;

public class SoldierAndBanana{
	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);

		int k,n,w,cost=0,temp;
		k=sc.nextInt();
		n=sc.nextInt();
		w=sc.nextInt();

		for (int i = 1; i <= w; ++i)
		{
			cost+= i*k;
		}
		temp=cost-n;

		if(temp>0)
			System.out.println(temp);
		else
			System.out.println(0);
	}
}