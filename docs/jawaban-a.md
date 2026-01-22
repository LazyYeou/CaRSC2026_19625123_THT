## Solusi Soal A

### Ridu | 19625123 

---

### 1. **Analisis Kondisi**
Email saya: _blom ngisi tehe_

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
   UAV jenis ini menggunakan rotor untuk menghasilkan gaya angkat.  
   <img src="../src/a/5/5-a1.png" width="200" />  
   <br>
   Rotor 1 dan 3 berotasi searah jarum jam, sementara rotor 2 dan 4 berotasi berlawanan arah jarum jam. Ini menghasilkan gaya dorong yang seimbang sehingga UAV dapat terbang stabil.
   
   <img src="../src/a/5/5-a2.png" width="200" />  
   <br>

2. **HTOL / Fixed-Wing**  
   UAV jenis ini memerlukan landasan untuk takeoff dan landing. Keunggulannya adalah hemat energi dan waktu terbang yang lebih lama dibandingkan UAV VTOL.

3. **Hybrid**  
   Menggabungkan konsep fixed dan rotary-wing. Fleksibel namun lebih kompleks dalam hal pemeliharaan dan sistemnya lebih berat karena komponen tambahan.

#### b. **Gerakan Roll, Pitch, dan Yaw**
- **Pitch**: Gerak rotasi terhadap sumbu Y (misalnya, hidung pesawat bergerak naik atau turun).  
- **Yaw**: Gerak rotasi terhadap sumbu Z.  
- **Roll**: Gerak rotasi terhadap sumbu X.

<br>
<img src="../src/a/5/5-b.png" alt="Gerakan Roll, Pitch, Yaw" width="200" />  
<br>

**Groundspeed** adalah kecepatan relatif terhadap permukaan bumi, sementara **Airspeed** adalah kecepatan relatif terhadap udara. Groundspeed merupakan penjumlahan dari airspeed dan kecepatan angin.

**HDOP** (Horizontal Dilution of Precision) digunakan untuk mengukur akurasi GPS, dan **RSSI** digunakan untuk mengukur kekuatan sinyal radio.

---

### 6. **Komponen dalam UAV**
- **Chassis**: Kerangka utama yang mendukung semua komponen lainnya seperti sensor, sistem penerbangan, dan motor. Biasanya terbuat dari bahan ringan seperti karbon atau duralumin agar UAV tetap stabil.
- **Motor dan Propeller**: Motor menggerakkan propeller untuk menghasilkan daya angkat dan dorong, memungkinkan UAV terbang.
- **Electronic Speed Controller (ESC)**: Mengatur kecepatan dan arah putaran motor brushless.
- **Baterai**: Menyuplai tenaga untuk motor, sensor, dan sistem kontrol UAV.
- **Flight Controller**: Mengubah perintah input dari pengguna (seperti joystick) menjadi voltase yang dialirkan ke sistem motor UAV.
- **Communication System**: Menggunakan frekuensi radio dua arah, seperti 2.4GHz dan 5GHz, untuk memastikan data dari sensor atau input kontrol dapat dikirim ke operator di darat.
- **Navigation System / GNSS**: Digunakan untuk menentukan posisi UAV di dunia nyata.

<br>
<img src="../src/a/5/5-c.png" alt="Diagram Komponen UAV" width="700" height="500" />  
<br>

---

### 7. **Paper UAV**
**The Survey of Evolutionary Deep Learning-Based UAV Intelligent Power Inspection**  
Paper ini membahas penerapan **Evolutionary Deep Learning (EDL)** dalam sistem power inspection berbasis UAV dan fokus pada deteksi objek di lingkungan yang menantang. EDL dapat meningkatkan performa dengan mengotomatisasi optimasi arsitektur jaringan dan hiperparameter. Tantangan utama yang dihadapi dalam power inspection UAV berbasis **Deep Learning konvensional** adalah deteksi objek kecil, penanganan latar belakang yang kompleks, serta keseimbangan antara kinerja real-time dengan keterbatasan sumber daya komputasi. EDL dan **Evolutionary Computation (EC)** menawarkan solusi untuk mengatasi tantangan tersebut.  
  [Referensi Paper](https://www.mdpi.com/2504-446X/10/1/55)
