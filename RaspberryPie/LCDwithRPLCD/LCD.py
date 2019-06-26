import time
import dht11
from RPi import GPIO
from RPLCD.gpio import CharLCD


GPIO.setwarnings(False)

lcd=CharLCD(numbering_mode=GPIO.BOARD, cols=16, rows=2, pin_rs=37, pin_e=35,pins_data=[21, 22, 23, 24] )
lcd.clear()
#lcd.write_string('Hello!!')


GPIO.setmode(GPIO.BOARD)
instance = dht11.DHT11(pin=40)

while True:
	lcd.clear()
	time.sleep(0.5)
	result = instance.read()
	if result.is_valid():
		lcd.write_string("Temp:{}C Hum:{}%".format(result.temperature, result.humidity))
		time.sleep(5)
