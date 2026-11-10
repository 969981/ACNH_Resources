
bool FUN_0023d364(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long local_28;
  
  iVar1 = *(int *)(param_1 + 0x1358);
  if (iVar1 != 1) {
    FUN_00220f24(param_1 + 0x1358);
    FUN_00220f78(param_1 + 0x1358);
    *(undefined1 *)(param_1 + 0x1390) = 0;
    plVar2 = (long *)FUN_00228380();
    lVar3 = *plVar2;
    local_28 = 0;
    FUN_002282f0(&local_28);
    *(long *)(param_1 + 5000) = local_28 + lVar3 * 2000;
  }
  return iVar1 != 1;
}

