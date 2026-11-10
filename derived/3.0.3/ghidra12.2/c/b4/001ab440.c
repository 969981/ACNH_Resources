
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001ab440(long *param_1)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint *puVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  
  puVar6 = PTR_DAT_04bcb908;
  *param_1 = (long)(PTR_DAT_04bcc2f8 + 0x10);
  puVar7 = PTR_DAT_04bcb910;
  if (param_1[0x18] != 0) {
    FUN_00189140(param_1[0x18],0xffffffff);
    if ((long *)param_1[0x18] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x18] + 8))();
    }
    if (*puVar6 != '\0') {
      puVar8 = (uint *)FUN_03876070(*(undefined8 *)puVar7);
      if (*puVar8 != 0) {
        *(undefined1 *)(*(long *)(PTR_DAT_04bcc410 + 0x10) + (ulong)*puVar8) = 0;
        goto LAB_001ab4cc;
      }
    }
    PTR_DAT_04bcc410[0x18] = 0;
  }
LAB_001ab4cc:
  if ((long *)param_1[0x23] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x23] + 8))();
  }
  puVar5 = PTR_DAT_04bcb900;
  plVar10 = (long *)(PTR_DAT_04bcb900 + 0x18);
  if (*puVar6 != '\0') {
    puVar8 = (uint *)FUN_03876070(*(undefined8 *)puVar7);
    uVar2 = *puVar8;
    if (uVar2 != 0) {
      lVar1 = **(long **)(puVar5 + 0xa0);
      if ((ulong)((*(long **)(puVar5 + 0xa0))[1] - lVar1 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar10 = (long *)(*(long *)(lVar1 + (ulong)uVar2 * 8) + 0x10);
    }
  }
  if (*plVar10 == 0) {
    plVar9 = (long *)0x0;
    plVar10 = (long *)&DAT_00000008;
    iVar12 = _DAT_00000008;
    iVar11 = _DAT_00000008;
  }
  else {
    plVar9 = *(long **)(*plVar10 + 0x10);
    plVar10 = plVar9 + 1;
    iVar12 = (int)*plVar10;
    iVar11 = (int)*plVar10;
    if (iVar12 != (int)*plVar10) {
      ClearExclusiveLocal();
      goto LAB_001ab5e4;
    }
  }
  iVar11 = iVar11 + -1;
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar4) {
    *(int *)plVar10 = iVar11;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') {
LAB_001ab598:
    if ((iVar11 == 0) && (*(char *)((long)plVar9 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar9 + 0xc) = 1;
      (**(code **)(*plVar9 + 8))();
    }
    FUN_0018ac30(param_1 + 0x19);
    FUN_0019a368(param_1);
    return;
  }
LAB_001ab5e4:
  do {
    lVar1 = *plVar10;
    iVar11 = iVar12 + -1;
    if ((int)lVar1 == iVar12) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_001ab598;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar12 = (int)lVar1;
  } while( true );
}

