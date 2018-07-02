//
// Created by Noam Dori on 02/07/18.
//

#include <ddynamic_reconfigure/dd_param.h>

namespace ddr {
    ostream &operator<<(ostream &os, const DDParam &param) {
        os << param.getName() << ":" << param.getValue().toString();
        return os;
    }
}