#include <unistd.h>
#include <string.h>

int call_strncpy(char *userstring) {
    char buf[128];
    
    // WTF is strlen actually calculating?
    strncpy(buf, userstring,strlen(userstring));
    // It really should be: strncpy(buf, userstring, sizeof(buf));
    
    return 0;

}

int main() {
    char userstring[2048];
    
    read(0, userstring, sizeof(userstring));
    
    call_strncpy(userstring);
    
    return 0;
}
