// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef QUICHE_QUIC_PLATFORM_API_QUIC_OPTIONAL_H_
#define QUICHE_QUIC_PLATFORM_API_QUIC_OPTIONAL_H_

#include "net/quic/platform/impl/quic_optional_impl.h"

namespace quic {

template <typename T>
using QuicOptional = QuicOptionalImpl<T>;

}  // namespace quic

#endif  // QUICHE_QUIC_PLATFORM_API_QUIC_OPTIONAL_H_
