import java.util.Scanner;

public class Main {
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    
    int TestCase = sc.nextInt();

    for (int i=0 ; i<TestCase ; i++){
      int studentNum = sc.nextInt();
      int[] array = new int[studentNum];
      
      for (int j=0 ; j<studentNum ; j++) {array[j] = sc.nextInt();}
      double average = 0.000;
      double upaverageNum = 000;

      for (int j=0 ; j<studentNum ; j++){
        average = average + array[j];
      }

      average = average/(double)studentNum;

      for (int j=0 ; j<studentNum ; j++){
        if (array[j] > average) {upaverageNum += 1;}
      }

      double percentage = (upaverageNum/(double)studentNum)*100;
      double result = Math.round(percentage*1000)/1000.0;

      StringBuffer sb = new StringBuffer();
      sb.append(String.format("%.3f",result));
      System.out.println(sb.toString());
    }


    sc.close();
  }
}
