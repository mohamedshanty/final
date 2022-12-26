#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define NUM_STUDENTS 10  // Maximum number of students
#define NAME_LEN 50  // Maximum length of a student name

void main_menu();
void admin();
void add_student();
void view_all_std();
void update();
void delete();
void student();
char firstName[NUM_STUDENTS][NAME_LEN], lastName[NUM_STUDENTS][NAME_LEN];
int n=0, r=0 , i=0 , choice;

int main(){
	main_menu();
    return 0;
}

void main_menu(){	
	printf("\t\t\t\t\tlogin as: \n");
	printf("\n\t\t\t\t\t1. Admin\n");
	printf("\t\t\t\t\t2. student\n");
	printf("\t\t\t\t\t3. exit\n");
	
	printf("\t\t\t\t\t_________________");
    printf("\n\n");
	
	printf("\t\t\t\t\tEnter your choice :  ");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
	        system("CLS");
		    admin();
		    printf("\n\n");
		    break;
		    
		case 2:
	        system("CLS");
		    student();
		    printf("\n\n");
		    break;
		    
		case 3:
			system("CLS");
            printf("\t\t\t\t Exiting the program.\n");
            printf("\n\n");
			exit(0);
			break;
			
		default:
			system("CLS");
            printf("\t\t\t\t Invalid choice.\n");
            printf("\n\n");
			exit(0);
	}
	
}


void admin(){
	
		printf("\n\t\t\t\t\tlogged In As Admin\n");
	printf("\t\t\t\t\t_________________");

        printf("\n\n");
        
        printf("------------------------------------------------------------------------------------------");
        printf("\n\n");
        printf("\t\t\t\t1. Add student record. \n");
        printf("\t\t\t\t2. View All Student Record. \n");
        printf("\t\t\t\t3. Update Student Record. \n");
        printf("\t\t\t\t4. Delete Student Record. \n");
        printf("\t\t\t\t5. Main Menu. \n");
        printf("\t\t\t\t6. Exit. \n");
        printf("------------------------------------------------------------------------------------------");

        printf("\n\t\t\tPlease Enter your choice: ");
        scanf("%d", &choice);
        printf("\n");
        
        switch(choice){
        	case 1:
        		system("CLS");
        		add_student();
                printf("\n\n");
        		break;
        		
            case 2:
            	system("CLS");
            	view_all_std();
            	printf("\n\n");
            	break;
            	
            case 3:
                system("cls");
			    update();
			    printf("\n\n");
			    break;
			    
            case 4:
        	    system("cls");
        	    delete();
        	    printf("\n\n");
                break;
            
            case 5:
                system("cls");
			    main_menu();
			    printf("\n\n");
                break;
            
            case 6:	
        	    system("cls");
                printf("\t\t\t\t Exiting the program...\n");
                printf("\n\n");
                break;
                
            default:
			    system("CLS");
                printf("\t\t\t\t Invalid choice.\n");
                printf("\n\n");
			    exit(0);
                
		}
	}


	void add_student(){

  // Add first student name
  printf("\t\t\t\t Enter first student name: ");
  scanf("%s", firstName[n]);
    
  // Add last student name
  printf("\t\t\t\t Enter last student name: ");
  scanf("%s", lastName[n]);
  n++;
  system("CLS");  
  admin();
  
	}

	
	void view_all_std(){
		// Display all student names

		printf("\n\t\t\t\t\tStudent Names:\n");
    	printf("\t\t\t\t\t_________________");

        printf("\n\n");
        
        
        printf("------------------------------------------------------------------------------------------");
        printf("\n\n");
	    printf("\t\t\t\t Number       Name\n\n");

		for ( i = 0; i <n; i++){
			
        printf("\t\t\t\t %d            %s %s\n\n", i+1,firstName[i],lastName[i]);
    }
    
        printf("------------------------------------------------------------------------------------------");

    printf("\n\t\t\t\t 1. Back To Admin Menu \n");
    printf("\t\t\t\t 2. Exit\n");    
    printf("\t\t\t\t Enter Your Choice:");
    scanf("%d",&choice);
    
    switch (choice){
    	
    	case 1:
            system("cls");		
    		admin();
			break;
				
    	case 2:
        	system("cls");
            printf("\t\t\t\t Exiting the program...\n");
            printf("\n\n");
            break;
        default:
            printf("\t\t\t\t Invalid choice.\n");
            printf("\n\n");
  }
}
		
	
	void update(){
		int b;
		
		printf("\t\t\t\t Enter The Number Of Student: ");
		scanf("%d",&i);
		printf("\n\n");
		i--;
		for( b=0;b<=i;b++){
		if(b==i){
		printf("\t\t\t\t Enter the new first name: ");
		scanf("%s",firstName[i]);
		printf("\t\t\t\t Enter the last name: ");
		scanf("%s",lastName[i]);
		}
	}
	system("cls");
	admin();

}
	void delete(){
		int u , h , l;
		
	    printf("\t\t\t\t Enter the record number: ");
	    scanf("%d",&u);
	    u--;
	
	    for( h=0;h<=n;h++){
		    if(h==u){
			    for( l=h;l<=n;l++){
				    strcpy(firstName[l],firstName[l+1]);
				    strcpy(lastName[l],lastName[l+1]);
			}
		}
	}
	
	--n;
	
	view_all_std();
}
	
	void student(){
		 system("CLS");
	
		int choice_student; 
		while(2)
		{
			
		printf("\n\t\t\t\t\t|Student Page|\n");	
	printf("\t\t\t\t\t_________________");

        printf("\n\n");
			
		printf("\n\t\t\t\t\tlogged In As Student\n");
	printf("\t\t\t\t\t_________________");

        printf("\n\n");
        
        printf("\n\t\t\t\t\t1. Back To Main Menu\n");
        printf("\n\t\t\t\t\t2. exit\n");
        
        printf("\n\t\t\t\t\tPlease Enter your choice:");
        scanf("%d",&choice_student);
        
        switch(choice_student){
        	case 1:
        		system("CLS");
        		main_menu();
        		break;
        	    case 2:
			    system("CLS");
                printf("\t\t\t\t Exiting the program.\n");
                printf("\n\n");
			    exit(0);
			    break;
				
        	default:
			    system("CLS");
                printf("\t\t\t\t Invalid choice.\n");
                printf("\n\n");
			    exit(0);
		}
		}
	}
