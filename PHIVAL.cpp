#include <iostream>
#include <ctime>
#include <iomanip>
#include <fstream>

using namespace std;
#define MAX 1000200 

struct bignum{
	int num[MAX];
	int len;
	bignum(){
		for(int i=0;i<MAX;i++)
			num[i]=0;
		len=0;
  }
};

bignum ans,divi,buff,buff2,phi;

int DecPlace;
void calc();
void multiply(bignum *in,bignum *out,int coef);
bool isbigger(bignum *a,bignum *b);
void diff(bignum *a,bignum *b,bignum *ans);
void phifinalize();
void clean(bignum *a){
	for(int i=0;i<DecPlace+2;i++){
		a->num[i]=0;
	}
	a->len=0;
}

int main(){
	ans.num[0]=2;
	ans.len=1;
    divi.num[0]=1;
	divi.len=3;
	DecPlace=5000;
	clock_t start,end;
	start=clock();
	reverse(divi.num,divi.num+divi.len);
	calc();
	phifinalize();
	return 0;	
}

void calc(){
	for(int found=0;found<DecPlace;found++){
		buff.len=0;
		buff2.len=0;
		multiply(&ans,&buff,20);
		int best=0;
		while(best<9){
			buff.num[0]=best+1;
			buff.len=buff.len;
			multiply(&buff,&buff2,best+1);
			if(isbigger(&divi,&buff2))
				best++;
			else
				break;
		}
	buff.num[0]=best;
	multiply(&buff,&buff,best);
	diff(&divi,&buff,&divi);
	reverse(divi.num,divi.num+divi.len);
	divi.len+=2;
	reverse(divi.num,divi.num+divi.len);
	reverse(ans.num,ans.num+ans.len);
	ans.num[ans.len]=best;
	ans.len++;
	reverse(ans.num,ans.num+ans.len);
	}
}
void multiply(bignum *in,bignum *out,int coef){
	int i=0;
	if(coef==0){
		clean(out);
		out->len=1;
		return;
	}
	int temp=0;
	int len=in->len;
	while(i<len){
		out->num[i]=(in->num[i]*coef)+temp;
		temp=out->num[i]/10;
		out->num[i++]%=10;
	}
	if(i==len && temp!=0){
		out->num[i]=(in->num[i]*coef)+temp;
		temp=out->num[i]/10;
		out->num[i++]%=10;
	}
	out->len=i;
}

bool isbigger(bignum *a,bignum *b){
	if(a->len!=b->len)
		return (a->len>b->len);
	for(int i=0;i<a->len;i++)
		if(a->num[a->len-i-1]!=b->num[b->len-i-1])
			return a->num[a->len-i-1]>b->num[b->len-i-1];
	return false;
}

void balance(bignum *num,int i){
	if(num->num[i+1]==0){
		balance(num,i+1);
	}
	num->num[i+1]--;
	num->num[i]+=10;
	if(i==num->len-2 && num->num[num->len-1]==0)
		num->len--;
}
void diff(bignum *a,bignum *b,bignum *ans){
	bignum *a1,*a2;
	if(isbigger(a,b)){
		a1=a;
		a2=b;
	}else{
		a1=b;
		a2=a;
	}
	if(ans!=a1){
		for(int i=0;i<a->len;i++)
			ans->num[i]=a1->num[i];
		ans->len=a1->len;
	}
	for(int i=0;i<a2->len;i++){
		if(ans->num[i]<a2->num[i])
			balance(ans,i);
		ans->num[i]-=a2->num[i];
	}
	int i=0;
	while(ans->num[ans->len-i-1]==0)
		i++;
	ans->len-=i;
}

void phifinalize(){
	int temp=0;
	ans.num[ans.len-1]+=1;
	phi.len=ans.len;
	for(int i=0;i<ans.len;i++){
		temp*=10;
		temp+=ans.num[ans.len-i-1];
		phi.num[phi.len-i-1]=temp/2;
		temp%=2;
	}
}
