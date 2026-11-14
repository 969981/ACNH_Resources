
undefined8 FUN_01d69340(long param_1,short param_2,uint param_3)

{
  uint uVar1;
  short sVar2;
  
  if (param_2 != -1) {
    if (*(byte *)(*DAT_0537d558 + 0x476) < 2) {
      if (DAT_04c487d4 == param_2) {
        return 1;
      }
    }
    else if ((param_3 & 1) == 0) {
      if (*(short *)(param_1 + 0x108) == param_2) {
        return 1;
      }
      if (*(short *)(param_1 + 0x114) == param_2) {
        return 1;
      }
      if (*(short *)(param_1 + 0x120) == param_2) {
        return 1;
      }
      if (*(short *)(param_1 + 300) == param_2) {
        return 1;
      }
      if (*(short *)(param_1 + 0x138) == param_2) {
        return 1;
      }
      if (*(short *)(param_1 + 0x144) == param_2) {
        return 1;
      }
      if (*(short *)(param_1 + 0x150) == param_2) {
        return 1;
      }
      if (*(short *)(param_1 + 0x15c) == param_2) {
        return 1;
      }
    }
    else {
      uVar1 = 0;
      do {
        if ((*(byte *)(param_1 + 0x1e2) == 0xff) ||
           (sVar2 = *(short *)(param_1 + 0x1e0), (uint)*(byte *)(param_1 + 0x1e2) != (uVar1 & 0xff))
           ) {
          if ((uVar1 & 0xff) < 8) {
            sVar2 = *(short *)(param_1 + 0x108 + (ulong)(uVar1 & 0xff) * 0xc);
          }
          else {
            sVar2 = -1;
          }
        }
        if (sVar2 == param_2) {
          return 1;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 != 0xc);
    }
  }
  return 0;
}

