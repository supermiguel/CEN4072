/*  CEN 4072 Project      */
//Please add comments to all your changes
#include <stdio.h>
#include <string.h>

typedef struct student
{
    char name[40];
    int USF_IF[10];
	char Email[40];
    int Grade_Essay_1;
	int Grade_Essay_2;
	int Grade_Term_Project;
}record;

void find_record(char *name, record *rec, FILE *f);
void add_record(const record *rec, FILE *f);
void del_record(char *name, FILE *f);


int main(void)
{
    int i , menu;
    FILE *fp1,*fp2;
    record det;
    int recsize;
    char c;

    fp1 = fopen("record.dat" , "r+");
    if(fp1 == NULL)
    {
        fp1 = fopen("record.dat" , "w+");
        if(fp1 == NULL)
        {
            printf("error in opening file : \n");
            return -1;
        }
    }
    recsize = sizeof(det);


	printf("Welcome to the CEN4072 student enrolment program"\n);
	printf("Please select one of the following options: "\n);
	printf("1) Add Student"\n);
	printf("2) Delete Student"\n);
	printf("3) Search Student"\n);
	printf("4) Update Student Information"\n);
	printf("What would you like to do: ");
	scanf("%d", menu);
	switch (menu) {
	case 1:
		add_record();
		break;
	case 2:
		del_record():
		break;
	case 3:
		find_record();
		break;
	case 4:	
		update_record():
		break;
	default:
		printf("Invalid Selection");
}

void add_record(const record *rec, FILE *f) {
    record *r;
    find_record(rec->name, r, f);
    if (r == NULL) {
			// record does not exist 
            fseek(fp1 , 0 ,SEEK_END);
			printf("Enter the Student Name    : ");
			scanf("%[^\n]" , det.name);
			printf("Enter the student USF number(omit U    : ");
			scanf("%d" , &det.USF_ID);
			printf("Enter the Student email    : ");
			scanf("%[^\n]" , det.Email);			
			printf("Enter the Essay 1 Grade  : ");
			scanf("%d" , &Grade_Essay_1);
			printf("Enter the Essay 2 Grade  : ");
			scanf("%d" , &Grade_Essay_2);
			printf("Enter the Project Grade  : ");
			scanf("%d" , &Grade_Essay_1);
			fwrite(&det,recsize,1,fp1);
    }
    else {
        // record is already in the file 
        printf("A record with name %s already exists\n", r->name);
    }
    ...
}


