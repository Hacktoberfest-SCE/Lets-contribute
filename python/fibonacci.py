n_terms = int(input("How many terms would you like printed out? "))

n1 = 0
n2 = 1
counter = 0

if n_terms <= 0:
    print("Please give a positive integer")
elif n_terms == 1:
    print(f"Fibonacci sequence up to {n_terms}: {n1}")
else:
    while counter < n_terms:
        print(n1)
        nth_term = n1 + n2
        n1 = n2
        n2 = nth_term
        counter += 1
