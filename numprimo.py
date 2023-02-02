def é_primo(n):
    if n <= 1:
        return False
    for i in range(2, n):
        if n % i == 0:
            return False
    return True

n = int(input("Qual número você quer verificar se é primo: "))
if é_primo(n):
    print(f"{n} é primo.")
else:
    print(f"{n} não é primo.")
