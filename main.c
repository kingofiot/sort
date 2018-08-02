#include "./common/sort.h"
int main()
{
	data_type data[1024001] = {0};
	data_type *p_first = data;
	data_type *p_last = &data[1024000];
	data_type *p_now = p_first;
	data_type *p_next = p_first + 1;
	int index = 0;
	srand((unsigned)time(0));
	for(index = 0; index < 1024001; ++index){
		data[index] = rand()%1000000;
	}
	clock_t start1 = 0;
	clock_t end1 = 0;
	start1 = clock();
	quick_sort(p_first,p_last);
	end1 = clock() - start1;
	while (p_next <= p_last){
		if(p_now > p_next){
			printf("sort faild!\n");
		}
		p_next++;
		p_now++;
	}
	printf("\ntimes = %ld\n",end1);
}
