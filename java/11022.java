import java.util.Scanner;
import java.util.Vector;

class Main {
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    Vector<Integer> array = new Vector<>();

    int loopNum = sc.nextInt();
    int k=0;

    for (int i=0 ;i<loopNum ; i++){
      int firstNum = sc.nextInt();
      int secondNum = sc.nextInt();
      array.add(firstNum);
      array.add(secondNum);
    }
    
    for (int i=0 ; i<loopNum ; i++) {
      int result = array.get(k) + array.get(k+1);
      System.out.print("Case #" + (i+1) + ": ");
      System.out.println(array.get(k) + " + " + array.get(k+1) + " = " + result);
      k = k+2;
    }

    sc.close();
  }
}
