import java.util.*;

public class BoyOrGirl {
	
	static void removeDuplicate(char str[], int n)
    {
        HashSet<Character> s = new LinkedHashSet<>(n - 1);
        for (char x : str)
            s.add(x);
 		
 		if(s.size()%2==1)
 			System.out.println("IGNORE HIM!");
 		else
 			System.out.println("CHAT WITH HER!");
        
    }

	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);
		String name;
		name=sc.next();

		char str[] = name.toCharArray();
        
        int n = str.length;
        removeDuplicate(str, n);
	}
	
}