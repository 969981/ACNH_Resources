
/* WARNING: Removing unreachable block (ram,0x01fac554) */
/* WARNING: Removing unreachable block (ram,0x01fac564) */

void FUN_01fac4c0(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 local_78;
  long lStack_70;
  undefined4 local_64;
  
  puVar4 = PTR_DAT_04bb27c8;
  iVar1 = *(int *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0xc);
  lVar11 = *param_1;
  iVar3 = iVar1 + -1;
  iVar9 = iVar2 + -1;
  iVar10 = iVar3;
  while( true ) {
    lVar6 = *(long *)(lVar11 + 0x10);
    if (iVar10 < *(int *)(lVar6 + 0x10)) {
      return;
    }
    if (*(int *)(lVar6 + 0x20) < iVar10) {
      return;
    }
    if (iVar9 < *(int *)(lVar6 + 0x14)) {
      return;
    }
    if (*(int *)(lVar6 + 0x24) < iVar9) {
      return;
    }
    local_64 = 0;
    local_78 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
    lStack_70 = *(long *)puVar4 + 0x28;
    uVar5 = FUN_035aa210(iVar10 + -1,iVar9 + -1,&local_78);
    if ((uVar5 & 1) == 0) {
      return;
    }
    uVar5 = FUN_035aa210(iVar10 + -1,iVar9,&local_78);
    if ((uVar5 & 1) == 0) {
      return;
    }
    uVar5 = FUN_035aa210(iVar10,iVar9 + -1,&local_78);
    if ((uVar5 & 1) == 0) {
      return;
    }
    uVar5 = FUN_035aa210(iVar10,iVar9,&local_78);
    if ((uVar5 & 1) == 0) break;
    if (iVar10 < iVar1) {
      iVar10 = iVar10 + 1;
    }
    else {
      iVar9 = iVar9 + 1;
      iVar10 = iVar3;
    }
    if ((iVar3 == iVar10) && (iVar2 + 1 == iVar9)) {
      piVar7 = (int *)param_1[1];
      if (*piVar7 < piVar7[1]) {
        plVar8 = *(long **)(piVar7 + 4);
        if (plVar8 != (long *)0x0) {
          *(long *)(piVar7 + 4) = *plVar8;
        }
        *plVar8 = (long)(PTR_DAT_04bb2e18 + 0x10);
        *(undefined4 *)(plVar8 + 1) = *(undefined4 *)(param_2 + 8);
        puVar4 = PTR_DAT_04bb2010;
        *(undefined4 *)((long)plVar8 + 0xc) = *(undefined4 *)(param_2 + 0xc);
        *plVar8 = (long)(puVar4 + 0x10);
        if (*piVar7 < piVar7[1]) {
          *(long **)(*(long *)(piVar7 + 2) + (long)*piVar7 * 8) = plVar8;
          *piVar7 = *piVar7 + 1;
        }
      }
      return;
    }
  }
  return;
}

