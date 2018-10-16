int add(int, int);
int sub(int, int);
int div(int, int);

int main(int argc, char* argv[])
{
	int a, b, c;
	char opertator;
	
	printf("Please enter a expression");
	scanf("%d %c %d", &a, &operator, &b);
	
	switch (operator)
	{
		case '+':
			c = add(a, b);
			break;
		case '-':
			c = sub(a, b);
			break;
		case '/':
			c = div(a, b);
			break;
	}
	printf("result:%d", c);
	
	return 0;
}
		