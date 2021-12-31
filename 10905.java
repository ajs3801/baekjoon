import java.util.Scanner;
import java.util.Vector;

class Main {
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);

    Vector<Integer> array = new Vector<>();

    int loopNum = sc.nextInt();

    for (int i=0 ;i<loopNum ; i++){
      int firstNum = sc.nextInt();
      int secondNum = sc.nextInt();
      array.add(firstNum + secondNum);
    }

    for (int i=0 ; i<loopNum ; i++) {System.out.println(array.get(i));}
  }
}
