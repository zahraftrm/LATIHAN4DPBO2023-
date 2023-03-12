# LATIHAN4DPBO2023-

Saya Zahra Fitria Maharani NIM 2102545 mengerjakan soal LATIHAN4 dalam mata kuliah Desain dan Pemrograman Berbasis Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## ALUR

Membuat 6 kelas. Kelas-kelas tersebut dipisah menjadi 6 file, yakni :
- Human (kelas nenek)
- Sivitas Akademik (kelas anak)
- Mahasiswa (kelas cucu/anak dari SivitasAkademik)
- Dosen (kelas cucu/anak dari SivitasAkademik)
- Prodi (has a Course)
- Course (has a Mahasiswa and Dosen)

Kemudian terdapat satu file main. Semua bahasa merupakan hardcode.

## DESAIN PROGRAM
![image.png](https://github.com/zahraftrm/LATIHAN4DPBO2023-/blob/main/desain.png)

- Kelas Human: Merupakan kelas nenek karena terdapat atribut-atribut yg disebutkan kembali di kelas bawahnya (Kelas Manusia dan Dosen)
- Kelas SivitasAkademik: Merupakan kelas anak karena SivitasAkademik is a Human atau merupakan manusia
- Kelas Mahasiswa: Merupakan kelas cucu karena mahasiswa merupakan bagian dari sivitas akademik
- Kelas Dosen: Merupakan kelas cucu karena dosen merupakan bagian dari sivitas akademik
- Kelas Prodi: Merupakan composite dimana componentnya adalah Course karena Prodi pasti has a Course 
- Kelas Course: Merupakan composite dimana componentnya adalah Mahasiswa dan Dosen karena Course pasti has a Mahasiswa dan Dosen 

## CONTOH PROGRAM CPP
<img src="https://github.com/zahraftrm/LATIHAN4DPBO2023-/blob/main/CPP/Screenshot%20(1125).png" width=50% height=50%>
<img src="https://github.com/zahraftrm/LATIHAN4DPBO2023-/blob/main/CPP/Screenshot%20(1126).png" width=50% height=50%>
<img src="https://github.com/zahraftrm/LATIHAN4DPBO2023-/blob/main/CPP/Screenshot%20(1127).png" width=50% height=50%>
