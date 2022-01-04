#include "stdio.h"
#include "math.h"

char filename[12]="ping_log.log";

void messageBx(char *in);
void flush_log();

char dest_a[16] = "192.95.18.1";
char dest_b[16] = "88.198.198.11";

char command[255];
FILE *fp;

void flush_log(){
  messageBx("Flushing!");
	sprintf(command,"rm ping_log.log");
	system(command);
	printf("Command Executed:\t%s\n",command);
}

void messageBx(char *out){
	for(int i=0;i < 1; i++){
		printf("%s\n",out);
		sleep(1);
		system("clear");
		printf("%s\n",out);
	}
}

void help_menu(){
	printf("Debug\t\t[ -d ]\n");
	printf("Flush Log\t[ -f ]\n");
	printf("Ping Net\t[ -p ]\n");
	printf("View Log\t[ -v ]\n");
}

int main(int argc, char *argv[]){
	//Option Switch
	if (argc > 1){
		char select = *++argv[1];
		switch(select){
			case 'd':
  			printf("Command Executed:\t%s\n",command);
  			printf("Parameter: %c\n",select);
			break;
			case 'f':
  			flush_log();
  			printf("Parameter: %c\n",select);
			break;
			case 'p':
        messageBx("Ping Network!");
        int limit = 10;
        if (argc == 3){
          limit = atoi(argv[2]);
        }
        sprintf(command,"date '+%s' >> %s", filename);
        system(command);
        sprintf(command,"ping -c %i %s >> %s",limit,dest_a,filename);
        system(command);
        sprintf(command,"ping -c %i %s >> %s",limit,dest_b,filename);
        system(command);
			break;
			case 'v':
        messageBx("Display Log::");
        sprintf(command,"type %s",filename);
        system(command);
			break;
			case 'h':
			  help_menu();
			break;
			default:
			  printf("Try '-h' to view options.\n");
			break;
		}
	}
	return 0;
}

