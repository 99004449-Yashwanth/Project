#ifndef HMS_H_INCLUDED
#define HMS_H_INCLUDED

struct contact
{
    long long ph;
    long uID;
    int age;
    long long adhaar;
    int delete;

    char name[20], branch[30], diagnosis[50], medicine[100], appointment[100];

} extern list;

extern long query;
extern long name;

FILE *fp, *ft;

extern int i, n, ch, l, found;
extern int x;
extern int bill;

extern int branch_code ;
extern long unique_ID ;
extern long long ph_num ;
extern int type ;
extern int department;
extern char branchName ;

extern char m[][20] ;
extern char q[][3] ;

extern char d[][20] ;
extern char e[][30] ;

#endif 