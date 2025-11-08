#ifndef COMPRESSION_H
#define COMPRESSION_H

// 压缩文件
int compress_files(const char *source_dir, const char *output_file);

// 解压文件
int decompress_files(const char *compressed_file, const char *output_dir);

#endif // COMPRESSION_H
