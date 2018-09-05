// 综合题2.2
void reverse(Sqlist &L){
	Elemtype temp;
	for(int i=0;i<L.length / 2;i++){
		temp = L.data[i];
		L.data[i] = L.data[L.length-i];
		L.data[L.length - i] = temp;
	}
}
// 这题做的简直完美，和答案一毛一样，一个字都不差。。。




// 2.4



// 综合2.5
// my way:所有的冒号都给忘了
bool del_st(Sqlist &L,Elemtype s,Elemtype t){
	// 是否可以运行
	if(s >= t || L.length == 0){
		return False
	}
	// 进行删除操作
	int k = 0;
	for (var i=0;i<L.length;i++){
		if(L.data[i] <= s || L.data[i] >= t){
			L.data[k] = L.data[i]
			k++
		}
	}
	L.length = k
	// 这一步我忘了----------，最后要返回true
	return true
}
// 书中的方法
bool del_st(Sqlist &L,Elemtype s,Elemtype t){
	// 是否可以运行
	if(s >= t || L.length == 0){
		return False;
	}
	int i,k = 0;
	for(i=0;i<L.length;i++){
		if(L.data[i]>s && L.data[i] < t){
			k++;
		}else{
			L.data[i-k] = L.data[i];
		}
	}
	L.length -= k;
	return true;
}



// 2.6
void del_repeat(Sqlist &L){
	if(L.length == 0){
		return
	}
	int i = 0;
	int k = 1;
	for (i=0;i<L.length;i++){
		if(i > 0){
			if(L.data[i] != L.data[i-1]){
				L.data[k] = L.data[i];
				k++;
			}
		}
	}
	L.length = k
	return
}


