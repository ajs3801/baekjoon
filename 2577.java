import java.util.Scanner;

public class Main {
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    
    int[] numArray = new int[10];
    //자바는 0으로 초기화할 필요 없음
    for (Integer i:numArray) {i=0;}

    int num1 = sc.nextInt();
    int num2 = sc.nextInt();
    int num3 = sc.nextInt();

    String result = Integer.toString(num1*num2*num3);
    
    for (int i=0 ; i<result.length() ; i++){
      int num = result.charAt(i) - '0';
      System.out.println(num);
      numArray[num]++;
    }
    //logical error (i is not an index!)
    for (Integer i:numArray) {System.out.println(i);}

    sc.close();
  }
}
