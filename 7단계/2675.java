import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int k = sc.nextInt();
		
		for(int i=0; i<k; i++) {
			int r = sc.nextInt();
			String s = sc.next();
			
			for(int j=0; j<s.length(); j++) {
				for(int p=0; p<r; p++) {
				System.out.print(s.charAt(j));
				}
			}System.out.println();
		}
	}

}
