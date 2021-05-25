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

void pharmacy()
{
    pharmacy_search();

    FILE *fptr;
    FILE *fptr2;
    int i, n, a, b;
    char str[100];
    char str2[100];
    char fname[20] = "pharmacy1.txt";
    char fname2[20] = "pharmacy2.txt";
    char str1;
    char str3;

    printf("\n\n Add Meds to Pharmacy 1 :\n");
    printf("------------------------------------------------------------\n");
    printf(" Input the number of Meds to be added to Pharmacy 1; If NO Meds, enter 0 : ");
    scanf("%d", &n);
    printf("\n Meds are \n");
    fptr = fopen(fname, "a");
    for (i = 0; i < n + 1; i++)
    {
        fgets(str, sizeof str, stdin);
        fputs(str, fptr);
    }
    printf("\n\n Add Meds to Pharmacy 2 :\n");

    printf("------------------------------------------------------------\n");
    printf(" Input the number of Meds to be added to Pharmacy 2 ; If NO Meds, enter 0 : ");
    scanf("%d", &b);
    printf("\n :: Meds are ::\n");
    fptr2 = fopen(fname2, "a");
    for (a = 0; a < b + 1; a++)
    {
        fgets(str2, sizeof str2, stdin);
        fputs(str2, fptr2);
    }
    fclose(fptr);
    fclose(fptr2);
    /*-------------- read the file -------------------------------------*/
    fptr = fopen(fname, "r");
    printf("\n Meds present in Pharmacy 1 %s are  :\n", fname);
    str1 = fgetc(fptr);
    while (str1 != EOF)
    {
        printf("%c", str1);
        str1 = fgetc(fptr);
    }
    printf("\n\n");
    fclose(fptr);
    fptr2 = fopen(fname2, "r");
    printf("\n Meds present in Pharmacy 2 %s are  :\n", fname2);
    str3 = fgetc(fptr2);
    while (str3 != EOF)
    {
        printf("%c", str3);
        str3 = fgetc(fptr2);
    }
    printf("\n\n");
    fclose(fptr2);

    FILE *fp;
    char word[50];
    char ch;
    char *filename = "pharmacy1.txt";
    char search[100];
    printf("Enter the Med to be found in Pharmacy 1 :");
    gets(search);
    int count = 0;
    int pos[10];
    int pointer = 0;
    int loop;

    /*  open for writing */
    fp = fopen(filename, "r");

    do
    {
        ch = fscanf(fp, "%s", word);
        if (strcmp(word, search) == 0)
        {
            pos[count] = pointer;
            count++;
        }
        pointer++;
        //printf("%s",word);
    } while (ch != EOF);

    if (count == 0)
    {

        printf("'%s' not found in %s\n", search, filename);
        pharmacy2();
    }
    else
    {
        printf("'%s' is found at take the Med here :) -> ", search);
        //transaction here
        for (loop = 0; loop < count; loop++)
        {
            printf("%d ", pos[loop]);
        }
        printf("positions.\n");
    }

    fclose(fp);

    printf("Enter 1 to Delete a Med in pharmacy's: 0 to Exit :");
    int ab;
    scanf("%d", &ab);
    if (ab == 1)
    {

        del_med();
    }

    printf("\nBill Amount %d\n", bill);
}