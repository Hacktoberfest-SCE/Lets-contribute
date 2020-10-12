#CODE TO CREATE WEB DIGITAL CLOCK
from tkinker import *
from tkinker.ttk import *
from time import strftime
root=Tk()
root.title('clock')
def time():
    string= strftime('%H:%M:%S:%P')
    lbl.config(text=string)
    lbl=Label(root,font=('calibri',40,'bold'),background='purple', foreground='white')
    lbl.pack(anchor='center')
    time()
    mainloop()
    
