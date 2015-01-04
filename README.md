NTL
===

Modified version of Victor Shoup's Number Theory Library (orignal at http://shoup.net/ntl ) to enable compilation on OSX with clang++. 

Remark: The Xcode project doesn't work anymore, however, compiling the library as follows should allow one to step through the code from Xcode (as long as the NTL source files are not deleted or moved).

$ ./configure CXX='clang++' CXXFLAGS='-gdwarf-4 -std=c++11 -stdlib=libc++' NTL_EXCEPTIONS=on DEF_PREFIX=<location_to_install>

$ make

(Of course in your own project, you should also enable -gdwarf-4 debugging.)
