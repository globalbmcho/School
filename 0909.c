#include<stdio.h>
#include<stdlib.h>

// ������ �߻���Ų ������ ���ڸ� ���ߴ°�?
//�ʿ��� �� 1.���� �� 2. ���� �Է��� ��
int main() {

	char ch = (rand()%26+'A'); //���� ���ĺ� ����
	while (1) {	//���ĺ� ��
		char mych = 0;	//���� �Է��� ���ĺ�

		printf("Wrtie an Alphabet: ");
		scanf(" %c", &mych);	//���ĺ� �Է� �ޱ�


		//''���ڿ��� ���δ�.
		if (ch < mych) {
			printf("%c is random Alphabet followed by %c\n", mych,ch);//���� �Է��� ���� �������� �Ŀ� ���ö�
			
		}
		else if (ch >mych){
			printf("%c is precede random Alphabet than %c\n", mych, ch);//���� �Է��� ���� �����Ŀ� ���ö�

					//���� �Է��� ���� �������� ���� ���ö�
		}

		else if (ch == mych) {
			printf("good job %c is the random Alphabet %c is what you wrote you got a matched Alphabet\n", ch, mych);
			break;	//���� ,�Է��� ���� ������ ������
		}
		
		
	}
	return 0;
}