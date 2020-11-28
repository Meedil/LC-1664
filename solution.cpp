/*** attempt 1 ***/

//bool i_odd;

// for(int i = 0; i < nums.size(); i++)
// {
//     arr[0] = 0; arr[1] = 0;
//     i_odd = i%2;

//     //even sum
//         //left to 'i'
//     for(int j = 0; j < i; j += 2)
//     {
//         arr[0] += nums[j];
//     }
//         //right of 'i'
//     for(int j = i + 2 - !i_odd; j < nums.size(); j += 2)
//     {
//         arr[0] += nums[j];
//     }

//     //odd sum
//         //left to 'i'
//     for(int j = 1; j < i; j += 2)
//     {
//         arr[1] += nums[j];
//     }
//         //right to 'i'
//     for(int j = i + 2 - i_odd; j < nums.size(); j += 2)
//     {
//         arr[1] += nums[j];
//     }
//     //cout << arr[0] << "\t" << arr[1] << endl;

//     res += arr[0] == arr[1];
// }

/*** attempt 2 - succesful ***/

int arr[2] = {0,0};
int res = 0;
bool even;
/*when removing element at index 0*/
//even sum
for(int i = 1; i < nums.size(); i += 2)
{
    arr[0] += nums[i];
}
//odd sum
for(int i = 2; i < nums.size(); i += 2)
{
    arr[1] += nums[i];
}
res += arr[0] == arr[1];
/*updating fore every other case*/
for(int i = 1; i < nums.size(); i ++)
{
    even = (i+1) % 2;
    arr[even] -= nums[i];
    arr[even] += nums[i-1];
    res += arr[0] == arr[1];
}
