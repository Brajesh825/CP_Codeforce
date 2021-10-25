import java.util.Scanner;

public class BeautifulMatrix {
	static int mod(int n){
	return n>0?n:(-n);
}

public static void main(String [] args){

	Scanner sc=new Scanner(System.in);
	int n=0,i=0,j=0,steps=0;
	for (i = 0; i < 5; ++i)
	{
		for (j = 0; j <5 ; ++j)
		{
			n=sc.nextInt();
			if(n==1){
				break;
			}	
		}
		if(n==1){
				break;
		}	
	}
	steps=mod(2-i);
	steps+=mod(2-j);
	System.out.println(steps);

}	
	
}