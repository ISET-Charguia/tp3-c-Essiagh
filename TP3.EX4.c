
int main(void) {
	int a,d,j;
	for (a=1;a<1000;a++)
	{d=0;
		for (j=1;j<=a/2;j++){
		if (a%j ==0)
		{
			d=d+j;
		}
		}
		if (d ==a)
		{
			printf ("; %d est parfait",a);
		}
	}
}
