#include<stdio.h>
#include<stdlib.h>

// 난수를 발생시킨 다음에 문자를 맞추는거?
//필요한 값 1.랜덤 값 2. 내가 입력한 값
int main() {

	char ch = (rand()%26+'A'); //랜덤 알파벳 생성
	while (1) {	//알파벳 비교
		char mych = 0;	//내가 입력할 알파벳

		printf("Wrtie an Alphabet: ");
		scanf(" %c", &mych);	//알파벳 입력 받기


		//''글자에만 쓰인다.
		if (ch < mych) {
			printf("%c is random Alphabet followed by %c\n", mych,ch);//내가 입력한 것이 랜덤보다 후에 나올때
			
		}
		else if (ch >mych){
			printf("%c is precede random Alphabet than %c\n", mych, ch);//내가 입력한 것이 랜덤후에 나올때

					//내가 입력한 것이 랜덤보다 먼저 나올때
		}

		else if (ch == mych) {
			printf("good job %c is the random Alphabet %c is what you wrote you got a matched Alphabet\n", ch, mych);
			break;	//내가 ,입력한 것이 랜덤과 같을때
		}
		
		
	}
	return 0;
}