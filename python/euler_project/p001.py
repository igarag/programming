# Multiples of 3 and 5. If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
# Find the sum of all the multiples of 3 or 5 below 1000.

cum_sum = 0
max_iter = 1000

for number in range(1, max_iter):
    if number % 3 == 0 or number % 5 == 0:
        cum_sum += number
        print(number)

print(f"Final sum: {cum_sum}")
