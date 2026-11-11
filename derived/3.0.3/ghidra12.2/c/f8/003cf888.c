
void FUN_003cf888(long param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 200) < *(int *)(param_1 + 0xc4)) {
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
    iVar1 = *(int *)(param_1 + 0xe8);
    if (iVar1 < *(int *)(param_1 + 0xe4)) goto LAB_003cf8c8;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xe8);
    if (iVar1 < *(int *)(param_1 + 0xe4)) {
LAB_003cf8c8:
      *(int *)(param_1 + 0xe8) = iVar1 + 1;
      iVar1 = *(int *)(param_1 + 0x14c);
      if (*(int *)(param_1 + 0x148) <= iVar1) {
        return;
      }
      goto LAB_003cf8e0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x14c);
  if (*(int *)(param_1 + 0x148) <= iVar1) {
    return;
  }
LAB_003cf8e0:
  *(int *)(param_1 + 0x14c) = iVar1 + 1;
  return;
}

