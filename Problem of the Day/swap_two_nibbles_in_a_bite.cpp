
class solution {
    public:
int swapNibbles(int n) {
        // code here
    vector <int> arr;
    while(n!=0)
    {
        arr.push_back(n%2);
        n/=2;
    }
    while(arr.size()!=8)
    {
        arr.push_back(0);
    }
    int i=0;
    int j = arr.size()-1;
    while(i<j)
    {
        int temp= arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    int answer = 0;
    for(int i =0 ,j =4;i<=3; i++,j++)
    {
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    int count = 0;
    for(int i = 7; i>=0; i--)
    {
        answer = answer+arr[i]*pow(2,count);
        count++;
    }
    return answer;
}
}
