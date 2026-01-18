## Solusi Soal A
### Ridu | 19625123 

### 1. **Analisis Kondisi**
my email gweh : _blom ngisi tehe_

### 2. **Source Control Management**
* a. Commands dalam git: 
    * `git init` \
    Menginisiasi git repository\
    **Contoh**: `git init .`
    * `git add`\
    Memindahkan perubahan pada _working directory_ ke _staging area_\ 
     **Contoh**: `git add <filename>`
    * `git commit`\
    Menyimpan perubahan yang ada pada project ke _local git repository history_\
    **Contoh**: `git commit -m "Commit Message"` 
    * `git push` \
    Meng-_upload_ perubahan pada _local repository_ ke _remote repository_ \
    **Contoh**: `git push`
    * [**Referensi Git Commands**](https://git-scm.com/docs/git#_git_commands) 
    <br>
* b. Integrate git dan vscode dengan github
    <br>
<img src="../src/a/2/2-b.png" alt="Integrasi local git dan github" width="200" height="500"> 
    <br>
    
* c. Min aku beneran udah kerjain kok...\
    **Reaksi atmin**:
    <br>
    <img src="../src/etc/mana-bukti.png" alt="mana-buktinya" width="200"/> 
    <br>

    **Gweh bilek**: Ini buktinya ✋😛🤚 
    <br>
    <img src="../src/a/2/2-c1.png" alt="2-c1" width="400"/> 
    <br>
    <img src="../src/a/2/2-c2.png" alt="2-c2" width="400"/> 
    <br>

* d.Git SSH 
    <br>
    <img src="../src/a/2/2-d.png" alt="2-d" width="400"/> 

### 3. **Pengenalan Ground Control Station**
* a. Tangkapan layar utama _Mission Planer_
    <br>
    <img src="../src/a/3/3-a.png" alt="Layar Utama Mission Planner" width="360">
    <br>
* b. Main features Mission Planner:
    * **PLAN**\
    Fitur pembuatan mission, fence, dan rally point. \
    **Mission** berfungsi membuat perencanaan dan eksekusi rencana penerbangan UAV, lalu **fence** adalah pembuatan area digital yang mana dapat membatasi area penerbangan UAV. Dan **rally point** berfungsi sebagai area darurat untuk UAV mendarat (copter) atau loiter (plane) ketika tidak dimungkinkannya dilakukan RTL (Return to Launch) mode. 
    * **DATA**\
    Menampilkan informasi visual dari vehicle.\
    Kegunaannya memungkinkan pemantauan data teletri dari UAV ketika sedang beroperasi.
    * **SETUP**\
    Melakukan pengaturan UAV.\
    Kegunaannya untuk mengatur konfigurasi (seperti kalibrasi Accel, kalibrasi Radio, Failsafe plan) dari UAV sebelum siap dioperasikan.
    * **SIMULATION**\
    Menjalankan SITL (Software in The Loop).\
    Kegunaannya memungkinkan pengoperasian UAV secara virtual.
* c. [Waypoint mission](../src/a/3/mission.waypoints)
* [Referensi fitur Mission Planner](https://ardupilot.org/planner/docs/mission-planner-features.html)

### 4. **Development Environment**
* a. Tangkapan layar Instalasi library
    <br>
    <img src="../src/a/4/4-a.png" alt="tangkapan layar instalasi lib" width="360">
* b. NTAR AJAHHH wkwkwkkw
  
### 5. **Dasar-Dasar UAV**
* a. Klasifikasi UAV
    1. VTOL / Rotary-wing \
    UAV jenis ini menggunakan baling-baling (rotor) sebagai penghasil gaya angkat. Rotor yang saling diagonal memiliki arah rotasi yang sama. \
    <img src="../src/a/5/5-a1.png" width="200">
    <br>
    Dapat dilihat pada gambar diatas, rotor 1 dan 3 memiliki arah rotasi yang sama yaitu searah dengan jaram jam, sedangkan rotor 2 dan 4 berotasi tidak searah dengan jaram jam. Perbedaan arah rotasi ini menghasilkan total gaya dorong yang sama sehingga membuat UAV dapat terbang secara stabil. Lalu agar UAV dapat bergerak serta berotasi, gyroscope dan control unit pada UAV akan menentukan motor mana yang rotasinya ditingkatkan dan diturunkan tergantung input yang diberi dari pilot. Gambar dibawah ini merupakan contoh input dan gerak yang dihasilkan. \
    <img src="../src/a/5/5-a2.png" width="200">
    <br>
    
    2. HTOL / Fixed-wing \
    UAV jenis ini memerlukan landasan untuk takeoff ataupun landing. Terdapat 4 gaya utama pada UAV ini, yaitu gaya angkat (lift), gaya berat, gaya hambat (drag), dan gaya dorong (thrust). Gaya angkat pada UAV ini disebabkan adanya perbedaan tekanan udara antara bagian atas dan bawah sayap (Kutta-Joukowski Theorem). Keunggulannya yaitu menggunakan lebih sedikit energi, lebih hemat, dan memiliki waktu terbang lebih lama dibanding UAV jenis VTOL.
    3. Hybrid \
    UAV jenis ini menggabungkan konsep fixed dan rotary-wing. Konsep rotary-wing digunakan untuk menciptakan gaya angkat, lalu setelah berada diudara digunakan konsep fixed-wing. Hal itu membuat UAV jenis ini sangat fleksibel, namun sistemnya cenderung kurang reliable dibanding fixed dan rotary wing, maintenance-nya lebih kompleks, dan massanya yang tinggi karena memiliki lebih banyak komponen.
* b. Gerak roll, pitch, dan yaw adalah gerak rotasi benda pada 3 sumbu yang saling tegak lurus. Misal pada sumbu X,Y, dan Z. Pitch adalah gerak rotasi terhadap sumbu Y, jadi misal pada pesawat dapat digambarkan saat hidung pesawat berotasi kearah atas dan bawah. \
    <img src="../src/a/5/5-b.png" alt="Layar Utama Mission Planner" width="200">
    <br>
Lalu yaw adalah gerak rotasi terhadap sumbu Z dan roll adalah gerak rotasi terhadap sumbu X. \
Dilanjutkan dengan perbedaan airspeed dan groundspeed, groundspeed adalah kecepatan pesawat relatif terhadap permukaan bumi dan airspeed adalah kecepatan pesawat relatif terhadap udara. Groundspeed merupakan hasil penjumlahan dari airspeed dan kecepatan angin. \


* References: 
  * [Types of Drone](https://www.airsight.com/knowledge-hub/drone-basics/types-of-drones-fixed-wing)
  * [UNMANNED AERIAL VEHICLES: FUNDAMENTALS, COMPONENTS,
MECHANICS, AND REGULATIONS](https://novapublishers.com/wp-content/uploads/2020/10/Unmanned-Aerial-Vehicles.pdf)
   * [Pitch, yaw, and roll](https://simple.wikipedia.org/wiki/Pitch,_yaw,_and_roll)
  * [airspeed vs groundspeed](https://science.howstuffworks.com/transport/flight/modern/airspeed-vs-groundspeed.htm)