# Problem Statement
```
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 
Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].


Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]


Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]


 
Constraints:


	2 <= nums.length <= 104
	-109 <= nums[i] <= 109
	-109 <= target <= 109
	Only one valid answer exists.


 
Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?
```

---

# Transparency Statement
As a mechanical engineer using C++ for the first time I solved this with nested for loops resulting in a time complexity of O(N^2). In order to solve this with a time complexity of O(N) I asked ChatGPT what strategies I can use. 

**I learned to use hash maps to refrence data I have already visited**

### Prompt:
```dont solve it for me but what methods would I use to chnage this solution from O(n^2) to something less time complex```

### Response
```
Great question — here are the methods and ideas you’d use to improve the time complexity:

1. Use a Hash Map (or Hash Set)
Instead of linearly searching the vector (find), store elements in a hash map for O(1) lookups.

Why it helps: Lookup in a hash map is on average O(1) vs. O(n) for linear search.

Use case: Common in problems like "two sum".

2. Preprocessing the Data
Build a data structure (like a map or set) ahead of time that allows faster queries.

Store values as keys in a hash map with their indices or counts.

Reduces repeated work.

3. Two-pointer technique (for sorted arrays)
If the array is sorted or can be sorted, the two-pointer method helps in some subtraction-based problems.

Why it helps: After sorting (O(n log n)), you can solve the problem in O(n) time.

Caveat: Modifies order and changes problem semantics if indices matter.

4. Avoid duplicate work
If you’re checking the same pairs multiple times, track which values you've already processed.

If you want a hint tailored to a specific problem (like "two sum"), let me know — I’ll keep it abstract until then.
```

## References
[1] GeeksforGeeks, “unordered_map in C++ STL,” *GeeksforGeeks*, Aug. 23, 2022. [Online]. Available: [https://www.geeksforgeeks.org/unordered_map-in-cpp-stl/](https://www.geeksforgeeks.org/unordered_map-in-cpp-stl/)
[2] GeeksforGeeks, “How to use HashMap in C++?”, *GeeksforGeeks*, Aug. 21, 2023. [Online]. Available: [https://www.geeksforgeeks.org/how-to-use-hashmap-in-cpp/](https://www.geeksforgeeks.org/how-to-use-hashmap-in-cpp/)
[3] Stack Overflow, “What is the best way to use a hashmap in C++?”, *Stack Overflow*, Sep. 2, 2010. [Online]. Available: [https://stackoverflow.com/questions/3578083/what-is-the-best-way-to-use-a-hashmap-in-c](https://stackoverflow.com/questions/3578083/what-is-the-best-way-to-use-a-hashmap-in-c)
