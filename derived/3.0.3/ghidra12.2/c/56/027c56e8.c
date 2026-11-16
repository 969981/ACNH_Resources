
undefined8 FUN_027c56e8(long param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((*(int *)(param_1 + 8) == iVar1) &&
     ((*(long *)(param_2 + 1) == *(long *)(param_1 + 0xc) &&
      *(long *)(param_2 + 3) == *(long *)(param_1 + 0x14)) && param_2[5] == *(int *)(param_1 + 0x1c)
     )) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x24) == iVar1) &&
     ((*(long *)(param_2 + 1) == *(long *)(param_1 + 0x28) &&
      *(long *)(param_2 + 3) == *(long *)(param_1 + 0x30)) && param_2[5] == *(int *)(param_1 + 0x38)
     )) {
    return 1;
  }
  if ((*(int *)(param_1 + 0x40) == iVar1) &&
     ((*(long *)(param_2 + 1) == *(long *)(param_1 + 0x44) &&
      *(long *)(param_2 + 3) == *(long *)(param_1 + 0x4c)) && param_2[5] == *(int *)(param_1 + 0x54)
     )) {
    return 2;
  }
  if ((*(int *)(param_1 + 0x5c) == iVar1) &&
     ((*(long *)(param_2 + 1) == *(long *)(param_1 + 0x60) &&
      *(long *)(param_2 + 3) == *(long *)(param_1 + 0x68)) && param_2[5] == *(int *)(param_1 + 0x70)
     )) {
    return 3;
  }
  if ((*(int *)(param_1 + 0x78) == iVar1) &&
     ((*(long *)(param_2 + 1) == *(long *)(param_1 + 0x7c) &&
      *(long *)(param_2 + 3) == *(long *)(param_1 + 0x84)) && param_2[5] == *(int *)(param_1 + 0x8c)
     )) {
    return 4;
  }
  if ((*(int *)(param_1 + 0x94) == iVar1) &&
     ((*(long *)(param_2 + 1) == *(long *)(param_1 + 0x98) &&
      *(long *)(param_2 + 3) == *(long *)(param_1 + 0xa0)) && param_2[5] == *(int *)(param_1 + 0xa8)
     )) {
    return 5;
  }
  if ((*(int *)(param_1 + 0xb0) == iVar1) &&
     ((*(long *)(param_2 + 1) == *(long *)(param_1 + 0xb4) &&
      *(long *)(param_2 + 3) == *(long *)(param_1 + 0xbc)) && param_2[5] == *(int *)(param_1 + 0xc4)
     )) {
    return 6;
  }
  if ((*(int *)(param_1 + 0xcc) == iVar1) &&
     ((*(long *)(param_2 + 1) == *(long *)(param_1 + 0xd0) &&
      *(long *)(param_2 + 3) == *(long *)(param_1 + 0xd8)) && param_2[5] == *(int *)(param_1 + 0xe0)
     )) {
    return 7;
  }
  return 0xffffffff;
}

