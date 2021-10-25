import java.util.Scanner;

public class HelpfulMaths{

	public static void main(String [] args){
		Scanner sc=new Scanner(System.in);
	int one=0,two=0,three=0;
	String str;
	str=sc.nextLine();


	for (int i = 0; i < str.length(); ++i)
	{
		char temp=str.charAt(i);

		if(temp=='+')
			continue;
		else if(temp=='1')
			one++;
		else if(temp=='2')
			two++;
		else if(temp=='3')
			three++;

	}

	for (int i = 1; i <= one; ++i)
	{
		System.out.print(1);
		if(i==one && two==0 && three==0)
			break;
		else{
		System.out.print('+');
		}
	}
	for (int i = 1; i <= two; ++i)
	{
		System.out.print(2);
		if(i==two && three==0)
			break;
		else{
			System.out.print('+');
		}
	}
	for (int i = 1; i <= three; ++i)
	{
		System.out.print(3);
		if(i==three)
			break;
		else{
			System.out.print('+');
		}
	}		
	}


}