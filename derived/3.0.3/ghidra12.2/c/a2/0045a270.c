
void FUN_0045a270(undefined8 *param_1)

{
  int iVar1;
  ulong *puVar2;
  
  iVar1 = *(int *)(param_1 + 2);
  *param_1 = &PTR_FUN_04862898;
  if (0 < iVar1) {
    puVar2 = (ulong *)(param_1[1] + (long)iVar1 * 0x18 + -8);
    do {
      if ((*puVar2 & 1) != 0) {
        FUN_0043dd50(*puVar2 & 0xfffffffffffffffe);
      }
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + -3;
    } while (iVar1 != 0);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x14)) && (param_1[1] != 0)) {
    FUN_00421f90(PTR_DAT_048607b8,param_1[1],0x18,*(uint *)((long)param_1 + 0x14) & 0x3fffffff);
  }
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0x80000000;
  return;
}

