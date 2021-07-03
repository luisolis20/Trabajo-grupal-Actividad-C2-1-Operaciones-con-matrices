void mediayvarianza(float (*m1)[5], float (*m2)[5])
{
float s=0,s2=0,v=0,a=0,a2=0,v2=0;
cout<<"Determinar  cual de las 2 matrices tiene la mayor media y varianza";
  cout<<"\nMedia de la matriz 1 :";
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
		s+=m1[i][j]/25;
		//cout<<s;
	}
}
	cout<<s<<endl;
cout<<"\nMedia de la matriz 2 :";
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
		s2+=m2[i][j]/25;
		//cout<<s;
	}
}
cout<<s2<<endl;
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
		a+= m1[i][j]-s * m1[i][j]-s;
		
	}
}
v=a/25;
cout<<" La varianza de la primera matriz es:  "<<v<<endl;
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
		a2+= m2[i][j]-s2 * m2[i][j]-s2;
		
	}
}
v2=a2/25;
cout<<" La varianza de la segunda matriz es:  "<<v2<<endl;	
if (s>s2){
	cout<<" La Primera matriz tiene mayor media   "<<endl;
	}
	else{
		cout<<" La Segunda matriz tiene mayor media   "<<endl;
	}
if (v>v2){
	cout<<" La Primera matriz tiene mayor varianza  "<<endl;
	}
	else{
		cout<<" La Segunda matriz tiene mayor varianza  "<<endl;
	}
		




}
