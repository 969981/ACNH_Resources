
ulong FUN_0010d990(undefined8 param_1,long param_2,long param_3,uint param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  short sVar2;
  ulong uVar3;
  long local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_1c;
  undefined2 local_18;
  
  uVar3 = 0x8e24;
  if ((int)param_4 < 0x20002) {
    if ((int)param_4 < 0) {
      if ((param_4 == 0x80020000) || (param_4 == 0x80030000)) {
LAB_0010da74:
        uVar3 = FUN_00114f80(param_1,param_2,param_3,param_7);
        return uVar3;
      }
    }
    else {
      if (param_4 < 6) {
        uVar3 = FUN_0010dde0(param_2,param_3);
        return uVar3;
      }
      if (param_4 == 6) {
LAB_0010dab0:
        uVar3 = FUN_00132970(param_1,param_2,param_3,param_7);
        return uVar3;
      }
      if (param_4 == 0x10000) {
        uVar3 = FUN_001145c0(param_2,param_3);
        return uVar3;
      }
    }
  }
  else if ((int)param_4 < 0xe0000) {
    if (param_4 - 0x20002 < 2) goto LAB_0010da74;
    if (param_4 - 0x50000 < 2) goto LAB_0010dab0;
    if (param_4 == 0x40000) {
      uVar3 = FUN_0013d430(param_1,param_2,param_3,param_5);
      return uVar3;
    }
  }
  else if (param_4 - 0xe0000 < 2) {
    local_1c = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_50 = *(undefined8 *)(param_2 + 0x28);
    local_18 = (undefined2)param_5;
    local_60 = param_2;
    lStack_58 = param_3;
    sVar2 = (**(code **)(param_3 + 8))(param_1,param_6,&local_60);
    uVar1 = (uint)sVar2;
    uVar3 = (ulong)uVar1;
    if ((int)uVar1 < 0) {
      return (ulong)(uVar1 << 8 | 0xffff8090);
    }
  }
  else if ((param_4 + 0xbffb0000 < 2) || (param_4 == 0x40000006)) {
    uVar3 = FUN_0011f890(param_1,param_2,param_3,param_7);
    return uVar3;
  }
  return uVar3;
}

