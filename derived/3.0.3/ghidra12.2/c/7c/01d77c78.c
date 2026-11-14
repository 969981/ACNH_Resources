
bool FUN_01d77c78(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (((DAT_0538adc8 == 0) || (*(long *)(DAT_0538adc8 + 0x68) == 0 || *param_1 == -1)) ||
     (param_1[1] < 0)) {
    return false;
  }
  uVar1 = param_1[2];
  if (uVar1 < 5) {
    if (uVar1 < 3) {
      switch(uVar1) {
      case 0:
        iVar2 = *(int *)(DAT_0538adc8 + 0x170);
        break;
      case 1:
        iVar2 = *(int *)(DAT_0538adc8 + 0x180);
        break;
      case 2:
        iVar2 = *(int *)(DAT_0538adc8 + 0x1b0);
        if (*(long *)(DAT_0538adc8 + 0x1b8) == 0) {
          iVar2 = -1;
        }
        break;
      default:
        iVar2 = 0;
      }
      iVar2 = iVar2 + -1;
    }
    else if (uVar1 - 3 < 2) {
      iVar2 = 9;
    }
    else {
      iVar2 = -1;
    }
    if (param_1[1] <= iVar2) {
      switch(uVar1) {
      case 0:
        iVar2 = *(int *)(DAT_0538adc8 + 0x164);
        break;
      case 1:
        iVar2 = *(int *)(DAT_0538adc8 + 0x168);
        break;
      case 2:
        iVar2 = *(int *)(DAT_0538adc8 + 0x1d0);
        break;
      case 3:
        iVar2 = *(int *)(DAT_0538adc8 + 0x240);
        break;
      case 4:
        iVar2 = *(int *)(DAT_0538adc8 + 0x1f8);
        break;
      default:
        goto switchD_01d77d84_default;
      }
      return *param_1 == iVar2;
    }
  }
switchD_01d77d84_default:
  return false;
}

