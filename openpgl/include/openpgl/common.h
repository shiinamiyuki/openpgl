// Copyright 2021 Intel Corporation
// SPDX-License-Identifier: Apache-2.0

#pragma once


#define PGL_VECTOR_SIZE 4
#define PGL_VMM_MAX_COMPONENTS 32
#define PGL_VMM_MAX_KAPPA 320000.f

typedef struct
{
  float x, y, z;
} pgl_vec3f;

typedef pgl_vec3f pgl_point3f;


typedef struct
{
  float x, y;
} pgl_vec2f;

typedef pgl_vec2f pgl_point2f;

typedef struct
{
  pgl_vec3f lower, upper;
} pgl_box3f;

inline void pglVec3f(pgl_vec3f &vec, const float& x, const float& y, const float& z)
{
  vec.x = x;
  vec.y = y;
  vec.z = z;
}

inline void pglVec2f(pgl_vec2f &vec, const float& x, const float& y)
{
  vec.x = x;
  vec.y = y;
}

inline void pglBox3f(pgl_box3f& box, const float& lx, const float& ly, const float& lz, const float& ux, const float& uy, const float& uz)
{
  pglVec3f(box.lower, lx, ly, lz);
  pglVec3f(box.upper, ux, uy, uz);
}