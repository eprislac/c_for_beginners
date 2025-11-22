#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netdb.h>
#include <netinet/in.h>
#include <unistd.h>

int getaddrinfo(const char *node, // e.g. URL or IP
                const char *service, // e.g. port number
                const struct addrinfo *hints,
                struct addrinfo **res);
int socket(int domain, int type, int prtocol);

int status;
struct addrinfo hints, *res;
struct addrinfo *servinfo;  // will point to the results
int sockfd;
//

memset(&hints, 0, sizeof hints); // make sure the struct is empty
hints.ai_family = AF_UNSPEC;     // don't care IPv4 or IPv6
hints.ai_socktype = SOCK_STREAM; // TCP stream sockets
hints.ai_flags = AI_PASSIVE;     // fill in my IP for me

if ((status = getaddrinfo(NULL, "3490", &hints, &servinfo)) !- 0) {
    fprintf(stderr, "getaddrinfo error: %s\n", gai_strerror(status));
    exit(1);
}

int s;
struct addrinfo hints, *res;

// do the lookup
// [pretend we already filled out the "hints" struct]
// getaddrinfo("www.example.com", "http", &hints, &res);
getaddrinfo(NULL, "3490", &hints, &res);

// again, you should do error-checking on getaddrinfo(), and walk
// the "res" linked list looking for valid entries instead of just
// assuming the first one is good (like many of these examples do).
// See the section on client/server for real examples.

// s = socket(res->ai_family, res->ai_socktype, res->ai_protocol);
sockfd = socket(res->ai_family, res->ai_socktype, res->ai_protocol);

int bind(int sockfd, struct sockaddr *my_addr, int addrlen);

// servinfo now points to a linked list of 1 or more struct addrinfo
//
// ... do everything until you don't need servinfo anymore ...
// 
freeaddrinfo(servinfo); // free the linked-list


