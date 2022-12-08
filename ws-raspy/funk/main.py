import serial
import csv


#create csv file, write
file = open('test.csv', 'w')
writer = csv.writer(file)

#recieve data
ser = serial.Serial('dev/ttyUSB0', baudrate=9600, parity=serial.PARITY_NONE, stopbits=serial.STOPBITS_ONE)
data = ser.read()

#write data
writer.writerow(data)

ser.close()
file.close()

