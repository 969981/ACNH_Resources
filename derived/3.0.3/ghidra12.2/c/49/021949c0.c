
void FUN_021949c0(long param_1,int *param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (0 < *(int *)(param_1 + 0x1b30)) {
    lVar2 = 0;
    puVar1 = PTR_DAT_04bbc1a0 + 0x10;
    do {
      puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x1b38) + lVar2 * 8);
      lVar2 = lVar2 + 1;
      puVar3[0xf] = puVar1;
      *puVar3 = *(undefined8 *)(param_1 + 0x1b40);
      *(undefined8 **)(param_1 + 0x1b40) = puVar3;
    } while (lVar2 < *(int *)(param_1 + 0x1b30));
  }
  *(undefined4 *)(param_1 + 0x1b30) = 0;
  *(undefined4 *)(param_1 + 0x365c) = 0;
  *(undefined4 *)(param_1 + 0x3664) = 0;
  if (*param_2 != 0) {
    lVar2 = (long)*param_2 << 3;
    puVar3 = *(undefined8 **)(param_2 + 2);
    do {
      FUN_021920b0(param_1 + 0x1b30,*puVar3);
      lVar2 = lVar2 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar2 != 0);
  }
  if ((param_3 & 1) == 0) {
    FUN_02192850(param_1,0,0);
    return;
  }
  return;
}

