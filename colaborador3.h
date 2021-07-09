void potencia(float (*m1)[5], int p, float (*r)[5])
{
cout<<"\nElementos de la matriz1 original : \n";
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
	      cout<<m1[i][j]<<" | ";
	}
cout<<"\n";
	}
  
cout<<"Calcular la potencia p de una ";
for(int i=0; i<5; ++i)
        for(int j=0; j<5; ++j)
            r[i][j] = 0;
            
            for(int i=0; i<5; ++i)
        for(int j=0; j<5; ++j)
            for(int z=0; z<5; ++z)
                r[i][j] += m1[i][z] * m1[z][j];



}
