
void FUN_004c9960(long *param_1)

{
  long lVar1;
  int iVar2;
  
  FUN_0043d280(param_1 + 2);
  iVar2 = (int)param_1[1];
  if (0 < iVar2) {
    lVar1 = *param_1 + (long)iVar2 * 0x10;
    do {
      lVar1 = lVar1 + -0x10;
      FUN_0043be10(lVar1);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
    FUN_00421f90(PTR_DAT_048607b8,*param_1,0x10,*(uint *)((long)param_1 + 0xc) & 0x3fffffff);
  }
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0x80000000;
  return;
}

