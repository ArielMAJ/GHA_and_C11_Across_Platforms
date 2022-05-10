#include <stdio.h>

int main(void)
{#include <stdio.h>

int main(void)
{
	float x = 2.25;
	
	// Should print 2.2 on -std=c11
	printf("%.1f\n", x);
	
	// Should print 2.2 on -std=c11
	printf("%.1f\n", 2.25);
	
	// Should print 4
	printf("%d\n", sizeof(float));
	
	return 0;
}
