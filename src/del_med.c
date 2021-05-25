#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <process.h>
#include <stdlib.h>
#include <dos.h>

#include "../inc/branch.h"
#include "../inc/uniqueID.h"
#include "../inc/patientType.h"
#include "../inc/departmentType.h"
#include "../inc/add_record.h"
#include "../inc/edit_record.h"
#include "../inc/search_record.h"
#include "../inc/delete_record.h"
#include "../inc/diagnosisType.h"
#include "../inc/medicineType.h"
#include "../inc/appointmentType.h"
#include "../inc/reception.h"
#include "../inc/pharmacy.h"
#include "../inc/pharmacy2.h"
#include "../inc/pharmacy_search.h"
#include "../inc/diagnosis.h"
#include "../inc/diagnosis_search.h"
#include "../inc/addDoctorFees.h"
#include "../inc/addDiagnosisFees.h"
#include "../inc/addPharmaFees.h"
#include "../inc/del_med.h"
#include "../inc/hms.h"

void del_med()
{                                //main begins
    FILE *pharmacy1, *pharmacy2; //two file names pharmacy1, pharmacy2
    char filename[40];
    char ch;
    int delete_line, temp = 1;
    printf("Enter file name : ");
    scanf("%s", &filename);            //Enter the name of the file
    pharmacy1 = fopen(filename, "r"); //opening the file in readmode
    ch = getc(pharmacy1);
    while (ch != EOF) //while loop runs till the end of the file
    {
        printf("%c", ch);
        ch = getc(pharmacy1);
    }
    //rewind
    rewind(pharmacy1); //set the indicator at the begining of the file
    printf(" \n Enter line number of the Med to be deleted:");
    scanf("%d", &delete_line);
    //open new file in write mode
    pharmacy2 = fopen("replica.c", "w");
    ch = getc(pharmacy1);
    while (ch != EOF)
    {
        ch = getc(pharmacy1);
        if (ch == '\n')
            temp++;
        //except the line to be deleted
        if (temp != delete_line)
        {
            //copy all lines in file replica.c
            putc(ch, pharmacy2);
        }
    }
    fclose(pharmacy1);
    fclose(pharmacy2);
    remove(filename);
    //rename the file replica.c to original name
    rename("replica.c", filename);
    printf("\nThe contents of file after being modified are as follows : \n");
    pharmacy1 = fopen(filename, "r");
    ch = getc(pharmacy1);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = getc(pharmacy1);
    }
    fclose(pharmacy1);
}