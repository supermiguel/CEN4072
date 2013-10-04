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
void update_record(const record *rec, FILE *f);

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
    
    fp2 = fopen("temp.dat" , "r+");
    if(fp2 == NULL)
    {
        fp2 = fopen("temp.dat" , "w+");
        if(fp1 == NULL)
        {
            printf("error in opening file : \n"):
            return 0; 
        }
    }

    recsize = sizeof(det);

	//option menu for the user to pick an action
	printf("Welcome to the CEN4072 student enrolment program"\n);
	printf("Please select one of the following options: "\n);
	printf("1) Add Student"\n);
	printf("2) Delete Student"\n);
	printf("3) Search Student"\n);
	printf("4) Update Student Information"\n);
	printf("What would you like to do: ");
	scanf("%c", menu);
	switch (menu) {
	case 1:
		add_record();
		break;
	case 2:
		del_record():
		break;
	case 3:
		break;
	case 4:	
		update_record():
		break;
	default:
		printf("Invalid Selection");
}
//function that allows user to add record
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
			fopen(&det,recsize,1,fp1);
    }
    else {
        // record is already in the file 
        printf("A record with name %s already exists\n", r->name);
    }
    //function that allows user to delete record
    void void del_record(char *name, FILE *f) {
    	fseek(fp1 , 0 ,SEEK_END);
			printf("Enter the Student Name    : ");
			scanf("%[^\n]" , det.name);
			printf("Enter the student USF number(omit U    : ");
			scanf("%f" , &det.USF_ID);
			printf("Enter the Student email    : ");
			scanf("%[^\n]" , det.Email);			
			fwrite(&det,recsize,1,fp1);
	for(rec = 0, rec <= FILE - 1, rec--){
		name == name - 1;
	}
    }
    
	void find_record(char *name, record *rec, FILE *f){
		int choice;
		printf("Do you wish to search by \n");
		printf("1: Student Name \n")
		printf("2: Student ID \n");
		printf("3: Student Email \n");
		printf("What would you like to do? ");
		scanf(%d, choice);
		if(choice == 1){
			printf("Enter the students name: ");
			scanf("&c", name);
			if((f = fopen(fname, "r")) == NULL)
				return -1;
			while(fgets(name, 40, f)){
				if(strstr(name, str))!= NULL)
					printf("We found a match!");
				else
					printf("No matches sorry.");
			}
			fclose(f);
			}
		else if(choice == 2){
			printf("Enter the students ID: ");
			scanf("&c", ID);
			if((f = fopen(fname, "r")) == NULL)
				return -1;
			while(fgets(ID, 40, f)){
				if(strstr(ID, int))!= NULL)
					printf("We found a match!");
				else
					printf("No matches sorry.");
			}
			fclose(f);
			}
		else if(choice == 3){
			printf("Enter the students email: ");
			scanf("&c", rec.Email);
			if((f = fopen(fname, "r")) == NULL)
				return -1;
			while(fgets(rec.Email, 40, f)){
				if(strstr(rec.Email, str))!= NULL)
					printf("We found a match!");
				else
					printf("No matches sorry.");
			}
			fclose(f);
			}
		
		}

	void update_record(record *rec, FILE *f){
		
		int num=0;
		char anw;
		printf("Enter USF ID of student to update (w/out the U): \n");
		scanf("%d", &num);
		rewind(fp1);
		
		while(!feof(fp1)){
			fscanf(fp1,"%s %d %s %d %d %d", &det.name,&det.USF_ID,&det.Email,&det.Grade_Essay_1,&det.Grade_Essay_2,&det.Grade_Term_Project);
		
			if(det.USF_ID==num){

				printf("Would you like to update student name? y/n");
				scanf("%c",&anw);
				if(anw=='y'){
					printf("Enter new name: ");
					scanf("%[^\n",det.name);
				}
				printf("Would you like to update the ID? y/n");
				scanf("%c",&anw);
				if(anw=='y'){
					printf("Enter new ID: ");
					scanf("%d",det.USF_ID);
				}
				printf("Would you like to update the email? y/n");
				scanf("%c",&anw);
				if(anw=='y'){
					printf("Enter new Email: ");
					scanf("%[^\n",det.Email);
				}
				printf("Would you like to update Essay1's grade? y/n");
				scanf("%c",&anw);
				if(anw=='y'){
					printf("Enter new grade: ");
					scanf("%d",det.Grade_Essay_1);
				}
				printf("Would you like to update Essay2's grade? y/n");
				scanf("%c",&anw);
				if(anw=='y'){
					printf("Enter new grade: ");
					scanf("%d",det.Grade_Essay_2);
				}
				printf("Would you like to update Term project grade? y/n");
				scanf("%c",&anw);
				if(anw=='y'){
					printf("Enter new Grade: ");
					scanf("%d",det.Grade_Term_Project);
				}

				fwrite(&det,recsize,1,fp2);
			}else{
				fwrite(&det,resize,1,fp2);
			}
			fclose(fp1);
			fclose(fp2);
			remove("record.dat");
			rename("temp.dat","record.dat");
		}
	}
    
}




}
    
}


