
undefined4 FUN_03bfa7b0(long param_1,int param_2)

{
  uint uVar1;
  
  if ((((param_2 != 0) && (param_2 != 1)) && (param_2 != 0xf)) &&
     (*(char *)(param_1 + 0x1a) != '\0' || *(char *)(param_1 + 0x1b) != '\0')) {
    return 0;
  }
  switch(param_2) {
  case 0:
    if (*(int *)(param_1 + 0x38) == 2) {
      return 0;
    }
    break;
  case 1:
    if (*(int *)(param_1 + 0x38) == 4) {
      return 0;
    }
    break;
  case 2:
    if (*(int *)(param_1 + 0x38) != 0) {
      return 0;
    }
    break;
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    if (*(int *)(param_1 + 0x38) == 0xd) {
      return 0;
    }
    break;
  case 8:
    if (0x18 < *(uint *)(param_1 + 0x38)) {
      return 0;
    }
    uVar1 = 1 << (ulong)(*(uint *)(param_1 + 0x38) & 0x1f) & 0x1802000;
    goto joined_r0x03bfa8bc;
  case 9:
  case 10:
  case 0xc:
    if (*(int *)(param_1 + 0x38) != 0xd) {
      return 0;
    }
    break;
  case 0xb:
    if ((*(int *)(param_1 + 0x38) != 0xd) && (*(int *)(param_1 + 0x38) != 0x18)) {
      return 0;
    }
    break;
  case 0xd:
  case 0xe:
    if ((*(int *)(param_1 + 0x38) != 0xd) && (*(int *)(param_1 + 0x38) != 0x14)) {
      return 0;
    }
    break;
  case 0xf:
    uVar1 = *(uint *)(param_1 + 0x38);
joined_r0x03bfa8bc:
    if (uVar1 == 0) {
      return 0;
    }
    break;
  default:
    return 0;
  }
  *(int *)(param_1 + 0xe4) = param_2;
  return 1;
}

