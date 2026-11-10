
void FUN_001c4420(long param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  uint *puVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  
  puVar5 = PTR_DAT_04bcb900;
  plVar11 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar6 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar6;
    if (uVar2 != 0) {
      lVar8 = **(long **)(puVar5 + 0xa0);
      if ((ulong)((*(long **)(puVar5 + 0xa0))[1] - lVar8 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar11 = (long *)(*(long *)(lVar8 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x10), lVar8 == 0)) {
    plVar11 = (long *)0x78;
    (**(code **)(lRam0000000000000078 + 0x10))(0x78);
    lVar8 = *(long *)(param_1 + 0xf8);
  }
  else {
    plVar11 = (long *)(*(long *)(lVar8 + 0x10) + 0x78);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar8 = *(long *)(param_1 + 0xf8);
  }
  if (lVar8 == 0) {
                    /* WARNING: Could not recover jumptable at 0x001c44bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar11 + 0x20))(plVar11);
    return;
  }
  FUN_001c5a20(*(long *)(param_1 + 8) + 0x40);
  plVar7 = *(long **)(param_1 + 0xf8);
  plVar1 = plVar7 + 1;
  iVar10 = (int)*plVar1;
  iVar9 = (int)*plVar1 + -1;
  if (iVar10 == (int)*plVar1) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
LAB_001c453c:
      if ((iVar9 == 0) && (*(char *)((long)plVar7 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar7 + 0xc) = 1;
        (**(code **)(*plVar7 + 8))();
      }
      *(undefined8 *)(param_1 + 0xf8) = 0;
                    /* WARNING: Could not recover jumptable at 0x001c4574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 0x20))(plVar11);
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar8 = *plVar1;
    iVar9 = iVar10 + -1;
    if ((int)lVar8 == iVar10) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_001c453c;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar10 = (int)lVar8;
  } while( true );
}

