
undefined4 FUN_033013f8(long param_1)

{
  undefined4 uVar1;
  
  (**(code **)(**(long **)PTR_DAT_04bc92f0 + 0x20))();
  uVar1 = FUN_032c5240();
  switch(uVar1) {
  case 1:
    uVar1 = 2;
    break;
  case 2:
    uVar1 = 1;
    break;
  case 3:
    uVar1 = 4;
    break;
  case 4:
    uVar1 = 3;
    break;
  case 5:
    uVar1 = 7;
    break;
  case 6:
  case 8:
  case 0xb:
    break;
  case 7:
    uVar1 = 5;
    break;
  case 9:
    uVar1 = 10;
    break;
  case 10:
    uVar1 = 0xc;
    if (*(char *)(param_1 + 0x16410) != '\0') {
      uVar1 = 0xd;
    }
    break;
  case 0xc:
    uVar1 = 0x12;
    break;
  case 0xd:
    uVar1 = 0x14;
    break;
  case 0xe:
    uVar1 = 0x13;
    break;
  default:
    uVar1 = 0xe;
  }
  return uVar1;
}

