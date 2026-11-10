
void FUN_00208a00(long param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  
  puVar6 = PTR_DAT_04bcb900;
  plVar11 = (long *)(PTR_DAT_04bcb900 + 0x90);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar7;
    if (uVar2 != 0) {
      lVar10 = **(long **)(puVar6 + 0xa0);
      if ((ulong)((*(long **)(puVar6 + 0xa0))[1] - lVar10 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar11 = (long *)(*(long *)(lVar10 + (ulong)uVar2 * 8) + 0x88);
    }
  }
  if (*plVar11 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(*plVar11 + 0x10);
  }
  plVar11 = (long *)(lVar10 + 0x30);
  (**(code **)(*plVar11 + 0x10))(plVar11);
  lVar5 = *(long *)(lVar10 + 0x78) + -1;
  *(long *)(lVar10 + 0x78) = lVar5;
  if (lVar5 == 0) {
    FUN_002146d8(lVar10);
    (**(code **)(*plVar11 + 0x20))(plVar11);
    plVar11 = *(long **)(param_1 + 0xc0);
  }
  else {
    (**(code **)(*plVar11 + 0x20))(plVar11);
    plVar11 = *(long **)(param_1 + 0xc0);
  }
  if (plVar11 == (long *)0x0) {
LAB_00208b2c:
    *(undefined8 *)(param_1 + 0xc0) = 0;
    return;
  }
  plVar1 = plVar11 + 1;
  iVar9 = (int)*plVar1;
  iVar8 = (int)*plVar1 + -1;
  if (iVar9 == (int)*plVar1) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
LAB_00208b20:
      if ((iVar8 == 0) && (*(char *)((long)plVar11 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar11 + 0xc) = 1;
        (**(code **)(*plVar11 + 8))();
        *(undefined8 *)(param_1 + 0xc0) = 0;
        return;
      }
      goto LAB_00208b2c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar10 = *plVar1;
    iVar8 = iVar9 + -1;
    if ((int)lVar10 == iVar9) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_00208b20;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar9 = (int)lVar10;
  } while( true );
}

