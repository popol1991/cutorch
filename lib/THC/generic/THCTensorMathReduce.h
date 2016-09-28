#ifndef THC_GENERIC_FILE
#define THC_GENERIC_FILE "generic/THCTensorMathReduce.h"
#else

#if defined(THC_REAL_IS_FLOAT) || defined(THC_REAL_IS_DOUBLE) || defined(THC_REAL_IS_HALF)

THC_API void THCTensor_(renorm)(THCState *state, THCTensor* self, THCTensor* src, real value, long dimension, real max_norm);

#endif

THC_API void THCTensor_(sum)(THCState *state, THCTensor *self, THCTensor *src, long dim);
THC_API void THCTensor_(prod)(THCState *state, THCTensor *self, THCTensor *src, long dim);
THC_API void THCTensor_(mean)(THCState *state, THCTensor *self, THCTensor *src, long dim);

THC_API accreal THCTensor_(sumall)(THCState *state, THCTensor *self);
THC_API accreal THCTensor_(prodall)(THCState *state, THCTensor *self);
THC_API accreal THCTensor_(meanall)(THCState *state, THCTensor *self);

THC_API void THCTensor_(min)(THCState *state,
                             THCTensor *values,
                             THCudaLongTensor *indices,
                             THCTensor *src, long dim);
THC_API void THCTensor_(max)(THCState *state,
                             THCTensor *values,
                             THCudaLongTensor *indices,
                             THCTensor *src, long dim);

THC_API real THCTensor_(minall)(THCState *state, THCTensor *self);
THC_API real THCTensor_(maxall)(THCState *state, THCTensor *self);

#endif
