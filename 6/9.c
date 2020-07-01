#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int i = 0;
	int chmod = 0;
	int chmod_r = 0;
	int chmod_w = 0;
	int chmod_x = 0;
	
	
	char temp[3];
	char permission[10][3];
	   char string[4];
    scanf("%s",string);
    int current = 0;
    for (int i = 0; i < 3; i++) {
        if (string[i] == 'r') {
            current += 2 * 2;
        }
        else if (string[i] == 'w') {
            current += 2;
        }
        else if (string[i] == 'x') {
            current += 1;
        }
    }
   
    char reqrmt[3];
    int req = 0;
    while (scanf("%s", reqrmt) != EOF) {
        if (reqrmt[1] == 'r') {
            req = 2 * 2;
        }
        else if (reqrmt[1] == 'w') {
            req = 2;
        }
        else {
            req = 1;
        }
        if (reqrmt[0] == '+') {
            current = current | req;
        }
        else {
            current = current & (~req);
        }
      
    }

    printf("%d\n", current);
    return 0;
	//¿¿
	while (scanf("%s", temp) != EOF) {
			strcpy(permission[i], temp);
			i++;
		}
	
	//¿¿¿¿¿
	for (i = 0; i < 3; i++) {
		if (permission[0][i] == 'r') {
				chmod_r++;
			}	
		if (permission[0][i] == 'w') {
				chmod_w++;
			}
		if (permission[0][i] == 'x') {
				chmod_x++;
			}
		}
	
	//¿¿¿¿
	for (i = 1; i < 10; i++) {
		if (permission[i][0] == '+') {
			if (permission[i][1] == 'r') {
					chmod_r++;
				}	
			if (permission[i][1] == 'w') {
					chmod_w++;
				}
			if (permission[i][1] == 'x') {
					chmod_x++;
				}
		}
		if (permission[i][0] == '-') {
			if (permission[i][1] == 'r') {
					chmod_r--;
				}	
			if (permission[i][1] == 'w') {
					chmod_w--;
				}
			if (permission[i][1] == 'x') {
					chmod_x--;
				}
		}
		
	}
	
		if (chmod_r > 0) {
			chmod += 100;
		}
		if (chmod_w > 0) {
			chmod += 10;
		}
		if (chmod_x > 0) {
			chmod += 1;
		}
		  
		if (chmod == 111) {
			printf("7");
		} else if (chmod == 110) {
			printf("6");
		} else if (chmod == 101) {
					printf("5");
				}

	return 0;
}
