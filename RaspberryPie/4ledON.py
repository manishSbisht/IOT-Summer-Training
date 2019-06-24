import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BOARD)
GPIO.setup(31, GPIO.OUT)
GPIO.setup(33, GPIO.OUT)
GPIO.setup(35, GPIO.OUT)
GPIO.setup(37, GPIO.OUT)

GPIO.setwarnings(False)

while True:
    GPIO.setwarnings(False)
    # //now off
    print("Turning Off")
    GPIO.output(31, GPIO.LOW)
    time.sleep(1)
    GPIO.output(33, GPIO.LOW)
    time.sleep(1)
    GPIO.output(35, GPIO.LOW)
    time.sleep(1)
    GPIO.output(37, GPIO.LOW)
    time.sleep(1)
    # print("in between")

    time.sleep(2)

    print("turinig ON")
    GPIO.output(31, GPIO.HIGH)
    time.sleep(1)
    GPIO.output(33, GPIO.HIGH)
    time.sleep(1)
    GPIO.output(35, GPIO.HIGH)
    time.sleep(1)
    GPIO.output(37, GPIO.HIGH)
    time.sleep(1)

    time.sleep(2)
    # GPIO.cleanup()
