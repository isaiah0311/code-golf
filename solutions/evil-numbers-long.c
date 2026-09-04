main(i,j,k){for(i=-1;++i<1001;k=0){for(j=i;j;++k)j&=(j-1);k%2<1?printf("%d
",i):0;}}