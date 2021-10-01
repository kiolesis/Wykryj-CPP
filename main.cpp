#include<iostream>

using namespace std;

main()
{
	string wyraz;
	cout<<"podaj wyraz";
	cin>>wyraz;
	int k=0;
	char tab[2];
	tab[0]='a';
	tab[1]='b';
	for(int i=0;i<=wyraz.size();i++)
	{
		if(wyraz[i]==tab[0] && wyraz[i+1]==tab[1])
		k++;
	}
	if(k>0)cout<<"wyraz zawiera ab";
	else cout<<"wyraz nie zawiera ab";
}
