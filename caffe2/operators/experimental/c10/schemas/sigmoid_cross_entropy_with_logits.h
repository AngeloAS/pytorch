#pragma once

#include <ATen/core/dispatch/OpSchemaRegistration.h>

namespace caffe2 {
namespace ops {

C10_DECLARE_OP_SCHEMA(SigmoidCrossEntropyWithLogits);

} // namespace ops
} // namespace caffe2
