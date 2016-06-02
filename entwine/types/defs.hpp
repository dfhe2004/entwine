/******************************************************************************
* Copyright (c) 2016, Connor Manning (connor@hobu.co)
*
* Entwine -- Point cloud indexing
*
* Entwine is available under the terms of the LGPL2 license. See COPYING
* for specific license text and more information.
*
******************************************************************************/

#pragma once

#include <entwine/types/bbox.hpp>

namespace pdal { class PointView; }

namespace entwine
{

using Origin = uint64_t;
static constexpr Origin invalidOrigin = std::numeric_limits<Origin>::max();

using TileFunction = std::function<void(pdal::PointView& view, BBox bbox)>;

} // namespace entwine

