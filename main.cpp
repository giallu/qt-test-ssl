#include <QSslSocket>
#include <iostream>

int main(){

    bool isSSLSupported = QSslSocket::supportsSsl();

    std::cout << "SSL is ";
    if (isSSLSupported)
        std::cout << "supported\n";
    else
        std::cout << "not supported\n";

}
