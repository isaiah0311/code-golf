main(i,j,p){for(i=0;++i<101;p=0){for(j=1;++j<i;)p+=i%j<1;p?0:printf("%d
",i);}}