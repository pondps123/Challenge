#include <stdio.h>
#include <math.h>
int main()
{
	int a, b,e=0;
	float c, d, f, SD=0, sum = 0;
	int STO[100],i=0;
	c = 0;
	d = 0;
	scanf("%d %d", &a, &b);
	if (a < b) {
		while (a < b)
		{
			printf("%d ", a);
			c+=a;
			STO[i] = a;
			d++;
			a++;
			i++;
		}printf("%d \n", b);
		c += b;
		d++;
		STO[i] = b;
		f = c / d;
		printf("Average = %.2f \n", f);
		while (e <= i)
		{
			sum += pow((STO[e] - f), 2);
			e++;
			//printf("%.2f \n", sum);
		}
		//printf("sum %.2f \n", sum);
		SD = sqrt(sum/(d-1));
		printf("SD = %.2f \n", SD);
	}
	else if (a > b) {
		while (a > b)
		{
			printf("%d ", a);
			c += a;
			STO[i] = a;
			d++;
			a--;
			i++;
		}printf("%d \n", b);
		c += b;
		d++;
		STO[i] = b;
		f = c / d;
		printf("Average = %.2f \n", f);
		while (e <= i)
		{
			sum += pow((STO[e] - f), 2);
			e++;
			//printf("%.2f \n", sum);
		}
		//printf("sum %.2f \n", sum);
		SD = sqrt(sum / (d - 1));
		printf("SD = %.2f \n", SD);
	}
	else if (a = b)
	{
		printf("Average %d \n", a);
		printf("can\'t find SD \n");
	}
	return 0;
}