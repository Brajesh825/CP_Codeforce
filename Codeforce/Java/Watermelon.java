
import java.util.*;

public class Watermelon{

static void divideMelons(int n)
{
	String str;
	if(n==1 || n==2)
		str="NO";
	else if(n%2==0)
		str="YES";
	else
		str="NO";

	System.out.println(str);

}

public static void main(String [] args)
{
	int n;
	Scanner sc=new Scanner(System.in);
	n=sc.nextInt();
	divideMelons(n);
	
}

}
