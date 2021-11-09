#ifndef TEMPLATECONCEPTS_H
#define TEMPLATECONCEPTS_H

template<class BaseClass, class DerivedClass>
concept Derived = std::is_base_of_v<BaseClass, DerivedClass>;

#endif //TEMPLATECONCEPTS_H

