import os
import shutil

# 定义源文件夹（一般是VS Code编译C程序所在的文件夹，可根据实际情况修改）
source_folder = os.getcwd()
# 定义目标文件夹，用来存放exe文件，如果不存在就创建它
target_folder = os.path.join(source_folder, "exe_files")
if not os.path.exists(target_folder):
    os.mkdir(target_folder)

# 遍历源文件夹下的所有文件
for file in os.listdir(source_folder):
    file_path = os.path.join(source_folder, file)
    if os.path.isfile(file_path) and file.endswith(".exe"):
        # 如果是exe文件，就移动到目标文件夹
        shutil.move(file_path, os.path.join(target_folder, file))