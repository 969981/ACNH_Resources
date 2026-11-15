
void FUN_0218818c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  if (iVar1 < iVar2) {
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)iVar1 * 8) = &DAT_053fbb98;
    iVar2 = param_1[1];
    iVar1 = *param_1 + 1;
    *param_1 = iVar1;
    if (iVar2 <= iVar1) goto LAB_021881a0;
LAB_02188214:
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)iVar1 * 8) = &DAT_053fbbc8;
    iVar2 = param_1[1];
    iVar1 = *param_1 + 1;
    *param_1 = iVar1;
    if (iVar2 <= iVar1) goto LAB_021881a8;
LAB_02188238:
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)iVar1 * 8) = &DAT_053fbbf8;
    iVar2 = param_1[1];
    iVar1 = *param_1 + 1;
    *param_1 = iVar1;
    if (iVar2 <= iVar1) goto LAB_021881b0;
LAB_0218825c:
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)iVar1 * 8) = &DAT_053fbc28;
    iVar2 = param_1[1];
    iVar1 = *param_1 + 1;
    *param_1 = iVar1;
    if (iVar2 <= iVar1) goto LAB_021881b8;
LAB_02188280:
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)iVar1 * 8) = &DAT_053fbc58;
    iVar2 = param_1[1];
    iVar1 = *param_1 + 1;
    *param_1 = iVar1;
    if (iVar2 <= iVar1) goto LAB_021881c0;
LAB_021882a4:
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)iVar1 * 8) = &DAT_053fbc88;
    iVar2 = param_1[1];
    iVar1 = *param_1 + 1;
    *param_1 = iVar1;
    if (iVar2 <= iVar1) goto LAB_021881c8;
LAB_021882c8:
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)iVar1 * 8) = &DAT_053fbcb8;
    iVar2 = param_1[1];
    iVar1 = *param_1 + 1;
    *param_1 = iVar1;
    if (iVar2 <= iVar1) goto LAB_021881d0;
LAB_021882ec:
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)iVar1 * 8) = &DAT_053fbce8;
    iVar2 = param_1[1];
    iVar1 = *param_1 + 1;
    *param_1 = iVar1;
    if (iVar2 <= iVar1) goto LAB_021881d8;
LAB_02188310:
    *(undefined8 **)(*(long *)(param_1 + 2) + (long)iVar1 * 8) = &DAT_053fbd18;
    iVar2 = param_1[1];
    iVar1 = *param_1 + 1;
    *param_1 = iVar1;
    if (iVar1 < iVar2) goto LAB_02188334;
  }
  else {
    if (iVar1 < iVar2) goto LAB_02188214;
LAB_021881a0:
    if (iVar1 < iVar2) goto LAB_02188238;
LAB_021881a8:
    if (iVar1 < iVar2) goto LAB_0218825c;
LAB_021881b0:
    if (iVar1 < iVar2) goto LAB_02188280;
LAB_021881b8:
    if (iVar1 < iVar2) goto LAB_021882a4;
LAB_021881c0:
    if (iVar1 < iVar2) goto LAB_021882c8;
LAB_021881c8:
    if (iVar1 < iVar2) goto LAB_021882ec;
LAB_021881d0:
    if (iVar1 < iVar2) goto LAB_02188310;
LAB_021881d8:
    if (iVar1 < iVar2) {
LAB_02188334:
      *(undefined8 **)(*(long *)(param_1 + 2) + (long)iVar1 * 8) = &DAT_053fbd48;
      iVar1 = *param_1 + 1;
      *param_1 = iVar1;
      if (param_1[1] <= iVar1) {
        return;
      }
      goto LAB_02188358;
    }
  }
  if (iVar2 <= iVar1) {
    return;
  }
LAB_02188358:
  *(undefined8 **)(*(long *)(param_1 + 2) + (long)iVar1 * 8) = &DAT_053fbd78;
  *param_1 = *param_1 + 1;
  return;
}

