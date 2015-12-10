cat my-friends |        #读取地址文件
awk -v RS=" " '{ gsub("\n", "^Z"); print }' | #转换地址为单行
sort -f |   # 排序地址数据，忽略大小写
awk -v ORS="\n\n" '{ gsub("^Z", "\n"); print }' | # 恢复行结构
grep -v '# SORTKEY' 
