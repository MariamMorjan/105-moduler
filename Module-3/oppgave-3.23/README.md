Oppgavebeskrivelse 
3.23 Section 3.6.1 describes port numbers below 1024 as being well known—that is, 
they provide standard services. Port 17 is known as the quote-of-the-dayservice. 
When a client connects to port 17 on a server, the server responds with aquote for that day. 

Modify the date server shown in Figure 3.21 so that it delivers a quote oft he day rather than the current date. 
The quotes should be printableASCII characters and should contain fewer than 512 characters, althoughmultiple lines are allowed. 
Since port 17 is well known and therefore un-available, have your server listen to port 6017. 
The date client shown in Figure 3.22 can be used to read the quotes returned by your server.  
