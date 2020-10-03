import speech_recognition as sr
import webbrowser 
import pyttsx3
import os

print("Welcome to my tools\n\n")
pyttsx3.speak("welcome to my tools")
while True :



	print("Enter your requirements... we are listening...", end='')
	r = sr.Recognizer()

	with sr.Microphone() as source:
		print("Start  saying ....")
		audio = r.listen(source)
		print("we got it , plz wait.....")

	ch = r.recognize_google(audio)

	if ("date" in ch)  and (("run" in ch) or ("execute" in ch) or ("show" in ch)):
		webbrowser.open("http://192.168.42.218/cgi-bin/iiec.py?x=date")
	elif ("calendar" in ch) and  (("show" in ch) or ("run" in ch) or ("display" in ch)):
		webbrowser.open("http://192.168.42.218/cgi-bin/iiec.py?x=cal")
	elif ("IP address" in ch) and  (("show" in ch) or ("run" in ch) or ("display" in ch)):
		webbrowser.open("http://192.168.42.218/cgi-bin/iiec.py?x=ifconfig")
	elif ("gmail" in ch) and  (("show" in ch) or ("open" in ch) or ("display" in ch)):
		webbrowser.open("https://accounts.google.com/login/signinchooser?flowName=GlifWebSignIn&flowEntry=AddSession")
	elif (("open " in ch) or ("run" in ch)) and (("facebook" in ch) or ("fb " in ch)):
		webbrowser.open("https://www.facebook.com/")


	else:
		print("not understand")
