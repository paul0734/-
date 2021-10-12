import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String input = sc.next();
        int arr[] = new int[26];
        int max=0;
        char result='?';
        
        for(int i=0; i<input.length(); i++){
            if('A' <= input.charAt(i) && input.charAt(i) <= 'Z'){
                arr[input.charAt(i) - 'A']++;
            }else
                arr[input.charAt(i) - 'a']++;
        }
        for(int i=0; i<26; i++){
            if(arr[i]>max){
                max=arr[i];
                result = (char)(i+'A');
            }
            else if(arr[i]==max){
                result = '?';
            }
        }
        System.out.println(result);
    }
}
