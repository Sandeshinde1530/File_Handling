import java.io.File;
import java.io.IOException;

class FH1
{
    public static void main(String Args[])
    {
        File fileobj = new File("Demo.txt");

        try
        {
            fileobj.createNewFile();
        }
        catch(IOException e)
        {
            System.out.println("Unable to create this file");
            e.printStackTrace();
        }
    }
}