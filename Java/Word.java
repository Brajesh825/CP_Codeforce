import java.util.*;

public class Word{
	public static void main(String [] args)
	{
		Scanner sc=new Scanner(System.in);
		String str;
		str=sc.next();

		int countUpper=0;
		int countLower=0;

		for (int i = 0; i < str.length(); ++i)
		{
			if(str.charAt(i)>='a' && str.charAt(i) <='z')
				countLower++;
			else
				countUpper++;
		}

		if(countLower>=countUpper){
			for (int i = 0; i < str.length(); ++i)
			{
				System.out.print(Character.toLowerCase(str.charAt(i)));
			}
		}
			
		else {
			for (int i = 0; i < str.length(); ++i)
			{
				System.out.print(Character.toUpperCase(str.charAt(i)));
			}
		}
	}
}