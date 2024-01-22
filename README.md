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

### HTTP status codes
In response to HTTP requests, servers often issue response codes, indicating the request is being processed, there was an error in the request or that the request is being redirected. Common response codes include:

* 200 OK. This means that the request, such as GET or POST, worked and is being acted upon.
* 300 Moved Permanently. This response code means that the URL of the requested resource has been changed permanently.
* 401 Unauthorized. The client, or user making the request of the server, has not been authenticated.
* 403 Forbidden. The client's identity is known but has not been given access authorization.
* 404 Not Found. This is the most frequent error code. It means that the URL is not recognized or the resource at the location does not exist.
* 500 Internal Server Error. The server has encountered a situation it doesn't know how to handle.
