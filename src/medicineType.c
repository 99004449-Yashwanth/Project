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

const char *medicineType()
{
    printf("________________\n");
    printf("Select Medicines\n");
    printf("________________\n");
    printf("1 - Paracetmol\n2 - Dolo650\n3 - Vitamin-D\n4 - Cetirizine\n5 - Amoxicillin\n6 - Zincovita\n7 - Nil\n0 - Exit\n");
    printf("________________\n");
    int i = 1;
    int y;

    while (i != 0)
    {
        printf("Medicine Code : ");
        scanf("%d", &x);

        if (x != 0 && x != 7)
        {
            printf("\nQuantity : ");
            scanf("%d", &y);
            addPharmaFees(x, y);

            x = x - 1;
            y = y - 1;

            strcat(m[x], q[y]);

            return m[x];
        }
    }

    if (x == 0)
    {
        printf("Exit...\n");
        return "Nil";
        i = 0;
    }

    if (x < 0 || x > 7)
    {
        printf("Invalid!!! Enter Again...\n");
        medicineType();
    }
}