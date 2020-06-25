import os

if __name__ == '__main__':
    line = "__________"
    _http_proxy = "127.0.0.1:7890 "
    _download_path = r"C:\Users\kasusa\Downloads"

    to_say = f'''___ I help you get ___
你可以在py代码顶部修改 http_proxy 和 download_path
使用之前请确保已经安装了python和you-get
you-get安装: pip3 install you-get
{line}
当前状态:
http_proxy : {_http_proxy}
download_path : {_download_path}
{line}
请粘贴要下载的youtube视频链接:'''
    print(to_say)
    youtubelink = input("")
    command = f"you-get -x 1{_http_proxy} -o {_download_path} {youtubelink}"
    print("请耐心等待解析,马上就会显示下载进度...")
    os.system(command)