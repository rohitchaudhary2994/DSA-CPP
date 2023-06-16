import java.util.Scanner;
public class Classproblem1
{
  public static void main (String[]args)
  {
             System.out.println("Give me a number"); 
              Scanner myObj = new Scanner(System.in);  // Create a Scanner object
        int n = myObj.nextInt();

    // for(int i=1;i<=15;i++){
    //     System.out.println(n+" X "+i+" = "+n*i);
    // }
             for(int i=1;i<=n;i++){
                 
                 for(int k=n-i;k>=1;k--){
                     System.out.print(" ");
                 }
                 for(int j=1;j<=i;j++){
                     System.out.print("* ");
                 }
                 System.out.println();
             }
             for(int i=n-1;i>=1;i--){
                 
                 for(int k=n-i;k>=1;k--){
                     System.out.print(" ");
                 }
                 for(int j=1;j<=i;j++){
                     System.out.print("* ");
                 }
                 System.out.println();
             }


            //  for(int m=n;m<=1;m--){
            //      for(int b=1;b<=m;b++){
            //          System.out.print("*");
            //      }
            //      System.out.println();
            //  }


                 /* Challenge 1 */
//     System.out.println ("Available Products:");
//     System.out.println ("1. Coke - $1.5");
//     System.out.println ("2. Sprite - $1.25");
//     System.out.println ("3. Water - $1.0");

//     double coke = 1.5, sprite = 1.25, water = 1;
//       System.out.print ("Select a Product(1-3):");
//     Scanner myObj = new Scanner (System.in);
//     int n = myObj.nextInt ();
    

//       System.out.print ("Enter Amount inserted: $");
//     Scanner myObj1 = new Scanner (System.in);
//     int money = myObj1.nextInt ();


//     switch (n)
//       {

//       case 1:
// 	if (money > 1.5)
// 	  {
// 	    System.out.println ("Thankyou for purchasing Coke.");
// 	    System.out.println ("Change: " + (money - coke));
// 	  }
// 	else
// 	  {
// 	    System.out.println ("Sorry, Insufficient Balance");
// 	  }
// 	break;
//       case 2:
// 	if (money > 1.25)
// 	  {
// 	    System.out.println ("Thankyou for purchasing Sprite.");
// 	    System.out.println ("Change: " + (money - sprite));
// 	  }
// 	else
// 	  {
// 	    System.out.println ("Sorry, Insufficient Balance");
// 	  }
// 	break;
//       case 3:
// 	if (money > 1.0)
// 	  {
// 	    System.out.println ("Thankyou for purchasing Water.");
// 	    System.out.println ("Change: " + (money - water));
// 	  }
// 	else
// 	  {
// 	    System.out.println ("Sorry, Insufficient Balance");
// 	  }
// 	break;

//       default:
// 	System.out.println ("Invalid Value, Please try again.");
//       }





  /* Challenge 2 */
  
//   System.out.println("Welcome to the Haunted Hourse!");
//   System.out.println();
//   System.out.println();
//   System.out.println("You are in a spooky kitchen. You see a table with a knife.");
//   System.out.println("Actions:");
//   System.out.println("1. Look Around");
//   System.out.println("2. Take Item");
//   System.out.println("3. Go to another room");
//   System.out.println("4. Quit Game");
//   System.out.print("Enter your action: ");
  
//   Scanner myObj = new Scanner (System.in);
//     int n = myObj.nextInt ();
    
//   switch (n)
//       {

//     case 1:
// 	System.out.println ("You look at other items present in the room.");
// 	break;
      
//     case 2:
// 	System.out.println ("You take the item.");
// 	break;
	
// 	case 3:
// 	System.out.println ("You go the next room.");
// 	break;
	
// 	case 4:
// 	System.out.println ("Game Over, Thanks for playing.");
// 	break;

//       default:
// 	System.out.println ("Invalid Value, Please try again.");
//       }


/* Question 2, via classes */


  }
}