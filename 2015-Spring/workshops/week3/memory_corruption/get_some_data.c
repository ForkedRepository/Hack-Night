#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int getDataLen(int sock) {
    int length = 0;

    scanf("%d", &length);

    return sock;
}

char* getData(int sock) {
    unsigned int len;
    char *buf = NULL;

    len = getDataLen(sock);
    buf = malloc(len + 1);

    read(sock, buf, len);

    buf[len+1] = 0x0;

    return buf;
}

int main() {
    char *buf = NULL;

    buf = getData(0);

    printf("%s", buf);

    return 0;
}

