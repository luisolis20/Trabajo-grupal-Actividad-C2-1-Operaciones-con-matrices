void producto(float (*m1)[5], float (*m2)[5], float (*r)[5])
{
  cout<<"\nElementos de la matriz1 original : \n";
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
	      cout<<m1[i][j]<<" ";
	}
cout<<"\n";
	}
	cout<<"\nElementos de la matriz 2 original: \n";
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
	      cout<<m2[i][j]<<" ";
	}
cout<<"\n";
	}

cout<<"Obetener el producto de las dos matrices ";
/ Inicializamos la matriz r.
    for(int i=0; i<5; ++i)
        for(int j=0; j<5; ++j)
            r[i][j] = 0;

    // Generamos la matriz r.
    for(int i=0; i<5; ++i)
        for(int j=0; j<5; ++j)
            for(int z=0; z<5; ++z)
                r[i][j] += m1[i][z] * m2[z][j];



}
