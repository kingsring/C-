#include<iostream>
#include<string>

inline constexpr bool isShorter( const std::string &s1, const std::string &s2 )
{
    return bool(s1.size() > s2.size());
}

// 1.all the formal parameter and returned value need Literal type(×ÖÃæÖµ)
// 2.only one return statement
