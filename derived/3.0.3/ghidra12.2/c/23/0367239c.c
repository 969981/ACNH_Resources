
undefined4 FUN_0367239c(char *param_1,ulong param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = 2;
  if ((0xd < param_2) && (param_2 % 0xffdc == 0 || (param_2 & 0xffff) == 0)) {
    if (*param_1 != '\x01') {
      return 2;
    }
    if (param_2 % 0xffdc == 0) {
      if (param_2 < 0x4b) {
        return 2;
      }
      if (param_1[0x38] != '\x02') {
        return 2;
      }
      if (param_1[0x3a] != '\x03') {
        return 2;
      }
      uVar1 = 0;
      lVar2 = 0x4a;
    }
    else {
      if (param_2 < 0x51) {
        return 2;
      }
      if ((param_2 & 0xffff) != 0) {
        return 2;
      }
      if (param_1[0x3a] != '\x02') {
        return 2;
      }
      if (param_1[0x3e] != '\x03') {
        return 2;
      }
      uVar1 = 1;
      lVar2 = 0x50;
    }
    if (param_1[lVar2] != '\x04') {
      uVar1 = 2;
    }
  }
  return uVar1;
}

