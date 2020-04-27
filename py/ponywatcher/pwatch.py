import os
from watchdog.observers import Observer
from watchdog.events import FileSystemEventHandler
import time

class MyDirEventHandler(FileSystemEventHandler):

    def on_moved(self, event):
        print(event)

    def on_created(self, event):
        print(event)
        try:
            a = event.src_path.split(".")
            suffix = a[-1]

            b = event.src_path.split("\\")
            Directory = b[0]
            print("Directory", Directory)

            k = []
            for i, j, k in os.walk(Directory):
                pass
            k.remove(b[1])
            if k.__len__() > 0:
                k.sort()
                print(k)
                filenum = int(k[-1].split(".")[0])
                filenum += 1
            else:
                filenum = 1
            moved = Directory + "\\\\" + str(filenum) + "." + suffix
            print("moved", moved)

            os.rename(event.src_path, moved)
            print("file renamed ")
        except FileNotFoundError:
            # handle the error
            pass

    def on_deleted(self, event):
        print(event)

    def on_modified(self, event):
        print("modified:", event)


"""
使用watchdog 监控文件的变化
"""
if __name__ == '__main__':
    # 创建观察者对象
    observer = Observer()
    # 创建事件处理对象
    fileHandler = MyDirEventHandler()

    # 为观察者设置观察对象与处理事件对象
    observer.schedule(fileHandler, "C:/test", True)
    observer.start()
    try:
        while True:
            time.sleep(2)
    except KeyboardInterrupt:
        observer.stop()
    observer.join()
