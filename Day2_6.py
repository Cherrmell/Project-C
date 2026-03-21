nama = input("Masukkan nama pembeli: ")
jumlah = int(input("Masukkan jumlah kebab: "))

harga = 15000
total = harga * jumlah

if jumlah >= 5:
    diskon = 0.1 * total
    total_bayar = total - diskon
    print("\nDapet diskon 10%!")
else:
    diskon = 0
    total_bayar = total

print("\n=== STRUK PEMBELIAN ===")
print("Nama:", nama)
print("Jumlah:", jumlah)
print("Total harga:", total)
print("Diskon:", diskon)
print("Total bayar:", total_bayar)