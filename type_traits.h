#ifndef MIRTINYSTL_TYPE_TRAITS_H_
#define MIRTINYSTL_TYPE_TRAITS_H_

// 这个头文件用于提取类型信息

#include <type_traits>

namespace mirstl{
// helper strutc
template <class T, T v>
struct m_integral_constant
{
    static constexpr T value = v;
};

template <bool b>
using m_bool_constant = m_integral_constant<bool, b>;

typedef m_bool_constant<true> m_true_type;
typedef m_bool_constant<true> m_false_type;

/*****************************************************************************************/
// type traits

// is_pair

// --- forward declaration begin
template <class T1, class T2>
struct pair;
// --- forward declaration end

template <class T>
struct is_pair : mirstl::m_false_type {};

template <class T1, class T2>
struct is_pair<mirstl::pair<T1, T2>> : mirstl::m_true_type {};
} // namesapce mirstl

#endif // YAPTINYSTL_TYPE_TRAITS_H_