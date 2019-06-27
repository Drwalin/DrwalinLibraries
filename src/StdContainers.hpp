
// This file is part of Drwalin Libraries project
// Copyright (C) 2019 Marek Zalewski aka Drwalin aka DrwalinPCF

#ifndef STD_CONTAINERS_HPP
#define STD_CONTAINERS_HPP

#include <set>
#include <map>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>

#include <type_traits>





template < typename T >
inline std::vector<T> & operator += ( std::vector<T> & dst, const std::vector<T> & src )
{
	dst.insert( dst.end(), src.begin(), src.end() );
	return dst;
}

template < typename T >
inline std::vector<T> & operator += ( std::vector<T> & dst, const std::set<T> & src )
{
	dst.insert( dst.end(), src.begin(), src.end() );
	return dst;
}

template < typename T >
inline std::vector<T> & operator += ( std::vector<T> & dst, const std::multiset<T> & src )
{
	dst.insert( dst.end(), src.begin(), src.end() );
	return dst;
}

template < typename T >
inline std::vector<T> & operator += ( std::vector<T> & dst, const std::list<T> & src )
{
	dst.insert( dst.end(), src.begin(), src.end() );
	return dst;
}

template < typename T >
inline std::vector<T> & operator += ( std::vector<T> & dst, const std::forward_list<T> & src )
{
	dst.insert( dst.end(), src.begin(), src.end() );
	return dst;
}

template < typename T >
inline std::vector<T> & operator += ( std::vector<T> & dst, const std::deque<T> & src )
{
	dst.insert( dst.end(), src.begin(), src.end() );
	return dst;
}

template < typename T, size_t arrSize >
inline std::vector<T> & operator += ( std::vector<T> & dst, const std::array<T,arrSize> & src )
{
	dst.insert( dst.end(), src.begin(), src.end() );
	return dst;
}





template < typename T >
inline std::set<T> & operator += ( std::set<T> & dst, const std::vector<T> & src )
{
	dst.insert( src.begin(), src.end() );
	return dst;
}

template < typename T >
inline std::set<T> & operator += ( std::set<T> & dst, const std::set<T> & src )
{
	dst.insert( src.begin(), src.end() );
	return dst;
}

template < typename T >
inline std::set<T> & operator += ( std::set<T> & dst, const std::multiset<T> & src )
{
	dst.insert( src.begin(), src.end() );
	return dst;
}

template < typename T >
inline std::set<T> & operator += ( std::set<T> & dst, const std::list<T> & src )
{
	dst.insert( src.begin(), src.end() );
	return dst;
}

template < typename T >
inline std::set<T> & operator += ( std::set<T> & dst, const std::forward_list<T> & src )
{
	dst.insert( src.begin(), src.end() );
	return dst;
}

template < typename T >
inline std::set<T> & operator += ( std::set<T> & dst, const std::deque<T> & src )
{
	dst.insert( src.begin(), src.end() );
	return dst;
}

template < typename T, size_t arrSize >
inline std::set<T> & operator += ( std::set<T> & dst, const std::array<T,arrSize> & src )
{
	dst.insert( src.begin(), src.end() );
	return dst;
}





template < typename T >
inline std::multiset<T> & operator += ( std::multiset<T> & dst, const std::set<T> & src )
{
	dst.insert( src.begin(), src.end() );
	return dst;
}

template < typename T >
inline std::multiset<T> & operator += ( std::multiset<T> & dst, const std::vector<T> & src )
{
	dst.insert( src.begin(), src.end() );
	return dst;
}

template < typename T >
inline std::multiset<T> & operator += ( std::multiset<T> & dst, const std::multiset<T> & src )
{
	dst.insert( src.begin(), src.end() );
	return dst;
}

template < typename T >
inline std::multiset<T> & operator += ( std::multiset<T> & dst, const std::list<T> & src )
{
	dst.insert( src.begin(), src.end() );
	return dst;
}

template < typename T >
inline std::multiset<T> & operator += ( std::multiset<T> & dst, const std::forward_list<T> & src )
{
	dst.insert( src.begin(), src.end() );
	return dst;
}

template < typename T >
inline std::multiset<T> & operator += ( std::multiset<T> & dst, const std::deque<T> & src )
{
	dst.insert( src.begin(), src.end() );
	return dst;
}

template < typename T, size_t arrSize >
inline std::multiset<T> & operator += ( std::multiset<T> & dst, const std::array<T,arrSize> & src )
{
	dst.insert( src.begin(), src.end() );
	return dst;
}





template < typename T >
inline std::list<T> & operator += ( std::list<T> & dst, const std::vector<T> & src )
{
	dst.insert( dst.end(), src.begin(), src.end() );
	return dst;
}

template < typename T >
inline std::list<T> & operator += ( std::list<T> & dst, const std::set<T> & src )
{
	dst.insert( dst.end(), src.begin(), src.end() );
	return dst;
}

template < typename T >
inline std::list<T> & operator += ( std::list<T> & dst, const std::multiset<T> & src )
{
	dst.insert( dst.end(), src.begin(), src.end() );
	return dst;
}

template < typename T >
inline std::list<T> & operator += ( std::list<T> & dst, const std::list<T> & src )
{
	dst.insert( dst.end(), src.begin(), src.end() );
	return dst;
}

template < typename T >
inline std::list<T> & operator += ( std::list<T> & dst, const std::forward_list<T> & src )
{
	dst.insert( dst.end(), src.begin(), src.end() );
	return dst;
}

template < typename T >
inline std::list<T> & operator += ( std::list<T> & dst, const std::deque<T> & src )
{
	dst.insert( dst.end(), src.begin(), src.end() );
	return dst;
}

template < typename T, size_t arrSize >
inline std::list<T> & operator += ( std::list<T> & dst, const std::array<T,arrSize> & src )
{
	dst.insert( dst.end(), src.begin(), src.end() );
	return dst;
}





template < typename T >
inline std::deque<T> & operator += ( std::deque<T> & dst, const std::vector<T> & src )
{
	dst.insert( dst.end(), src.begin(), src.end() );
	return dst;
}

template < typename T >
inline std::deque<T> & operator += ( std::deque<T> & dst, const std::set<T> & src )
{
	dst.insert( dst.end(), src.begin(), src.end() );
	return dst;
}

template < typename T >
inline std::deque<T> & operator += ( std::deque<T> & dst, const std::multiset<T> & src )
{
	dst.insert( dst.end(), src.begin(), src.end() );
	return dst;
}

template < typename T >
inline std::deque<T> & operator += ( std::deque<T> & dst, const std::list<T> & src )
{
	dst.insert( dst.end(), src.begin(), src.end() );
	return dst;
}

template < typename T >
inline std::deque<T> & operator += ( std::deque<T> & dst, const std::forward_list<T> & src )
{
	dst.insert( dst.end(), src.begin(), src.end() );
	return dst;
}

template < typename T >
inline std::deque<T> & operator += ( std::deque<T> & dst, const std::deque<T> & src )
{
	dst.insert( dst.end(), src.begin(), src.end() );
	return dst;
}

template < typename T, size_t arrSize >
inline std::deque<T> & operator += ( std::deque<T> & dst, const std::array<T,arrSize> & src )
{
	dst.insert( dst.end(), src.begin(), src.end() );
	return dst;
}





template < typename T >
inline std::forward_list<T> & operator += ( std::forward_list<T> & dst, const std::vector<T> & src )
{
	dst.insert_after( dst.end(), src.begin(), src.end() );
	return dst;
}

template < typename T >
inline std::forward_list<T> & operator += ( std::forward_list<T> & dst, const std::set<T> & src )
{
	dst.insert_after( dst.end(), src.begin(), src.end() );
	return dst;
}

template < typename T >
inline std::forward_list<T> & operator += ( std::forward_list<T> & dst, const std::multiset<T> & src )
{
	dst.insert_after( dst.end(), src.begin(), src.end() );
	return dst;
}

template < typename T >
inline std::forward_list<T> & operator += ( std::forward_list<T> & dst, const std::list<T> & src )
{
	dst.insert_after( dst.end(), src.begin(), src.end() );
	return dst;
}

template < typename T >
inline std::forward_list<T> & operator += ( std::forward_list<T> & dst, const std::forward_list<T> & src )
{
	dst.insert_after( dst.end(), src.begin(), src.end() );
	return dst;
}

template < typename T >
inline std::forward_list<T> & operator += ( std::forward_list<T> & dst, const std::deque<T> & src )
{
	dst.insert_after( dst.end(), src.begin(), src.end() );
	return dst;
}

template < typename T, size_t arrSize >
inline std::forward_list<T> & operator += ( std::forward_list<T> & dst, const std::array<T,arrSize> & src )
{
	dst.insert_after( dst.end(), src.begin(), src.end() );
	return dst;
}


































































template < typename T >
inline std::vector<T> operator + ( const std::vector<T> & srcA, const std::vector<T> & srcB )
{
	std::vector<T> dst = srcA;
	dst.insert( dst.end(), srcB.begin(), srcB.end() );
	return dst;
}

template < typename T >
inline std::vector<T> operator + ( const std::vector<T> & srcA, const std::set<T> & srcB )
{
	std::vector<T> dst = srcA;
	dst.insert( dst.end(), srcB.begin(), srcB.end() );
	return dst;
}

template < typename T >
inline std::vector<T> operator + ( const std::vector<T> & srcA, const std::multiset<T> & srcB )
{
	std::vector<T> dst = srcA;
	dst.insert( dst.end(), srcB.begin(), srcB.end() );
	return dst;
}

template < typename T >
inline std::vector<T> operator + ( const std::vector<T> & srcA, const std::list<T> & srcB )
{
	std::vector<T> dst = srcA;
	dst.insert( dst.end(), srcB.begin(), srcB.end() );
	return dst;
}

template < typename T >
inline std::vector<T> operator + ( const std::vector<T> & srcA, const std::forward_list<T> & srcB )
{
	std::vector<T> dst = srcA;
	dst.insert( dst.end(), srcB.begin(), srcB.end() );
	return dst;
}

template < typename T >
inline std::vector<T> operator + ( const std::vector<T> & srcA, const std::deque<T> & srcB )
{
	std::vector<T> dst = srcA;
	dst.insert( dst.end(), srcB.begin(), srcB.end() );
	return dst;
}

template < typename T, size_t arrSize >
inline std::vector<T> operator + ( const std::vector<T> & srcA, const std::array<T,arrSize> & srcB )
{
	std::vector<T> dst = srcA;
	dst.insert( dst.end(), srcB.begin(), srcB.end() );
	return dst;
}





template < typename T >
inline std::set<T> operator + ( const std::set<T> & srcA, const std::vector<T> & srcB )
{
	std::set<T> dst = srcA;
	dst.insert( srcB.begin(), srcB.end() );
	return dst;
}

template < typename T >
inline std::set<T> operator + ( const std::set<T> & srcA, const std::set<T> & srcB )
{
	std::set<T> dst = srcA;
	dst.insert( srcB.begin(), srcB.end() );
	return dst;
}

template < typename T >
inline std::set<T> operator + ( const std::set<T> & srcA, const std::multiset<T> & srcB )
{
	std::set<T> dst = srcA;
	dst.insert( srcB.begin(), srcB.end() );
	return dst;
}

template < typename T >
inline std::set<T> operator + ( const std::set<T> & srcA, const std::list<T> & srcB )
{
	std::set<T> dst = srcA;
	dst.insert( srcB.begin(), srcB.end() );
	return dst;
}

template < typename T >
inline std::set<T> operator + ( const std::set<T> & srcA, const std::forward_list<T> & srcB )
{
	std::set<T> dst = srcA;
	dst.insert( srcB.begin(), srcB.end() );
	return dst;
}

template < typename T >
inline std::set<T> operator + ( const std::set<T> & srcA, const std::deque<T> & srcB )
{
	std::set<T> dst = srcA;
	dst.insert( srcB.begin(), srcB.end() );
	return dst;
}

template < typename T, size_t arrSize >
inline std::set<T> operator + ( const std::set<T> & srcA, const std::array<T,arrSize> & srcB )
{
	std::set<T> dst = srcA;
	dst.insert( srcB.begin(), srcB.end() );
	return dst;
}





template < typename T >
inline std::multiset<T> operator + ( const std::multiset<T> & srcA, const std::set<T> & srcB )
{
	std::multiset<T> dst = srcA;
	dst.insert( srcB.begin(), srcB.end() );
	return dst;
}

template < typename T >
inline std::multiset<T> operator + ( const std::multiset<T> & srcA, const std::vector<T> & srcB )
{
	std::multiset<T> dst = srcA;
	dst.insert( srcB.begin(), srcB.end() );
	return dst;
}

template < typename T >
inline std::multiset<T> operator + ( const std::multiset<T> & srcA, const std::multiset<T> & srcB )
{
	std::multiset<T> dst = srcA;
	dst.insert( srcB.begin(), srcB.end() );
	return dst;
}

template < typename T >
inline std::multiset<T> operator + ( const std::multiset<T> & srcA, const std::list<T> & srcB )
{
	std::multiset<T> dst = srcA;
	dst.insert( srcB.begin(), srcB.end() );
	return dst;
}

template < typename T >
inline std::multiset<T> operator + ( const std::multiset<T> & srcA, const std::forward_list<T> & srcB )
{
	std::multiset<T> dst = srcA;
	dst.insert( srcB.begin(), srcB.end() );
	return dst;
}

template < typename T >
inline std::multiset<T> operator + ( const std::multiset<T> & srcA, const std::deque<T> & srcB )
{
	std::multiset<T> dst = srcA;
	dst.insert( srcB.begin(), srcB.end() );
	return dst;
}

template < typename T, size_t arrSize >
inline std::multiset<T> operator + ( const std::multiset<T> & srcA, const std::array<T,arrSize> & srcB )
{
	std::multiset<T> dst = srcA;
	dst.insert( srcB.begin(), srcB.end() );
	return dst;
}





template < typename T >
inline std::list<T> operator + ( const std::list<T> & srcA, const std::vector<T> & srcB )
{
	std::list<T> dst = srcA;
	dst.insert( dst.end(), srcB.begin(), srcB.end() );
	return dst;
}

template < typename T >
inline std::list<T> operator + ( const std::list<T> & srcA, const std::set<T> & srcB )
{
	std::list<T> dst = srcA;
	dst.insert( dst.end(), srcB.begin(), srcB.end() );
	return dst;
}

template < typename T >
inline std::list<T> operator + ( const std::list<T> & srcA, const std::multiset<T> & srcB )
{
	std::list<T> dst = srcA;
	dst.insert( dst.end(), srcB.begin(), srcB.end() );
	return dst;
}

template < typename T >
inline std::list<T> operator + ( const std::list<T> & srcA, const std::list<T> & srcB )
{
	std::list<T> dst = srcA;
	dst.insert( dst.end(), srcB.begin(), srcB.end() );
	return dst;
}

template < typename T >
inline std::list<T> operator + ( const std::list<T> & srcA, const std::forward_list<T> & srcB )
{
	std::list<T> dst = srcA;
	dst.insert( dst.end(), srcB.begin(), srcB.end() );
	return dst;
}

template < typename T >
inline std::list<T> operator + ( const std::list<T> & srcA, const std::deque<T> & srcB )
{
	std::list<T> dst = srcA;
	dst.insert( dst.end(), srcB.begin(), srcB.end() );
	return dst;
}

template < typename T, size_t arrSize >
inline std::list<T> operator + ( const std::list<T> & srcA, const std::array<T,arrSize> & srcB )
{
	std::list<T> dst = srcA;
	dst.insert( dst.end(), srcB.begin(), srcB.end() );
	return dst;
}





template < typename T >
inline std::deque<T> operator + ( const std::deque<T> & srcA, const std::vector<T> & srcB )
{
	std::deque<T> dst = srcA;
	dst.insert( dst.end(), srcB.begin(), srcB.end() );
	return dst;
}

template < typename T >
inline std::deque<T> operator + ( const std::deque<T> & srcA, const std::set<T> & srcB )
{
	std::deque<T> dst = srcA;
	dst.insert( dst.end(), srcB.begin(), srcB.end() );
	return dst;
}

template < typename T >
inline std::deque<T> operator + ( const std::deque<T> & srcA, const std::multiset<T> & srcB )
{
	std::deque<T> dst = srcA;
	dst.insert( dst.end(), srcB.begin(), srcB.end() );
	return dst;
}

template < typename T >
inline std::deque<T> operator + ( const std::deque<T> & srcA, const std::list<T> & srcB )
{
	std::deque<T> dst = srcA;
	dst.insert( dst.end(), srcB.begin(), srcB.end() );
	return dst;
}

template < typename T >
inline std::deque<T> operator + ( const std::deque<T> & srcA, const std::forward_list<T> & srcB )
{
	std::deque<T> dst = srcA;
	dst.insert( dst.end(), srcB.begin(), srcB.end() );
	return dst;
}

template < typename T >
inline std::deque<T> operator + ( const std::deque<T> & srcA, const std::deque<T> & srcB )
{
	std::deque<T> dst = srcA;
	dst.insert( dst.end(), srcB.begin(), srcB.end() );
	return dst;
}

template < typename T, size_t arrSize >
inline std::deque<T> operator + ( const std::deque<T> & srcA, const std::array<T,arrSize> & srcB )
{
	std::deque<T> dst = srcA;
	dst.insert( dst.end(), srcB.begin(), srcB.end() );
	return dst;
}





template < typename T >
inline std::forward_list<T> operator + ( const std::forward_list<T> & srcA, const std::vector<T> & srcB )
{
	std::forward_list<T> dst = srcA;
	dst.insert_after( dst.end(), srcB.begin(), srcB.end() );
	return dst;
}

template < typename T >
inline std::forward_list<T> operator + ( const std::forward_list<T> & srcA, const std::set<T> & srcB )
{
	std::forward_list<T> dst = srcA;
	dst.insert_after( dst.end(), srcB.begin(), srcB.end() );
	return dst;
}

template < typename T >
inline std::forward_list<T> operator + ( const std::forward_list<T> & srcA, const std::multiset<T> & srcB )
{
	std::forward_list<T> dst = srcA;
	dst.insert_after( dst.end(), srcB.begin(), srcB.end() );
	return dst;
}

template < typename T >
inline std::forward_list<T> operator + ( const std::forward_list<T> & srcA, const std::list<T> & srcB )
{
	std::forward_list<T> dst = srcA;
	dst.insert_after( dst.end(), srcB.begin(), srcB.end() );
	return dst;
}

template < typename T >
inline std::forward_list<T> operator + ( const std::forward_list<T> & srcA, const std::forward_list<T> & srcB )
{
	std::forward_list<T> dst = srcA;
	dst.insert_after( dst.end(), srcB.begin(), srcB.end() );
	return dst;
}

template < typename T >
inline std::forward_list<T> operator + ( const std::forward_list<T> & srcA, const std::deque<T> & srcB )
{
	std::forward_list<T> dst = srcA;
	dst.insert_after( dst.end(), srcB.begin(), srcB.end() );
	return dst;
}

template < typename T, size_t arrSize >
inline std::forward_list<T> operator + ( const std::forward_list<T> & srcA, const std::array<T,arrSize> & srcB )
{
	std::forward_list<T> dst = srcA;
	dst.insert_after( dst.end(), srcB.begin(), srcB.end() );
	return dst;
}





template < typename T, size_t arrSizeA, size_t arrSizeB >
inline std::vector<T> operator + ( const std::array<T,arrSizeA> & srcA, const std::array<T,arrSizeB> & srcB )
{
	std::vector < T > dst;
	dst.insert( dst.end(), srcA.begin(), srcA.end() );
	dst.insert( dst.end(), srcB.begin(), srcB.end() );
	return dst;
}





namespace std
{
	
	
	
};

#endif

