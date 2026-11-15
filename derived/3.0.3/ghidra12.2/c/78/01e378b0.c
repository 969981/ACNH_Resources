
void FUN_01e378b0(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 uint param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  
  if ((param_5 & 1) == 0) {
    if (*(int *)(param_1 + 0x48) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x38) == 0) {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x44) + -1;
    iVar1 = 0;
    if (*(int *)(param_1 + 0x40) <= iVar2) {
      iVar1 = *(int *)(param_1 + 0x40);
    }
    puVar3 = (undefined4 *)(*(long *)(param_1 + 0x38) + (long)(iVar2 - iVar1) * 0x14);
    *puVar3 = *param_2;
    puVar3[1] = *param_3;
    puVar3[3] = *param_4;
    puVar4 = (undefined1 *)((long)puVar3 + 0x11);
  }
  else {
    *(undefined4 *)(param_1 + 0x118) = *param_2;
    *(undefined4 *)(param_1 + 0x11c) = *param_3;
    *(undefined4 *)(param_1 + 0x124) = *param_4;
    puVar4 = (undefined1 *)(param_1 + 0x129);
  }
  *puVar4 = 1;
  return;
}

