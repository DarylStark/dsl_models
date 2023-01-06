#ifndef __DSL_MODELS_EVENT_H__
#define __DSL_MODELS_EVENT_H__

namespace dsl
{
    namespace models
    {
        template <class ObjectType, class SubscriptionType>
        struct Event
        {
            const ObjectType &object;
            const SubscriptionType subscription;
        };
    };
};

#endif /* __DSL_MODELS_EVENT_H__ */