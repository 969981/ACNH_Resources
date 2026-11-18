
void FUN_032aea4c(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 0x1c8) >> 2 & 1) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    param_2[5] = 0;
    param_2[6] = 0;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    param_2[7] = 0;
    param_2[8] = 0;
  }
  uVar2 = *(uint *)(param_1 + 0x38);
  uVar1 = uVar2;
  switch(*(undefined4 *)(param_1 + 0x3c)) {
  case 1:
  case 5:
    uVar1 = uVar2 | 0xf00000;
    break;
  case 2:
    uVar1 = uVar2 << 4;
    goto LAB_032aeac4;
  case 4:
    uVar1 = uVar2 >> 4;
LAB_032aeac4:
    uVar1 = uVar1 & 0xf00000 | uVar2;
  }
  switch(*(undefined4 *)(param_1 + 0x40)) {
  case 1:
  case 5:
    uVar1 = uVar1 | 0xf000000;
    goto switchD_032aeaf0_caseD_4;
  case 2:
    uVar2 = uVar2 << 8;
    break;
  case 3:
    uVar2 = uVar2 << 4;
    break;
  default:
    goto switchD_032aeaf0_caseD_4;
  }
  uVar1 = uVar1 | uVar2 & 0xf000000;
switchD_032aeaf0_caseD_4:
  *param_2 = *param_2 & (uVar1 ^ 0xffffffff);
  param_2[1] = param_2[1] & (uVar1 ^ 0xffffffff);
  param_2[2] = param_2[2] & (uVar1 ^ 0xffffffff);
  param_2[3] = param_2[3] & (uVar1 ^ 0xffffffff);
  param_2[4] = param_2[4] & (uVar1 ^ 0xffffffff);
  return;
}

