#include "sort.h"


static void swap(data_type *p1, data_type *p2)
{
	if(p1 == p2 || NULL == p1 || NULL == p2)
	      return;
	*p1 = (*p1) ^ (*p2);
	*p2 = (*p1) ^ (*p2);
	*p1 = (*p1) ^ (*p2);
}
/*快速排序*/
int quick_sort(data_type *p_first, data_type *p_last)
{
	data_type *p_begin = NULL;
	data_type *p_end = NULL;
	data_type *p_mid = NULL;
	data_type *p = p_first;
	p_begin = p_first;
	p_end = p_last;
	if (p_begin >= p_end){
		return 1;//no data or noly one data
	}
	/*
	//取基准值  虽然递归的次数减少了，但是因为要进行除法，所以程序运行的时间变长
	p_mid = p_first + ((p_last - p_first) >> 1);
	if ((*p_mid < *p_first && *p_mid > *p_last) || (*p_mid > *p_first && *p_mid < *p_last)){
		swap(p_first, p_mid);
	}
	*/
	while (p_begin < p_end){
		while (*p_end >= *p_first && p_begin < p_end){
			p_end--;
		}
		while (*p_begin <= *p_first && p_begin < p_end){
			p_begin++;
		}
		swap(p_begin, p_end);
	}
	if (*p_begin < *p_first)
		swap(p_begin, p_first);
	quick_sort(p_first, --p_end);
	quick_sort(++p_begin, p_last);
	return 0;
}
