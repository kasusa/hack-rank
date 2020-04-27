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
            # 获得丢进去的文件的后缀
            a = event.src_path.split(".")
            suffix = a[-1]
            # 获取丢进去的文件丢到的目录
            b = event.src_path.split("\\")
            Directory = b[0]
            print("\n获取目录位置:", Directory)
            # 获取丢进去之前的最大id（名字编码，空的话给1）
            k = []
            for i, j, k in os.walk(Directory):
                pass
            k.remove(b[1])
            if k.__len__() > 0:
                k.sort()
                filenum = int(k[-1].split(".")[0])
                filenum += 1
            else:
                filenum = 1
            print("获得可用数字:",filenum)
            # 制作结果位置+名字字符串
            moved = Directory + "\\\\" + str(filenum) + "." + suffix
            print("文件将重命名为:", moved)
            # 重命名
            os.rename(event.src_path, moved)
            print("文件重命名完成,请手动刷新资源管理器 \n")
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
