import tkinter
from _tkinter import *

root = tkinter.Tk()

label1 = tkinter.Label(text=" enter cluster : ")
label1.pack()
clvar = tkinter.IntVar()
cluster = tkinter.Entry(bd=5)
clvar = cluster.get()
cluster.pack()


def open1():
    print("K-MEDOIDS CLUSTERING")
    exec('example.py')


button_1 = tkinter.Button(text="SUBMIT", command=open1)
button_1.pack()
root.mainloop()