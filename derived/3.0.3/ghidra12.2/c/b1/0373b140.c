
/* WARNING: Removing unreachable block (ram,0x0373b1a4) */
/* WARNING: Removing unreachable block (ram,0x0373b1b4) */

undefined8 FUN_0373b140(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  undefined8 local_60;
  long lStack_58;
  
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x10);
  if (1 < (iVar1 - iVar2) + 1) {
    iVar3 = *(int *)(param_1 + 0x24);
    iVar5 = *(int *)(param_1 + 0x14);
    if (1 < (iVar3 - iVar5) + 1) {
      local_60 = *(undefined8 *)(DAT_0519d040 + 0x1f8);
      lStack_58 = *(long *)PTR_DAT_04bb27c8 + 0x28;
      iVar6 = iVar2;
      do {
        uVar4 = FUN_035aa210(iVar6,iVar5,&local_60);
        if ((uVar4 & 1) != 0) {
          uVar4 = FUN_035aa210(iVar6,iVar5 + 1,&local_60);
          if ((uVar4 & 1) != 0) {
            uVar4 = FUN_035aa210(iVar6 + 1,iVar5,&local_60);
            if (((uVar4 & 1) != 0) &&
               (uVar4 = FUN_035aa210(iVar6 + 1,iVar5 + 1,&local_60), (uVar4 & 1) != 0)) {
              return 1;
            }
          }
        }
        if (iVar6 < iVar1 + -1) {
          iVar6 = iVar6 + 1;
        }
        else {
          iVar5 = iVar5 + 1;
          iVar6 = iVar2;
        }
      } while ((iVar2 != iVar6) || (iVar3 != iVar5));
    }
  }
  return 0;
}

