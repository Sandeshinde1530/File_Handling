import java.io.File;
import java.io.IOException;
import java.util.*;

class ReadFile
{
    public static void main(String Args[])
    {
        File fobj = new File("ReadFile.java");

        try
        {
            Scanner sobj = new Scanner(fobj); 
            while(sobj.hasNextLine())
            {
                String Line = sobj.nextLine();
                System.out.println(Line);
            }
            sobj.close();
           
        }
        catch(IOException e)
        {
            System.out.println("Unable to perform  this operation");
            e.printStackTrace();
        }
    }
}