#include <stdio.h>

#if 0
int main() {
	int a = 5;
	int *const ptr = &a;
	*ptr = 10;
	printf("%d\n", a);
	return 0;
}

#endif

#if 0
struct a{
	int d;
	struct b *b;
};

struct b{
	int v;
	struct a *a;
};

int main(void) {
	struct a a1;
	struct b b1;
	a1.d = 5;
	a1.b = &b1;
	b1.v = 6;
	b1.a = &a1;
	printf("%d %d \n",a1.d, b1.v);
	return 0;
}

#endif

#if 0

int main() {
	int a = -3;
	printf("%x\n", a>>3);
	return 0;
}
#endif

#if 0
int main() {
	int a =10;
	int b=20;
	int *ptr1;
	int *ptr2;
	ptr1 = &a;
	ptr2 = &b;
	printf("%d + %d = %d\n",a,b, (*ptr1 + *ptr2));
	return 0;
}
#endif

#if 1
int main() {
	int m[5] = {3,4,1,2,5};
	int *trading = m;
	printf("%d", m[*trading]);
	return 0;
}
#endif
