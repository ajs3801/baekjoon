import java.util.Scanner;

public class Main {
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    
    int loopNum = sc.nextInt();
    int[] resultArray = new int[loopNum];
    sc.nextLine();
    
    for(int i=0 ; i<loopNum ; i++){
      String cmd = sc.nextLine();
      resultArray[i] = findresult(cmd.length(), cmd);
    }
    printResult(resultArray,loopNum);
    sc.close();
  }

  public static int findresult(int length, String target){
    int add = 1;
    int result = 0;

    for (int i=0 ; i<length ; i++){
      if (target.charAt(i) == 'O') {
        result = result + add;
        add = add + 1;
      }

      else {
        add = 1;
      }
    }
  
    return result;
  }

  public static void printResult(int[] array,int num){
    for (int i=0 ; i<num ; i++){
      System.out.println(array[i]);
    }
  }
}
