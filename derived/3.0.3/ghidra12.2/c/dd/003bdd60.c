
void FUN_003bdd60(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 9) != '\0') {
    for (lVar2 = *(long *)(param_1 + 0x1e0); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x198)) {
      iVar1 = *(int *)(lVar2 + 0x164);
      if (0 < iVar1) {
        *(int *)(lVar2 + 0x164) = iVar1 + -1;
        iVar1 = iVar1 + -1;
      }
      if (((iVar1 == 0) && (*(int *)(lVar2 + 0x20) != 4)) && (*(char *)(param_1 + 0x12a) == '\0')) {
        FUN_003bf8c0(lVar2);
      }
      if (*(char *)(lVar2 + 0xc3) == '\0') {
        FUN_003bf528(lVar2,1);
      }
    }
  }
  return;
}

