
float FUN_0065b0d0(uint param_1)

{
  long lVar1;
  float fVar2;
  
  if (*(char *)(&DAT_04c7a354 + (ulong)param_1 * 7) == '\0') {
    fVar2 = (float)NEON_ucvtf((uint)(ushort)(&DAT_04c7a330)[(ulong)param_1 * 0x1c]);
    return fVar2;
  }
  lVar1 = (ulong)param_1 * 0x38;
  fVar2 = (float)NEON_ucvtf((uint)(ushort)(&DAT_04c7a330)[(ulong)param_1 * 0x1c]);
  return fVar2 / (float)((uint)*(byte *)((long)&DAT_04c7a332 + lVar1 + 1) *
                         (uint)*(byte *)(&DAT_04c7a332 + (ulong)param_1 * 0xe) *
                        (uint)*(byte *)((long)&DAT_04c7a332 + lVar1 + 2));
}

