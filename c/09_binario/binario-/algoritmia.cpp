void div1( unsigned num_user, unsigned div_num[MAX]){

	unsigned user = user_num(num_user);
	int i = 0;

	unsigned binary[MAX];


	for (int j = 0 ; j<MAX; j++){
		div_num[j] = user;
		user = user/2;
	}
	do{	
		binary[i] = div_num[i]%2;
		printf("%u", binary[i]);
		i++;
	}while(i<MAX);
}
