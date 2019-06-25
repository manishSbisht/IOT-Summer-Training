import RPi.GPIO as GPIO
import Adafruit_DHT as dht

GPIO.setmode(GPIO.BOARD)

GPIO.setup(7, GPIO.IN)  # sensor data

#sensor = Adafruit_DHT.DHT11
#pin = 7

humidity, temperature = dht.read_retry(dht.DHT11, 4)

if humidity is not None and temperature is not None:
    print('Temp={0:0.1f}*C  Humidity={1:0.1f}%'.format(temperature, humidity))
else:
    print('Failed to get reading. Try again!')

GPIO.cleanup()
