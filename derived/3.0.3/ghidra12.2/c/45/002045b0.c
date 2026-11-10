
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002045b0(long *param_1)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  uint *puVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  
  *param_1 = (long)(PTR_DAT_04bccba0 + 0x10);
  plVar6 = (long *)param_1[2];
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    iVar10 = (int)*plVar8;
    iVar9 = (int)*plVar8 + -1;
    if (iVar10 != (int)*plVar8) {
      ClearExclusiveLocal();
LAB_002046d0:
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
          if (cVar3 == '\0') goto LAB_0020460c;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = (int)lVar1;
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *(int *)plVar8 = iVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_002046d0;
LAB_0020460c:
    if ((iVar9 == 0) && (*(char *)((long)plVar6 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar6 + 0xc) = 1;
      (**(code **)(*plVar6 + 8))();
    }
    param_1[2] = 0;
  }
  puVar5 = PTR_DAT_04bcb900;
  plVar6 = (long *)(PTR_DAT_04bcb900 + 0x70);
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
      plVar6 = (long *)(*(long *)(lVar1 + (ulong)uVar2 * 8) + 0x68);
    }
  }
  if (*plVar6 == 0) {
    plVar8 = (long *)0x0;
    plVar6 = (long *)&DAT_00000008;
    iVar9 = _DAT_00000008;
    iVar10 = _DAT_00000008;
  }
  else {
    plVar8 = *(long **)(*plVar6 + 0x10);
    plVar6 = plVar8 + 1;
    iVar9 = (int)*plVar6;
    iVar10 = (int)*plVar6;
    if (iVar9 != (int)*plVar6) {
      ClearExclusiveLocal();
      goto LAB_00204760;
    }
  }
  iVar10 = iVar10 + -1;
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
  if (bVar4) {
    *(int *)plVar6 = iVar10;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') {
LAB_00204738:
    if ((iVar10 == 0) && (*(char *)((long)plVar8 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar8 + 0xc) = 1;
                    /* WARNING: Could not recover jumptable at 0x002047a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 8))();
      return;
    }
    return;
  }
LAB_00204760:
  do {
    lVar1 = *plVar6;
    iVar10 = iVar9 + -1;
    if ((int)lVar1 == iVar9) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_00204738;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar9 = (int)lVar1;
  } while( true );
}

