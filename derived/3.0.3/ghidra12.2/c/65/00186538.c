
void FUN_00186538(ulong *param_1,uint param_2,uint param_3,uint param_4,ulong param_5,ulong param_6,
                 ulong param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = ((ulong)param_2 & 0x3fff) << 0x1a | ((ulong)param_3 & 0xf) << 0x16 |
          ((ulong)param_4 & 0x1f) << 0x11 | (param_5 & 0x1f) << 0xc | (param_6 & 0x3f) << 6 |
          param_7 & 0x3f;
  uVar2 = uVar3 | 0x10000000000;
  uVar1 = uVar2;
  if (0x76b < (param_2 & 0xffff)) {
    uVar1 = uVar3;
  }
  *param_1 = uVar1;
  if ((((param_2 >> 4 & 0xfff) < 0x271) && (0xfffffff3 < (param_3 & 0xff) - 0xd)) &&
     (0xffffffe0 < (param_4 & 0xff) - 0x20)) {
    return;
  }
  *param_1 = uVar2;
  *param_1 = *DAT_04c57e48;
  return;
}

