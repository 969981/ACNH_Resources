
undefined8 FUN_02b148ac(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_01318c80(param_1 + 0x730,*(undefined4 *)(PTR_DAT_04bc4af0 + 0x20),0);
  if ((uVar2 & 1) != 0) {
    uVar1 = FUN_013188b0(param_1 + 0x730);
    if (*(uint *)(param_1 + 0x10) < 4) {
      uVar1 = uVar1 & 3;
      switch(*(uint *)(param_1 + 0x10)) {
      case 0:
        if (uVar1 == 3) {
          return 6;
        }
        break;
      case 1:
        if (uVar1 == 0) {
          return 6;
        }
        break;
      case 2:
        if (uVar1 == 1) {
          return 6;
        }
        break;
      case 3:
        if (uVar1 == 2) {
          return 6;
        }
      }
    }
  }
  return 0;
}

