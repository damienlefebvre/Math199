from libcpp.vector cimport vector

cdef extern from "stock_cpp.cpp":
    pass

# Declare the class with cdef
cdef extern from "stock_h.h" namespace "stock_namespace":
    cdef cppclass Stock_c:
        Stock_c() except +
        Stock_c(char*, double*, int, double*, int) except +
        char* get_ticker_c()
        void change_ticker_c()
        void change_price_data_c()
        void change_historical_price_data_c()
        char* get_industry_c()
        vector[double] get_historical_volume_c()
