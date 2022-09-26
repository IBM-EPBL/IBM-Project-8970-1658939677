import requests
from playsound import playsound

r="https://api.openweathermap.org/data/2.5/weather?lat=44.34&lon=10.99&appid=a68720f0182cb77c1c068caa11893940"
r=requests.get(url=r)
data=r.json()
t=data['main']['temp']

humid=data['main'] ['humidity']
print ("temprature is",t)
print ("humidity is",humid)
if(t>150):
    playsound("silambu.mp3")
else:
    print('less temprature')
