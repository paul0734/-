import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int count = n;
        for(int i=0; i<n; i++){
            String word = sc.next();
            boolean arr[] = new boolean[26]; //각 알파벳에 대해 카운트하기 위해 선언, boolean타입의 기본값은 false
            for(int j=1; j<word.length(); j++){
                if(word.charAt(j) != word.charAt(j-1)){//이전글자와 현재글자가 같지않다면
                    if(arr[word.charAt(j)-'a'] == true){ //이전글자가 true라면(이미 나왔던 알파벳이라면) - 그룹문자가 아님
                        count--;
                        break;
                    }
                    arr[word.charAt(j-1) -'a'] = true; //이전글자가 false라면(처음나오는 알파벳이라면) 해당 알파벳의 배열을 true로 변경
                }
            }
        }
        System.out.println(count);
    }
}
