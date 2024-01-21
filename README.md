# webserv

## Guide for sockets
https://www.bogotobogo.com/cplusplus/sockets_server_client.php

## Functions permitted
### gai_strerror(), getaddrinfo(), freeaddrinfo()
https://man7.org/linux/man-pages/man3/getaddrinfo.3.html

### socketpair()
https://man7.org/linux/man-pages/man2/socketpair.2.html  
https://stackoverflow.com/questions/11461106/socketpair-in-c-unix

### socket() bind() connect() select() 
https://man7.org/linux/man-pages/man2/socket.2.html  
https://www.geeksforgeeks.org/socket-programming-cc/  
https://www.geeksforgeeks.org/socket-programming-in-cc-handling-multiple-clients-on-server-without-multi-threading/

### select() poll() epoll() (Better epoll than the others)
https://hechao.li/2022/01/04/select-vs-poll-vs-epoll/  
https://man7.org/linux/man-pages/man7/epoll.7.html  
https://suchprogramming.com/epoll-in-3-easy-steps/  
[Epoll Example](https://github.com/millken/c-example/blob/master/epoll-example.c)
