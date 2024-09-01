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
This project utilizes online-provided code libraries for management and display. To ensure that the code runs correctly, please install the 「Adafruit ST7735 and ST7789 Library」 and 「ADCTouch」 in advance.

本次專題採用了網上提供程式數據庫進行管理和顯示，為了確保代碼能夠正確運行，請事先安裝以下程式庫：
1. Adafruit ST7735 Library
   - 用途：提供 ST77xx TFT 顯示模組的控制支持。
   - 安裝方式如下
     - 打開 Arduino IDE 點擊「工具」 > 「管理庫...」。
     - 在程式庫管理器的搜索框中輸入 "Adafruit ST7735"。
     - 在搜尋結果中找到 "Adafruit ST7735 and ST7789 Library" 點擊 「安裝」 按鈕。
     ![image](https://github.com/user-attachments/assets/733811c0-3b2b-49e4-8e54-01d8b50df3fc)

       
2. ADCTouch Library
   - 用途：用於讀取觸控傳感器的數據。
   - 安裝方式如下
     - 打開 Arduino IDE 點擊「工具」 > 「管理庫...」。
     - 在程式庫管理器的搜索框中輸入 "ADCTouch"。
     - 在搜尋結果中找到 "ADCTouch" 點擊 「安裝」 按鈕。
     ![image](https://github.com/user-attachments/assets/7dda2b88-075f-4a16-aae9-f2e9e460dbb9)


This code provides three different programming approaches. You can choose the most suitable option based on your needs to develop your final product. Below is an overview of the differences between each code option:
1. Arduino_TFT：
   - Features: Provides basic TFT display animation technology and ADCTouch interaction.
   - Use Case: Suitable for applications that require basic display and touch functionalities.
  
2. Arduino_TFT_CDS：
   - Features: Builds on the basic TFT display animation and ADCTouch interaction, with the addition of a Light Dependent Resistor (CDS) to detect ambient light levels and automatically adjust the display's on/off state.
   - Use Case: Ideal for applications that require ambient light detection and automatic display control.
  
3. Arduino_TFT_CDS_CPUandReset：
   - Features: Expands upon the basic TFT display animation and ADCTouch interaction by incorporating a CDS sensor to detect ambient light and automatically control the display's power state. Additionally, when the display is off, the system activates a low-power CPU mode to extend battery life.
   - Use Case: Suitable for applications requiring light detection, automatic display control, and power-saving features.

You can download the code from the following link：https://github.com/BoomerChiao/ArduinoBirthday-Gift-DIY/tree/main/Code

###  中文
該代碼提供3種不同的程式方式，你可以根據需求選擇最適合的方式來製作你的最終產品。以下是每種程式碼選項的差異介紹：
1. Arduino_TFT：
   - 功能：提供基本的 TFT 顯示動畫技術和 ADCTouch 觸控互動。
   - 適用場景：適合需要基本顯示和觸控功能的應用。
2. Arduino_TFT_CDS：
   - 功能：基於基本 TFT 顯示動畫和 ADCTouch 觸控互動的基礎上，增加了光敏電阻（CDS）來檢測環境光源，並決定是否自動調節顯示螢幕的開關狀態。
   - 適合需要環境光檢測以及顯示螢幕自動控制的應用場景。
3. Arduino_TFT_CDS_CPUandReset：
   - 功能：在基本 TFT 顯示動畫和 ADCTouch 觸控互動的基礎上，增加了光敏電阻（CDS）以檢測環境光源並自動控制顯示螢幕開關。此外，當顯示螢幕關閉時，系統將啟用低功耗的 CPU 模式，以提高電池續航能力。
   - 適用於需要光檢測、自動顯示控制和節能功能的應用。

你可以從以下鏈接下載代碼：https://github.com/BoomerChiao/ArduinoBirthday-Gift-DIY/tree/main/Code

.

.

PS. 其他安裝Library
   - 打開 Arduino IDE 點擊「sketch」 > 「程式庫」 > 「加入.Zip程式庫...」。
   - 搜尋 已下載Zip程式庫 ，點擊 「開啟」 按鈕。

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

##  Product Showcase　（成品展示）

##  References　（參考資料）
1. https://www.arduino.cc/en/software
2. https://www.b4x.com/android/forum/threads/how-to-connect-an-arduino-pro-mini-to-a-pc-via-a-usb-to-serial-module.77010/
3. https://github.com/adafruit/Adafruit-ST7735-Library
4. https://github.com/martin2250/ADCTouch


