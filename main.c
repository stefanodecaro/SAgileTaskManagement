#include <stdio.h>
#include <unistd.h>

/** @brief Print the get option and arguments by the function getopt.
 *
 *  @param optopt recognized option.
 *  @param optarg argument of the recognized option.
 *  @return None.
 */
void printGetopt(char optopt, char *optarg);

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
                printGetopt(optopt,optarg);
                break;
            case 'a':
            // Option 'a' to add a new task
                printGetopt(optopt,optarg);
                break;
            case 'r':
            // Option 'r' to remove an activity or a task
                printGetopt(optopt,optarg);
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


void printGetopt(char optopt, char *optarg)
{
    printf("The detected option is \'%c\' with input argument \"%s\"\n", optopt, optarg);
}