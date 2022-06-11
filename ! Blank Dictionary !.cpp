#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>

// structure dictionary node
struct dict{
	char *word;
	char *mean;
	struct dict *next;
};

// temporary pointers to the node
struct dict* newWord;

// function to open file and write content into file
void writeintoFile();

// function open file to display A character
void display_A() 
{ 
	FILE *fp; // declared file pointers
	clock_t begin = clock();
    char c;
    
	system("cls"); // clear screen
  
    // Open file 
    fp = fopen("A.txt", "r");
  
    // Read contents from file 
    c = fgetc(fp); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fp);
    }
		fclose(fp);
	    clock_t end = clock();
		double time_spent = ((double)(end - begin)/CLOCKS_PER_SEC);
		printf("\n\n\tRunning time : %lfS\n",time_spent);
}

// function open file to display B character
void display_B() 
{ 
	FILE *fp; // declared file pointers
	clock_t begin = clock();
    char c;
    
	system("cls"); // clear screen
  
    // Open file 
    fp = fopen("B.txt", "r");
  
    // Read contents from file 
    c = fgetc(fp); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fp);
    }
		fclose(fp);
		clock_t end = clock();
		double time_spent = ((double)(end - begin)/CLOCKS_PER_SEC);
		printf("\n\n\tRunning time : %lfS\n",time_spent);
}

// function open file to display C character
void display_C() 
{ 
	FILE *fp; // declared file pointers
	clock_t begin = clock();
    char c;
    
	system("cls"); // clear screen
  
    // Open file 
    fp = fopen("C.txt", "r");
  
    // Read contents from file 
    c = fgetc(fp); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fp);
    }
		fclose(fp);
		clock_t end = clock();
		double time_spent = ((double)(end - begin)/CLOCKS_PER_SEC);
		printf("\n\n\tRunning time : %lfS\n",time_spent);
}

// function open file to display D character
void display_D() 
{ 
	FILE *fp; // declared file pointers
	clock_t begin = clock();
    char c;
    
	system("cls"); // clear screen
  
    // Open file 
    fp = fopen("D.txt", "r");
  
    // Read contents from file 
    c = fgetc(fp); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fp);
    }
		fclose(fp);
		clock_t end = clock();
		double time_spent = ((double)(end - begin)/CLOCKS_PER_SEC);
		printf("\n\n\tRunning time : %lfS\n",time_spent);
}

// function open file to display E character
void display_E() 
{ 
	FILE *fp; // declared file pointers
	clock_t begin = clock();
    char c;
    
	system("cls"); // clear screen
  
    // Open file 
    fp = fopen("E.txt", "r");
  
    // Read contents from file 
    c = fgetc(fp); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fp);
    }
		fclose(fp);
		clock_t end = clock();
		double time_spent = ((double)(end - begin)/CLOCKS_PER_SEC);
		printf("\n\n\tRunning time : %lfS\n",time_spent);
}

// function open file to display F character
void display_F() 
{ 
	FILE *fp; // declared file pointers
	clock_t begin = clock();
    char c;
    
	system("cls"); // clear screen
  
    // Open file 
    fp = fopen("F.txt", "r");
  
    // Read contents from file 
    c = fgetc(fp); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fp);
    }
		fclose(fp); // Close file
		clock_t end = clock();
		double time_spent = ((double)(end - begin)/CLOCKS_PER_SEC);
		printf("\n\n\tRunning time : %lfS\n",time_spent);
}

// function open file to display G character
void display_G() 
{ 
	FILE *fp; // declared file pointers
	clock_t begin = clock();
    char c;
    
	system("cls");
  
    // Open file 
    fp = fopen("G.txt", "r");
  
    // Read contents from file 
    c = fgetc(fp); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fp);
    }
		fclose(fp);
		clock_t end = clock();
		double time_spent = ((double)(end - begin)/CLOCKS_PER_SEC);
		printf("\n\n\tRunning time : %lfS\n",time_spent);
}

// function open file to display H character
void display_H() 
{ 
	FILE *fp; // declared file pointers
	clock_t begin = clock();
    char c;
    
	system("cls"); // clear screen
  
    // Open file 
    fp = fopen("H.txt", "r");
  
    // Read contents from file 
    c = fgetc(fp); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fp);
    }
		fclose(fp);
		clock_t end = clock();
		double time_spent = ((double)(end - begin)/CLOCKS_PER_SEC);
		printf("\n\n\tRunning time : %lfS\n",time_spent);
}

// function open file to display I character
void display_I() 
{ 
	FILE *fp; // declared file pointers
	clock_t begin = clock();
    char c;
    
	system("cls"); // clear screen
  
    // Open file 
    fp = fopen("I.txt", "r");
  
    // Read contents from file 
    c = fgetc(fp); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fp);
    }
		fclose(fp);
		clock_t end = clock();
		double time_spent = ((double)(end - begin)/CLOCKS_PER_SEC);
		printf("\n\n\tRunning time : %lfS\n",time_spent);
}


// function open file to display J character
void display_J() 
{ 
	FILE *fp; // declared file pointers
	clock_t begin = clock();
    char c;
    
	system("cls"); // clear screen
  
    // Open file 
    fp = fopen("J.txt", "r");
  
    // Read contents from file 
    c = fgetc(fp); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fp);
    }
		fclose(fp);
		clock_t end = clock();
		double time_spent = ((double)(end - begin)/CLOCKS_PER_SEC);
		printf("\n\n\tRunning time : %lfS\n",time_spent);
}

// function open file to display K character
void display_K() 
{ 
	FILE *fp; // declared file pointers
	clock_t begin = clock();
    char c;
    
	system("cls"); // clear screen
  
    // Open file 
    fp = fopen("K.txt", "r");
  
    // Read contents from file 
    c = fgetc(fp); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fp);
    }
		fclose(fp);
		clock_t end = clock();
		double time_spent = ((double)(end - begin)/CLOCKS_PER_SEC);
		printf("\n\n\tRunning time : %lfS\n",time_spent);
}

//  function open file to display L character
void display_L() 
{ 
	FILE *fp; // declared file pointers
	clock_t begin = clock();
    char c;
    
	system("cls"); // clear screen
  
    // Open file 
    fp = fopen("L.txt", "r");
  
    // Read contents from file 
    c = fgetc(fp); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fp);
    }
		fclose(fp);
		clock_t end = clock();
		double time_spent = ((double)(end - begin)/CLOCKS_PER_SEC);
		printf("\n\n\tRunning time : %lfS\n",time_spent);
}

// function open file to display M character
void display_M() 
{ 
	FILE *fp; // declared file pointers
	clock_t begin = clock();
    char c;
    
	system("cls"); // clear system
  
    // Open file 
    fp = fopen("M.txt", "r");
  
    // Read contents from file 
    c = fgetc(fp); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fp);
    }
		fclose(fp);
		clock_t end = clock();
		double time_spent = ((double)(end - begin)/CLOCKS_PER_SEC);
		printf("\n\n\tRunning time : %lfS\n",time_spent);
}

// function open file to display N character
void display_N() 
{ 
	FILE *fp; // declared file pointers
	clock_t begin = clock();
    char c;
    
	system("cls"); // clear screen 
  
    // Open file 
    fp = fopen("N.txt", "r");
  
    // Read contents from file 
    c = fgetc(fp); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fp);
    }
		fclose(fp);
		clock_t end = clock();
		double time_spent = ((double)(end - begin)/CLOCKS_PER_SEC);
		printf("\n\n\tRunning time : %lfS\n",time_spent);
}

// function open file to display O character
void display_O() 
{ 
	FILE *fp; // declared file pointers
	clock_t begin = clock();
    char c;
    
	system("cls"); // clear screen
  
    // Open file 
    fp = fopen("O.txt", "r");
  
    // Read contents from file 
    c = fgetc(fp); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fp);
    }
		fclose(fp);
		clock_t end = clock();
		double time_spent = ((double)(end - begin)/CLOCKS_PER_SEC);
		printf("\n\n\tRunning time : %lfS\n",time_spent);
}

// function open file to display P character
void display_P() 
{ 
	FILE *fp; // declared file pointers
	clock_t begin = clock();
    char c;
    
	system("cls"); // clear screen
  
    // Open file 
    fp = fopen("P.txt", "r");
  
    // Read contents from file 
    c = fgetc(fp); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fp);
    }
		fclose(fp);
		clock_t end = clock();
		double time_spent = ((double)(end - begin)/CLOCKS_PER_SEC);
		printf("\n\n\tRunning time : %lfS\n",time_spent);
}

// function open file to display Q character
void display_Q() 
{ 
	FILE *fp; // declared file pointers
	clock_t begin = clock();
    char c;
    
	system("cls"); // clear screen
  
    // Open file 
    fp = fopen("Q.txt", "r");
  
    // Read contents from file 
    c = fgetc(fp); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fp);
    }
		fclose(fp);
		clock_t end = clock();
		double time_spent = ((double)(end - begin)/CLOCKS_PER_SEC);
		printf("\n\n\tRunning time : %lfS\n",time_spent);
}

// function open file to display R character
void display_R() 
{ 
	FILE *fp; // declared file pointers
	clock_t begin = clock();
    char c;
    
	system("cls"); // clear screen
  
    // Open file 
    fp = fopen("R.txt", "r");
  
    // Read contents from file 
    c = fgetc(fp); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fp);
    }
		fclose(fp);
		clock_t end = clock();
		double time_spent = ((double)(end - begin)/CLOCKS_PER_SEC);
		printf("\n\n\tRunning time : %lfS\n",time_spent);
}

// function open file to display S character
void display_S() 
{ 
	FILE *fp; // declared file pointers
	clock_t begin = clock();
    char c;
    
	system("cls"); // clear screen
  
    // Open file 
    fp = fopen("S.txt", "r");
  
    // Read contents from file 
    c = fgetc(fp); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fp);
    }
		fclose(fp);
		clock_t end = clock();
		double time_spent = ((double)(end - begin)/CLOCKS_PER_SEC);
		printf("\n\n\tRunning time : %lfS\n",time_spent);
}

// function open file to display T character
void display_T() 
{ 
	FILE *fp; // declared file pointers
	clock_t begin = clock();
    char c;
    
	system("cls"); // clear screen
  
    // Open file 
    fp = fopen("T.txt", "r");
  
    // Read contents from file 
    c = fgetc(fp); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fp);
    }
		fclose(fp);
		clock_t end = clock();
		double time_spent = ((double)(end - begin)/CLOCKS_PER_SEC);
		printf("\n\n\tRunning time : %lfS\n",time_spent);
}

// function open file to display U character
void display_U() 
{ 
	FILE *fp; // declared fiel pointers
	clock_t begin = clock();
    char c;
    
	system("cls"); // clear screen
  
    // Open file 
    fp = fopen("U.txt", "r");
  
    // Read contents from file 
    c = fgetc(fp); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fp);
    }
		fclose(fp);
		clock_t end = clock();
		double time_spent = ((double)(end - begin)/CLOCKS_PER_SEC);
		printf("\n\n\tRunning time : %lfS\n",time_spent);
}

// function open file to display V character
void display_V() 
{ 
	FILE *fp; // declared file pointers
	clock_t begin = clock();
    char c;
    
	system("cls"); // clear screen
  
    // Open file 
    fp = fopen("V.txt", "r");
  
    // Read contents from file 
    c = fgetc(fp); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fp);
    }
		fclose(fp);
		clock_t end = clock();
		double time_spent = ((double)(end - begin)/CLOCKS_PER_SEC);
		printf("\n\n\tRunning time : %lfS\n",time_spent);
}

// function open file to display W character
void display_W() 
{ 
	FILE *fp; // declared file pointers
	clock_t begin = clock();
    char c;
    
	system("cls"); // clear screen
  
    // Open file 
    fp = fopen("W.txt", "r");
  
    // Read contents from file 
    c = fgetc(fp); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fp);
    }
		fclose(fp);
		clock_t end = clock();
		double time_spent = ((double)(end - begin)/CLOCKS_PER_SEC);
		printf("\n\n\tRunning time : %lfS\n",time_spent);
}

// function open file to display X character
void display_X() 
{ 
	FILE *fp; // declared file pointers
	clock_t begin = clock();
    char c;
    
	system("cls"); // clear screen
  
    // Open file 
    fp = fopen("X.txt", "r");
  
    // Read contents from file 
    c = fgetc(fp); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fp);
    }
		fclose(fp);
		clock_t end = clock();
		double time_spent = ((double)(end - begin)/CLOCKS_PER_SEC);
		printf("\n\n\tRunning time : %lfS\n",time_spent);
}

// function open file to display Y character
void display_Y() 
{ 
	FILE *fp; // declared file pointers
	clock_t begin = clock();
    char c;
    
	system("cls"); // clear screen
  
    // Open file 
    fp = fopen("Y.txt", "r");
  
    // Read contents from file 
    c = fgetc(fp); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fp);
    }
		fclose(fp);
		clock_t end = clock();
		double time_spent = ((double)(end - begin)/CLOCKS_PER_SEC);
		printf("\n\n\tRunning time : %lfS\n",time_spent);
}

// function open file to display Z character
void display_Z() 
{ 
	FILE *fp; // declared file pointers
	clock_t begin = clock();
    char c;
    
	system("cls"); // clear screen
  
    // Open file 
    fp = fopen("Z.txt", "r");
  
    // Read contents from file 
    c = fgetc(fp); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fp);
    }
		fclose(fp);
		clock_t end = clock();
		double time_spent = ((double)(end - begin)/CLOCKS_PER_SEC);
		printf("\n\n\tRunning time : %lfS\n",time_spent);
}

// main function
int main()
{
	char ch; // choice variable
	char op; // option variable
	
	system("color 6"); // yellow colour

    do
    {
        system("cls"); // clear screen
  	
        // Main Menu
        printf("\n\t*********************************");
		printf("\n\t\t\"BLANK Dictionary\"\n");
		printf("\t*********************************\n");  
       
        printf ("\n\n\tEnter Your First Character (A-Z)\n");
        printf("\n\t[Press \"0\" to exit...]\n\t");
        scanf ("%c", &ch);

		//choice choosing any character 
        switch (ch)
        {
            case 'A':
            case 'a':
				
				display_A();
				printf("\n\nIs there your word inside? (Yes=y / No=n): "); // option to enter word and meaning into file
				getchar();
				scanf("%c", &op);
				if(op == 'n')
				{
					writeintoFile(); // function to insert word and meaning
				}
                break;

            case 'B':
            case 'b':
               	
				display_B();
               	printf("\n\nIs there your word inside? (Yes=y / No=n): "); // option to enter word and meaning into file
				getchar();
				scanf("%c", &op);
				if(op == 'n')
				{
					writeintoFile(); // function to insert word and meaning
				}
               	break; 

            case 'C':
            case 'c':
            	
				display_C();
            	printf("\n\nIs there your word inside? (Yes=y / No=n): "); // option to enter word and meaning into file
				getchar();
				scanf("%c", &op);
				if(op == 'n')
				{
					writeintoFile(); // function to insert word and meaning
				}
                break;

			case 'D':
			case 'd':
				display_D();
				printf("\n\nIs there your word inside? (Yes=y / No=n): "); // option to enter word and meaning into file
				getchar();
				scanf("%c", &op);
				if(op == 'n')
				{
					writeintoFile(); // function to insert word and meaning
				}
				break;
				
			case 'E':
			case 'e':
				
				display_E();
				printf("\n\nIs there your word inside? (Yes=y / No=n): "); // option to enter word and meaning into file
				getchar();
				scanf("%c", &op);
				if(op == 'n')
				{
					writeintoFile(); // function to insert word and meaning
				}
				break;
				
			case 'F':
			case 'f':
				
				display_F();
				printf("\n\nIs there your word inside? (Yes=y / No=n): "); // option to enter word and meaning into file
				getchar();
				scanf("%c", &op);
				if(op == 'n')
				{
					writeintoFile(); // function to insert word and meaning
				}
				break;
				
			case 'G':
			case 'g':
				
				display_G();
				printf("\n\nIs there your word inside? (Yes=y / No=n): "); // option to enter word and meaning into file
				getchar();
				scanf("%c", &op);
				if(op == 'n')
				{
					writeintoFile(); // function to insert word and meaning
				}
				break;
				
			case 'H':
			case 'h':
				
				display_H();
				printf("\n\nIs there your word inside? (Yes=y / No=n): "); // option to enter word and meaning into file
				getchar();
				scanf("%c", &op);
				if(op == 'n')
				{
					writeintoFile(); // function to insert word and meaning
				}
				break;
				
			case 'I':
			case 'i':
				
				display_I();
				printf("\n\nIs there your word inside? (Yes=y / No=n): "); // option to enter word and meaning into file
				getchar();
				scanf("%c", &op);
				if(op == 'n')
				{
					writeintoFile(); // function to insert word and meaning
				}
				break;
				
			case 'J':
			case 'j':
				
				display_J();
				printf("\n\nIs there your word inside? (Yes=y / No=n): "); // option to enter word and meaning into file
				getchar();
				scanf("%c", &op);
				if(op == 'n')
				{
					writeintoFile(); // function to insert word and meaning
				}
				break;
				
			case 'K':
			case 'k':
				
				display_K();
				printf("\n\nIs there your word inside? (Yes=y / No=n): "); // option to enter word and meaning into file
				getchar();
				scanf("%c", &op);
				if(op == 'n')
				{
					writeintoFile(); // function to insert word and meaning
				}
				break;
				
			case 'L':
			case 'l':
				
				display_L();
				printf("\n\nIs there your word inside? (Yes=y / No=n): "); // option to enter word and meaning into file
				getchar();
				scanf("%c", &op);
				if(op == 'n')
				{
					writeintoFile(); // function to insert word and meaning
				}
				break;
				
			case 'M':
			case 'm':
			
				display_M();
				printf("\n\nIs there your word inside? (Yes=y / No=n): "); // option to enter word and meaning into file
				getchar();
				scanf("%c", &op);
				if(op == 'n')
				{
					writeintoFile(); // function to insert word and meaning
				}
				break;
				
			case 'N':
			case 'n':
			
				display_N();
				printf("\n\nIs there your word inside? (Yes=y / No=n): "); // option to enter word and meaning into file
				getchar();
				scanf("%c", &op);
				if(op == 'n')
				{
					writeintoFile(); // function to insert word and meaning
				}
				break;
				
			case 'O':
			case 'o':
			
				display_O();
				printf("\n\nIs there your word inside? (Yes=y / No=n): "); // option to enter word and meaning into file
				getchar();
				scanf("%c", &op);
				if(op == 'n')
				{
					writeintoFile(); // function to insert word and meaning
				}
				break;
				
			case 'P':
			case 'p':
				
				display_P();
				printf("\n\nIs there your word inside? (Yes=y / No=n): "); // option to enter word and meaning into file
				getchar();
				scanf("%c", &op);
				if(op == 'n')
				{
					writeintoFile(); // function to insert word and meaning
				}	
				break;
				
			case 'Q':
			case 'q':
				
				display_Q();
				printf("\n\nIs there your word inside? (Yes=y / No=n): "); // option to enter word and meaning into file
				getchar();
				scanf("%c", &op);
				if(op == 'n')
				{
					writeintoFile(); // function to insert word and meaning
				}
				break;
				
			case 'R':
			case 'r':
				
				display_R();
				printf("\n\nIs there your word inside? (Yes=y / No=n): "); // option to enter word and meaning into file
				getchar();
				scanf("%c", &op);
				if(op == 'n')
				{
					writeintoFile(); // function to insert word and meaning
				}
				break;
				
			case 'S':
			case 's':
				
				display_S();
				printf("\n\nIs there your word inside? (Yes=y / No=n): "); // option to enter word and meaning into file
				getchar();
				scanf("%c", &op);
				if(op == 'n')
				{
					writeintoFile(); // function to insert word and meaning
				}
				break;
				
			case 'T':
			case 't':
				
				display_T();
				printf("\n\nIs there your word inside? (Yes=y / No=n): "); // option to enter word and meaning into file
				getchar();
				scanf("%c", &op);
				if(op == 'n')
				{
					writeintoFile(); // function to insert word and meaning
				}
				break;
				
			case 'U':
			case 'u':
				
				display_U();
				printf("\n\nIs there your word inside? (Yes=y / No=n): "); // option to enter word and meaning into file
				getchar();
				scanf("%c", &op);
				if(op == 'n')
				{
					writeintoFile(); // function to insert word and meaning
				}
				break;
				
			case 'V':
			case 'v':
				
				display_V();
				printf("\n\nIs there your word inside? (Yes=y / No=n): "); // option to enter word and meaning into file
				getchar();
				scanf("%c", &op);
				if(op == 'n')
				{
					writeintoFile(); // function to insert word and meaning
				}
				break;
				
			case 'W':
			case 'w':
				
				display_W();
				printf("\n\nIs there your word inside? (Yes=y / No=n): "); // option to enter word and meaning into file
				getchar();
				scanf("%c", &op);
				if(op == 'n')
				{
					writeintoFile(); // function to insert word and meaning
				}
				break;
				
			case 'X':
			case 'x':
				
				display_X();
				printf("\n\nIs there your word inside? (Yes=y / No=n): "); // option to enter word and meaning into file
				getchar();
				scanf("%c", &op);
				if(op == 'n')
				{
					writeintoFile(); // function to insert word and meaning
				}
				break;
				
			case 'Y':
			case 'y':
				
				display_Y();
				printf("\n\nIs there your word inside? (Yes=y / No=n): "); // option to enter word and meaning into file
				getchar();
				scanf("%c", &op);
				if(op == 'n')
				{
					writeintoFile(); // function to insert word and meaning
				}
				break;
				
			case 'Z':
			case 'z':
				
				display_Z();
				printf("\n\nIs there your word inside? (Yes=y / No=n): "); // option to enter word and meaning into file
				getchar();
				scanf("%c", &op);
				if(op == 'n')
				{
					writeintoFile(); // function to insert word and meaning
				}
				break;
			
			case '0':
				
				// EXIT PROGRAM
				printf("\n-------------------------------\n\t Bye Bye! ");
				return 0; 
				
            default:
            	
				printf("\n\tWrong Choice!!!");
				printf("\n\tPlease click 'Enter' to enter again!");
				getch(); //read a character or any key pressed before proceed
					
        }fflush(stdin); // clear the input buffer 
	}while(1); // loop Main Menu
}

void writeintoFile() // function to open file and write content into file
{
	FILE * fp; // declared file pointers
	char fname[100]; // const char variable
	
	// create allocation memory for each pointer to node in order to store data
	struct dict * connector = (dict*)malloc(sizeof(struct dict)); 
	connector->word = (char* )malloc(100*sizeof(char));
	connector->mean = (char* )malloc(100*sizeof(char));
	
	system("cls");
	clock_t begin = clock();
	printf("\nEnter Word: ");
	scanf("%s", connector->word);
	fflush(stdin);
	printf("\nEnter Meaning: ");
	gets(connector->mean);
	printf("\n\n\tWord and Meaning written successfully!!!\n\n");
	getchar();
	connector->next = NULL; // make node of pointer to next is NULL
	
	// Filetype for each character to insert into
	printf("Enter the character filetype (Eg: A.txt): \n");
	scanf("%s", &fname);
	getchar();
	
    fp = fopen(fname, "a"); // file to access

	if(fp == NULL)
    {
    	printf("Error\n"); // error of access the file
	}
	else
	{
		printf("\tFile Insertion Successfully!!!\n");
    	clock_t end = clock();
		double time_spent = ((double)(end - begin)/CLOCKS_PER_SEC);
		printf("\n***********************************************");
		printf("\n\tRunning time : %lfS\n",time_spent);
		printf("***********************************************");
		getchar();
        while(connector != NULL)
        {
            fprintf(fp, "%s\t\t\t-%s\n", connector->word, connector->mean); // write content into file by using pointer to node
            connector= connector->next; // node of pointer to next
        }
	}
	fclose(fp); // close file 
}
