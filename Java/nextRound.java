import java.util.*;

public class nextRound{

	public static void main(String [] args){
	Scanner sc=new Scanner(System.in);
	int n,k,count=0;
	n=sc.nextInt();
	k=sc.nextInt();

	int arr[] = new int[n];
	for(int i=0;i<n;i++){
		arr[i]=sc.nextInt();
	}

	for(int i=0;i<k;i++){
		if(arr[i]>0)
			count++;
		else
			break;
	}
	if(count==k){
	for(int i=k;i<n;i++)
	{
		if(arr[i]==arr[i-1])
			count++;
		else
			break;
	}
	}
 
	System.out.println(count);

	}

}