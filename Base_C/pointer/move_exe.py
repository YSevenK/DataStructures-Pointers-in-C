import os
import shutil
from pathlib import Path


def move_exe_files(source_dir, target_dir):
    # 确保目标目录存在
    Path(target_dir).mkdir(parents=True, exist_ok=True)

    # 遍历源目录
    for root, dirs, files in os.walk(source_dir):
        for file in files:
            if file.endswith('.exe'):
                source_path = os.path.join(root, file)
                target_path = os.path.join(target_dir, file)

                try:
                    shutil.move(source_path, target_path)
                    print(f"已移动: {file}")
                except Exception as e:
                    print(f"移动 {file} 时出错: {str(e)}")


if __name__ == "__main__":
    # 设置源目录和目标目录
    source_directory = "."  # 当前目录
    target_directory = "exe_files"  # exe文件存放目录

    move_exe_files(source_directory, target_directory)
    print("完成移动所有exe文件!")
