import java.util.*;

public class BitCpp{
	public static void main(String [] args){
	int n,count=0;
	Scanner sc=new Scanner(System.in);
	n=sc.nextInt();
	sc.nextLine();
	for(int i = 0; i < n; ++i) {
		String temp;
		temp=sc.nextLine();	
		if(temp.equals("X++") || temp.equals("++X")){
			count++;
		}
		else{
			count--;
		}
	}
	System.out.println(count);
	}
}