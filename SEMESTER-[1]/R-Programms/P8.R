# Write a program to access list elements,
# modify a list element, add items to list,
# remove items from a list, length of list.

x <- list(123, 345, "Maheshwar", TRUE)

# 1. Access list elements
cat("Original List:\n")
print(x)

# 2. Modify an element
x[[2]] <- 999
cat("\nAfter modifying the second element:\n")
print(x)

# 3. Add an item
x <- append(x, "Mondal")
cat("\nAfter adding an item:\n")
print(x)

# 4. Remove an item
x[[1]] <- NULL
cat("\nAfter removing the first item:\n")
print(x)

# 5. Length of the list
cat("\nThe final length of the list is:", length(x), "\n")