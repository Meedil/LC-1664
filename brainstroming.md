###Important Note
let's say the integer meant to be removed comes at the middle of an array with 5 elements (index 3)
all the even indecies after the 3rd index will turn odd, and vice versa

##Code Outline 
###attempt 1
make an array of size 2
index 0 will carry the even sum
index 1 will carry the odd sum

a for loop that repeats as many times as nums.size()
calculate the even and odd sum when each element is removed
    that's two for loops... meaning: time complexity of O(n^2)

compare the two elements of the array.
if equal, add 1 to "res"
Exceeded time limit

###attempt 2
we will use the array of size 2 again.
        
we will calculate the sum if the element at index 0 is removed

then a for loop will update the sums as we move to the right.
time complexity: O(n) :D
