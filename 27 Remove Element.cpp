int removeElement(vector<int>& A, int elem)
{
    int n = A.size();
    int begin=0;
    for(int i=0; i<n; i++) if(A[i]!=elem) A[begin++]=A[i];
    return begin;
}
