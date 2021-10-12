package 생활코딩;

import java.util.*;

public class Coco{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String input = new String();

        input = sc.nextLine().trim();//trim은 앞뒤 공백 제거

        if (input.isEmpty()) {//입력된 문자가 없다면
			System.out.println(0);
		} else {
			System.out.println(input.split(" ").length);
		}
    }

}
