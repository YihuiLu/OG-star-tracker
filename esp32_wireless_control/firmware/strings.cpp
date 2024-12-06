// Strings.cpp
#include "strings.h"

const char* TRACKING_ON = "Tracking ON";
const char* TRACKING_OFF = "Tracking OFF";
const char* IDLE = "Idle";
const char* SPEED = "speed";
const char* TRACKING_SPEED = "trackingSpeed";
const char* DIRECTION = "direction";
const char* SLEWING = "Slewing";
const char* EXPOSURE = "exposure";
const char* NUM_EXPOSURES = "numExposures";
const char* DITHER_ENABLED = "ditherEnabled";
const char* FOCAL_LENGTH = "focalLength";
const char* DISABLE_TRACKING_ON_FINISH = "disableTracking";
const char* PIXEL_SIZE = "pixSize";
const char* CAPTURE_ON = "Capture ON";
const char* CAPTURE_OFF = "Capture OFF";
const char* CAPTURE_ALREADY_ON = "Capture Already ON";
const char* CAPTURE_ALREADY_OFF = "Capture Already OFF";
const char* CAPTURES_REMAINING = "%d Captures Remaining...";

const char* INVALID_EXPOSURE_VALUES = "Invalid Exposure Values!";
const char* INVALID_DITHER_VALUES = "Invalid Dither Settings!";

const char* MIME_TYPE_TEXT = "text/plain";
const char* MIME_TYPE_HTML = "text/html";

const char* html = 
"<DOCTYPE html> \n" 
"<html lang=\"en\"> \n" 
"<head> \n" 
" <title>OG Star Tracker Control Panel</title> \n" 
" <meta charset='utf-8'> \n" 
" <meta name='viewport' content='width=device-width, initial-scale=1.0'>\n" 
" <style> \n" 
"     body { \n" 
"         background-color: #000000; \n" 
"         text-align: center; \n" 
"         font-family: system-ui; \n" 
"         display: flex;\n" 
"         padding: 10px; \n" 
"         justify-content: center; \n" 
"     } \n" 
"     button { \n" 
"         background-color: #FF0000; \n" 
"         color: black; \n" 
"         border: none; \n" 
"         padding: 10px 10px; \n" 
"         border-radius: 40px; \n" 
"         text-align: center; \n" 
"         text-decoration: none; \n" 
"         display: inline-block; \n" 
"         font-size: 14px; \n" 
"         font-family: system-ui; \n" 
"         margin-top: 10px; \n" 
"         cursor: pointer; \n" 
"         width: 50%; \n" 
"         min-width: 120px; \n" 
"         font-weight: bold; \n" 
"     } \n" 
"     select { \n" 
"         font-size: 16px; \n" 
"         padding: 5px; \n" 
"         color: red; \n" 
"         background-color: #000000; \n" 
"         border: 2px solid #ff0000; \n" 
"         border-radius: 8px; \n" 
"         font-family: system-ui; \n" 
"     } \n" 
"     input[type='number'] { \n" 
"         font-size: 16px; \n" 
"         background-color: #000000; \n" 
"         padding: 5px; \n" 
"         font-family: system-ui; \n" 
"         border: 2px solid #ff0000; \n" 
"         color: red; \n" 
"         border-radius: 8px; \n" 
"         box-sizing: border-box; \n" 
"     } \n" 
"     label { \n" 
"         display: inline-block; \n" 
"         text-align: left; \n" 
"         margin: 10px; \n" 
"         font-size: 20px; \n" 
"     } \n" 
"     h1 { \n" 
"         font-size: 26px; \n" 
"         font-family: system-ui; \n" 
"         color: red; \n" 
"     } \n" 
"     h2 { \n" 
"         font-size: 24px; \n" 
"         font-family: system-ui; \n" 
"         color: red; \n" 
"     } \n" 
"     h3 { \n" 
"         font-size: 16px; \n" 
"         font-family: system-ui; \n" 
"         color: #FF6B00; \n" 
"     } \n" 
"     h4 { \n" 
"         font-size: 12px; \n" 
"         font-family: system-ui; \n" 
"         color: #FF6B00; \n" 
"     } \n" 
"     summary { \n" 
"         font-weight: bold; \n" 
"         font-family: system-ui; \n" 
"         font-size: 16px; \n" 
"         padding-top: 20px; \n" 
"         color: #FF6B00; \n" 
"     } \n" 
"     .content { \n" 
"         max-width: 450px; \n" 
"         width: 100%; \n" 
"         background-color: #000000; \n" 
"     } \n" 
"     .card { \n" 
"         background-color: #000000; \n" 
"         padding: 1px 16px 16px 16px; \n" 
"         border-radius: 32px; \n" 
"         margin-top: 20px; \n" 
"         box-shadow: 0em 0em 1em rgb(255 0 0 / 100%); \n" 
"     } \n" 
"     .grid2 { \n" 
"         display: flex; \n" 
"         flex-direction: row; \n" 
"         flex-wrap: wrap; \n" 
"         color: #FF6B00; \n" 
"         justify-content: center; \n" 
"         align-items: center; \n" 
"     } \n" 
"     .grid2 > h3 { \n" 
"         width: 50%; \n" 
"         min-width: 120px; \n" 
"     } \n" 
"     .grid2 > select, \n" 
"     .grid2 > input { \n" 
"         width: 50%; \n" 
"         min-width: 120px; \n" 
"         height: 40px; \n" 
"     } \n" 
"     .grid2 > .checkbox { \n" 
"         width: 50%; \n" 
"         min-width: 120px; \n" 
"         height: 20px; \n" 
"         margin: 0px; \n" 
"     } \n" 
"     .header { \n" 
"         display: flex; \n" 
"         justify-content: center; \n" 
"     } \n" 
"     #logo { \n" 
"         background-image: url('data:image/png;base64,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'); \n" 
"         width: 150px; \n" 
"         height: 120px; \n" 
"         margin-top: 10px; \n" 
"     } \n" 
"     .button-group { \n" 
"         padding-top: 10px; \n" 
"         display: flex; \n" 
"         flex-wrap: wrap; \n" 
"         justify-content: center; \n" 
"     } \n" 
"     .right-separator { \n" 
"         border-right: 2px solid #000000; \n" 
"         -webkit-user-select: none; /* Safari, Chrome */ \n" 
"         -moz-user-select: none; /* Firefox */ \n" 
"         -ms-user-select: none; /* Internet Explorer/Edge */ \n" 
"         user-select: none; /* Standard property */ \n" 
"         -webkit-touch-callout: none; /* Disable callout menu on iOS */ \n" 
"     } \n" 
"     .left-separator { \n" 
"         border-left: 2px solid #000000; \n" 
"         -webkit-user-select: none; /* Safari, Chrome */ \n" 
"         -moz-user-select: none; /* Firefox */ \n" 
"         -ms-user-select: none; /* Internet Explorer/Edge */ \n" 
"         user-select: none; /* Standard property */ \n" 
"         -webkit-touch-callout: none; /* Disable callout menu on iOS */ \n" 
"     } \n" 
"     #status { \n" 
"         font-size: 24px; \n" 
"         margin: 0px; \n" 
"         font-family: system-ui; \n" 
"     } \n" 
" </style> \n" 
" <script> \n" 
"     var lastClick = 0; \n" 
"     var delay = 500; \n" 
"     function sendRequest(url) { \n" 
"         var xhr = new XMLHttpRequest(); \n" 
"         xhr.onreadystatechange = function () { \n" 
"             if (this.readyState == 4 && this.status == 200) { \n" 
"                 document.getElementById('status').innerHTML = this.responseText; \n" 
"             } \n" 
"         }; \n" 
"         xhr.open('GET', url, true); \n" 
"         xhr.send(); \n" 
"     } \n" 
"     setInterval(function () { \n" 
"         sendRequest('/status'); \n" 
"     }, 5000); \n" 
"        function requestFirmwareVersion() {\n"
"            var xhr = new XMLHttpRequest();\n"
"            xhr.onreadystatechange = function () {\n"
"                if (this.readyState == 4 && this.status == 200) {\n"
"                    document.getElementById('firmware').innerHTML = 'Firmware Version: ' + this.responseText;\n"
"                }\n"
"            };\n"
"            xhr.open('GET', '/version', true);\n"
"            xhr.send();\n"
"        }\n"
"\n"
"     function sendStartRequest(url) { \n" 
"         var direction = document.getElementById('hemisphere-select').value; \n" 
"         var trackingSpeed = document.getElementById('tracking-speed-select').value; \n" 
"         var starturl = url + '?direction=' + direction + '&trackingSpeed=' + trackingSpeed; \n" 
"         sendRequest(starturl); \n" 
"     } \n" 
"     function sendSlewStop() { \n" 
"         lastClick = Date.now(); \n" 
"         sendRequest('/stopslew'); \n" 
"     } \n" 
"     function sendSlewRequest(url) { \n" 
"         if (lastClick >= (Date.now() - delay)) \n" 
"             return; \n" 
"         lastClick = Date.now(); \n" 
"         var index = document.getElementById('slew-select').selectedIndex; \n" 
"         if (index == 6) { \n" 
"           var speed = document.getElementById('custom-speed').value; \n" 
"       } else { \n" 
"           var speed = document.getElementById('slew-select').value; \n" 
"       } \n" 
"       var slewurl = url + '?speed=' + speed; \n" 
"       sendRequest(slewurl); \n" 
"   } \n" 
"   function checkCustom() { \n" 
"     var index = document.getElementById('slew-select').selectedIndex; \n" 
"     if (index == 6) { \n" 
"         document.getElementById('custom-speed-text').style.display='block'; \n" 
"         document.getElementById('custom-speed').style.display='block'; \n" 
"     } else { \n" 
"         document.getElementById('custom-speed-text').style.display='none'; \n" 
"         document.getElementById('custom-speed').style.display='none'; \n" 
"     } \n" 
" } \n" 
" function sendCaptureRequest() { \n" 
"     var exposure = document.getElementById('exposure').value.trim(); \n" 
"     var numExposures = document.getElementById('num-exposures').value.trim(); \n" 
"     var focalLength = document.getElementById('focal_len').value.trim(); \n" 
"     var pixSize = Math.floor(parseFloat(document.getElementById('pixel_size').value.trim()) * 100); \n" 
"     var disableTracking = document.getElementById('Disable_tracking_End').checked ? 1 : 0;\n"
"     var ditherEnabled = document.getElementById('dither_on').checked ? 1 : 0; \n" 
"     var intervalometerUrl = '/start?exposure=' + exposure + '&numExposures=' + numExposures + '&focalLength=' + focalLength + '&pixSize=' + pixSize + '&ditherEnabled=' + ditherEnabled +'&disableTracking=' + disableTracking;\n"
"     sendRequest(intervalometerUrl); \n" 
" } \n" 
"</script> \n" 
"</head> \n" 
"<body onload=\"requestFirmwareVersion()\" >\n"
" <div class=\"content\"> \n" 
"     <div class=\"header\"> \n" 
"         <div id=\"logo\"></div> \n" 
"     </div> \n" 
"     <h1>TRACKER CONTROLLER</h1> \n" 
"     <div class=\"card\"> \n" 
"         <h2>Tracking</h2> \n" 
"         <div class=\"grid2\"> \n" 
"             <h3>Hemisphere:</h3> \n" 
"             <select aria-label=\"Hemisphere\" id='hemisphere-select'> \n" 
"                 <option value='1' %north%>North</option> \n" 
"                 <option value='0' %south%>South</option> \n" 
"             </select><br> \n" 
"         </div> \n" 
"         <div class=\"grid2\"> \n" 
"             <h3>Tracking Rate:</h3> \n" 
"             <select aria-label=\"tspeed\" id='tracking-speed-select'> \n" 
"                 <option value='0'>Sidereal</option> \n" 
"                 <option value='1'>Solar</option> \n" 
"                 <option value='2'>Lunar</option> \n" 
"             </select><br> \n" 
"         </div> \n" 
"         <div class=\"button-group\"> \n" 
"             <button class=\"right-separator\" type=\"button\" onclick=\"sendStartRequest('/on')\">ON</button> \n" 
"             <button class=\"left-separator\" type=\"button\" onclick=\"sendRequest('/off')\">OFF</button> \n" 
"         </div> \n" 
"     </div> \n" 
"     <div class=\"card\"> \n" 
"         <h2>Slew Control</h2> \n" 
"         <div class=\"grid2\"> \n" 
"             <h3>Speed multiplier:</h3> \n" 
"             <select aria-label=\"slew\" id='slew-select' onchange=\"checkCustom();\"> \n" 
"                 <option value='2'>2 x Tracking Rate</option> \n" 
"                 <option value='8'>8</option> \n" 
"                 <option value='50'>50</option> \n" 
"                 <option value='100'>100</option> \n" 
"                 <option value='200'>200</option> \n" 
"                 <option value='400'>400</option> \n" 
"                 <option value='custom'>custom</option> \n" 
"             </select> \n" 
"             <h3 id='custom-speed-text' style=\"display:none\";>Custom Speed:</h3> \n" 
"             <input id='custom-speed' type='number' value='2' min='2' max='400' style=\"display:none\";/> \n" 
"             <br> \n" 
"         </div> \n" 
"         <h4>Hold direction button to slew</h4> \n" 
"         <div class=\"button-group\"> \n" 
"             <button class=\"right-separator\" type=\"button\" ontouchstart=\"sendSlewRequest('/left')\" onmousedown=\"sendSlewRequest('/left')\" ontouchend=\"sendSlewStop()\" onmouseup=\"sendSlewStop()\" onmouseleave=\"sendSlewStop()\" ontouchcancel=\"sendSlewStop()\">SLEW LEFT</button> \n" 
"             <button class=\"left-separator\" type=\"button\" ontouchstart=\"sendSlewRequest('/right')\" onmousedown=\"sendSlewRequest('/right')\" ontouchend=\"sendSlewStop()\" onmouseup=\"sendSlewStop()\" onmouseleave=\"sendSlewStop()\" ontouchcancel=\"sendSlewStop()\">SLEW RIGHT</button> \n" 
"         </div> \n" 
"         <button type=\"button\" onclick=\"sendSlewStop()\" >ABORT SLEW</button> \n" 
"     </div> \n" 
"     <div class=\"card\"> \n" 
"         <h2>Photo Control</h2> \n" 
"         <div class=\"grid2\"> \n" 
"             <h3>Exposure lenght:</h3> \n" 
"             <input type='number' id='exposure' placeholder='in seconds (Ex. 30)'> \n" 
"         </div> \n" 
"         <div class=\"grid2\"> \n" 
"             <h3>Number exposures:</h3> \n" 
"             <input type='number' id='num-exposures' placeholder='nº of photos (Ex. 20)'> \n" 
"         </div> \n" 
"            <div class=\"grid2\">\n"
"                <h3>Disable tracking on end:</h3>\n"
"                <input class=\"checkbox\" aria-label=\"Disable_Tracking_End\" type=\"checkbox\" id=\"Disable_tracking_End\" %tracking%>\n"
"            </div>\n"
"         <details> \n" 
"             <summary>Dither Settings</summary> \n" 
"             <-- Content inside the collapsible section --> \n" 
"             <div class=\"grid2\"> \n" 
"                 <h3>Dithering Enable:</h3> \n" 
"                 <input class=\"checkbox\" aria-label=\"Dithering\" type=\"checkbox\" id=\"dither_on\" %dither%> \n" 
"             </div> \n" 
"             <div class=\"grid2\"> \n" 
"                 <h3>Lens focal lenght:</h3> \n" 
"                 <input type=\"number\" id=\"focal_len\" placeholder='in milimiters (Ex. 135)' value='%focallen%'> \n" 
"             </div> \n" 
"             <div class=\"grid2\"> \n" 
"                 <h3>Camera pixel size:</h3> \n" 
"                 <input type=\"number\" id=\"pixel_size\" placeholder='in micrometer (Ex. 4.1)' value='%pixsize%' step=\"0.01\"> \n" 
"             </div> \n" 
"         </details> \n" 
"         <div class=\"button-group\"> \n" 
"             <button class=\"right-separator\" type=\"button\" onclick=\"sendCaptureRequest()\">START CAPTURE</button> \n" 
"             <button class=\"left-separator\" type=\"button\" onclick=\"sendRequest('/abort')\">ABORT CAPTURE</button> \n" 
"         </div> \n" 
"     </div> \n" 
"     <div class=\"card\"> \n" 
"         <h2>Status</h2> \n" 
"         <h3>Test Message</h3> \n" 
"  </div> \n" 
"  <h4 id='firmware'>Firmware Version: </h4>\n"
"</div> \n" 
"</body> \n" 
"</html>\n" 
 ;

