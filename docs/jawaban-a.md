## Solusi Soal A

### Ridu | 19625123 

---

### 1. **Analisis Kondisi**
Email: _blom ngisi tehe_

---

### 2. **Source Control Management**

#### a. **Commands dalam Git**
- **`git init`**  
  Menginisiasi git repository  
  **Contoh:** `git init .`

- **`git add`**  
  Memindahkan perubahan pada _working directory_ ke _staging area_  
  **Contoh:** `git add <filename>`

- **`git commit`**  
  Menyimpan perubahan yang ada pada project ke _local git repository history_  
  **Contoh:** `git commit -m "Commit Message"`

- **`git push`**  
  Meng-upload perubahan dari _local repository_ ke _remote repository_  
  **Contoh:** `git push`

- [**Referensi Git Commands**](https://git-scm.com/docs/git#_git_commands)

#### b. **Integrasi Git dan VSCode dengan GitHub**
<br>
<img src="../src/a/2/2-b.png" alt="Integrasi local git dan github" width="200" height="500" />  
<br>

#### c. **Min aku beneran udah kerjain kok...**
**Reaksi atmin:**  
<br>
<img src="../src/etc/mana-bukti.png" alt="mana-buktinya" width="200" />  
<br>

**Gweh bilek:** Ini buktinya ✋😛🤚  
<br>
<img src="../src/a/2/2-c1.png" alt="2-c1" width="400" />  
<br>
<img src="../src/a/2/2-c2.png" alt="2-c2" width="400" />  
<br>

#### d. **Git SSH**
<br>
<img src="../src/a/2/2-d.png" alt="2-d" width="400" />  
<br>

---

### 3. **Pengenalan Ground Control Station**

#### a. **Tangkapan Layar Utama Mission Planner**
<br>
<img src="../src/a/3/3-a.png" alt="Layar Utama Mission Planner" width="360" />  
<br>

#### b. **Fitur Utama Mission Planner**
- **PLAN**  
  Fitur untuk membuat mission, fence, dan rally point.  
  **Mission** berfungsi untuk merencanakan dan mengeksekusi penerbangan UAV. **Fence** adalah pembuatan area pembatas untuk penerbangan UAV, sedangkan **Rally Point** adalah area darurat tempat UAV mendarat atau loiter ketika mode RTL (Return to Launch) tidak memungkinkan.

- **DATA**  
  Menampilkan informasi visual dari vehicle.  
  Memungkinkan pemantauan data telemetri UAV saat beroperasi.

- **SETUP**  
  Pengaturan UAV, termasuk kalibrasi Accel, kalibrasi Radio, dan Failsafe plan sebelum operasional.

- **SIMULATION**  
  Menjalankan SITL (Software in The Loop) untuk operasi UAV secara virtual.

#### c. **[Waypoint Mission](../src/a/3/mission.waypoints)**  
[Referensi Fitur Mission Planner](https://ardupilot.org/planner/docs/mission-planner-features.html)

---

### 4. **Development Environment**

#### a. **Tangkapan Layar Instalasi Library**
<br>
<img src="../src/a/4/4-a.png" alt="Instalasi Library" width="360" />  
<br>

#### b. **NTAR AJAHHH wkwkwkkw**

---

### 5. **Dasar-Dasar UAV**

#### a. **Klasifikasi UAV**
1. **VTOL / Rotary-Wing**  
    UAV jenis ini menggunakan baling-baling (rotor) sebagai penghasil gaya angkat. Rotor yang saling diagonal memiliki arah rotasi yang sama.

   <img src="../src/a/5/5-a1.png" width="200" />  
   <br>
   Dapat dilihat pada gambar diatas, rotor 1 dan 3 memiliki arah rotasi yang sama yaitu searah dengan jaram jam, sedangkan rotor 2 dan 4 berotasi tidak searah dengan jaram jam. Perbedaan arah rotasi ini menghasilkan total gaya dorong yang sama sehingga membuat UAV dapat terbang secara stabil. Lalu agar UAV dapat bergerak serta berotasi, gyroscope dan control unit pada UAV akan menentukan motor mana yang rotasinya ditingkatkan dan diturunkan tergantung input yang diberi dari pilot. Gambar dibawah ini merupakan contoh input dan gerak yang dihasilkan.
   
   <img src="../src/a/5/5-a2.png" width="200" />  
   <br>

2. **HTOL / Fixed-Wing**  
   UAV jenis ini memerlukan landasan untuk takeoff ataupun landing. Terdapat 4 gaya utama pada UAV ini, yaitu gaya angkat (lift), gaya berat, gaya hambat (drag), dan gaya dorong (thrust). Gaya angkat pada UAV ini disebabkan adanya perbedaan tekanan udara antara bagian atas dan bawah sayap (Kutta-Joukowski Theorem). Keunggulannya yaitu menggunakan lebih sedikit energi, lebih hemat, dan memiliki waktu terbang lebih lama dibanding UAV jenis VTOL.

3. **Hybrid**  
   UAV jenis ini menggabungkan konsep fixed dan rotary-wing. Konsep rotary-wing digunakan untuk menciptakan gaya angkat, lalu setelah berada diudara digunakan konsep fixed-wing. Hal itu membuat UAV jenis ini sangat fleksibel, namun sistemnya cenderung kurang reliable dibanding fixed dan rotary wing, maintenance-nya lebih kompleks, dan massanya yang tinggi karena memiliki lebih banyak komponen.

#### b. **Gerakan Roll, Pitch, dan Yaw**
- **Pitch**: Gerak rotasi terhadap sumbu Y (misalnya, hidung pesawat bergerak naik atau turun).  
- **Yaw**: Gerak rotasi terhadap sumbu Z.  
- **Roll**: Gerak rotasi terhadap sumbu X.

<br>
<img src="../src/a/5/5-b.png" alt="Gerakan Roll, Pitch, Yaw" width="200" />  
<br>

**Groundspeed** adalah kecepatan pesawat relatif terhadap permukaan bumi, sementara **Airspeed** adalah kecepatan relatif terhadap udara. Groundspeed merupakan penjumlahan dari airspeed dan kecepatan angin.

**HDOP** (Horizontal Dilution of Precision) digunakan untuk mengukur akurasi **GPS** (Global Positioning System), dan **RSSI** (Received Signal Strength Indicator) adalah indikator yang digunakan untuk mengukur daya/kekuatan dari sinyal radio yang diterima oleh device.

#### c. **Komponen dalam UAV**

- **Chassis**: Kerangka utama yang mendukung semua komponen lainnya seperti sensor, sistem penerbangan, dan motor. Biasanya terbuat dari bahan ringan seperti karbon atau duralumin agar UAV tetap stabil.
- **Motor dan Propeller**: Motor menggerakkan propeller untuk menghasilkan daya angkat dan dorong, memungkinkan UAV terbang.
- **Electronic Speed Controller (ESC)**: Mengatur kecepatan dan arah putaran motor brushless.
- **Baterai**: Menyuplai tenaga untuk motor, sensor, dan sistem kontrol UAV.
- **Flight Controller**: Mengubah perintah input dari pengguna (seperti joystick) menjadi voltase yang dialirkan ke sistem motor UAV.
- **Communication System**: Menggunakan frekuensi radio dua arah, seperti 2.4GHz dan 5GHz, untuk memastikan data dari sensor atau input kontrol dapat dikirim ke operator di darat.
- **Navigation System / GNSS**: Digunakan untuk menentukan posisi UAV di dunia nyata.

Diagram komponen:

<br>
<img src="../src/a/5/5-c.png" alt="Diagram Komponen UAV" width="700" height="500" />  
<br>

#### d. **Paper UAV**
**The Survey of Evolutionary Deep Learning-Based UAV Intelligent Power Inspection**  
Paper ini membahas penerapan **Evolutionary Deep Learning (EDL)** dalam sistem power inspection berbasis UAV dan fokus pada deteksi objek di lingkungan yang menantang. EDL dapat meningkatkan performa dengan mengotomatisasi optimasi arsitektur jaringan dan hiperparameter. Tantangan utama yang dihadapi dalam power inspection UAV berbasis **Deep Learning konvensional** adalah deteksi objek kecil, penanganan latar belakang yang kompleks, serta keseimbangan antara kinerja real-time dengan keterbatasan sumber daya komputasi. EDL dan **Evolutionary Computation (EC)** menawarkan solusi untuk mengatasi tantangan tersebut.  
[Referensi Paper](https://www.mdpi.com/2504-446X/10/1/55)

---

### 6. **Algoritma**
### a. Algoritma A* dan D*

#### Algoritma A*

A* adalah algoritma pencarian berbasis best-first search yang mempertimbangkan baik cost untuk mencapai node dari node awal (g(n)) maupun perkiraan cost dari node tersebut ke tujuan (h(n)). Algoritma ini menggunakan dua himpunan, yaitu open set dan closed set, untuk mengeksplorasi graf.

- **Open Set**: Berisi node yang akan dievaluasi. Pada awalnya, hanya berisi node awal.
- **Closed Set**: Berisi node yang sudah dievaluasi.

Algoritma ini secara berulang memilih node dalam open set dengan nilai f-score terkecil, mengevaluasi node tersebut, lalu menambahkannya ke dalam closed set. Kemudian, node tersebut diperluas dengan mempertimbangkan tetangga-tetangganya dan menghitung f-score mreka.

#### 3.3 **Menghitung f-score**

F-score untuk sebuah node n dihitung dengan rumus sebagai berikut:

$$f(n) = g(n) + h(n)$$

- **g(n)** adalah cost jalur dari node awal ke node n.
- **h(n)** adalah perkiraan cost dari node n ke tujuan.

#### Algoritma D*

 Kekuatan inti algoritma D* terletak pada kemampuan perencanaan jalur dinamisnya, yang memungkinkannya untuk menyesuaikan jalur berdasarkan perubahan lingkungan secara real-time Algoritma D\* beroperasi secara iteratif, memperbarui jalur ke tujuan secara terus-menerus dengan mempertimbangkan perubahan di lingkungan, seperti **rintangan dinamis** atau modifikasi medan. Kemampuan untuk beradaptasi secara real-time menjadikannya aset berharga untuk navigasi UAV otonom, di mana responsivitas terhadap kondisi yang berkembang sangat penting. 

#### Keunggulan D*

Jika dibandingkan dengan metode navigasi lain yang banyak digunakan dalam UAV, sepert, algoritma A*, Machine Learning dan Deep Learning, algoritma D\* menunjukkan keunggulan dalam lingkungan dinamis. D\* memastikan realtime adaptation dan navigasi tanpa tabrakan. Integrasinya dengan sistem persepsi seperti LiDAR dan kamera semakin meningkatkan efektivitasnya.
 
#### b. PID
PID adalah singkatan dari **Proportional-Integral-Derivative** yang merujuk pada algoritma pengendalian yang sering digunakan dalam sistem kontrol otomatis. PID digunakan untuk menjaga nilai output dari sistem tetap pada titik yang diinginkan (setpoint) dengan cara mengatur input ke sistem berdasarkan kesalahan (error) yang ada.

PID mengkombinasikan tiga komponen utama:
1. **Proportional (P)**: Bagian ini mengontrol besarnya respons berdasar besarnya kesalahan. Semakin besar kesalahan, semakin besar respons yang diberikan dan viceversa. 
2. **Integral (I)**: Bagian ini mengatasi kesalahan yang bersifat kumulatif atau jangka panjang dengan menjumlahkan kesalahan yang terjadi selama periode waktu tertentu.
3. **Derivative (D)**: Bagian ini merespons perubahan kesalahan seiring waktu, sehingga dapat memperbaiki kestabilan sistem.

### Rumus
Hasil dari PID dapat dihitung dengan rumus sebgai berikut:

$$
u(t) = K_p e(t) + K_i \int_0^t e(\tau) \, d\tau + K_d \frac{d}{dt} e(t)
$$

Di mana:
-  $u(t)$ adalah output kontroler PID pada waktu $t$
-  $e(t)$ adlah kesalahan pada waktu $t$, yaitu selisih antara setpoint dan output aktual sistem
- $K_p$ adalah konstanta proportional yang mengatur besarnya respons proporsional terhadap kesalahan
- $K_i$ adalah konstanta integral yng mengatur pengaruh kesalahan kumulatif
- $K_d$ adalah konstanta derivative yang mengatur pengaruh perubahan kesalahan terhadap output




