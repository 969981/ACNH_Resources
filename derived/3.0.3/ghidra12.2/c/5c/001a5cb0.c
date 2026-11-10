
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a5cb0(void)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  uint *puVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  
  puVar5 = PTR_DAT_04bcb900;
  plVar8 = (long *)(PTR_DAT_04bcb900 + 0x18);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar6 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar6;
    if (uVar2 != 0) {
      lVar1 = **(long **)(puVar5 + 0xa0);
      if ((ulong)((*(long **)(puVar5 + 0xa0))[1] - lVar1 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar8 = (long *)(*(long *)(lVar1 + (ulong)uVar2 * 8) + 0x10);
    }
  }
  if (*plVar8 == 0) {
    plVar7 = (long *)0x0;
    plVar8 = (long *)&DAT_00000008;
    iVar10 = _DAT_00000008;
    iVar9 = _DAT_00000008;
  }
  else {
    plVar7 = *(long **)(*plVar8 + 0x10);
    plVar8 = plVar7 + 1;
    iVar10 = (int)*plVar8;
    iVar9 = (int)*plVar8;
    if (iVar10 != (int)*plVar8) {
      ClearExclusiveLocal();
      goto LAB_001a5db0;
    }
  }
  iVar9 = iVar9 + -1;
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar4) {
    *(int *)plVar8 = iVar9;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') {
LAB_001a5d80:
    if ((iVar9 == 0) && (*(char *)((long)plVar7 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar7 + 0xc) = 1;
                    /* WARNING: Could not recover jumptable at 0x001a5df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 8))();
      return;
    }
    return;
  }
LAB_001a5db0:
  do {
    lVar1 = *plVar8;
    iVar9 = iVar10 + -1;
    if ((int)lVar1 == iVar10) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_001a5d80;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar10 = (int)lVar1;
  } while( true );
}

