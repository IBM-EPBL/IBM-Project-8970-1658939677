import requests
from playsound import playsound

r="https://api.openweathermap.org/data/2.5/weather?lat=44.34&lon=10.99&appid=b8f0d36b2ee975c26006cb0c477a9d16"
r=requests.get(url=r)
data=r.json()
t=data['main']['temp']

humid=data['main'] ['humidity']
print ("temprature is",t)
print ("humidity is",humid)
if(t>150):
    playsound("nagaraj.mp3")
else:
    print('less temprature')
