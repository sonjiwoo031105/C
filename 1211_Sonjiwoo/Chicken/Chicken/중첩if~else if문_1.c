 #include  <stdio.h>

void main(void)
{
	int penalty_spot;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &penalty_spot);

	if (penalty_spot >= 15) {
		printf("���� �����Դϴ�.");
	}
	else if (penalty_spot >= 10) {
		printf("���� ����Դϴ�.");
	}
	else if (penalty_spot >= 5) {
		printf("�ӽ� ����Դϴ�.");
	}
	else {
		printf("���� ���¸� �����Ͻʽÿ�.");
	}
}