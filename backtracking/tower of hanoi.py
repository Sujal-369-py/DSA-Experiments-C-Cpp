def tower_of_honai(source, destination, helper, n):
    if n == 1:
        print(f"Moving disk {n} from {source} to {destination}")
        return
    tower_of_honai(source, helper, destination, n - 1)
    print(f"Moving disk {n} from {source} to {destination}")
    tower_of_honai(helper, destination, source, n - 1)

# Example usage
a, b, c, n = 'A', 'B', 'C', 3
tower_of_honai(a, b, c, n)
