def max_sliding_window_product(nums):
    # Check if the list has fewer than two elements
    if len(nums) < 2:
        return 0  # No two consecutive elements to process
    
    max_sum = float('-inf')  # Initialize to the smallest possible value
    
    for i in range(len(nums) - 1):
        # Multiply two consecutive numbers with their respective indices
        product_sum = nums[i] * i + nums[i + 1] * (i + 1)
        max_sum = max(max_sum, product_sum)  # Update max_sum if current sum is greater
    
    return max_sum

# Example usage:
nums = [3, 6, 1, 4, 2]
result = max_sliding_window_product(nums)
print("Maximum sum:", result)  # Output will be 15