 #include  <stdio.h>

void main(void)
{
	int penalty_spot;
	printf("벌점을 입력하시오: ");
	scanf_s("%d", &penalty_spot);

	if (penalty_spot >= 15) {
		printf("강제 전학입니다.");
	}
	else if (penalty_spot >= 10) {
		printf("영구 퇴소입니다.");
	}
	else if (penalty_spot >= 5) {
		printf("임시 퇴소입니다.");
	}
	else {
		printf("지금 상태를 유지하십시오.");
	}
}