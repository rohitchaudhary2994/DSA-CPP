public class Classproblem2 {
    
    public static void main(String[] args)
    {


        /*Yashika's code, time complexity is O(N3) */
         int n=8;
        for(int i = 0; i <n; i++)
        {
            
            if(i == 3 || i == 4)
                for(int j = 0; j < n; j++)
                    System.out.print("# ");
            else
                for(int j = 0; j < n;j++)
                    if(j % 3 == 2)
                        System.out.print("#");
                    else
                        System.out.print("  ");
            System.out.println("");
}
}
}
