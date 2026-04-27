#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Îáúÿâèòü òèï-ñòðóêòóðó humen, 
âêëþ÷àþùóþ èìÿ ÷åëîâåêà, ôàìèëèþ è ãîä ðîæäåíèÿ. 
Îáúÿâèòü äâà ìàññèâà èç ÷åòûð¸õ ýëåìåíòîâ òèïà humen. 
Ââåñòè ñ êîíñîëè èëè èç ôàéëà ýëåìåíòû îäíîãî ìàññèâà è 
ïîñòðîèòü íà èõ îñíîâå äðóãîé, óïîðÿäî÷èâ ýëåìåíòû ïî ãîäàì ðîæäåíèÿ. 
Âûâåñòè ðåçóëüòàò. */

struct humen {
	char name[80];
	char famil[80];
	int ego;
};

int main(int argc, char *argv[]) {
	const int n = 4;
	struct human name[n];
	struct humen name2[n];
	int i, j;
	struct humenp sort;
	for (i = 0; i < n; i++){
		printf("Input name: ");
		scanf("%s", humen[i].name);
		printf("Input famil: ");
		scanf("%s", humen[i].name1);
		printf("Input eyar: ");
		scanf("%s", &humen[i].ego);
}
memcpy(name1, name, sizeof(name));
for(i = 0; i < 3;i++){
	for (j = 0;j < 3 - i; j++){
		if ((name1[i].ego) > (name1[i + 1].ego)) {
			sort = humen1[j];
			name1[j] = name1[j + 1];
			humen1[j + 1] = sort;
		}
	}
}
for(i = 0; i < 4;i++){
	printf("%d. %s %s, %d \n", i + 1, person[i].name, person[i].name1, person[i].ego);
}
	return 0;
}
