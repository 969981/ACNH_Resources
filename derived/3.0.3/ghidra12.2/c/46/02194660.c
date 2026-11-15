
void FUN_02194660(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar1 = 0;
    do {
      puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x18) + lVar1 * 8);
      lVar1 = lVar1 + 1;
      puVar2[0xf] = &PTR_FUN_0498d548;
      *puVar2 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 **)(param_1 + 0x20) = puVar2;
    } while (lVar1 < *(int *)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (0 < *(int *)(param_1 + 0x1b30)) {
    lVar1 = 0;
    do {
      puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x1b38) + lVar1 * 8);
      lVar1 = lVar1 + 1;
      puVar2[0xf] = &PTR_FUN_0498d548;
      *puVar2 = *(undefined8 *)(param_1 + 0x1b40);
      *(undefined8 **)(param_1 + 0x1b40) = puVar2;
    } while (lVar1 < *(int *)(param_1 + 0x1b30));
  }
  *(undefined4 *)(param_1 + 0x1b30) = 0;
  *(undefined8 *)(param_1 + 0x3650) = 0;
  *(undefined8 *)(param_1 + 0x3658) = 0;
  *(undefined8 *)(param_1 + 0x3660) = 0;
  return;
}

