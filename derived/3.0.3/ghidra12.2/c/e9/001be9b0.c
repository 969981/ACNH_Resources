
undefined8 FUN_001be9b0(long param_1)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  long *plVar11;
  
  *(undefined1 *)(param_1 + 0x2e0) = 1;
  if ((*PTR_DAT_04bcc108 != '\0') && (*(long **)(param_1 + 0x2b0) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x2b0) + 8))();
    *(undefined8 *)(param_1 + 0x2b0) = 0;
  }
  puVar4 = PTR_DAT_04bcb908;
  puVar3 = PTR_DAT_04bcb900;
  if (*(long *)(param_1 + 0x2b8) == 0) {
    return 1;
  }
  plVar11 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar5;
    if (uVar1 != 0) {
      lVar7 = **(long **)(puVar3 + 0xa0);
      if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar7 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar11 = (long *)(*(long *)(lVar7 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  if (*plVar11 == 0) {
    return 1;
  }
  lVar7 = *(long *)(*plVar11 + 0x10);
  if (lVar7 == 0) {
    return 1;
  }
  if (*(long *)(lVar7 + 0x10) == 0) {
    return 1;
  }
  plVar11 = (long *)(puVar3 + 0x28);
  if (*puVar4 != '\0') {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar5;
    if (uVar1 != 0) {
      lVar7 = **(long **)(puVar3 + 0xa0);
      if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar7 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar11 = (long *)(*(long *)(lVar7 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  FUN_0019e610(*(undefined8 *)(*(long *)(*plVar11 + 0x10) + 0x10),*(undefined8 *)(param_1 + 0x2b8));
  plVar6 = *(long **)(param_1 + 0x2b8);
  plVar11 = plVar6 + 1;
  lVar7 = *plVar11;
  iVar8 = (int)*plVar11 + -1;
  if ((int)lVar7 == (int)*plVar11) {
    cVar2 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar10) {
      *(int *)plVar11 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      bVar10 = true;
      goto LAB_001beb14;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  bVar10 = false;
LAB_001beb14:
  iVar9 = (int)lVar7;
  if (bVar10) {
LAB_001beb18:
    if ((iVar8 == 0) && (*(char *)((long)plVar6 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar6 + 0xc) = 1;
      (**(code **)(*plVar6 + 8))();
      *(undefined8 *)(param_1 + 0x2b8) = 0;
      return 1;
    }
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    return 1;
  }
  do {
    lVar7 = *plVar11;
    iVar8 = iVar9 + -1;
    if ((int)lVar7 == iVar9) {
      cVar2 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar10) {
        *(int *)plVar11 = iVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_001beb18;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar9 = (int)lVar7;
  } while( true );
}

