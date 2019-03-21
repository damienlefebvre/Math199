#include <iostream>
#include "stock_h.h"

namespace stock_namespace {
  // Default constructor
  Stock_c::Stock_c () {}

  // Overloaded constructor
  Stock_c::Stock_c(char* ticker, double price_data[], int price_data_size, double historical_price_data[], int historical_price_data_size) {
    std::cout << "C++: overloaded constructor" << std::endl;

    this->ticker = ticker;
    std::cout << "C++: this->ticker: " << this->ticker << std::endl;

    this->price_data = price_data;
    std::cout << "C++: this->price_data: " << this->price_data << std::endl;

    this->price_data_size = price_data_size;
    std::cout << "C++: this->price_data_size: " << this->price_data_size << std::endl;

    this->historical_price_data = historical_price_data;
    std::cout << "C++: this->historical_price_data: " << this->historical_price_data << std::endl;

    this->historical_price_data_size = historical_price_data_size;
    std::cout << "C++: this->historical_price_data_size: " << this->historical_price_data_size << std::endl;
  }

  char* Stock_c::get_ticker_c() {
    std::cout << "C++: get_ticker_c, return this->ticker" << std::endl;
    return this->ticker;
  }

  void Stock_c::change_ticker_c() {
    std::cout << "C++: this->ticker: " << this->ticker << std::endl;
    std::cout << "C++: *(this->ticker): " << *(this->ticker) << std::endl;
    std::cout << "C++: &(this->ticker): " << &(this->ticker) << std::endl;

    for(int i = 0; i < 10; i++)
      std::cout << "C++: this->ticker[" << i << "]: " << this->ticker[i] << std::endl;

    std::cout << "C++: set this->ticker to GOLD, one character at a time" << std::endl;
    this->ticker[0] = 'G';
    this->ticker[1] = 'O';
    this->ticker[2] = 'L';
    this->ticker[3] = 'D';

    std::cout << "C++: this->ticker: " << this->ticker << std::endl;
  }

  void Stock_c::change_price_data_c() {
    std::cout << "C++: this->price_data: " << this->price_data << std::endl;
    std::cout << "C++: *(this->price_data): " << *(this->price_data) << std::endl;
    std::cout << "C++: &(this->price_data): " << &(this->price_data) << std::endl;

    for(int i = 0; i < 10; i++)
      std::cout << "C++: this->price_data[" << i << "]: " << this->price_data[i] << std::endl;

    std::cout << "C++: multiply this->price_data[this->price_data_size-1] ten-fold" << std::endl;
    this->price_data[this->price_data_size-1] *= 10;

    std::cout << "C++: this->price_data[this->price_data_size-1]: " << this->price_data[this->price_data_size-1] << std::endl;
  }

  void Stock_c::change_historical_price_data_c() {
    std::cout << "C++: this->historical_price_data: " << historical_price_data << std::endl;

    for(int i = 0; i < 10; i++)
      std::cout << "C++: this->historical_price_data[" << i << "]: " << this->historical_price_data[i] << std::endl;


    std::cout << "C++: multiply this->historical_price_data[this->historical_price_data_size-1] ten-fold" << std::endl;
    this->historical_price_data[this->historical_price_data_size-1] *= 10;

    std::cout << "C++: this->historical_price_data[this->historical_price_data_size-1]: " << this->historical_price_data[this->historical_price_data_size-1] << std::endl;
  }

  char* Stock_c::get_industry_c() {
    std::cout << "C++: get_industry_c, return a char*" << std::endl;

    return "gold mining";
  }

  std::vector<double> Stock_c::get_historical_volume_c() {
    std::cout << "C++: get_historical_volume_c, return a vector of doubles" << std::endl;
    
    std::vector<double> historical_volume (2);
    historical_volume[0] = 22729.528;
    historical_volume[1] = 38261.599;

    return historical_volume;
  }
}

int main() {

  char* ticker = "ABX";

  int price_data_size = 4;
  int historical_price_data_size = 2;

  double price_data[price_data_size];
  double historical_price_data[historical_price_data_size];

  std::cout << "C++: create BarrickGold" << std::endl;
  stock_namespace::Stock_c BarrickGold(ticker, price_data, price_data_size, historical_price_data, historical_price_data_size);

  std::cout << "C++: get_ticker_c() returns: " << BarrickGold.get_ticker_c() << std::endl;

  return 0;
}
