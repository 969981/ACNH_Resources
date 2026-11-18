
undefined4 FUN_03301290(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(long **)PTR_DAT_04bc92f0 + 0x18))();
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
  default:
    uVar1 = 0xe;
  }
  return uVar1;
}

