#ifndef __DSL_MODELS_SUBSCRIPTION_H__
#define __DSL_MODELS_SUBSCRIPTION_H__

#include <string>

namespace dsl
{
    namespace models
    {
        template <class CallbackType>
        struct Subscription
        {
            CallbackType callback;
            std::string identifier;
            bool run_as_thread = false;
        };
    };
};

#endif /* __DSL_MODELS_SUBSCRIPTION_H__ */