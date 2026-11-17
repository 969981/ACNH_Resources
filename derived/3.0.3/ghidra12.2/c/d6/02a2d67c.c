
void FUN_02a2d67c(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  if (iVar1 < iVar2) {
    *(long *)(*(long *)(param_2 + 2) + (long)iVar1 * 8) = param_1 + 0x11f8f0;
    iVar2 = param_2[1];
    iVar1 = *param_2 + 1;
    *param_2 = iVar1;
    if (iVar2 <= iVar1) goto LAB_02a2d690;
LAB_02a2d6fc:
    *(long *)(*(long *)(param_2 + 2) + (long)iVar1 * 8) = param_1 + 0x632c0;
    iVar2 = param_2[1];
    iVar1 = *param_2 + 1;
    *param_2 = iVar1;
    if (iVar2 <= iVar1) goto LAB_02a2d698;
LAB_02a2d720:
    *(long *)(*(long *)(param_2 + 2) + (long)iVar1 * 8) = param_1 + 0x63308;
    iVar2 = param_2[1];
    iVar1 = *param_2 + 1;
    *param_2 = iVar1;
    if (iVar2 <= iVar1) goto LAB_02a2d6a0;
LAB_02a2d744:
    *(long *)(*(long *)(param_2 + 2) + (long)iVar1 * 8) = param_1 + 0x2c48;
    iVar2 = param_2[1];
    iVar1 = *param_2 + 1;
    *param_2 = iVar1;
    if (iVar2 <= iVar1) goto LAB_02a2d6a8;
LAB_02a2d768:
    *(long *)(*(long *)(param_2 + 2) + (long)iVar1 * 8) = param_1 + 0x11fa20;
    iVar2 = param_2[1];
    iVar1 = *param_2 + 1;
    *param_2 = iVar1;
    if (iVar2 <= iVar1) goto LAB_02a2d6b0;
LAB_02a2d78c:
    *(long *)(*(long *)(param_2 + 2) + (long)iVar1 * 8) = param_1 + 0x120f30;
    iVar2 = param_2[1];
    iVar1 = *param_2 + 1;
    *param_2 = iVar1;
    if (iVar2 <= iVar1) goto LAB_02a2d6b8;
LAB_02a2d7b0:
    *(long *)(*(long *)(param_2 + 2) + (long)iVar1 * 8) = param_1 + 0x122950;
    iVar2 = param_2[1];
    iVar1 = *param_2 + 1;
    *param_2 = iVar1;
    if (iVar2 <= iVar1) goto LAB_02a2d6c0;
LAB_02a2d7d4:
    *(long *)(*(long *)(param_2 + 2) + (long)iVar1 * 8) = param_1 + 0x1210c8;
    iVar2 = param_2[1];
    iVar1 = *param_2 + 1;
    *param_2 = iVar1;
    if (iVar1 < iVar2) {
LAB_02a2d7f8:
      *(long *)(*(long *)(param_2 + 2) + (long)iVar1 * 8) = param_1 + 0x121168;
      iVar1 = *param_2 + 1;
      *param_2 = iVar1;
      if (param_2[1] <= iVar1) {
        return;
      }
      goto LAB_02a2d81c;
    }
  }
  else {
    if (iVar1 < iVar2) goto LAB_02a2d6fc;
LAB_02a2d690:
    if (iVar1 < iVar2) goto LAB_02a2d720;
LAB_02a2d698:
    if (iVar1 < iVar2) goto LAB_02a2d744;
LAB_02a2d6a0:
    if (iVar1 < iVar2) goto LAB_02a2d768;
LAB_02a2d6a8:
    if (iVar1 < iVar2) goto LAB_02a2d78c;
LAB_02a2d6b0:
    if (iVar1 < iVar2) goto LAB_02a2d7b0;
LAB_02a2d6b8:
    if (iVar1 < iVar2) goto LAB_02a2d7d4;
LAB_02a2d6c0:
    if (iVar1 < iVar2) goto LAB_02a2d7f8;
  }
  if (iVar2 <= iVar1) {
    return;
  }
LAB_02a2d81c:
  *(undefined8 *)(*(long *)(param_2 + 2) + (long)iVar1 * 8) = *(undefined8 *)(param_1 + 0x6c8);
  *param_2 = *param_2 + 1;
  return;
}

