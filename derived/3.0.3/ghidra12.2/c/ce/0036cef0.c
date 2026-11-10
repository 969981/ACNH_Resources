
void FUN_0036cef0(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x30);
  lVar2 = param_1 + 0x28;
  if (lVar3 == lVar2) {
    lVar3 = lVar2;
  }
  else {
    lVar4 = lVar3;
    do {
      iVar1 = strcmp(*(char **)(lVar4 + 0x10),"In");
      if (iVar1 == 0) goto LAB_0036cf54;
      lVar4 = *(long *)(lVar4 + 8);
    } while (lVar4 != lVar2);
  }
  goto LAB_0036cf74;
  while (lVar3 = *(long *)(lVar3 + 8), lVar3 != lVar2) {
LAB_0036cf54:
    iVar1 = strcmp(*(char **)(lVar3 + 0x10),"In");
    if (iVar1 == 0) goto LAB_0036cf74;
  }
  lVar3 = 0;
LAB_0036cf74:
  *(long *)(param_1 + 0x20) = lVar3;
  FUN_00386ec0(param_1,lVar3);
  *(undefined2 *)(param_1 + 0x10d) = 0;
  lVar2 = FUN_00386774(param_1 + 0x48);
  if ((lVar2 != 0) && (*(char *)(param_1 + 0x10f) == '\0')) {
    (**(code **)PTR_DAT_04bd0808)(lVar2,*(undefined8 *)PTR_DAT_04bd0810);
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}

