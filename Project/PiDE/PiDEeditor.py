from tkinter import Tk, scrolledtext, Menu, filedialog, END, messagebox, simpledialog
import os
import platform
from tkinter.messagebox import showwarning
import subprocess
# Main window
root = Tk(className=" PiDE")
textArea = scrolledtext.ScrolledText(root, width = 100, height = 80)

# Functions
def newFile():
    # If there is content
    if len(textArea.get('1.0', END+'-1c')) > 0:
        if messagebox.askyesno("Save?", "Do you wish to save?"):
            saveFile()
        else: textArea.delete('1.0', END)
    root.title("PiDE")

# Hard to say it, but this function will open a File
def openFile():
    file = filedialog.askopenfile(parent = root, mode = 'rb', title = "Select a file", filetypes = (("Pipi file", "*.pipi"), ("All files", "*.*")))

    root.title(os.path.basename(file.name) + " - PiDE")

    if file != None:
        contents = file.read()
        textArea.insert('1.0', contents)
        file.close()

def saveFile():
    file = filedialog.asksaveasfile(mode = 'w')
    # slice of the last character from get, as an extra return is added
    if file != None:
        data = textArea.get('1.0', END+'-1c')
        file.write(data)
        file.close()
def exitEditor():
    if messagebox.askyesno("Quit", " Don't leave us, pleease"):
        root.destroy()
def findInFile():
    findString = simpledialog.askstring("Find...", "Enter text, to find ")
    textData = textArea.get('1.0', END)

    occurances = textData.upper().count(findString.upper())

    if textData.upper().count(findString.upper()) > 0:
        label = messagebox.showinfo("Results", findString + " has " + str(occurances) +  " occurances" )
    else:
        label = messagebox.showinfo("Results", "Sorry*(")
def runFile():
    if messagebox.askyesno("Save?", "You need to save before running"):
        file = filedialog.asksaveasfile(mode='w')
        # slice of the last character from get, as an extra return is added
        if file != None:
            data = textArea.get('1.0', END + '-1c')
            file.write(data)
            file.close()
        os.system("python PyScript " + os.path.basename(file.name))


def about():
    label = messagebox.showinfo("About", "This is a PiDE, which we created to help working with PieScript")
def help():
    messagebox.showinfo("Help", "This is help Menu")
def shell():
    if messagebox.askyesno("Shell?", "Do you want to change it to shell environment?"):
        if platform.system() == 'Windows':
            os.system('start cmd')
        elif platform.system() == 'Linux':
            os.system('gnome-terminal')
        elif platform.system() == 'Darwin':
            os.system('open -a Terminal')
        root.destroy()



# Menu options

menu = Menu(root)
root.config(menu = menu)

fileMenu = Menu(menu)
menu.add_cascade(label = "File", menu = fileMenu)
fileMenu.add_command(label = "New", command = newFile)
fileMenu.add_command(label = "Open", command = openFile)
fileMenu.add_command(label = "Save", command = saveFile)
fileMenu.add_command(label = "Find", command = findInFile)
fileMenu.add_separator()
fileMenu.add_command(label = "Exit", command = exitEditor)

helpMenu = Menu(menu)
menu.add_cascade(label = "Help", menu = helpMenu)
helpMenu.add_command(label = "Help", command = help)
helpMenu.add_command(label = "About", command = about)

actionMenu = Menu(menu)
menu.add_cascade(label = "Action", menu = actionMenu)
actionMenu.add_command(label = "Shell", command = shell)
actionMenu.add_command(label = "Run", command = runFile)


textArea.pack()

# Keep window open
root.mainloop()