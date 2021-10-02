import java.util.*;

public class team{

	public static void main(String [] args){
	int n,sum=0;
	Scanner sc=new Scanner(System.in);
	n=sc.nextInt();

	while(n!=0){
		int temp=0;
		for(int i=0;i<3;i++)
		{
			int x;
			x=sc.nextInt();
			if(x==1)
				temp++;
		}
		if(temp>=2){
			sum++;
		}
		n--;
	}
	System.out.println(sum);
	}

}
