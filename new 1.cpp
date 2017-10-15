#include<iostream.h>
void main()
{
	cin>>a;
	cout<<"请输入数字a:";
	if(a<10)
		cout<<"小于10"<<endl;
	else 
		if(a>=10&&a<=99)
			cout<<"10~99"<<endl;
		else
			if(a>=100&&a<=999)
				cout<<"100~999"<<endl;
			else
				cout<<1000以上<<endl;
}
