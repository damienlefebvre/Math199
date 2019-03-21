import stock_pyx
import numpy as np

print('Python: create string ticker')
ticker = b'ABX'
print('Python: ticker is', ticker)
print('Python: the address of ticker is', hex(id(ticker)))

print('Python: create numpy array price_data')
price_data = np.array([13.64, 13.69, 13.05, 1.310])
print('Python: price_data is', price_data)
print('Python: the address of price_data is', hex(id(price_data)))

print('Python: create numpy array historical_price_data')
historical_price_data = np.array([[13.00, 13.59, 12.69, 13.54], [13.54, 13.62, 13.06, 1.312]], dtype='double')
print('Python: historical_price_data is', historical_price_data)
print('Python: the address of historical_price_data is', hex(id(historical_price_data)))

print('Python: create Stock_py BarrickGold with ticker, price_data, and historical_price_data')
BarrickGold = stock_pyx.Stock_py(ticker, price_data, historical_price_data)

print('Python: call get_ticker_py')
get_ticker_py_value = BarrickGold.get_ticker_py()
print('Python: get_ticker_py returns:', get_ticker_py_value)

print('Python: call change_ticker_py')
BarrickGold.change_ticker_py()
print('Python: ticker is', ticker)
print('Python: the address of ticker is', hex(id(ticker)))

print('Python: call change_price_data_py')
BarrickGold.change_price_data_py()
print('Python: price_data is', price_data)
print('Python: the address of price_data is', hex(id(price_data)))

print('Python: call change_historical_price_data_py')
BarrickGold.change_historical_price_data_py()
print('Python: historical_price_data is', historical_price_data)
print('Python: the address of historical_price_data is', hex(id(historical_price_data)))

print('Python: call get_industry_py')
get_industry_py_value = BarrickGold.get_industry_py()
print('Python: get_industry_py returns:', get_industry_py_value)

print('Python: call get_historical_volume_py')
get_historical_volume_py_value = BarrickGold.get_historical_volume_py()
print('Python: get_historical_volume_py returns:', get_historical_volume_py_value)
