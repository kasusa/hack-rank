import os

if __name__ == '__main__':
    line = "__________"
    _http_proxy = "127.0.0.1:7890 "
    _download_path = r"C:\Users\kasusa\Downloads"

    to_say = f'''___ I help you get(noproxy) --playlist___
you-get安装: pip3 install you-get
{line}
当前状态:
download_path : {_download_path}
{line}
请粘贴要下载的视频链接:'''
    print(to_say)
    link = input("")
    command = f"you-get -o {_download_path} --playlist {link}"
    print("请耐心等待解析,马上就会显示下载进度...")
    os.system(command)