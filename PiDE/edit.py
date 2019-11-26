import tkinter as tk
from tkinter import filedialog

filename = None

def newFile():
    global filename
    filename = "Untitled"
    text.delete(0.0, END)
def saveFile():
    global filename
    t = text.get(0.0, END)
    f = open(filename, 'w')
    f.write(t)
    f.close()
def saveAs():
    f = aksvaseasfile(mode = 'w', defaultextension ='.txt')
    t = text.get(0.0, END)
    try:
        f.write(t.rstrip())
    except:
        showerror(title = "Hey, ", message = "Unable to save file...")
def openFile():
    f = askopenfile(mode = 'r')
    t = f.read()
    text.delete(0.0, END)
    text.insert(0.0, t)

root = tk()
root.title("PiDE")
root.minsize(width = 400, height = 400)
root.maxsize(width = 400, height = 400)

text = Text(root, widht = 400, height = 400)
text.pack()

menubar = Menu(root)
filemenu = Menu(menubar)
filemenu.add_command(label = 'New', command = newFile)
filemenu.add_command(label = 'Open', comman = openFile)
filemenu.add_command(label = 'Save', comman = saveFile)
filemenu.add_command(label = 'Save as...', comman = saveAs)
filemenu.add_separator()
filemenu.add_command(label = 'Quit', comman = root.quit)
menubar.add_cascade(label = 'File', menu = filemenu)

root.config(menu = menubar)
root.mainloop()