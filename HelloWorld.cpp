#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	printf("Hello World\nHello World");
	//return 0;
//}


//char-�ַ���������
//short-������
//int-����
//long-������
//long long-����������
//float-�����ȸ�����
//double-˫���ȸ�����


//int main()
//{
	//char ch = 'A';
	//printf("%c", ch);
	//return 0;
	//int age = 20;
	//printf("%d", age);
	//return 0;
//}


//char-�ַ�����
//%d-��ӡ����
//%c-��ӡ�ַ�
//%f-��ӡ��������-��С��
//%p-�Ե�ַ����ʽ��ӡ
//%x-��ӡ16���Ƶ�����
//%s-��ӡ�ַ���


//int main()
//{
	//printf("%d", sizeof(char));//1
	//printf("%d", sizeof(short)); //2
	//printf("%d", sizeof(int));//4
	//printf("%d", sizeof(long));//4/8
	//printf("%d", sizeof(long long));//8
	//printf("%d", sizeof(float));//4
	//printf("%d", sizeof(double));//8
	//printf("%d", sizeof(char));//1
	//return 0;
//}


//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf_s("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d", sum);
//	return 0;//�����num1��num2��Ҫ�ֶ�����-��Ϊscanf������ʾ���ն����ֶ��������
//}


//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf_s("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d", sum);
//	return 0;
//}


//int main()
//{
//	extern int �޿���;
//	printf("�޿��� = ɧɧ");
//	return 0;
//}


//int main()
//{
//	//const-������
//	//const-����ֵΪ���ɸı���
//	int num = 1;
//	printf("%d\n", num);
//	num = 6;
//	printf("%d", num);
//	return 0;
//}


//int main()
//{
//	const int num = 2;
//	printf("%d\n", num);
//	//num = 6;//��ʱconst��ֵnumΪ�����������ڴ����ٴθ�ֵ
//	printf("%d", num);
//}


//int main()
//{
//	const int n = 19;//n�Ǳ���������const���Σ�Ϊ������
//	//int arr[n] = { 9 };
//}


//define ����ı�ʶ������


//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d", MAX);
//}


//ö�ٳ���-��һһ�о�
//�Ա� ��ԭɫ ����
//ö�ٹؼ�-enum


//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};//ö�ٳ���
//int main()
//{
//	//enum Sex s = FEMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}
//enum Color
//{
//	RED,
//	YELLOW,
//	BULE
//};
//int main()
//{
//	enum Color color = BULE;//ö�ٳ������ɸ���
//	return 0;
//}


//charΪ�ַ�����
//�ַ�������""-��""�ڵ����ݶ�Ϊ�ַ���


//int main()
//{
//	//�����ڼ�����ϴ洢���Ƕ����ƣ�#a����
//	//a - 97
//	//A - 65
//	//...
//	//ASCll ��ֵ
//	//char arr1[] = "MingAn";//������Ϊ��ӡһ���ַ���
//	////"MingAn"--��M��'i''n'......\0'---\0'�ַ����Ľ�����־��һ�����������ʾ����ӡҲ������֣������Ϊ��ֹ������
//	//char arr2[] = { 'M', 'A' ,0};//�����ӡ�0������ӡ���������һ�����ֵ������Ϊ��֮�����
//	//printf("%s\n", arr1);
//	//printf("%s", arr2);
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c', 0};
//	printf("%zd\n", strlen(arr1));//strlen - string length - �����ַ�������
//	printf("%zd", strlen(arr2));
//	return 0;
//}


//int main()
//{
//	printf("abc\n");//��\n��Ϊת���ַ�
//	return 0;
//}


//int main()
//{
//	printf("C:\\test\\32\\test.c");//\t��ˮƽ�Ʊ�����ճ�һ��飩ͬΪת���ַ�
//	return 0;
//}


//int main()
//{
//	printf("%s", "\'");//ת���ַ����ٴ�����
//	return 0;
//}


//int main()
//{
//	printf("%zd\n", strlen("c:\test\32\test, c"));//32��2��8�������֣���Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCll��ֵ������Ӧ����ֵ   3 - 8^1 , 2 - 8^0��32---��ΪASCll��ֵ������ַ�
//	return 0;
//}


//int main()
//{
//	printf("%c", '\132');
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	printf("ɧɧ��ɧɧ\n");
//	printf("��Ҫ�ú�ѧϰ��?(�Ǳ���� = 1/���þ����¶��� = 0):");
//	scanf_s("%d", &input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//	return 0;
//}//ѡ�����
//ѭ�����


//int main()
//{
//	int line = 0;
//	printf("ѧ���\n");
//	while (line < 1000000)
//	{
//		printf("��һ�д���:%d\n",line);
//		line++;
//	}
//	if(line>=1000000)
//	printf("��offer\n");
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 100;
//	int num2 = 200;
//	int sum = 0;
//	int a = 10;
//	int b = 20;
//	sum = Add(num1 , num2);
//	sum = Add(a , b);
//	printf("sum = %d\n", sum);
//	return 0;
//}//AddΪ�Զ��庯�����ɱ�д���Լ�����������ĺ������⺯��Ϊԭ�к���


//����
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//����һ�����10���������ֵ�����
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	//printf("%d\n", arr[0]);//�˴���0��Ӧ�������1�����˴���0��Ϊarr������±�
//	return 0;
//}


//2����λ����
//&��λ��-����-001
//|��λ��-111
//^��λ���--��������ǣ������Ƶļ���λ��ͬ����Ϊ0����Ӧ�Ķ��������죬��Ϊ-110
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	//011
//	//101
//	//101
//	//...
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	a = 20;//=Ϊ��ֵ ==�ж����
//	a = a + 10;//1
//	a += 10;//2 �����桰1����ʽ��ȫ�ȼ�
//}


//int main()
//{
//	int a = 5;
//	printf("%d\n", a);
//	printf("%d\n", !a);//������Ϊ�߼�����������0-�� ��0-��
//	return 0;
//}


//int main()
//{
//	int a = 10;//sizeof ������Ǳ���/������ռ�ռ�Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof(a));//4���ֽ�
//	return 0;
//}


//int main()
//{
//	int sz = 0;
//	int arr[10] = { 0 };//10������Ԫ�ص�����
//	//10*sizeof��int��=40
//	printf("%d\n", sizeof(arr));
//	//���������Ԫ�ش�С
//	//���� = �����ܴ�С/ÿ��Ԫ�صĴ�С
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz = %d\n", sz);
//}


//int main()
//{
//	int a = 1;
//	int b = a<<1;//<<���� >>���� ����1ռ4���ֽ�-32��bit����00000000000000000000000000000001����Ϊ�����ƣ�
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int a = 2;
//	int arr[] = { 1, 2, 3, 4, 5, 6 };//6*4=24 -->int[6]
//	printf("%zd\n", sizeof(a));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof arr);//���㶨�������arr�Ĵ�С
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = ~a;//b���з��ŵ����͡�~ -- ��������λȡ��
//	//ԭ�룬���룬����
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//	//1111111111�����룩
//	//1111111110������-1���ڷ��룩
//	//1000000001���������λ���䣬����ȫ�����ԭ�룩
//	printf("%d\n", b);//ʹ�õģ���ӡ�����������ԭ��
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	//int b = a++;//����++����ʹ�ã���++
//	//int b = ++a;//ǰ��++����++����ʹ��
//	//int b = a--;//����--����ʹ�ã���--
//	int b = --a;//ǰ��--����--����ʹ��
//	printf("a = %d b = %d\n", a, b);//11 10
//	return 0;
//}


//int main()
//{
//	int a = (int)41414;//(����)Ϊǿ������ת��
//	return 0;
//}


//int main()
//{
//	//�� - ��0
//	//�� - 0
//	//&& - �߼���
//	//|| - �߼���
//	int a = 0;
//	int b = 0;
//	int c = a || b;
//	//int c = a && b;
//	printf("%d\n", c);
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return 0;
//}
//int main()
//{
//	//int arr[10] = { 0 };
//	//arr[4];//[] - �±����ò���������Ϊ����arr�������±�Ϊ4����ֵ
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//()-�������ò�����
//	return 0;
//}


//ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
//����--ԭ�룬���룬���룬������ͬ
//������
//ԭ��                      -->         ����         -->         ����
//ֱ�Ӱ�������        ԭ��ķ���λ��                ����+1
//д���Ķ���������    ����λ��λȡ���õ�
//1000000000000000 - ԭ��
//1111111111111101 - ����
//1111111111111110 - ����
//typedef - ���Ͷ��� - �����ض���


//int main()
//{
	//signed int num = -8;//signed ��ʾ�з��ŵı���
	//printf("%d", num);
	//return 0;
	//int ����ı������з��ŵ�
	//unsigned int num = -8;//unsigned ��ʾ�޷��ŵı���
	//printf("%d", num);
	//return 0;
	//�˴���Ȼ��ӡnum�������з��ţ���num��Ϊ-8Ϊ����
//}


//struct-�ṹ��ؼ���
//union - ������/��ͬ��
//int ����һ�����������ǹؼ���


//int main()
//{
//	typedef unsigned int u_int;
//	unsigned int num = 28;
//	u_int num2 = 25;
//	return 0;
//}


//void test()
//{
//	int a = 1;
//	a++;
//	printf("a = %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<stdio.h>
//int Add(float a, float b)
//{
//	float c = a * 2 + b * 2;
//	return c;
//}
//int main()
//{
//	float x, y, l, s;
//	x = 3;
//	y = 4;
//	l = 0;
//	s = 0;
//	scanf("%f %f", &x, &y);
//	l = Add(x, y);
//	printf("%3f\n", l);
//	s = x * y;
//	printf("%3f", s);
//	return 0;
//}
//a++����a=a+1


//void test()
//{
//	static int a = 1;//static��һ����̬�ľֲ�����-�����ξֲ���������static���ξֲ�����ʱ�������ξֲ������������ڱ䳤
//	//��static����ȫ�ֱ���,extern���εı����޷�ʹ�ã�ʹextern�������ⲿ�����޷�ʹ�ã����������С���þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ��ļ��ڲ�ʹ��
//	a++;
//	printf("a = %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//���ַ�ʽ��ӡ ������ʽ��귽ʽ
//int B(int a, int b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}
////��Ķ���
//#define C(A,B) (A>B?A:B)
//int main()
//{
//	int a = 20;
//	int b = 30;
//	//������ʽ
//	int c = C(a, b);
//	printf("%d\n", c);
//	//��ķ�ʽ
//	c = C(a, b);
//	printf("%d", c);
//	return 0;
//}


//int main()
//{
//	int A = 0;
//	int B = 0;
//	printf("%d", A + B);
//	return 0;
//}


//int main()
//{
//	int a = 10;//4���ֽ�
//	//&a;//ȡ��ַ
//	//��һ�ֱ�����������ŵ�ַ��-ָ�����
//	printf("%p\n", &a);
//	return 0;
//}


//int main()
//{
//	int a = 10;//���ڴ��д���һ����������a���ж�Ӧ�ĵ�ַ����0x00123edff30
//	int* p = &a;//&��ȡ��a�ĵ�ַ���浽p������ȥ����p��洢��a�ĵ�ַ|p�����͵�int*
//	*p = 20;//�˴�*p�͵���a������a��ֵ��Ϊ20
//	//ָ���С��32λϵͳ��4���ֽڣ���64λϵͳ��8���ֽ�
//}


//ASCll���д�Сд��ĸ��32


//��ָ������ķ����ı�һ��������ֵ
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
	//double b = 19;
	//double* pd = &b;
	//printf("%d\n", sizeof(pd));
	//*pd = 2.3;
	//printf("%lf\n", b);
	//printf("%lf", *pd);
	//int a = 10;//�������ĸ��ֽ�
	//int* p = &a;//p��һ��ָ������������*��һ���﷨��ʽ
	//*p = 20;//�����*��ʾ�����ò�����/��ӷ��ʲ�����
	//printf("a = %d", a);
//	return 0;
//}


//�ṹ��
//char int double
//���ˡ� = 3.14
//��w��
//���顯 - ���Ӷ���
//����+���+����+��ݺ���+......
//����+����+������+���
//���Ӷ��� -- �ṹ�� -- �����Լ����������һ������
//struct book
//{
//	char name[20];//C���Գ������
//	short price;
//};
//int main()
//{
//	struct book b1 = { "C���Ա��" ,55 };
//	struct book* pd= &b1;//struct book*����һ��ָ�����ͣ�ָ�붨����һ������Ϊpd
//	//��pd��ӡ���ҵ������ļ۸�
//	printf("%s\n", pd->name);
//	printf("%sd\n", pd->price);
//	//printf("%s\n", (*pd). name);
//	//printf("%d\n", (*pd). price);
//	/*printf("����:%s\n" , b1.name);
//	printf("�۸�:%dԪ\n" , b1.price);
//	b1.price = 15;
//	printf("�޸ĺ�ļ۸�:%dԪ",b1.price);*/
//	return 0;
//}//|���쳣�ĳ���|



