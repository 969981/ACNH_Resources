
ulong FUN_00109d40(undefined8 param_1,undefined8 param_2,long param_3,undefined2 param_4,
                  undefined8 param_5)

{
  short sVar1;
  ulong uVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_1c;
  undefined2 local_18;
  
  if ((*(byte *)(param_3 + 0x5f) & 0xf) == 3) {
    return 0;
  }
  pcVar4 = *(code **)(param_3 + 8);
  if (pcVar4 == (code *)0x0) {
    return 0x8e25;
  }
  if (*(byte *)(param_3 + 0x60) - 1 < 2) {
LAB_00109d84:
    local_60 = 0;
    local_1c = 0;
    local_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    lStack_58 = param_3;
    local_50 = param_2;
    uStack_48 = param_5;
    local_18 = param_4;
    sVar1 = (*pcVar4)(param_1,3,&local_60);
    uVar3 = (uint)sVar1;
    if ((int)uVar3 < 0) {
      return (ulong)(uVar3 << 8 | 0xffff8090);
    }
    return (ulong)uVar3;
  }
  if (*(byte *)(param_3 + 0x60) == 3) {
    uVar3 = *(uint *)(pcVar4 + 0x70);
  }
  else {
    uVar3 = (*(uint *)(pcVar4 + 8) & 0xff00ff00) >> 8 | (*(uint *)(pcVar4 + 8) & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  }
  if ((int)uVar3 < 0x20002) {
    if ((int)uVar3 < 0) {
      if ((uVar3 != 0x80020000) && (uVar3 != 0x80030000)) {
        return 0x8e25;
      }
LAB_00109ec8:
      uVar2 = FUN_0011bed0(param_1,param_3,param_5);
      return uVar2;
    }
    if (uVar3 < 6) {
      uVar2 = FUN_00111f40(param_3,param_5);
      return uVar2;
    }
    if (uVar3 != 6) {
      if (uVar3 == 0x10000) {
        uVar2 = FUN_00114970(param_3,param_5);
        return uVar2;
      }
      return 0x8e25;
    }
  }
  else {
    if (0xdffff < (int)uVar3) {
      if (1 < uVar3 - 0xe0000) {
        if ((uVar3 + 0xbffb0000 < 2) || (uVar3 == 0x40000006)) {
          uVar2 = FUN_001271f0(param_3,param_5);
          return uVar2;
        }
        return 0x8e25;
      }
      goto LAB_00109d84;
    }
    if (uVar3 - 0x20002 < 2) goto LAB_00109ec8;
    if (1 < uVar3 - 0x50000) {
      if (uVar3 == 0x40000) {
        uVar2 = FUN_0013dff0(param_3,param_5);
        return uVar2;
      }
      return 0x8e25;
    }
  }
  uVar2 = FUN_00138c70(param_3,param_5);
  return uVar2;
}

