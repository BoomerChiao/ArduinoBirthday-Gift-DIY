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

![image](https://github.com/user-attachments/assets/5596162e-b8e1-4115-949c-39a5782b2cea)


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


##  Prepare Electronic Materials　（準備電子材料）
1. Arduino Pro Mini (5V/16M)
2. USB to UART Adapter (FTDI or CP2102)
3. TFT LCD Display Module (Icstation 1.8 Inch TFT LCD Screen 128x160 ST7735)
4. CDS (5mm)
5. Jumper Wires
![image](https://github.com/user-attachments/assets/ec687757-b199-4040-8394-6f18821fd00d)


##  Pin wiring　（引腳接線）
![image](https://github.com/user-attachments/assets/1d3c04b3-3e06-437b-8f94-deda1391ddac)
⬆The above diagram shows the pin connection schematic.

- Please note that the LCD supports only a 3.3 ~ 5V voltage. Therefore, it is recommended to set the VCC to be powered by a 5V supply.
- The quantity of photoresistors can be adjusted according to specific requirements, with support for up to 3 units.
- The TOUCH button A0 is a Jumper wire.

###  中文
- 請注意，該 LCD 僅持支援 3.3 ~ 5V 電壓範圍。因此，建議將 VCC 預設為 5V 電源以確保正常運作。
- 光敏電阻數量可以根據具體需求進行調整。（最多支援 3 顆）
- 觸控按鈕 (TOUCH) A0是一根跳線。

##  Program Code　（程式代碼）
ABCD


##  Arduino Pro or Pro Mini USB to UART Hookup Guide　（Arduino Pro、Pro Mini USB 燒入連接指南）
The Arduino Pro Mini and Arduino Pro are compact, low-power versions of the Arduino board. To program these boards or communicate with them via a computer, you'll need a USB-to-UART (Universal Asynchronous Receiver/Transmitter) adapter.

![image](https://github.com/user-attachments/assets/06e75a60-4666-4329-bbba-8ee2ec47657e)
Picture from：https://www.b4x.com/android/forum/threads/how-to-connect-an-arduino-pro-mini-to-a-pc-via-a-usb-to-serial-module.77010/
1. Steps to Connections
   - USB-to-UART Adapter VCC → Arduino Pro Mini VCC
     - USB-to-UART Adapter Pins Connect to Arduino Pro Mini VCC (make sure it matches the voltage of your Pro Mini)
   - USB-to-UART Adapter GND → Arduino Pro Mini GND
   - USB-to-UART Adapter TX → Arduino Pro Mini RX
   - USB-to-UART Adapter RX → Arduino Pro Mini TX
   - USB-to-UART Adapter DTR → Arduino Pro Mini DTR
2. Troubleshooting Tips
   - Check Connections： Ensure all wires are connected securely and to the correct pins.
   - Verify Voltage： Make sure the VCC connection matches the voltage requirements of your Pro Mini.
   - Auto-reset： If uploading code fails, try manually pressing the reset button on the Pro Mini just before uploading.

##  References　（參考資料）
1. https://www.arduino.cc/en/software
2. https://www.b4x.com/android/forum/threads/how-to-connect-an-arduino-pro-mini-to-a-pc-via-a-usb-to-serial-module.77010/
3. 


