import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        String input1 = sc.next();
        String input2 = sc.next();
        
        int num1 = reverse(input1);
        int num2 = reverse(input2);
        if(num1 > num2){
           System.out.println(num1);
        }else if(num2 > num1)
           System.out.println(num2);
        
        
    }
    public static int reverse(String st){
        String re="";
        for(int i=st.length()-1; i>=0; i--){
            re+=st.charAt(i);//string타입은 더해지지않고 그대로 문자가 합쳐짐 123 -> 6(x) 321(o)
        }
        int number = Integer.parseInt(re);
        return number;
    }
}
