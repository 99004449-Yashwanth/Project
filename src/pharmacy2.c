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

int pharmacy2()
{
    FILE *fp1;
    char word1[50];
    char ch1;
    char *filename1 = "pharmacy2.txt";
    char search1[100];
    printf("Enter the Med to be found in Pharmacy 2 : ");
    gets(search1);
    int count1 = 0;
    int pos1[10];
    int pointer1 = 0;
    int loop1;

    /*  open for writing */
    fp1 = fopen(filename1, "r");

    do
    {
        ch1 = fscanf(fp1, "%s", word1);
        if (strcmp(word1, search1) == 0)
        {
            pos1[count1] = pointer1;
            count1++;
        }
        pointer1++;
        //printf("%s",word);
    } while (ch1 != EOF);

    if (count1 == 0)
        printf("'%s' not found in %s\n", search1, filename1);
    else
    {
        printf("'%s' is found and take the Med here :) -> ", search1);
        // transaction here
        for (loop1 = 0; loop1 < count1; loop1++)
        {
            printf("%d ", pos1[loop1]);
        }
        printf("positions.\n");
    }

    fclose(fp1);
}
