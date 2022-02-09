main()
{
    int a,b,c;
    printf("enter two int numbers");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("after A=%d B=%d",a,b);
    getch();
}
