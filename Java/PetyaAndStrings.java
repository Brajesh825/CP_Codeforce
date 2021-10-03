import java.util.Scanner;

public class PetyaAndStrings{

	public static void main(String [] args){

	Scanner sc=new Scanner(System.in);
	String m,n;
	int flag=0;
	m=sc.nextLine();
	n=sc.nextLine();
	
	for(int i=0;i<m.length();i++)
	{
		char tempm,tempn;
		tempm=Character.toUpperCase(m.charAt(i));
		tempn=Character.toUpperCase(n.charAt(i));

		if(tempm==tempn){
			flag=0;
		}
		else if(tempm<tempn)
		{
			flag=-1;
			break;
		}
		else{
			flag=1;
			break;
		}

	}
	System.out.println(flag);

}
}