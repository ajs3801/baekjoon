import java.util.Scanner;

class Main {
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);

    String first;
    String second;

    first = sc.next();
    second = sc.next();
    
    int firstNum = Integer.parseInt(first);
    int result = 0;

    for (int i=0 ; i<3 ; ++i){
      int operand = second.charAt(2-i) - '0';
      int curCalculation = firstNum * operand;
      System.out.println(curCalculation);

      result = result + (curCalculation*((int)Math.pow(10,i))); //형변환 꼭!
    }

    System.out.println(result);
  }
}
