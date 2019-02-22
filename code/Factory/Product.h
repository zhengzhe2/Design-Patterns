// Product.h

#ifndef _PRODUCT_H_
#define _PRODUCT_H_

class Product
{
public:
    virtual ~Product() = 0;

protected:
    Product();

private:    

}; 

class ConcreteProdect: public Product
{
public:
    ~ConcreteProdect();
    ConcreteProdect();

protected:

private:    

};

#endif // _PRODUCT_H_