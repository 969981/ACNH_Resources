
bool FUN_0023d1d4(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long local_28;
  
  iVar1 = *(int *)(param_1 + 0x1318);
  if (iVar1 != 1) {
    FUN_00220f24(param_1 + 0x1318);
    FUN_00220f78(param_1 + 0x1318);
    uVar2 = FUN_0026b3b4(DAT_04c603c8);
    if ((uVar2 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x1350) = 0;
    }
    plVar3 = (long *)FUN_00228380();
    lVar4 = *plVar3;
    local_28 = 0;
    FUN_002282f0(&local_28);
    *(long *)(param_1 + 0x1348) = local_28 + lVar4 * 2000;
  }
  return iVar1 != 1;
}

