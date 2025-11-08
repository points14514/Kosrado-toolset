#ifndef FILE_MANAGER_H
#define FILE_MANAGER_H

#include "file_system.h"
#include "gui.h"
#include "search.h"
#include "preview.h"
#include "encryption.h"
#include "compression.h"
#include "synchronization.h"

// 初始化文件管理器
void init_file_manager();

// 列出指定目录中的文件和子目录
void list_directory_in_gui(FileListView *file_list_view, const char *path);

// 打开文件并预览
void open_and_preview_file(PreviewWindow *preview_window, const char *filename);

// 执行文件搜索
void search_files_in_gui(SearchDialog *search_dialog, FileListView *file_list_view);

// 执行文件加密
void encrypt_file(EncryptionDialog *encryption_dialog, const char *filename);

// 执行文件解密
void decrypt_file(EncryptionDialog *encryption_dialog, const char *filename);

// 执行文件压缩
void compress_files(CompressionDialog *compression_dialog, const char *filename);

// 执行文件解压
void decompress_files(CompressionDialog *compression_dialog, const char *filename);

// 执行文件同步
void synchronize_files(SynchronizationDialog *synchronization_dialog);

#endif // FILE_MANAGER_H
