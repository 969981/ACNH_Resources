
void FUN_004236e0(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 1) + -1;
  if (iVar1 <= param_2) {
    param_2 = iVar1;
  }
  if (0 < param_2) {
    iVar1 = *(int *)(param_1 + 1) - param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (0 < iVar1) {
      lVar3 = 0;
      puVar2 = (undefined1 *)*param_1;
      do {
        lVar3 = (lVar3 << 0x20) + 0x100000000 >> 0x20;
        *puVar2 = puVar2[param_2];
        puVar2 = puVar2 + 1;
      } while (lVar3 < iVar1);
    }
  }
  return;
}

