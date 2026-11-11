
void FUN_005145c0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 < 1) {
    *(int *)(param_1 + 0x70) = iVar1 + -1;
  }
  else {
    lVar3 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x68) + lVar3 * 8) == param_2) {
        iVar2 = (int)lVar3;
        *(int *)(param_1 + 0x70) = iVar1 + -1;
        if (iVar1 + -1 != iVar2) goto LAB_00514600;
        goto LAB_0051460c;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
    *(int *)(param_1 + 0x70) = iVar1 + -1;
  }
  iVar2 = -1;
  if (iVar1 != 0) {
LAB_00514600:
    *(undefined8 *)(*(long *)(param_1 + 0x68) + (long)iVar2 * 8) =
         *(undefined8 *)(*(long *)(param_1 + 0x68) + (long)(iVar1 + -1) * 8);
  }
LAB_0051460c:
  FUN_004435c0(param_2);
  return;
}

