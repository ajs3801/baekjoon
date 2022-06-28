import java.util.Scanner;
import java.util.Vector;

class Main {
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    Vector<Integer> array = new Vector<>();

    int firstNum = -1;
    int secondNum = -1;
    int loopNum = 0;

    while (sc.hasNextInt()){
      firstNum = sc.nextInt();
      secondNum = sc.nextInt();
      array.add(firstNum);
      array.add(secondNum);
      loopNum++;
    }

    for (int i=0 ; i<(loopNum) ; i++){
      System.out.println(array.get(i*2)+array.get(i*2+1));
    }

    sc.close();
  }
}
