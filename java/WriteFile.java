import java.io.FileWriter;
import java.io.IOException;

class WriteFile
{
    public static void main(String Args[])
    {

        try
        {
            FileWriter writer = new FileWriter("Demo.txt");
            writer.write("Welcome to my world  \n Everyone to our Java File Handlig series");
            System.out.println("Successfully written to the File.");
            writer.close();
        }
        catch(IOException e)
        {
            System.out.println("Unable to perform  this operation");
            e.printStackTrace();
        }
    }
}