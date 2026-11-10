
void FUN_001c5d90(long param_1)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  uint *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  long *plVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  
  puVar3 = PTR_DAT_04bcb900;
  plVar12 = (long *)(PTR_DAT_04bcb900 + 0x28);
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
      plVar12 = (long *)(*(long *)(lVar7 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  if ((*plVar12 == 0) || (lVar7 = *(long *)(*plVar12 + 0x10), lVar7 == 0)) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x10);
  }
  plVar13 = (long *)(lVar7 + 0x78);
  (**(code **)(*plVar13 + 0x10))(plVar13);
  plVar12 = *(long **)(param_1 + 8);
  while( true ) {
    if (plVar12 == (long *)(param_1 + 0x10)) {
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(param_1 + 0x30);
      *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x001c5fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar13 + 0x20))(plVar13);
      return;
    }
    plVar6 = (long *)plVar12[6];
    plVar8 = plVar6 + 1;
    iVar11 = (int)*plVar8;
    iVar9 = (int)*plVar8 + -1;
    if (iVar11 != (int)*plVar8) break;
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *(int *)plVar8 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 != '\0') goto LAB_001c5f00;
LAB_001c5ebc:
    if ((iVar9 == 0) && (*(char *)((long)plVar6 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar6 + 0xc) = 1;
      (**(code **)(*plVar6 + 8))();
      plVar8 = (long *)plVar12[1];
    }
    else {
      plVar8 = (long *)plVar12[1];
    }
    plVar6 = plVar12;
    plVar10 = plVar8;
    if (plVar8 == (long *)0x0) {
      do {
        plVar14 = (long *)plVar6[2];
        bVar4 = (long *)*plVar14 != plVar6;
        plVar6 = plVar14;
      } while (bVar4);
    }
    else {
      do {
        plVar14 = plVar10;
        plVar10 = (long *)*plVar14;
      } while ((long *)*plVar14 != (long *)0x0);
    }
    plVar6 = plVar12;
    if (plVar8 == (long *)0x0) {
      do {
        plVar10 = (long *)plVar6[2];
        bVar4 = (long *)*plVar10 != plVar6;
        plVar6 = plVar10;
      } while (bVar4);
    }
    else {
      do {
        plVar10 = plVar8;
        plVar8 = (long *)*plVar10;
      } while ((long *)*plVar10 != (long *)0x0);
    }
    if (*(long **)(param_1 + 8) == plVar12) {
      *(long **)(param_1 + 8) = plVar10;
    }
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -1;
    FUN_00192390(*(undefined8 *)(param_1 + 0x10),plVar12);
    FUN_00187e4c(plVar12);
    plVar12 = plVar14;
  }
  ClearExclusiveLocal();
LAB_001c5f00:
  do {
    lVar7 = *plVar8;
    iVar9 = iVar11 + -1;
    if ((int)lVar7 == iVar11) {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar9;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_001c5ebc;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = (int)lVar7;
  } while( true );
}

