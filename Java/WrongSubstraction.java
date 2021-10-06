import java.util.*;

public class WrongSubstraction{
	public static void main(String [] args){
		Scanner sc=new Scanner(System.in);
		int n,k;
		n=sc.nextInt();
		k=sc.nextInt();

		while(k>0){
			if(n%10!=0)
				n--;
			else
				n=n/10;

			k--;
		}
		System.out.println(n);	
	}
}