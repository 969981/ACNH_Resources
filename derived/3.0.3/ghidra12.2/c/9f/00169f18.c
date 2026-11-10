
long FUN_00169f18(uint *param_1,ulong *param_2,undefined4 *param_3,uint param_4,ulong param_5,
                 byte *param_6,byte *param_7,uint param_8)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  byte *pbVar4;
  
  *param_2 = 0;
  *param_3 = 0;
  pbVar4 = param_6;
  if (param_4 == 0) {
    param_4 = (-1 << (ulong)(param_8 & 0x1f) ^ 0xffffffffU) & 0xff;
    if ((param_4 & *param_6) != param_4) {
      *param_1 = param_4 & *param_6;
      *param_3 = 1;
      return 1;
    }
    pbVar4 = param_6 + 1;
    if (pbVar4 == param_7) {
      *param_1 = param_4;
      return 1;
    }
  }
  uVar2 = param_5;
  if (pbVar4 != param_7) {
    uVar2 = (long)pbVar4 * -7 + param_5 + (long)param_7 * 7;
    lVar3 = (long)pbVar4 - (long)param_6;
    do {
      lVar3 = lVar3 + 1;
      if (0x1f < param_5) {
        return -1;
      }
      uVar1 = *pbVar4 & 0x7f;
      if (0xffffffffU >> (ulong)((uint)param_5 & 0x1f) < uVar1) {
        return -1;
      }
      uVar1 = uVar1 << (ulong)((uint)param_5 & 0x1f);
      if (CARRY4(uVar1,param_4)) {
        return -1;
      }
      param_4 = uVar1 + param_4;
      if (-1 < (char)*pbVar4) {
        *param_2 = param_5;
        *param_1 = param_4;
        *param_3 = 1;
        return lVar3;
      }
      pbVar4 = pbVar4 + 1;
      param_5 = param_5 + 7;
    } while (pbVar4 != param_7);
  }
  *param_2 = uVar2;
  *param_1 = param_4;
  return (long)param_7 - (long)param_6;
}

