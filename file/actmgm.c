/**
 ********************************************************************************
 * @file    filemgm.c
 * @author  Stefano De Caro
 * @date    2021-11-11
 * @brief   
 ********************************************************************************
 */

/************************************
 * INCLUDES
 ************************************/
#include "actmgm.h"
#include <stdio.h>
#include <string.h>

/************************************
 * EXTERN VARIABLES
 ************************************/

/************************************
 * PRIVATE MACROS AND DEFINES
 ************************************/

/************************************
 * PRIVATE TYPEDEFS
 ************************************/

/************************************
 * STATIC VARIABLES
 ************************************/

/************************************
 * GLOBAL VARIABLES
 ************************************/

/************************************
 * STATIC FUNCTION PROTOTYPES
 ************************************/

/************************************
 * STATIC FUNCTIONS
 ************************************/

/************************************
 * GLOBAL FUNCTIONS
 ************************************/
/** 
 *  CreateActivity 
 */
void createActivity(char *name)
{
    FILE *fp;
    char *fname;
    char test_str[] = "La prima stringa da scrivere sul file.";
    
    // If the file exist, tell to the user that a task
    // with the same name already exists

    // Add the correct extension to the file name
    fname = strcat(name,".txt");

    // Create the new file    
    fp = fopen(fname,"w+");
    fwrite(test_str, 1, sizeof(test_str), fp);
    fclose(fp);
}
