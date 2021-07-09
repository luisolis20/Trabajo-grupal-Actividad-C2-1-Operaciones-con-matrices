void transpuesta(float (*m1)[5], float (*r)[5])
{

cout<<"Obtener la transpuesta de una matriz";
cout<<"\nElementos de la matriz1 original : \n";
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
	      cout<<m1[i][j]<<" | ";
	}
cout<<"\n";
	}
cout<<endl<<endl;
cout<<"\nElementos de la matriz1 Transpuesta : \n";
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
     	//r[i][j]=0;
     	//r[j][i]=0;
		r[j][i]=m1[j][i];
	      cout<<r[j][i]<<" | ";
	}
	
cout<<"\n";
	}



}

