import java.util.Scanner;

public class WordCapitalisation{


	public static void main(String [] args){
		Scanner sc=new Scanner(System.in);
		String str;
		str=sc.next();

		if(str.charAt(0)>=65 && str.charAt(0) <=90)
			System.out.print(str);
		else
		{
			char s=Character.toUpperCase(str.charAt(0));
			str=s+str.substring(1,str.length());
			System.out.print(str);
		}
	}

}

