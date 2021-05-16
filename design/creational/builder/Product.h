//
// Created by Lakshmi S Patel on 16/05/21.
//

#ifndef DESIGNPATTERNINCPP_PRODUCT_H
#define DESIGNPATTERNINCPP_PRODUCT_H


class Product{
private:
    string name;
    string pid;
    string company;
    double price;

    Product(string name, string pid, string company, double price){
        this->name = name;
        this->pid = pid;
        this->company = company;
        this->price = price;
    }

public:

    class ProductBuilder{
    private:
            string name;
            string pid;
            string company;
            double price;

    public:
            ProductBuilder setName(string name){
                name = name;
                return *this;
            }

            Product build(){
                return *new Product(name, pid, company, price);
            }

    };

    static ProductBuilder* builder(){
        ProductBuilder *productBuilder = new ProductBuilder();
        return productBuilder;
    }
};

#endif //DESIGNPATTERNINCPP_PRODUCT_H
