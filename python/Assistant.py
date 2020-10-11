
import pyttsx3
import datetime
import speech_recognition as sr
import wikipedia
import webbrowser
import os 
import smtplib
from selenium import webdriver
from selenium.webdriver.common.keys import Keys
import re
import random
import tkinter as tk
from tkinter import Tk
from tkinter import *
import ctypes
from tkinter import _tkinter
import PIL
from PIL import ImageTk
from PIL import Image
import time
import details
import speedtest
import psutil

engine=pyttsx3.init('sapi5')
window=Tk()


window.configure(bg="black")
SET_WIDTH=2500
SET_HEIGHT=1900

#global
def main():
    
    bgImg=Image.open("wallpaper.png")
    window.title("Assistant")
    canvas=tk.Canvas(window,width=SET_WIDTH,height=SET_HEIGHT)
    canvas.pack()
   
    image=ImageTk.PhotoImage(bgImg)
 
    canvas.create_image(650,300,image=image)     

    label=Label(canvas,image=image)
    label.image=image

    label.pack()
    
    
    btn=tk.Button(canvas,text="CLICK ME",bg="black",fg="white",command=command1,anchor="w")
    #canvas.create_window()
    
    btn.place(relx=1,rely=1,relwidth=50,relheight=30,anchor=NW)
   
    btn_window=canvas.create_window(700,500,anchor="nw",window=btn)

   
    E1=Entry(window,bd=5,show='*')
    E1.pack(side=TOP)  



        
def speak(text):
   
   engine.say(text)
   engine.runAndWait()

def wishme():
    hour=int(datetime.datetime.now().hour)
    if hour>=0 and hour<12:
        speak("good morning")

    elif hour>=12 and hour<18:
        speak("good afternoon")

    else:
        speak("good evening")

    speak("i am your assistant maam please tell me how i can help you")

def take_cmd():
    ''' it takes microphone from user and retuems sring output''' 
    #names={'jyoti':'jyotisp710@gmail.com'}
    r=sr.Recognizer()
    with sr.Microphone() as source:
        speak("tell your requirements")
        print("tell your requirements")
        r.pause_threshold=5
        r.energy_threshold=800
        audio=r.listen(source)

    try:
        print("Recognizing..")
       
        query=r.recognize_google(audio,language='en-in').lower()
        
        #q=query.split(' ')
        speak("yes maam opening")
        return query
    except Exception as e:
        print(e)

        print("say that again plz")
        return "none"    

def sendEmail(to,content):
    server=smtplib.SMTP("smtp.gmail.com:587")
    #server.ehlo()
    server.starttls()
    server.ehlo()
    server.login(details.user(),details.password())
    server.sendmail(details.user(),to,content)
    server.close()



def command1():
    while True:
          

          query=take_cmd()
          
          
          #query=query.lower()
          #logic for executing task
          if 'wikipedia' in query:
              speak("searching wikipedia....")
              query=query.replace("wikipedia","")
              results=wikipedia.summary(query,sentences=2)
              speak("according to wikipedia")
              print(results)
              speak(results)


          elif "speed test" in query:
                try:
                    speak("sure! wait a second to measure")
                    st = speedtest.Speedtest()
                    server_names = []
                    st.get_servers(server_names)
                    ping = st.results.ping
                    downlink_Mbps = round(st.download() / 1000000, 2)
                    uplink_Mbps = round(st.upload() / 1000000, 2)
                    speak('ping {} ms'.format(ping))
                    speak("The uplink is {} Mbps".format(uplink_Mbps))
                    speak("The downlink is {}Mbps".format(downlink_Mbps))
                except:
                    speak("I couldn't run a speedtest")              

          elif "battery" in query:
                battery = psutil.sensors_battery()
                speak("Your system is at " + str(battery.percent) + " percent")

          elif 'open youtube' in query:
              webbrowser.open("youtube.com")


          elif 'open google' in query:
            
              speak("opening google")
              webbrowser.open("google.com")


          elif 'open stackoverflow' in query:
              webbrowser.open("stackoverflow.com")

          elif 'play music' in query:
              music_dir="C:\\Users\\JYOYHI S PAWAR\\songs"
              songs=os.listdir(music_dir)
              print(songs)
              os.startfile(os.path.join(music_dir,songs[0]))

          elif 'the time' in query:
              
              strTime=datetime.datetime.now().strftime("%H:%M:%S")
              speak(f"Maam the time is {strTime}")

          elif 'downloads folder' in query:
              path="C:\\Users\\JYOYHI S PAWAR\\Downloads"
              os.startfile(path)

          elif 'email to' in query:
              speak("whats the content for the email")
              try:
                  
                  content=take_cmd()
                  to="jyotisp710@gmail.com"
                  sendEmail(to,content)
                  speak("email sent")
              except Exception as e:
                  print(e) 

          elif 'open chrome and search' in query:
              reg_ex=re.search('open google and search (.*)',query)                 #pylint: disable=maybe-no-member  
              search_for=query.split("search",1)[1]
              url="https://www.google.com/"
              if reg_ex:
                  subgoogle=reg_ex.group[1]
                  url=url+ 'r/' + subgoogle
              speak("okay")
              
              driver=webdriver.Edge(executable_path='C:\\Users\\JYOYHI S PAWAR\\Downloads\\edgedriver_win64\\msedgedriver.exe')
              driver.get('http://www.google.com')
              search=driver.find_element_by_name('q')
              search.send_keys(str(search_for))
              search.send_keys(Keys.RETURN)  

          elif 'open notepad' in query:
              os.system("notepad")

          elif 'open wordpad' in query:
              os.startfile("C:\\Windows\\WinSxS\\amd64_microsoft-windows-wordpad_31bf3856ad364e35_10.0.16299.15_none_50a6a525de09f7eb\\Wordpad")

          elif 'whatsapp message' in query:

              driver=webdriver.Edge(executable_path='C:\\Users\\JYOYHI S PAWAR\\Downloads\\edgedriver_win64\\msedgedriver.exe')
              driver.get('https://web.whatsapp.com/')
              driver.maximize_window()
              speak("to whom to senf message")
              name=take_cmd()
              speak("message")
              msg=take_cmd()

              user=driver.find_element_by_xpath("//span[@title='{}']".format(name))
              user.click()
              msg_box=driver.find_element_by_xpath("//*[@id='main']/footer/div[1]/div[2]/div/div[2]")
              msg_box.send_keys(msg)
              msg=driver.find_element_by_xpath(" //*[@id='main']/footer/div[1]/div[3]/button")
              msg.click()

              speak("message sent")

          elif 'quit' in query:
              exit() 

if __name__=="__main__":


     
    
      
      
      
    wishme()
    main()


window.mainloop()
