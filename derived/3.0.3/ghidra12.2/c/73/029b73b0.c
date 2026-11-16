
bool FUN_029b73b0(undefined8 param_1,uint *param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  
  if (((param_3 >> 8 & 0xff) != 0x11) && (0x5d < (param_3 - 0x3131 & 0xffff))) {
    if (0xae8 < (param_3 + 0x5400 >> 2 & 0x3fff)) {
      uVar4 = (param_3 & 0xffff) - 0x4e00;
      uVar2 = 0;
      if (uVar4 >> 9 < 0x29) {
        uVar2 = uVar4 + ((uVar4 >> 1 & 0x7fff) / 0x29) * -0x52 + 1 & 0xffff;
      }
      *param_2 = uVar2;
      return uVar4 >> 9 < 0x29;
    }
    uVar4 = (param_3 & 0xffff) - 0xac00;
    uVar2 = (uVar4 % 0x24c) / 0x1c;
    uVar5 = (ulong)uVar2;
    lVar1 = DAT_055e9038 + (long)(int)((uint)DAT_055e9030 * (uVar4 / 0x24c)) * 4;
    if ((DAT_055e9030._4_4_ < uVar4 / 0x24c || DAT_055e9030._4_4_ == uVar4 / 0x24c) ||
        (uint)DAT_055e9030 == 0) {
      lVar1 = 0;
    }
    bVar3 = lVar1 == 0;
    if ((int)(uint)DAT_055e9030 < 1 || bVar3) {
      lVar1 = 0;
    }
    if (((int)(uint)DAT_055e9030 < 1 || bVar3) || (uint)DAT_055e9030 <= uVar2) {
      uVar5 = 0;
    }
    *param_2 = *(uint *)(lVar1 + uVar5 * 4);
    return true;
  }
  uVar4 = param_3 & 0xffff;
  if ((param_3 - 0x1100 & 0xffff) < 0x13) {
    uVar4 = uVar4 - 0x1100;
    if (0x12 < uVar4) {
      uVar4 = 0;
    }
    *param_2 = (&DAT_0417c924)[uVar4];
    return true;
  }
  if ((param_3 - 0x1161 & 0xffff) < 0x15) {
    uVar4 = uVar4 - 0x1161;
    puVar6 = &DAT_0417c970;
    bVar3 = 0x14 < uVar4;
  }
  else if ((param_3 - 0x11a8 & 0xffff) < 0x1b) {
    uVar4 = uVar4 - 0x11a8;
    puVar6 = &DAT_0417c9c4;
    bVar3 = 0x1a < uVar4;
  }
  else {
    if (0x32 < (param_3 - 0x3131 & 0xffff)) {
      *param_2 = 0;
      return false;
    }
    uVar4 = uVar4 - 0x3131;
    puVar6 = &DAT_0417ca30;
    bVar3 = 0x32 < uVar4;
  }
  if (bVar3) {
    uVar4 = 0;
  }
  *param_2 = puVar6[(int)uVar4];
  return true;
}

