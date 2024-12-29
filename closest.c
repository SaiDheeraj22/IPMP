int threeSumClosest(int* A, int n1, int B) {
    int rem=(A[0]+A[1]+A[2])%B;
    int a,b,c,found=0,i,j,k;
    for( i=0;i<n1-2;i++)
	{
		for(j=i+1;j<n1-1;j++)
		{
			for ( k = j+1; k<n1; k++)
            {
                if(B==A[i]+A[j]+A[k])
			 {
                printf("%d %d %d",A[i],A[j],A[k]);
				return A[i]+A[j]+A[k];
			 }
            else 
             {
                int newrem=(A[i]+A[j]+A[k])%B;
                if(newrem<rem)
                {
                    a=A[i];
                     b=A[j];
                     c=A[k];
                }
             }
            }
            
		}
	}
    return a+b+c;
}