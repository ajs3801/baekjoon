//https://www.acmicpc.net/problem/1546
//1526번
import java.util.Scanner;

public class Main {
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    
    int num = sc.nextInt();
    double[] score = new double[num];
    double biggest = score[0];
    for (int i=0 ; i<num ; i++) {
      score[i] = sc.nextInt();
      if (score[i] > biggest) {biggest = score[i];}
    }

    double sum = 0;
    for (int i=0 ; i<num ; i++){
      score[i] = (score[i]/biggest)*100.0;
      sum = sum + score[i];
    }

    System.out.println(sum/(double)num);

    sc.close();
  }
}
