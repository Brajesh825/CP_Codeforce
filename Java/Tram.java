import java.util.*;

public class Tram {
	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);
		int n,minCapacity=0,currCapacity=0;
		n=sc.nextInt();

		while(n>1){
			int exit,enter;
			exit=sc.nextInt();
			enter=sc.nextInt();

			currCapacity-=exit;
			currCapacity+=enter;

			if(currCapacity>minCapacity)
				minCapacity=currCapacity;
			n--;
		}
		System.out.println(minCapacity);
	}
}