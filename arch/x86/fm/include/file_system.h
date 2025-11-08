#ifndef FILE_SYSTEM_H
#define FILE_SYSTEM_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <dirent.h>

// 打开文件
int open_file(const char *filename, int flags, mode_t mode);

// 读取文件
ssize_t read_file(int fd, void *buf, size_t count);

// 写入文件
ssize_t write_file(int fd, const void *buf, size_t count);

// 关闭文件
int close_file(int fd);

// 列出目录中的文件和子目录
void list_directory(const char *path);

// 创建目录
int create_directory(const char *path, mode_t mode);

// 删除目录
int delete_directory(const char *path);

// 删除文件
int delete_file(const char *filename);

// 重命名文件
int rename_file(const char *old_name, const char *new_name);

// 获取文件属性
int get_file_attributes(const char *filename, struct stat *file_stat);

#endif // FILE_SYSTEM_H
