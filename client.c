#include "funcs.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include "funcs.h"

void Client(int port, char* msg);

int main(){
    int port;
    scanf("%d", %port)
    char arr[30];
    scanf("%s", arr);
    Client(port, arr);
    return 0;
}

void Client(int port, char* msg){
    int fd = Socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in adr = {0};
    adr.sin_family = AF_INET;
    adr.sin_port = htons(port); 
    Inet_pton(AF_INET, "127.0.0.1", &adr.sin_addr);
    Connect(fd, (struct sockaddr *)&adr, sizeof adr);
    write(fd, msg, 30);
    close(fd);
}


