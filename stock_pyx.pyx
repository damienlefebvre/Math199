# distutils: language = c++

from stock_pxd cimport Stock_c

cdef class Stock_py:
    cdef Stock_c stock_object

    def __cinit__(self, ticker, price_data, historical_price_data):
        cdef double[::1] price_data_memview = price_data
        cdef double[:, ::1] historical_price_data_memview = historical_price_data
        self.stock_object = Stock_c(ticker, &price_data_memview[0], price_data.shape[0], &historical_price_data_memview[0, 0], historical_price_data.shape[0]*historical_price_data.shape[1])

    def get_ticker_py(self):
        return self.stock_object.get_ticker_c().decode("utf-8")

    def change_ticker_py(self):
        self.stock_object.change_ticker_c()

    def change_price_data_py(self):
        self.stock_object.change_price_data_c()

    def change_historical_price_data_py(self):
        self.stock_object.change_historical_price_data_c()

    def get_industry_py(self):
        return self.stock_object.get_industry_c().decode("utf-8")

    def get_historical_volume_py(self):
        return self.stock_object.get_historical_volume_c()
