# library
from Prodi import Prodi
from Course import Course
from Dosen import Dosen
from Mahasiswa import Mahasiswa

# welcome db Mahasiswa!
print ("\n===== Selamat Datang di Database Mahasiswa UPI =====\n")

# membuat array of objects untuk kelas Mahasiswa
arrMhs = []

# isi data untuk kelas Mahasiswa
arrMhs.append(Mahasiswa(11876543, "Zahra Fitria", "P", "UPI", "zahraa@upi.edu", 2102545,"FPMIPA"))
arrMhs.append(Mahasiswa(11820013, "Gladies Andara", "P", "UPI", "gladies100@upi.edu", 2103401,"FPMIPA"))
arrMhs.append(Mahasiswa(10098766, "Sultan Hasanudin", "L", "UPI", "inisultaan@upi.edu", 2102005,"FPMIPA"))

# tampilkan keluaran
i = 1
for Mahasiswa in arrMhs:
    print("No.", i)    
    print("NIK          : ", Mahasiswa.getNik())
    print("Nama         : ", Mahasiswa.getNama())
    print("Jenkel       : ", Mahasiswa.getJenkel())
    print("Asal Univ.   : ", Mahasiswa.getAsal_Universitas())
    print("Email Edu    : ", Mahasiswa.getEmail_Edu())
    print("NIM          : ", Mahasiswa.getNim())
    print("Fakultas     : ", Mahasiswa.getFakultas())
    print()
    i+=1

# welcome db Dosen!
print ("\n===== Selamat Datang di Database Dosen UPI =====\n")

# membuat array of objects untuk kelas Dosen
arrDsn = []

# isi data untuk kelas Dosen
arrDsn.append(Dosen(11223344, "Rosa Ariani", "P", "UPI", "rosaAriani@upi.edu", 190001231,"FPMIPA", "S2", "Algoritma"))
arrDsn.append(Dosen(11223355, "Lala Septem Riza", "L", "UPI", "lalaS@upi.edu", 190006781,"FPMIPA", "Prof.", "Pengolahan Data"))

# tampilkan keluaran
i = 1
for Dosen in arrDsn:
    print("No.", i)    
    print("NIK          : ", Dosen.getNik())
    print("Nama         : ", Dosen.getNama())
    print("Jenkel       : ", Dosen.getJenkel())
    print("Asal Univ.   : ", Dosen.getAsal_Universitas())
    print("Email Edu    : ", Dosen.getEmail_Edu())
    print("NIP          : ", Dosen.getNip())
    print("Fakultas     : ", Dosen.getFakultas())
    print("Pend Terakhir: ", Dosen.getPend_Terakhir())
    print("Keahlian     : ", Dosen.getKeahlian())
    print()
    i+=1

# welcome db Prodi!
print ("\n===== Selamat Datang di Database Prodi UPI =====\n")

# membuat array of objects untuk kelas Prodi
arrProdi = []

# isi data untuk kelas Prodi
arrProdi.append(Prodi("Ilmu Komputer", "IK201", "Desain dan Pemrograman Berorientasi Objek"))
arrProdi.append(Prodi("Ilmu Komputer", "IK201", "Big Data"))

# tampilkan keluaran
i = 1
for Prodi in arrProdi:
    print("No         : ", i)
    print("Nama Prodi : ", Prodi.getNama_Prodi())
    print("Kode Prodi : ", Prodi.getKode())
    print("Matkul     : ", Prodi.getCourse())
    print()
    i+=1