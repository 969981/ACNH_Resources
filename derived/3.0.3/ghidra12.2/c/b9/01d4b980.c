
void FUN_01d4b980(int *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  if (iVar1 < iVar2) {
    *(undefined **)(*(long *)(param_1 + 2) + (long)iVar1 * 8) = PTR_DAT_04bc12f0;
    iVar2 = param_1[1];
    iVar1 = *param_1 + 1;
    *param_1 = iVar1;
    if (iVar1 < iVar2) goto LAB_01d4ba14;
LAB_01d4b994:
    if (iVar2 <= iVar1) goto LAB_01d4b99c;
LAB_01d4ba38:
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)iVar1 * 8) = &DAT_0536d2f0;
    iVar2 = param_1[1];
    iVar1 = *param_1 + 1;
    *param_1 = iVar1;
    if (iVar1 < iVar2) goto LAB_01d4b9a4;
  }
  else {
    if (iVar2 <= iVar1) goto LAB_01d4b994;
LAB_01d4ba14:
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)iVar1 * 8) = &DAT_0536d2c0;
    iVar2 = param_1[1];
    iVar1 = *param_1 + 1;
    *param_1 = iVar1;
    if (iVar1 < iVar2) goto LAB_01d4ba38;
LAB_01d4b99c:
    if (iVar1 < iVar2) {
LAB_01d4b9a4:
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)iVar1 * 8) = &DAT_0536d320;
      iVar2 = param_1[1];
      iVar1 = *param_1 + 1;
      *param_1 = iVar1;
    }
  }
  lVar3 = *(long *)(*(long *)PTR_DAT_04bb27d0 + 0x10);
  if (iVar1 < iVar2) {
    *(long *)(*(long *)(param_1 + 2) + (long)iVar1 * 8) = lVar3;
    iVar2 = param_1[1];
    iVar1 = *param_1 + 1;
    *param_1 = iVar1;
    if (iVar1 < iVar2) goto LAB_01d4ba7c;
  }
  else if (iVar1 < iVar2) {
LAB_01d4ba7c:
    *(long *)(*(long *)(param_1 + 2) + (long)iVar1 * 8) = lVar3 + 0x30;
    iVar1 = *param_1 + 1;
    *param_1 = iVar1;
    if (param_1[1] <= iVar1) {
      return;
    }
    goto LAB_01d4ba9c;
  }
  if (iVar2 <= iVar1) {
    return;
  }
LAB_01d4ba9c:
  *(long *)(*(long *)(param_1 + 2) + (long)iVar1 * 8) = lVar3 + 0x60;
  *param_1 = *param_1 + 1;
  return;
}

