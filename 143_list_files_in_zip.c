#include <stdio.h>
#include <stdlib.h>

int main() {
    char zipname[100], cmd[200];
    scanf("%s", zipname);
    sprintf(cmd, "unzip -l %s", zipname); // list files
    system(cmd);
    return 0;
}
