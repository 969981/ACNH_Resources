
ulong FUN_03c358c0(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  
  if (param_3 == 0) {
    uVar3 = 0xffffffffffffffba;
  }
  else if (param_5 == 0) {
    uVar3 = 0xffffffffffffffec;
  }
  else {
    if (param_5 < param_3) {
      uVar3 = 0;
      if (param_3 != 0) {
        uVar3 = (param_5 << 4) / param_3;
      }
      uVar3 = uVar3 & 0xffffffff;
    }
    else {
      uVar3 = 0xf;
    }
    lVar2 = uVar3 * 0x18;
    iVar4 = (int)(param_3 >> 8);
    uVar1 = *(int *)(&DAT_041e9030 + lVar2) + *(int *)(&DAT_041e9034 + lVar2) * iVar4;
    if (uVar1 + (uVar1 >> 3) <
        (uint)(*(int *)(&DAT_041e9028 + lVar2) + *(int *)(&DAT_041e902c + lVar2) * iVar4)) {
      uVar3 = FUN_03c33d30();
      if (0xffffffffffffff88 < uVar3) {
        return uVar3;
      }
      if (uVar3 <= param_5 && param_5 - uVar3 != 0) {
        uVar3 = FUN_03c345d0(param_2,param_3,param_4 + uVar3,param_5 - uVar3,param_1);
        return uVar3;
      }
    }
    else {
      uVar3 = FUN_03c32c90(param_1,param_4,param_5,param_6,param_7);
      if (0xffffffffffffff88 < uVar3) {
        return uVar3;
      }
      if (uVar3 <= param_5 && param_5 - uVar3 != 0) {
        uVar3 = FUN_03c33010(param_2,param_3,param_4 + uVar3,param_5 - uVar3,param_1);
        return uVar3;
      }
    }
    uVar3 = 0xffffffffffffffb8;
  }
  return uVar3;
}

