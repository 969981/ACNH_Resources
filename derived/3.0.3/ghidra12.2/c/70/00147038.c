
undefined8 FUN_00147038(ulong param_1,undefined8 param_2)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((long)param_1 < 100000) {
    pcVar1 = "%5ld";
  }
  else if (param_1 >> 0xe < 0x271) {
    param_1 = param_1 >> 10;
    pcVar1 = "%4ldk";
  }
  else {
    if (param_1 >> 0x16 < 0x19) {
      uVar2 = param_1 >> 0x14;
      pcVar1 = "%2ld.%0ldM";
      uVar3 = (ulong)((uint)param_1 & 0xfffff) / 0x19999;
LAB_00147108:
      FUN_001460b8(param_2,6,pcVar1,uVar2,uVar3);
      return param_2;
    }
    if (param_1 >> 0x18 < 0x271) {
      param_1 = param_1 >> 0x14;
      pcVar1 = "%4ldM";
    }
    else {
      if (param_1 >> 0x20 < 0x19) {
        uVar2 = param_1 >> 0x1e;
        pcVar1 = "%2ld.%0ldG";
        uVar3 = (ulong)((uint)param_1 & 0x3ffffffe) / 0x6666666;
        goto LAB_00147108;
      }
      if (param_1 >> 0x22 < 0x271) {
        param_1 = param_1 >> 0x1e;
        pcVar1 = "%4ldG";
      }
      else if (param_1 >> 0x2c < 0x271) {
        param_1 = param_1 >> 0x28;
        pcVar1 = "%4ldT";
      }
      else {
        param_1 = param_1 >> 0x32;
        pcVar1 = "%4ldP";
      }
    }
  }
  FUN_001460b8(param_2,6,pcVar1,param_1);
  return param_2;
}

