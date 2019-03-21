#ifndef STOCK_H
#define STOCK_H

#include <vector>

namespace stock_namespace {
    class Stock_c {
        char* ticker;
        double* price_data;
        int price_data_size;
        double* historical_price_data;
        int historical_price_data_size;
    public:
        Stock_c();
        Stock_c(char* ticker, double price_data[], int price_data_size, double historical_price_data[], int historical_price_data_size);
        char* get_ticker_c();
        void change_ticker_c();
		void change_price_data_c();
        void change_historical_price_data_c();
        char* get_industry_c();
	    std::vector<double> get_historical_volume_c();
    };
}

#endif
