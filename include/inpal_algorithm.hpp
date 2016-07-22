//
//  inpal_algorithm.hpp
//  Inverse Palindrome Library
//
//  Created by Bryan Triana on 7/22/16.
//  Copyright © 2016 Inverse Palindrome. All rights reserved.
//

#ifndef inpal_algorithm_hpp
#define inpal_algorithm_hpp
#include <cstdlib>


namespace inpal
{
   namespace algorithm
    {
        std::size_t modulo(std::size_t a, std::size_t b, std::size_t c);
        std::size_t mulmod(std::size_t a, std::size_t b, std::size_t c);
        bool pal_test(std::size_t num);
    }
}


#endif /* inpal_algorithm_hpp */