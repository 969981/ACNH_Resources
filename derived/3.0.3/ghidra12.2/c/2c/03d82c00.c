
void FUN_03d82c00(long param_1,undefined4 param_2)

{
  byte bVar1;
  
  switch(param_2) {
  case 0:
    bVar1 = *(byte *)(param_1 + 0x2c0) & 0xf8 | 2;
    break;
  case 1:
    bVar1 = *(byte *)(param_1 + 0x2c0) & 0xf8;
    break;
  case 2:
  case 3:
    bVar1 = *(byte *)(param_1 + 0x2c0) & 0xf8 | 1;
    break;
  case 4:
    bVar1 = *(byte *)(param_1 + 0x2c0) & 0xf8 | 5;
    break;
  default:
    goto switchD_03d82c28_default;
  }
  *(byte *)(param_1 + 0x2c0) = bVar1;
switchD_03d82c28_default:
  *(undefined4 *)(param_1 + 0x2b0) = param_2;
  return;
}

