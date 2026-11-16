
/* WARNING: Removing unreachable block (ram,0x0283f308) */

uint FUN_0283f2cc(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = *(long *)PTR_DAT_04bb46b0;
  uVar3 = 1;
  if ((lVar2 != 0) && (uVar3 = 1, ((*(byte *)(lVar2 + 0x50d) ^ 0xff) & 6) == 0)) {
    iVar1 = **(int **)(param_1 + 0x10);
    if (iVar1 == 2) {
      FUN_026f1360();
    }
    else {
      if (iVar1 != 1) {
        param_1 = 0;
        uVar3 = 0;
        goto LAB_0283f368;
      }
      FUN_026f27c0(lVar2,(*(int **)(param_1 + 0x10))[1],0);
    }
    param_1 = 1;
    uVar3 = 0;
  }
LAB_0283f368:
  return (uint)param_1 & 1 | uVar3;
}

