import java.net.*;
import java.io.*;
public class QuoteServer
{
public static void main(String[] args) {
try {
ServerSocket sock = new ServerSocket(6013);
// now listen for connections
while (true) {
Socket client = sock.accept();
PrintWriter pout = new
PrintWriter(client.getOutputStream(), true);
// write the Quote of the Day to the socket
//change value of quote according to youe choice
String quote = "Quote of the day";
pout.println(quote.toString());
// close the socket and resume
// listening for connections
client.close();
}
}
catch (IOException ioe) {
System.err.println(ioe);
}
}
}
