import os
from watchdog.observers import Observer
from watchdog.events import FileSystemEventHandler
import time


class MyDirEventHandler(FileSystemEventHandler):

    def on_moved(self, event):
        pass

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
                nums = []
                for item in k:
                    nums.append(int(item.split(".")[0]))
                nums.sort()
                filenum = nums[-1]
                print("获得最大目前数字:", filenum)
                filenum += 1
            else:
                filenum = 1
            print("获得可用数字:", filenum)
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
        pass

    def on_modified(self, event):
        pass


"""
使用watchdog 监控文件的变化
"""
if __name__ == '__main__':
    os.system("mode con cols=50 lines=30")
    print(f"""
程序作者 : kasusaland@gmail.com 
时间: 2020-4-28

向c:/test 中丢小马图片吧!
程序会自动根据丢进顺序进行命名排序.
就不用理会windows的 [重名文件] 弹窗了

!!! 注意:
在使用本程序之前赢要确保 [test] 
文件夹中的文件名都是 [数字.xxx]
或者您可以每次使用之前把test中的文件清空,
清空之后会从 [1.xxx] 开始排
""")

    # 创建观察者对象
    observer = Observer()
    # 创建事件处理对象
    fileHandler = MyDirEventHandler()

    # 为观察者设置观察对象与处理事件对象
    observer.schedule(fileHandler, "C:/test", True)
    observer.start()
    print("----开始监控文件夹----")
    try:
        while True:
            time.sleep(2)
    except KeyboardInterrupt:
        observer.stop()
    observer.join()
