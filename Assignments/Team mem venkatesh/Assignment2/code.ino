import requests
from playsound import playsound

r="https://api.openweathermap.org/data/2.5/weather?lat=44.34&lon=10.99&appid=11c79392a07205c89a58f83923728ea0"
r=requests.get(url=r)
data=r.json()
t=data['main']['temp']

humid=data['main'] ['humidity']
print ("temprature is",t)
print ("humidity is",humid)
if(t>150):
    playsound("venkat.mp3")
else:
    print('less temprature')
