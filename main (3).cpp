#include <iostream>
#include <vector>
#include <string>

std::vector<int> linear_search_product(const std::vector<std::string>& products, const std::string& target_product) {
    std::vector<int> indices;

    for (int i = 0; i < products.size(); ++i) {
        if (products[i] == target_product) {
            indices.push_back(i);
        }
    }

    return indices;
}

int main() {
    std::vector<std::string> product_list = {"Apple", "Banana", "Orange", "Apple", "Mango", "Apple"};
    std::string target = "Apple";

    std::vector<int> result = linear_search_product(product_list, target);

    if (result.empty()) {
        std::cout << "Product not found." << std::endl;
    } else {
        std::cout << "Product found at indices: ";
        for (int i = 0; i < result.size(); ++i) {
            std::cout << result[i] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}


