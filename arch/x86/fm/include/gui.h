#ifndef GUI_H
#define GUI_H

#include <gtk/gtk.h>

// 主窗口
typedef struct {
    GtkApplication *app;
    GtkWidget *window;
    GtkWidget *box; // 主布局容器
} MainWindow;

// 文件列表视图
typedef struct {
    GtkWidget *scrolled_window;
    GtkWidget *tree_view;
    GtkTreeStore *tree_store; // 用于存储文件和目录数据
} FileListView;

// 多标签页管理
typedef struct {
    GtkWidget *notebook;
} TabManager;

// 文件操作对话框
typedef struct {
    GtkWidget *dialog;
} FileOperationsDialog;

// 文件搜索对话框
typedef struct {
    GtkWidget *dialog;
    GtkWidget *entry_search_pattern; // 搜索模式输入框
} SearchDialog;

// 文件预览窗口
typedef struct {
    GtkWidget *window;
    GtkWidget *scrolled_window;
    GtkWidget *text_view; // 用于显示文本文件内容
    GtkWidget *image_view; // 用于显示图片
} PreviewWindow;

// 文件加密对话框
typedef struct {
    GtkWidget *dialog;
    GtkWidget *entry_password; // 密码输入框
} EncryptionDialog;

// 文件压缩与解压对话框
typedef struct {
    GtkWidget *dialog;
    GtkWidget *file_chooser; // 文件选择器
} CompressionDialog;

// 文件同步对话框
typedef struct {
    GtkWidget *dialog;
    GtkWidget *entry_source; // 源路径输入框
    GtkWidget *entry_destination; // 目标路径输入框
} SynchronizationDialog;

// 初始化主窗口
MainWindow *init_main_window(GtkApplication *app);

// 初始化文件列表视图
FileListView *init_file_list_view();

// 初始化多标签页管理
TabManager *init_tab_manager();

// 初始化文件操作对话框
FileOperationsDialog *init_file_operations_dialog();

// 初始化文件搜索对话框
SearchDialog *init_search_dialog();

// 初始化文件预览窗口
PreviewWindow *init_preview_window();

// 初始化文件加密对话框
EncryptionDialog *init_encryption_dialog();

// 初始化文件压缩与解压对话框
CompressionDialog *init_compression_dialog();

// 初始化文件同步对话框
SynchronizationDialog *init_synchronization_dialog();

// 显示文件预览
void show_preview(PreviewWindow *preview_window, const char *filename);

// 更新文件列表视图
void update_file_list_view(FileListView *file_list_view, const char *path);

// 添加新标签页
void add_new_tab(TabManager *tab_manager, const char *label, const char *path);

#endif // GUI_H
