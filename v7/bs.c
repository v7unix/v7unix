main()
{
	char buf[512*20];
	int n;
	for(;;)
		printf("Blocksize %d\n", read(0, buf, 512*20));
}
