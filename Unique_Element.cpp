// here we will use XOR operation if we have nos in array like 1 0 0 1
// so we have to find the unique element means which is present only once
// so if we do 1 ^(XOR) 1 then the answer is 0 thay will cancel out each others and remaining element will be unique
int findUnique(int *arr, int size)
{
    // Write your code here

    // pehle int ans bana lenge maan lete hain hume ans nhi pata kya hain bhai
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}