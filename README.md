# ESP32_TFT_LCD

<html>
  <head>
    <meta content="text/html; charset=UTF-8" http-equiv="content-type" />    
  </head>
  <body class="c20 doc-content">
    <p class="c10">
      <span class="c2"
        >https://www.devacron.com/add-an-st7735-tft-display-to-an-esp32</span
      >
    </p>
    <p class="c10">
      <span class="c19"
        ><a
          class="c21"
          href="https://www.google.com/url?q=https://github.com/Bodmer/TFT_eSPI&amp;sa=D&amp;source=editors&amp;ust=1665913765958246&amp;usg=AOvVaw0aXFh8M1BS6GGFfQJ0hING"
          >https://github.com/Bodmer/TFT_eSPI</a
        ></span
      >
    </p>
    <p class="c10 c17"><span class="c2"></span></p>
    <a id="t.9887eaa94bda5cbdc52bf8eb47e146165d2d59fc"></a><a id="t.0"></a>
    <table class="c15">
      <tr class="c6">
        <td class="c3" colspan="1" rowspan="1">
          <p class="c18"><span class="c2">TFT ST7735</span></p>
        </td>
        <td class="c12" colspan="1" rowspan="1">
          <p class="c18"><span class="c2">ESP32</span></p>
        </td>
      </tr>
      <tr class="c6">
        <td class="c3" colspan="1" rowspan="1">
          <p class="c4"><span class="c2">5V</span></p>
        </td>
        <td class="c12" colspan="1" rowspan="1">
          <p class="c4"><span class="c2">VIN/5V</span></p>
        </td>
      </tr>
      <tr class="c6">
        <td class="c3" colspan="1" rowspan="1">
          <p class="c4"><span class="c2">GND</span></p>
        </td>
        <td class="c12" colspan="1" rowspan="1">
          <p class="c4"><span class="c2">GND</span></p>
        </td>
      </tr>
      <tr class="c6">
        <td class="c3" colspan="1" rowspan="1">
          <p class="c4"><span class="c2">LED/BL</span></p>
        </td>
        <td class="c12" colspan="1" rowspan="1">
          <p class="c4"><span class="c2">VIN</span></p>
        </td>
      </tr>
      <tr class="c6">
        <td class="c3" colspan="1" rowspan="1">
          <p class="c4"><span class="c2">SCL(SPI Clock)</span></p>
        </td>
        <td class="c12" colspan="1" rowspan="1">
          <p class="c4"><span class="c2">GPIO4 VSPI SCK (SPI Clock)</span></p>
        </td>
      </tr>
      <tr class="c6">
        <td class="c3" colspan="1" rowspan="1">
          <p class="c4"><span class="c2">SDA(SPI DATA)</span></p>
        </td>
        <td class="c12" colspan="1" rowspan="1">
          <p class="c4">
            <span class="c2">GPIO16 VSPI MOSI(MOSI, Data to screen)</span>
          </p>
        </td>
      </tr>
      <tr class="c6">
        <td class="c3" colspan="1" rowspan="1">
          <p class="c4"><span class="c2">RS(Register Select)</span></p>
        </td>
        <td class="c12" colspan="1" rowspan="1">
          <p class="c4">
            <span class="c2">GPIO2 (labelled as DC in Adafruit code)</span>
          </p>
        </td>
      </tr>
      <tr class="c6">
        <td class="c3" colspan="1" rowspan="1">
          <p class="c4"><span class="c2">RST(Reset)</span></p>
        </td>
        <td class="c12" colspan="1" rowspan="1">
          <p class="c4"><span class="c2">RST pin, 3.3V, EN</span></p>
        </td>
      </tr>
      <tr class="c6">
        <td class="c3" colspan="1" rowspan="1">
          <p class="c4"><span class="c2">CS (Chip Select)</span></p>
        </td>
        <td class="c12" colspan="1" rowspan="1">
          <p class="c4">
            <span class="c2">GPIO15 VSPI SS (Slave Select/ Chip Select)</span>
          </p>
        </td>
      </tr>
    </table>
    <p class="c10 c17"><span class="c2"></span></p>
    <p class="c10 c17"><span class="c2"></span></p>
    <p class="c10">
      <span class="c2"
        >&#3649;&#3585;&#3657;&#3652;&#3586;&#3652;&#3615;&#3621;&#3660;
        C:\Users\AI-SUGIT\Documents\Arduino\libraries\TFT_eSPI.h
        &#3617;&#3629;&#3591;&#3627;&#3634;&#3649;&#3621;&#3657;&#3623;</span
      >
    </p>
    <p class="c10"><span class="c2">//Uncomment </span></p>
    <p class="c10"><span class="c0">#define ST7735_DRIVER </span></p>
    <p class="c10"><span class="c0">#define TFT_WIDTH &nbsp;128</span></p>
    <p class="c10"><span class="c0">#define TFT_HEIGHT 160</span></p>
    <p class="c10"><span class="c0">#define ST7735_GREENTAB</span></p>
    <p class="c10 c17"><span class="c2"></span></p>
    <p class="c10">
      <span class="c2"
        >// ###### EDIT THE PIN NUMBERS IN THE LINES FOLLOWING TO SUIT YOUR
        ESP32 SETUP &nbsp; ######</span
      >
    </p>
    <p class="c10 c17"><span class="c2"></span></p>
    <p class="c10">
      <span class="c2"
        >// For ESP32 Dev board (only tested with ILI9341 display)</span
      >
    </p>
    <p class="c10">
      <span class="c2">// The hardware SPI can be mapped to any pins</span>
    </p>
    <p class="c10 c17"><span class="c2"></span></p>
    <p class="c10"><span class="c2">//#define TFT_MISO 19</span></p>
    <p class="c10">
      <span class="c0">#define TFT_MOSI 16 &nbsp;//old value = 23</span>
    </p>
    <p class="c10">
      <span class="c0">#define TFT_SCLK 4 &nbsp;//old value = 18</span>
    </p>
    <p class="c10">
      <span class="c0"
        >#define TFT_CS &nbsp; 15 &nbsp;// Chip select control pin</span
      >
    </p>
    <p class="c10">
      <span class="c0"
        >#define TFT_DC &nbsp; &nbsp;2 &nbsp;// Data Command control pin</span
      >
    </p>
    <p class="c10">
      <span class="c2"
        >//#define TFT_RST &nbsp; 4 &nbsp;// Reset pin
        (&#3626;&#3634;&#3617;&#3634;&#3619;&#3606;&#3648;&#3594;&#3639;&#3656;&#3629;&#3617;&#3605;&#3656;&#3629;&#3585;&#3633;&#3610;
        RST pin &#3586;&#3629;&#3591; ESP32&#3652;&#3604;&#3657;)</span
      >
    </p>
    <p class="c10">
      <span class="c25"
        >#define TFT_RST &nbsp;-1 &nbsp;// Set TFT_RST to -1 if display RESET is
        connected to ESP32 board</span
      ><span class="c2">&nbsp;RST</span>
    </p>
    <p class="c10 c17"><span class="c2"></span></p>
    <p class="c13"><span class="c11"></span></p>
    <p class="c13"><span class="c11"></span></p>
    <p class="c13"><span class="c11"></span></p>
    <p class="c13"><span class="c11"></span></p>
    <p class="c13"><span class="c11"></span></p>
    <h1 class="c23" id="h.mf4bngwxmv3z">
      <span class="c5">Tft.drawLine()</span>
    </h1>
    <p class="c24">
      <span class="c16"
        >tft.drawLine(int16_t x0, int16_t y0, int16_t x1, int16_t y1, uint16_t
        color)</span
      >
    </p>
    <p class="c8"><span class="c16"></span></p>
    <ul class="c9 lst-kix_qlowh0i9wk68-0 start">
      <li class="c14 li-bullet-0">
        <span class="c22">Effect</span><span class="c7">:</span>
      </li>
    </ul>
    <p class="c1">
      <span class="c7">Draw a line with any angle on the TFT screen</span>
    </p>
    <p class="c1 c17"><span class="c7"></span></p>
    <ul class="c9 lst-kix_20y2re4ua4ic-0 start">
      <li class="c14 li-bullet-0">
        <span class="c22">Parameters</span><span class="c7">:</span>
      </li>
    </ul>
    <p class="c1">
      <span class="c7">x0&#65306;x coordinate of the starting point</span>
    </p>
    <p class="c1">
      <span class="c7">y0&#65306;y coordinate of the starting point</span>
    </p>
    <p class="c1">
      <span class="c7">x1&#65306;x coordinate of the ending point</span>
    </p>
    <p class="c1">
      <span class="c7">y1&#65306;y coordinate of the ending point</span>
    </p>
    <p class="c1"><span class="c7">color&#65306;color of the line</span></p>
    <p class="c8"><span class="c11"></span></p>
    <p class="c13"><span class="c11"></span></p>
    <p class="c10 c17"><span class="c2"></span></p>
  </body>
</html>
