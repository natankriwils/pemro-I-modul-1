import math

alas, tinggi = 5, 12
sisiA = alas
sisiB = tinggi
sisiC = int(math.sqrt(alas*2 + tinggi*2))
keliling = sisiA + sisiB + sisiC
luas = (alas * tinggi) // 2

print("Diketahui :")
print(f"Alas = {alas} cm")
print(f"Tinggi = {tinggi} cm")

print("Jawab :")
print(f"Sisi A = {sisiA} cm")
print(f"Sisi B = {sisiB} cm")
print(f"Sisi C = {sisiC} cm")
print(f"Keliling = {keliling} cm")
print(f"Luas = {luas} cm")