maiores_nums = ""
quants = []
nums = []

# Entrada
        
while True:
    quant_digitos, quant_digitos_apagar = map(int, input().split())
    
    if quant_digitos == 0 and quant_digitos_apagar == 0:
        break

    quants.append([quant_digitos, quant_digitos_apagar])
    nums.append(input())

# Processamento

for i in range(len(nums)):
    quant_digitos, quant_digitos_apagar = quants[i]
    digs_restantes = nums[i]
    maior_num = ""

    quant_digitos_restantes_do_maior = quant_digitos - quant_digitos_apagar

    for j in range(quant_digitos_restantes_do_maior):
        quant_digitos_restantes_do_maior -= 1

        possiveis_digs = list(digs_restantes[:len(digs_restantes) - quant_digitos_restantes_do_maior])
        maior_dig = max(possiveis_digs)
        digs_restantes = digs_restantes[digs_restantes.index(maior_dig) + 1:]
        
        maior_num += maior_dig


    maiores_nums += f"{maior_num}\n"

# Saida
print(maiores_nums)