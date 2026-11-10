
undefined8 FUN_0010cdb0(long param_1,char param_2,long param_3,long param_4,int param_5)

{
  undefined8 uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    uVar1 = 0xae3d;
  }
  else {
    if (param_3 == 0) {
      return 0x803d;
    }
    if (param_4 == 0) {
      return 0xb93d;
    }
    if (param_5 == 0) {
      return 0xba3d;
    }
    if (param_2 == '\0') {
      uVar2 = (*(uint *)(param_3 + 8) & 0xff00ff00) >> 8 | (*(uint *)(param_3 + 8) & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    }
    else {
      if (param_2 != '\x03') {
        return 0xa63d;
      }
      uVar2 = *(uint *)(param_3 + 0x70);
    }
    uVar1 = 0;
    if ((int)uVar2 < 0x40000006) {
      if ((uVar2 - 0x50000 < 2) || (uVar2 == 6)) {
        uVar1 = FUN_0013b960(param_1,param_3,param_4,param_5);
        return uVar1;
      }
      if (uVar2 == 0x40000) {
        uVar1 = FUN_0013e570(param_1,param_3,param_4,param_5);
        return uVar1;
      }
    }
    else if ((uVar2 + 0xbffb0000 < 2) || (uVar2 == 0x40000006)) {
      uVar1 = FUN_00129c60(param_1,param_3,param_4,param_5);
      return uVar1;
    }
  }
  return uVar1;
}

