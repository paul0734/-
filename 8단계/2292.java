import java.util.Scanner;
 
public class Coco {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int result=1;
		int range=2;//두번째 벌집은 2부터 시작하므로 range의 시작값은 2
		
		if(n == 1) {
			result =1;
		}
		else {
			while(n >=range) {
				range = range+(6*result); 
				result++;
			}
		}
		System.out.println(result);
	}
}
