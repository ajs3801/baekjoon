import java.util.Scanner;
import java.util.Vector;

class Main {
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    Vector<Integer> array = new Vector<>();

    int loopNum = sc.nextInt();
    int relativeNum = sc.nextInt();

    for (int i=0 ; i<loopNum ; i++){
      int inputNum = sc.nextInt();
      array.add(inputNum);
    }

    for (int i=0 ; i<loopNum ; i++){
      if (array.get(i) < relativeNum) {System.out.print(array.get(i) + " ");}
    }
    

    sc.close();
  }
}
