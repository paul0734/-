import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        String input = new String();
        input = sc.nextLine();
        
        StringTokenizer token = new StringTokenizer(input," ");
        System.out.println(token.countTokens());
    }
}
