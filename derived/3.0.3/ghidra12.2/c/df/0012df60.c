
undefined8 FUN_0012df60(long param_1,long param_2,long param_3,short param_4)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xae42;
  }
  else {
    if (param_2 == 0) {
      return 0x8542;
    }
    uVar1 = 0x9442;
    if ((param_3 != 0) && (param_4 != 0)) {
      switch(*(ushort *)(param_2 + 0x80) & 0xf) {
      case 0:
        uVar1 = FUN_0010b7a0();
        return uVar1;
      case 1:
      case 4:
        uVar1 = FUN_00105e20();
        return uVar1;
      case 2:
        uVar1 = FUN_001310d0();
        return uVar1;
      case 3:
        uVar1 = FUN_00105af0();
        return uVar1;
      default:
        return 0x9b42;
      }
    }
  }
  return uVar1;
}

