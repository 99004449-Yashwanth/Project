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

void search_record()
{
    do

    {

        found = 0;

        printf("\n\nPATIENT RECORDS SEARCH\n");
        printf("__________________________\n");
        printf("Unique ID of the Patient : ");

        fflush(stdin);

        scanf("%ld", &query);

        fp = fopen("contact.dll", "r");

        printf("\nSearch result for '%ld' \n__________________________________\n", query);

        while (fread(&list, sizeof(list), 1, fp) == 1)

        {

            if (list.uID == query && list.delete != 1)

            {

                printf("Name        : %s\n", list.name);
                printf("Unique ID   : %ld\n", list.uID);
                printf("Age         : %d\n", list.age);
                printf("Adhaar      : %lld\n", list.adhaar);
                printf("Phone       : %ld\n", list.ph);
                printf("Appointment : %s\n", list.appointment);
                printf("Diagnosis   : %s\n", list.diagnosis);
                printf("Medicine    : %s\n", list.medicine);
                printf("Home Branch : %s\n", list.branch);

                printf("____________________________________\n");

                found++;

                if (found % 4 == 0)

                {

                    printf("\nPress any key to continue...\n");

                    getch();
                }
            }
        }

        if (found == 0)

            printf("\nNo match(s) found!");

        else

            printf("\n--->>> %d match(s) found!", found);

        fclose(fp);

    } while (ch == 1);

    printf("\n");
    printf("1 - Edit Record\n2 - Delete Record\n3 - Exit\n");
    int t;
    scanf("%d", &t);
    switch (t)
    {
    case 1:
        edit_record(unique_ID);
        break;

    case 2:
        delete_record(unique_ID);
        break;

    case 3:
        printf("Exit......\n");
        exit(1);
        break;
    default:
        printf("Invalid!!! Enter Again...\n");
        search_record();
        break;
    }
}