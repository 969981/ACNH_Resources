
undefined8 FUN_0014b308(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (param_1[2] != 0) {
    puVar5 = *(undefined8 **)(param_1[2] + 0x10);
    param_1[2] = (long)puVar5;
    if (puVar5 != (undefined8 *)0x0) {
LAB_0014b36c:
      return *puVar5;
    }
  }
  iVar2 = (int)param_1[1];
  iVar1 = (int)((long *)*param_1)[4];
  if (iVar2 < iVar1) {
    puVar3 = (undefined8 *)(*(long *)*param_1 + (long)iVar2 * 0x20);
    lVar4 = (long)iVar1 - (long)iVar2;
    do {
      iVar2 = iVar2 + 1;
      puVar5 = (undefined8 *)*puVar3;
      if (puVar5 != (undefined8 *)0x0) {
        param_1[2] = (long)puVar5;
        *(int *)(param_1 + 1) = iVar2;
        goto LAB_0014b36c;
      }
      puVar3 = puVar3 + 4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  param_1[2] = 0;
  return 0;
}

