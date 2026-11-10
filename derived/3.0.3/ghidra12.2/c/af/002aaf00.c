
undefined8 FUN_002aaf00(undefined2 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  switch(param_1) {
  case 0x14:
    goto switchD_002aaf28_caseD_14;
  default:
    uVar1 = 0;
switchD_002aaf28_caseD_14:
    return uVar1;
  case 0x18:
    return 4;
  case 0x1c:
    return 8;
  case 0x24:
    return 0x80000;
  case 0x34:
    return 0x10;
  case 0x44:
    return 0x20000;
  case 0x58:
    return 0x20;
  case 0x65:
    return 0x40;
  case 0x68:
    return 0x80;
  case 0x73:
    return 0x4000;
  case 0x74:
    return 0x4000000;
  case 0x75:
    return 0x800000;
  case 0x76:
    return 0x1000000;
  case 0x77:
    return 0x2000000;
  case 0x7b:
    return 0x8000;
  case 0x7c:
    return 0x100;
  case 0x80:
    return 0x10000000;
  case 0x81:
    return 0x20000000;
  case 0x94:
    return 0x10000;
  case 0xa4:
    return 0x400;
  case 0xb0:
    return 0x40000000;
  case 0xb4:
    return 0x80000000;
  }
}

