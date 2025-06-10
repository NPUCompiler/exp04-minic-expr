///
/// @file Common.cpp
/// @brief 共通函数头文件
/// @author zenglj (zenglj@live.com)
/// @version 1.0
/// @date 2024-11-21
///
/// @copyright Copyright (c) 2024
///
/// @par 修改日志:
/// <table>
/// <tr><th>Date       <th>Version <th>Author  <th>Description
/// <tr><td>2024-11-21 <td>1.0     <td>zenglj  <td>新做
/// </table>
///
#pragma once

#include <cstdint>
#include <string>

/// @brief 整数变字符串
/// @param num 无符号数
/// @return 字符串
std::string int2str(uint64_t num);

/// @brief 浮点数变字符串
/// @param num 浮点数
/// @return 字符串
std::string double2str(double num);

/// @brief 检查字符是否是字母（大小写字母）
/// @param ch 字符
/// @return true：是，false：不是
bool isLetter(char ch);

/// @brief 检查字符是否为数字(0-9)
/// @param ch 字符
/// @return true：字符是数字字符(0-9) false:不是
bool isDigital(char ch);

/// @brief 检查字符是否为大小写字符或数字(0-9)
/// @param ch 字符
/// @return true：是，false：不是
bool isLetterDigital(char ch);

/// @brief 检查字符是否为大小写字符或数字(0-9)或下划线
/// @param ch 字符
/// @return true：是，false: 不是
bool isLetterDigitalUnderLine(char ch);

/// @brief 检查字符是否为大小写字符或下划线
/// @param ch 字符
/// @return true：是，false：不是
bool isLetterUnderLine(char ch);

/// @brief 删除前后空格
/// @param str 要处理的字符串
/// @return 处理后的字符串
std::string trim(const std::string & str);

#define LOG_DEBUG 0
#define LOG_INFO 1
#define LOG_ERROR 2

void minic_log_common(int level, const char * content);

#define minic_log(level, fmt, args...)                                                                                 \
    do {                                                                                                               \
        char max_buf[1024];                                                                                            \
        snprintf(max_buf, sizeof(max_buf), "%s:%d " fmt "\n", __FILE__, __LINE__, ##args);                             \
        minic_log_common(level, max_buf);                                                                              \
    } while (0)
