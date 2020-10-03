import sys, os
import pygame
from PyQt5.QtWidgets import QWidget, QToolTip, \
    QPushButton, QApplication, QMessageBox, QFileDialog
from PyQt5.QtGui import QFont    


class Player(QWidget):
    def __init__(self):
        """Initializes the gui"""
        super().__init__()
        self.playmusic = None
        self.pausev = None
        self.musicfile = None
        self.initUI()

    def initUI(self):
        """Describes the layout of the program"""

        QToolTip.setFont(QFont('SansSerif', 12))

        # Will be used for playlist and mp3 tagging
        #self.beforebtn = QPushButton('<-', self)
        #self.beforebtn.resize(self.beforebtn.sizeHint())
        #self.beforebtn.move(10, 30)

        # Used to pause and play music file
        self.playbtn = QPushButton('||', self)
        self.playbtn.setToolTip('For playing the file')
        self.playbtn.clicked.connect(lambda: self.play())
        self.playbtn.resize(self.playbtn.sizeHint())
        self.playbtn.move(0, 30)

        self.pausebtn = QPushButton('|>', self)
        self.pausebtn.setToolTip('For pausing the playback')
        self.pausebtn.resize(self.pausebtn.sizeHint())
        self.pausebtn.move(220, 30)
        self.pausebtn.clicked.connect(lambda: self.pause())

        # Will be used for playlist and mp3 tagging
        #self.afterbtn = QPushButton('->', self)
        #self.afterbtn.resize(self.afterbtn.sizeHint())
        #self.afterbtn.move(300, 30)

        self.openbtn = QPushButton('Open', self)
        self.openbtn.setToolTip('Opens the file')
        self.openbtn.resize(self.openbtn.sizeHint())
        self.openbtn.move(110, 60)
        self.openbtn.clicked.connect(lambda: self.open_file())


        self.setGeometry(300, 300, 300, 300)
        self.setWindowTitle('Music player')
        self.show()

    def closeEvent(self, event):
        reply = QMessageBox.question(self, 'Message',
                'Are you sure you want to quit?', QMessageBox.Yes | QMessageBox.No, 
                QMessageBox.No)
        if reply == QMessageBox.Yes:
            event.accept()
        else:
            event.ignore()

    def open_file(self):
        filename, _ = QFileDialog.getOpenFileName(self, "Open music file", "", 
                        "All Files (*);;Mp3 Files(*.mp3)")
        self.musicfile = filename

    def pause(self):
        if self.pausev is None:
            pygame.mixer.music.pause()
        else:
            self.pausev = None
            pygame.mixer.music.unpause()

    def play(self):
        self.playmusic = pygame.mixer.init()
        pygame.mixer.music.load(self.musicfile)
        pygame.mixer.music.play()

if __name__ == '__main__':
    app = QApplication(sys.argv)
    appobj = Player()
    sys.exit(app.exec_())
