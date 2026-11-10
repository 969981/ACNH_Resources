
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00207d90(void)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint *puVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  int iVar11;
  
  puVar6 = PTR_DAT_04bcc088;
  (**(code **)(*(long *)PTR_DAT_04bcc088 + 0x10))(PTR_DAT_04bcc088);
  puVar5 = PTR_DAT_04bcb900;
  plVar9 = (long *)(PTR_DAT_04bcb900 + 0x70);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar7;
    if (uVar2 != 0) {
      lVar1 = **(long **)(puVar5 + 0xa0);
      if ((ulong)((*(long **)(puVar5 + 0xa0))[1] - lVar1 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar9 = (long *)(*(long *)(lVar1 + (ulong)uVar2 * 8) + 0x68);
    }
  }
  if (*plVar9 == 0) {
    plVar8 = (long *)0x0;
    plVar9 = (long *)&DAT_00000008;
    iVar11 = _DAT_00000008;
    iVar10 = _DAT_00000008;
  }
  else {
    plVar8 = *(long **)(*plVar9 + 0x10);
    plVar9 = plVar8 + 1;
    iVar11 = (int)*plVar9;
    iVar10 = (int)*plVar9;
    if (iVar11 != (int)*plVar9) {
      ClearExclusiveLocal();
      goto LAB_00207ec4;
    }
  }
  iVar10 = iVar10 + -1;
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar4) {
    *(int *)plVar9 = iVar10;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') {
LAB_00207e78:
    if ((iVar10 == 0) && (*(char *)((long)plVar8 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar8 + 0xc) = 1;
      (**(code **)(*plVar8 + 8))();
    }
    (**(code **)(*(long *)puVar6 + 0x20))(puVar6);
    FUN_0019c210();
    return;
  }
LAB_00207ec4:
  do {
    lVar1 = *plVar9;
    iVar10 = iVar11 + -1;
    if ((int)lVar1 == iVar11) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_00207e78;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = (int)lVar1;
  } while( true );
}

