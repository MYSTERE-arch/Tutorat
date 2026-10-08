#include <stdio.h>

// Adding  two integers
int add(int a, int b) {
      return a + b;
}

// Maximum of two integers
int max(int a, int b) {
	if (a > b) {
   	 	return a;
	} else {
		return b;
        }
}

/* Read an integer on the keyboard and write at the adress p.
 * Return 1 if success, 0 else.
*/

int r_int(const char *invite, int *p) {
	printf("%s", invite);
		return scanf("%d", p);
}
int main(void) {
	int x;
	int y;
	int z;

	if (r_int("Enter x :", &x) != 1) {
		printf("Reading error for x.\n");
		return 1;
	}
	if (r_int("Enter y :", &y) !=1) {
        	printf("Reading error for y. \n");
        	return 1;
	}
	if (r_int("Enter z :", &z) != 1) {
		printf("Reading error for z.\n");
		return 1;
	}

//Two by two
    printf("add(%d, %d) = %d\n",x, y, add(x,y));
    printf("max(%d, %d) = %d\n",x, y, max(x,y));

//Three, by component.
    printf("add(add(%d, %d), %d) = %d\n",x, y, z, add(add(x,y),z));
    printf("max(max(%d, %d), %d) = %d\n",x, y, z, max(max(x,y),z));
    
    return 0;
}
