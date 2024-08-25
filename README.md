##  Summary　（概要）

Arduino Interactive Gifts is a compact interactive gift that features an Arduino Pro Mini microcontroller board, a TFT color LCD screen (supporting 18-bit color depth), and multiple light-dependent resistors (LDRs).

###  中文
Arduino Interactive Gifts 是一款小型互動式禮物，搭載 Arduino Pro Mini 微控制器板和 TFT 彩色液晶顯示螢幕（支持 18 位色深），並配備多顆光敏電阻（LDRs）。

##  Installation　（安裝）
Install Arduino software
- Arduino software downloads：https://www.arduino.cc/en/software
									
###  中文
安裝 Arduino 軟體
- Arduino 軟體下載：https://www.arduino.cc/en/software

##  Import data　（導入資料）
1. Download GitHub Data or Create a New Arduino Project:
   - You can either download the necessary files from GitHub or start a new Arduino project.

2. Include the Required Arduino Libraries:
   - To add extra functionality, move the required Arduino library files to your project. You can download these libraries from the "Library" folder on GitHub.
   - Alternatively, open the Arduino IDE, go to the 「Sketch」 menu, and select 「Include Library」→「Manage Libraries...」 to access and install the libraries.

3. Import the Libraries:
   - After importing the function libraries, select the project you wish to work on and integrate the necessary code.


###  中文
1. 下載 GitHub 資料或創建新 Arduino 專案：
   - 你可以從本網的 GitHub 下載所需的資料，或是自行創建一個新的 Arduino 專案。
    
2. 導入必要的程式函數庫：
   - 將必要的函數庫文件從 GitHub 的“Library”資料夾中下載並安裝至指定位置。
   - 你也可以在 Arduino IDE 中選擇「草稿碼」→「匯入程式庫」→「管理程式庫...」，然後下載所需的程式函數庫。

3. 完成函數庫導入後：
   - 選擇你要製作的專案並直接開啟即可開始使用。


##  Prepare Electronic Materials（準備電子材料）
1. Arduino Pro Mini (5V/16M)
2. FTDI USB to TTL (3.3V and 5V)
3. TFT LCD Display Module (Icstation 1.8 Inch TFT LCD Screen 128x160 ST7735)
4. CDS (5mm)
5. Wire

##  Pin wiring　（引腳接線）
If you’re using a different Arduino board, make sure you check the correct I2C pins:

- Uno R3、Nano: SDA (A4) ; SCL (A5)
- MEGA: SDA (20) ; SCL (21)
- Leonardo: SDA (20) ; SCL (21)


