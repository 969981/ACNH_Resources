
bool FUN_0041e170(long param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  uint *puVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  
  puVar6 = PTR_DAT_04bcb900;
  plVar12 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar7;
    if (uVar2 != 0) {
      lVar9 = **(long **)(puVar6 + 0xa0);
      if ((ulong)((*(long **)(puVar6 + 0xa0))[1] - lVar9 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar12 = (long *)(*(long *)(lVar9 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  if ((*plVar12 == 0) || (lVar9 = *(long *)(*plVar12 + 0x10), lVar9 == 0)) {
    plVar12 = (long *)0x78;
    (**(code **)(lRam0000000000000078 + 0x10))(0x78);
    lVar9 = *(long *)(param_1 + 0x38);
  }
  else {
    plVar12 = (long *)(*(long *)(lVar9 + 0x10) + 0x78);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    lVar9 = *(long *)(param_1 + 0x38);
  }
  if (lVar9 == 0) {
LAB_0041e2a4:
    (**(code **)(*plVar12 + 0x20))(plVar12);
    return lVar9 != 0;
  }
  FUN_00197980(lVar9 + 0x100);
  FUN_0019c910(lVar9,5);
  plVar8 = *(long **)(param_1 + 0x38);
  plVar1 = plVar8 + 1;
  iVar11 = (int)*plVar1;
  iVar10 = (int)*plVar1 + -1;
  if (iVar11 == (int)*plVar1) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
LAB_0041e280:
      if ((iVar10 == 0) && (*(char *)((long)plVar8 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar8 + 0xc) = 1;
        (**(code **)(*plVar8 + 8))();
      }
      *(undefined8 *)(param_1 + 0x38) = 0;
      goto LAB_0041e2a4;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar5 = *plVar1;
    iVar10 = iVar11 + -1;
    if ((int)lVar5 == iVar11) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_0041e280;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = (int)lVar5;
  } while( true );
}

