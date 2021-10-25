import java.util.*;

public class StonesOnTheTable{
	public static void main(String [] args){
		int n,count=0;
		String str;
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		str=sc.next();

		for (int i = 0; i < n; ++i)
		{
			if(i!=n-1){
			if(str.charAt(i)==str.charAt(i+1))
				count++;				
		}
		}
		System.out.print(count);	
	}
}