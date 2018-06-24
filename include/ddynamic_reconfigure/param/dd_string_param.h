//
// Created by Noam Dori on 19/06/18.
//

#ifndef DDYNAMIC_RECONFIGURE_DD_STRING_PARAM_H
#define DDYNAMIC_RECONFIGURE_DD_STRING_PARAM_H

#include "ddynamic_reconfigure/dd_param.h"
#include "ddynamic_reconfigure/ddynamic_reconfigure.h"

namespace ddr {
    class DDString : public DDParam {
    public:
        string getName();

        void prepGroup(Group &group);

        void prepConfig(Config &conf);

        void prepConfigDescription(ConfigDescription &conf_desc);

        int getLevel();

        bool sameType(Value val);

        bool sameValue(Value val);

        void setValue(Value val);

        Value getValue();

        DDString(const string &name, unsigned int level, string def) {
            name_ = name;
            level_ = level;
            def_ = def;
            val_ = def;
        }
    protected:
        unsigned int level_;
        string def_,val_;
        string name_;
    };
}


#endif //DDYNAMIC_RECONFIGURE_DD_STRING_PARAM_H
