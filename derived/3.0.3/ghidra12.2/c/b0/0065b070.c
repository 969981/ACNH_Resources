
uint FUN_0065b070(ulong param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  
  if (*(char *)(&DAT_04c7a354 + (param_1 & 0xffffffff) * 7) == '\0') {
    return (uint)(ushort)(&DAT_04c7a330)[(param_1 & 0xffffffff) * 0x1c];
  }
  lVar1 = (param_1 & 0xffffffff) * 0x38;
  iVar2 = (uint)*(byte *)((long)&DAT_04c7a332 + lVar1 + 1) *
          (uint)*(byte *)(&DAT_04c7a332 + (param_1 & 0xffffffff) * 0xe) *
          (uint)*(byte *)((long)&DAT_04c7a332 + lVar1 + 2);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = (int)((uint)(ushort)(&DAT_04c7a330)[(param_1 & 0xffffffff) * 0x1c] + iVar2 + -1) / iVar2
    ;
  }
  return uVar3;
}

