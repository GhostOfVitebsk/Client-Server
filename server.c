#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include "funcs.h"

void Server(int port);

int main(){
    int port;
    scanf("%d", %port)
    Server(port);
    return 0;
}

void Server(int port){
    int server = Socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in adr = {0};
    adr.sin_family = AF_INET;
    adr.sin_port = htons(port);
    Bind(server, (struct sockaddr *)&adr, sizeof adr);
    Listen(server, 1);
    socklen_t adrlen = sizeof adr;
    int fd = Accept(server, (struct sockaddr *) &adr, &adrlen);
    ssize_t nread;
    char buf[100];
    nread = read(fd, buf, 30);
    write(STDOUT_FILENO, buf, 30);
    sleep(1);    
    close(fd);
    close(server);
}

