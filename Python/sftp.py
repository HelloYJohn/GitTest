import paramiko
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
        self.sftp.put(localfile, remotefile)

    # removed单个文件
    def sftp_remove(self, remotefile):
        self.sftp.remove(remotefile)


if __name__ == '__main__':
    remotefile = r'/home/yuanwenxing/test/python/xxoo.xml'
    localfile = r'C:/Users/Administrator/Desktop/xxoo.xml'

    host = Linux('xxx', 'xxx', 'xxx')
    host.connect()

    HOME_DIR=r'/home/yuanwenxing/release_2.2/'
    #open file
    fp = open('sftp.INPUT')
    line = fp.readline()
    while(line):
        spLine = line[:-1].split('    ')
        tmpfrom = spLine[0]
        tmpto = HOME_DIR + spLine[1]
        print(tmpfrom, end=' ==> ')
        print(tmpto)
        host.sftp_remove(tmpto)
        line = fp.readline()


    # 将远端的xxoo.txt get到本地，并保存为ooxx.txt
    #host.sftp_get(remotefile, localfile)

    # # 将本地的xxoo.txt put到远端，并保持为xxoo.txt
    # host.sftp_put(localfile, remotefile)

    host.close()
