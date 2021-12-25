    const BOYUT =10;
    int grafik[10] = { 19,3,15,7,11,9,13,5,17,1};
    int i,j;

    for(i=0; i<=BOYUT-1;i++){

        printf("%d. eleman degeri:%5d -->", i, grafik[i]);

        for (j=1; j<=grafik[i]; j++){
             printf("*");
        }
    printf("\n");
  }
  return 0;
}
