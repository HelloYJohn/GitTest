import paramiko
import os
# 定义一个类，表示一台远端linux主机
class Linux(object):
    # 通过IP, 用户名，密码，超时时间初始化一个远程Linux主机
    def __init__(self, ip, username, password, timeout=30):
        self.ip = ip
        self.username = username
        self.password = password
        self.timeout = timeout
        # transport和chanel
        self.t = ''
        self.sftp = ''
        # 链接失败的重试次数
        self.try_times = 3

    # 调用该方法连接远程主机
    def connect(self):
        self.t = paramiko.Transport(sock=(self.ip, 22))
        self.t.connect(username=self.username, password=self.password)
        self.sftp = paramiko.SFTPClient.from_transport(self.t)

    # 断开连接
    def close(self):
        self.t.close()

    # 发送要执行的命令
    def send(self, cmd):
        pass

    # get单个文件
    def sftp_get(self, remotefile, localfile):
        self.sftp.get(remotefile, localfile)

    # put单个文件
    def sftp_put(self, localfile, remotefile):
        print(localfile, " ==> " , remotefile)
        self.sftp.put(localfile, remotefile)

    def sftp_mkdir(self, remotedir):
        try:
            self.sftp.stat(os.path.dirname(remotedir))
        except Exception as e:
            self.sftp_mkdir(os.path.dirname(remotedir))
        try:
            self.sftp.stat(remotedir)
            pass
        except Exception as e:
            print("mkdir ", remotedir)
            self.sftp.mkdir(remotedir)

    # put directory
    def sftp_put_dir(self, localdir, remotedir):
        for root, dirs, files in os.walk(localdir):
            # print("localdir = ", localdir)
            # print("remotedir = ", remotedir)
            # print("root = ", root)
            remote_home = remotedir+root.replace(os.path.dirname(localdir), "").replace("\\", "/")
            # print("remote_home = ", remote_home)
            for dir in dirs:
                self.sftp_mkdir((remote_home+"/"+dir).replace("\\", "/"))
            for file in files:
                self.sftp_put(os.path.join(root, file), (remote_home+"/"+file).replace("\\", "/"))


    # removed单个文件
    def sftp_remove(self, remotefile):
        self.sftp.remove(remotefile)


if __name__ == '__main__':
    remote_dir = '/home/hexianqing/john-y_tmp'
    local_dir = 'E:\code\python\import'

    host = Linux('172.16.12.135', 'zhanghenan', '123456')
    host.connect()

    # open file

    HOME_DIR=r'/home/zhanghenan/source/trunk/'
    fp = open('sftp.INPUT')
    line = fp.readline()
    while(line):
        spLine = line[:-1].split('    ')
        tmpfrom = spLine[0]
        tmpto = HOME_DIR + spLine[1]
        host.sftp_put(tmpfrom, tmpto)
        line = fp.readline()


    # 将远端的xxoo.txt get到本地，并保存为ooxx.txt
    #host.sftp_get(remotefile, localfile)

    # # 将本地的xxoo.txt put到远端，并保持为xxoo.txt
   
    # host.sftp_put("E:/code/python/stfp/test_sftp.py", "/home/hexianqing/john-y_tmp/abc")
    # print(os.path.join(local_dir, "test_sftp.py"))
    # print(os.path.join(remote_dir, "abc").replace("\\", "/"))
    # host.sftp_mkdir(os.path.join(remote_dir, "bcd/bc").replace("\\", "/"))
    # host.sftp_put_dir(local_dir, remote_dir)
    host.close()
