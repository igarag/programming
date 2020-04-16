#!/usr/bin/env python
# encoding: utf-8

import npyscreen


class ExitButton(npyscreen.ButtonPress):
    def whenPressed(self):
        self.parentApp.setNextForm('q')

    def whenPressed(self):
        self.parent.parentApp.switchForm(None)

class LinkedListMenu(npyscreen.NPSApp):
    def main(self):

        values = ["Insert at the beginning",
                  "Insert at the end",
                  "Delete element at the beginning",
                  "Delete element at the end"]
        # These lines create the form and populate it with widgets.
        # A fairly complex screen in only 8 or so lines of code - a line for each control.
        F  = npyscreen.Form(name = "Linked list in Python",)

        ms = F.add(npyscreen.TitleSelectOne, max_height=4, value = [0,], name="Pick One",
                values=values, scroll_exit=True)

        value = F.add(npyscreen.TitleText, name = "Type a value:",)

        # This lets the user interact with the Form.
        F.edit()

        print(ms.get_selected_objects())

if __name__ == "__main__":
    App = LinkedListMenu()
    App.run()
