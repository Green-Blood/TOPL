from tkinter import Tk, scrolledtext, Menu, filedialog, END, messagebox

# Main window
root = Tk(className=" PiDE")
textArea = scrolledtext.ScrolledText(root, width = 100, height = 80)

# Functions
# Hard to say it, but this function will open a File
def openFile():
    file = filedialog.askopenfile(parent = root, mode = 'rb', title = "Select a file", filetype = (("Pi file," "*.pi"), ("All files", "*.*")))

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

def about():
    label = messagebox.showinfo("About", "This is a PiDE, which we created to help working with PieScript")


# Menu options
menu = Menu(root)
root.config(menu = menu)
fileMenu = Menu(menu)
menu.add_cascade(label = "File", menu = fileMenu)
fileMenu.add_command(label = "New")
fileMenu.add_command(label = "Open", command = openFile)
fileMenu.add_command(label = "Save", command = saveFile)
fileMenu.add_separator()
fileMenu.add_command(label = "Exit", command = exitEditor)

helpMenu = Menu(menu)
menu.add_cascade(label = "Help")
menu.add_cascade(label = "About", command = about)

textArea.pack()

# Keep window open
root.mainloop()