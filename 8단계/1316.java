import java.util.Scanner;
 
public class Coco {
	public static void main(String[] args) {
		
		//a 기본비용 b 상품하나당 생산비용 c 상품판매가
		//1000/70/170 이라면 170-70=100 한대당 얻는 수익은 100원
		//한대당얻는 수익에서 고정비용을 나눠주면 진짜 한대당 얻는 수익이 나옴
		//한대당 얻는 수익100 고정비용1000 => 10대부터 본전, 11대부터 이득
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
		
		int result=0;
		if(b >= c) { //개당 생산비용이 개당 판매가보다 크면 무조건 적자
			result=-1;
		}else
			result=a/(c-b) + 1;
		
		System.out.println(result);
	}
}
