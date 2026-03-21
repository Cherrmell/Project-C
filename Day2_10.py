import os

keranjang = []

def tambah_barang():
    nama = input("Nama barang: ")
    harga = int(input("Harga: "))
    jumlah = int(input("Jumlah: "))

    barang = {
        "nama": nama,
        "harga": harga,
        "jumlah": jumlah
    }

    keranjang.append(barang)
    print("Barang berhasil ditambahkan!")

def lihat_barang():
    if not keranjang:
        print("Keranjang kosong!")
        return

    print("\n=== DAFTAR BARANG ===")
    for i, item in enumerate(keranjang):
        subtotal = item["harga"] * item["jumlah"]
        print(f"{i+1}. {item['nama']} | {item['harga']} x {item['jumlah']} = {subtotal}")

def hapus_barang():
    lihat_barang()
    if not keranjang:
        return

    index = int(input("Pilih nomor barang yang ingin dihapus: ")) - 1

    if 0 <= index < len(keranjang):
        keranjang.pop(index)
        print("Barang berhasil dihapus!")
    else:
        print("Nomor tidak valid!")

def hitung_total():
    total = 0
    for item in keranjang:
        total += item["harga"] * item["jumlah"]
    return total

def simpan_struk():
    total = hitung_total()

    with open("struk.txt", "w") as file:
        file.write("=== STRUK BELANJA ===\n")
        for item in keranjang:
            subtotal = item["harga"] * item["jumlah"]
            file.write(f"{item['nama']} | {item['harga']} x {item['jumlah']} = {subtotal}\n")

        file.write(f"\nTOTAL: {total}")

    print("Struk berhasil disimpan ke file 'struk.txt'!")

# MAIN PROGRAM
while True:
    print("\n=== MENU KASIR ===")
    print("1. Tambah Barang")
    print("2. Lihat Barang")
    print("3. Hapus Barang")
    print("4. Hitung Total")
    print("5. Simpan Struk")
    print("6. Keluar")

    pilihan = input("Pilih menu: ")

    if pilihan == "1":
        tambah_barang()
    elif pilihan == "2":
        lihat_barang()
    elif pilihan == "3":
        hapus_barang()
    elif pilihan == "4":
        print("Total belanja:", hitung_total())
    elif pilihan == "5":
        simpan_struk()
    elif pilihan == "6":
        print("Terima kasih! 👋")
        break
    else:
        print("Pilihan tidak valid!")