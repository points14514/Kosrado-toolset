#ifndef ENCRYPTION_H
#define ENCRYPTION_H

// 加密文件
int encrypt_file(const char *filename, const char *password);

// 解密文件
int decrypt_file(const char *filename, const char *password);

#endif // ENCRYPTION_H
