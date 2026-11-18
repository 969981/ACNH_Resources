
undefined8 FUN_032e4390(undefined4 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = 0;
  uVar2 = 0x201;
  switch(param_2) {
  case 1:
    break;
  default:
    goto switchD_032e43b8_caseD_2;
  case 10:
    uVar2 = 0x901;
    break;
  case 0xe:
    uVar2 = 0x701;
    break;
  case 0x10:
    uVar2 = 0x301;
    break;
  case 0x11:
    uVar2 = 0x501;
    break;
  case 0x1d:
    uVar2 = 0xb01;
    break;
  case 0x21:
    uVar2 = 0xb06;
    break;
  case 0x22:
    uVar2 = 0xe01;
    break;
  case 0x2f:
    uVar2 = 0x1a01;
    break;
  case 0x30:
    uVar2 = 0x1a06;
    break;
  case 0x31:
    uVar2 = 0x1b01;
    break;
  case 0x32:
    uVar2 = 0x1b06;
    break;
  case 0x33:
    uVar2 = 0x1c01;
    break;
  case 0x34:
    uVar2 = 0x1c06;
    break;
  case 0x35:
    uVar2 = 0x1d01;
    break;
  case 0x37:
    uVar2 = 0x1e01;
  }
  uVar1 = 1;
  *param_1 = uVar2;
switchD_032e43b8_caseD_2:
  return uVar1;
}

