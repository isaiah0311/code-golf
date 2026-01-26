main(i,j,n){for(i=0;++i<1001;){n=0;for(j=i;--j;)i%j<1?n+=j:0;n>i?printf("%d
",i):0;}}