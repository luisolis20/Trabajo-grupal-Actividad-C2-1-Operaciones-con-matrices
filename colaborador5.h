void mediayvarianza(float (*m1)[5], float (*m2)[5])
{

float a,a1,v1,c,me1,a2,a3,c1,v2,me2;
	a=0;
	a1=0;
	c=0;
	a2=0;
	a3=0;
	c1=0;
	
	cout<<"Determinar  cual de las 2 matrices tiene la mayor media y varianza\n";
	
	for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
	     
	     a += *(*(m1+j)+i);
	     c += 1;
	}
	}
	me1=a/c;
	cout<<"La media de la primera matriz es: "<<me1<<endl;
	
	for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
	     
	     a1 += (*(*(m1+j)+i)-me1)*(*(*(m1+j)+i)-me1);
	}
	}
	v1=a1/c;
	cout<<"La varianza de la primera matriz es: "<<v1<<endl;
	
	for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
	      
	     a2 += *(*(m2+j)+i);
	     c1 += 1;
	}
	}
	me2=a2/c1;
	cout<<"La media de la segunda matriz es: "<<me2<<endl;
	
	for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
	     
	     a3 += (*(*(m2+j)+i)-me2)*(*(*(m2+j)+i)-me2);
	}
	}
	v2=a3/c1;
	cout<<"La varianza de la segunda matriz es: "<<v2<<endl;
	if (me1>me2){
	cout<<" La Primera matriz tiene mayor media   "<<endl;
	}
	else{
		cout<<" La Segunda matriz tiene mayor media   "<<endl;
		
	}
if (v1>v2){
	cout<<" La Primera matriz tiene mayor varianza  "<<endl;
	}
	else{
		cout<<" La Segunda matriz tiene mayor varianza  "<<endl;
		
	}
}


