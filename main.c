#include <stdio.h>
#include <unistd.h>
#include "actmgm.h"

/** @brief Program entry point.
 *
 * @return Returns 0 if no error occurs.
 */
int main(int argc, char *argv[])
{
    int opt;

    while((opt = getopt(argc, argv, "n:a:r:")) != -1)
    {
        
        // Parsing input argumements    
        switch(opt)
        {
            case 'n':
            // Option 'n' to create a new activity
                createActivity(optarg);
                printf("New activity created with name: %s\n",optarg);
                break;
            case '?':
            // Unrecognized option
                printf("Unrecognized option\n"); 
                break;
            default:
            // This state should never reached.
                printf("Error!");
                break;
        }
    }

    // No error 
    return 0;
}