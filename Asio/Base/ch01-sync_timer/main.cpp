#include <iostream>
#include <boost/asio.hpp>

int main() {
    boost::asio::io_context io_context;
    boost::asio::steady_timer t(io_context, boost::asio::chrono::seconds(5));
    t.wait();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}