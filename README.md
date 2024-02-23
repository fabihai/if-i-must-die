# "If I Must Die"

<img src="/ifimustdie.jpg" width=560px>

## External Links
Here you can find links to the [blog post](https://fabihai.github.io/), [demo video](https://www.youtube.com/watch?v=85yTASQBNr8), and [installation video](https://www.youtube.com/watch?v=BdbYyanjtaQ).

## Inspiration

Over the past few months, much of the worlds attention has been focused on what is currently happening in Palestine and Israel. This project is a response to this, specifically in the context of the tense atmosphere present in Barnard College and Columbia University's campuses. In an atmosphere where voices are being suppressed, it is meant to spread awareness in an open space for students through simple, yet moving art. This aims to emphasize key parts of the poem and to allow the audience to feel as though they are hearing the words on the screen at the timing that they appear. The poem "If I Must Die" was written by the late Palestinian poet and professor, Refaat Alareer, who was martyred in an Israeli airstrike on December 7, 2023.

## Setup

After opening the code in the Arduino IDE...
1. Install the TST_eSPI library
2. Add "https://dl.espressif.com/dl/package_esp32_index.json" under File -> Preferences -> Additional boards manager URLs
3. Select TTGO T1 board under Tools -> Board -> esp32
4. Make sure a port has been selected under Tools -> Port
4. Open the file User_Select_Setup.h file. to find the location of your installed Arduino library, click File -> Preferences, and it should be listed under Sketchbook location. In this folder, go to libraries -> TFT_eSPI -> User_Setup_Select.h. In this file, comment out the default setup line "#include <User_Setup.h>" and uncomment the line "#include <User_Setups/Setup25_TTGO_T_Display.h>".

## Technical Aspect

This was made on an ESP32.

Since first reading the poem, different parts have struck me as very meaningful, so I wanted to emphasize these parts in the installation. To do this, I experimented with the timing of the words, their placement on the screen, color, and moving words across the screen.

The trickiest part to implement was the word "above" moving up the screen like a kite. To do this, I had to play around with the timing of the word to make it appear and disappear quick enough to give the effect of motion. Additionally, I had to experiment with the x and y position on the display screen to ensure that it seemed to fly above the correct word.

                        tft.drawString("sees the kite, ",0,0,4);
                        delay(500);
                        tft.drawString(" my kite you made,",30,26,4);
                        delay(500);
                        tft.drawString("flying up above",10,78,4);
                        delay(500);
                        tft.drawString("                                          ",10,78,4);
                        tft.drawString("flying up ",10,78,4);
                        delay(50);
                        tft.drawString("above", 115, 70, 4);
                        delay(500);
                        tft.drawString("                                         ",115,70,4);
                        tft.drawString("above", 115, 62, 4);
                        delay(500);
                        tft.drawString("                                         ",115,62,4);
                        tft.drawString("above", 115, 56, 4);
                        delay(500);
                        tft.drawString("                                         ",115,56,4);
                        tft.drawString("above", 115, 48, 4);
                        delay(WAIT);
