void display(int arr[15], int n) {
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void merge(int arr[15], int low, int mid, int high) {
	int i,j,k,n1,n2;
	n1=mid-low+1;
	n2=high-mid;
	int low_arr[n1];
	int high_arr[n2];
	for(i=0;i<n1;i++){
		low_arr[i]=arr[low+i];
	}
	for(j=0;j<n2;j++){
		high_arr[j]=arr[mid+1+j];
	}
	i=0;
	j=0;
	k=low;
	while(i<n1 && j<n2){
		if(low_arr[i]<= high_arr[j]){
			arr[k]=low_arr[i];
			i++;
		}
		else{
			arr[k]=high_arr[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		arr[k]=low_arr[i];
		i++;
		k++;
	}
	while(j<n2){
		arr[k]=high_arr[j];
		j++;
		k++;
	}
}
void splitAndMerge(int arr[15], int low, int high) {
	if(low<high){
		int mid=low+(high-low)/2;
		splitAndMerge(arr,low,mid);
		splitAndMerge(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}
