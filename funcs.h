#ifndef ERPROC_H
#define ERPROC_H

#include <sys/types.h>
#include <sys/socket.h>

void Client(int port, char* msg);
void Get(char* url);
void Server(int port);
void Crypt(char* data);
void Listen(int sockfd, int backlog);
int Socket(int domain, int type, int protocol);
void Inet_pton(int af, const char *src, void *dst);
int Accept(int sockfd, struct sockaddr *addr, socklen_t *addrlen);
void Bind(int sockfd, const struct sockaddr *addr, socklen_t addrlen);
void Connect(int sockfd, const struct sockaddr *addr, socklen_t addrlen);

#endif
