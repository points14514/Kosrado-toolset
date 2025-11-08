#ifndef SEARCH_H
#define SEARCH_H

// 执行文件搜索
void search_files(const char *path, const char *pattern, void (*callback)(const char *filename));

#endif // SEARCH_H
