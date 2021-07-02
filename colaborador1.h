void ingresar(float (*m1)[5], float (*m2)[5])
{

cout<<"Ingresar y mostrar los valores de los arreglos o matrices";
cout<<"\nDigitando los elementos de la primera matriz: \n";
for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
			cin>>*(*(m1+i)+j); 
		}
	}
cout<<"\nIngrese valores de la matriz2:\n";
 for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
			cin>>*(*(m2+i)+j); 
		}
	}





}
void mostrar(float (*m1)[5],float (*m2)[5]){
	cout<<"\nElementos de la matriz 1 : \n";
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
	      cout<<m1[i][j]<<" ";
	}
cout<<"\n";
	}
	cout<<"\nElementos de la matriz 2: \n";
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
	      cout<<m2[i][j]<<" ";
	}
cout<<"\n";
	}
}
