#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int 
main(int argc, char *argv[])
{
    if(argc < 2){
        cps();
        exit();
    }

    // Check if user has a flag -l 
    if (strcmp(argv[1], "-l") == 0){
        // Enter infinite loop
        while(1){
            cps();
            sleep(300);
        }
    }
}