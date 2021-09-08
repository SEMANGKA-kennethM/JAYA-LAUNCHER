#include<stdio.h>

int arr[1000000];
int main(){
	int n, q;
	scanf("%d %d", &n, &q);
	for(int a=1;a<=n;a++){
		scanf("%d",&arr[a]);
	}
	for(int a=1;a<=q;a++){
		long long int find,findAt=0;
		scanf("%lld",&find);
		
		int l=1,r=n;
		while(l<=r){
			int mid=(l+r)/2;
			if(l==r || find==arr[mid] ){
				if(arr[mid]==find){
					while(arr[mid-1]==find)mid--;
					findAt=mid;
					break;
				}else {
					findAt=0;
					break;
				}
			}else if(find<arr[mid]){
				r=mid-1;
			}else if(find>arr[mid]){
				l=mid+1;
			}
		}
		printf("%lld\n", findAt-1);
	}
}
