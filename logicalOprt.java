package sample;
import java.util.Scanner;

public class logicalOprt
{
  public static void main(String[] args)
  {
    //Logical operator
    // &&
    // ||

    
  //  int a=60;
  //  int b=40;
  //   if (a<50 && b<50)
  //   System.out.println("both less than 50");
  //   else
  //   System.out.println("nah");

  //   if (a<50 || b<50)
  //   System.out.println("at least oneless than 50");
  //   else
  //   System.out.println("nah");


  // boolean isAdult =true;
  // if(isAdult)//---> default its true only, but if have to check for false then write if Adult==false
  //  System.out.println("yeah");
  // else
  //   System.out.println("nah");

  Scanner sc=new Scanner(System.in);
  //pen=10;notebook=40

   int cash =sc.nextInt();//-->variable lai store garne cash ma
   if(cash<10){
     System.out.println("cannot buy anything");
   }
    else
    {
      System.out.println("can buy");
    }

    }

  }
