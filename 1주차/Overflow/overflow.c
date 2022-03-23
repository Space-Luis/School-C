int main(void) {
	/*
	short : -32768 ~ 32767
	unsigned short : 0 ~ 65535
	*/
	short s_money = SHRT_MAX; //32767 
	unsigned short u_money = USHRT_MAX; //65535

	s_money += 1; //32768 -> -32768 (overflow)
	printf("s_money = %d\n", s_money);

	u_money += 1; //65536 -> 0 (overflow)		
	printf("u_money = %u", u_money);

	return 0;
}
