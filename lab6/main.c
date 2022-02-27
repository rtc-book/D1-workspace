/* Lab #<number> - <your name> */

/* includes */
#include "stdio.h"
#include "MyRio.h"
#include "D1.h"
#include <string.h>
#include "emulate.h"

/* prototypes */
//double	double_in(char *prompt);

/* definitions */

int main(int argc, char **argv)
{
	NiFpga_Status status;

    status = MyRio_Open();		    /*Open the myRIO NiFpga Session.*/
    if (MyRio_IsNotSuccess(status)) return status;

    //my code here
    printf("Lab #6 Hello World!\n");			// Print to Console
    printf_lcd("\fLab #6 Hello World!\n");		// Print to LCD screen

	status = MyRio_Close();	 /*Close the myRIO NiFpga Session. */
	return status;
}
