
// This file is part of Drwalin Libraries project
// Copyright (C) 2019 Marek Zalewski aka Drwalin aka DrwalinPCF

#ifndef STD_STRING_HPP
#define STD_STRING_HPP

#include <string>

#include <vector>
#include <array>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <deque>
#include <forward_list>
#include <list>

namespace std
{
	inline string to_string( const string & src )
	{
		return src;
	}
	
	#define ONE_ARG_CODE {\
							string ret = "{";\
							for( auto it = src.begin();; )\
							{\
								ret += to_string( *it );\
								++it;\
								if( it != src.end() )\
									ret += ",";\
								else \
									break;\
							}\
							ret += "}";\
							return ret;\
						}
	
	template < typename T >
	inline string to_string( const deque<T> & src ) ONE_ARG_CODE;
	
	template < typename T >
	inline string to_string( const forward_list<T> & src ) ONE_ARG_CODE;
	
	template < typename T >
	inline string to_string( const list<T> & src ) ONE_ARG_CODE;
	
	template < typename T >
	inline string to_string( const vector<T> & src ) ONE_ARG_CODE;
	
	template < typename T, int count >
	inline string to_string( const array<T,count> & src ) ONE_ARG_CODE;
	
	template < typename T >
	inline string to_string( const set<T> & src ) ONE_ARG_CODE;
	
	template < typename T >
	inline string to_string( const multiset<T> & src ) ONE_ARG_CODE;
	
	template < typename T >
	inline string to_string( const unordered_set<T> & src ) ONE_ARG_CODE;
	
	template < typename T >
	inline string to_string( const unordered_multiset<T> & src ) ONE_ARG_CODE;
	
	#undef ONE_ARG_CODE
	
	
	
	#define TWO_ARGS_CODE {\
							string ret = "{";\
							for( auto it = src.begin();; )\
							{\
								ret += "(";\
								ret += to_string( it->first );\
								ret += ",";\
								ret += to_string( it->second );\
								ret += ")";\
								++it;\
								if( it != src.end() )\
									ret += ",";\
								else \
									break;\
							}\
							ret += "}";\
							return ret;\
						}
	
	
	template < typename A, typename B >
	inline string to_string( const map<A,B> & src ) TWO_ARGS_CODE;
	
	template < typename A, typename B >
	inline string to_string( const multimap<A,B> & src ) TWO_ARGS_CODE;
	
	template < typename A, typename B >
	inline string to_string( const unordered_map<A,B> & src ) TWO_ARGS_CODE;
	
	template < typename A, typename B >
	inline string to_string( const unordered_multimap<A,B> & src ) TWO_ARGS_CODE;
	
	template < typename A, typename B >
	inline string to_string( const pair<A,B> & src )
	{
		return std::string("(") + to_string(src.first) + "," + to_string(src.second) + ")";
	}
	
	#undef TWO_ARGS_CODE
};

template < typename T >
inline std::string operator + ( const std::string & str, const T & a )
{
	return str + to_string(a);
}

template < typename T >
inline std::string operator += ( std::string & str, const T & a )
{
	str += to_string(a);
	return str;
}

#endif

