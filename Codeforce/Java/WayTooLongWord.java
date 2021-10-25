import java.util.*;

public class WayTooLongWord{

	public static void main(String [] args)
	{
		int n;
		Scanner sc=new Scanner(System.in);

		n=sc.nextInt();

		while(n!=0)
		{
			String str,temp;
			str=sc.next();
			int length=str.length();
			if(str.length()<11){
				temp=str;
			}
			else{
				String init,mid,end;
				init=String.valueOf(str.charAt(0));
				mid=String.valueOf((length-2));
				end=String.valueOf(str.charAt(length-1));
				temp=init+mid+end;
			}
			System.out.println(temp);
			n--;
		}



	}


}
