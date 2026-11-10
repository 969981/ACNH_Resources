
void FUN_0019a740(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint *puVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  bool bVar13;
  long *plVar14;
  long lVar15;
  undefined8 local_48 [3];
  undefined4 local_24;
  
  puVar6 = PTR_DAT_04bcb900;
  plVar14 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar8 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar4 = *puVar8;
    if (uVar4 != 0) {
      lVar15 = **(long **)(puVar6 + 0xa0);
      if ((ulong)((*(long **)(puVar6 + 0xa0))[1] - lVar15 >> 3) <= (ulong)uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar14 = (long *)(*(long *)(lVar15 + (ulong)uVar4 * 8) + 0x20);
    }
  }
  plVar9 = (long *)(*(long *)(*(long *)(*plVar14 + 0x10) + 0x18) + 0x50);
  plVar14 = (long *)*plVar9;
  if (plVar14 == (long *)0x0) {
LAB_0019a86c:
    local_24 = 0x80010004;
    FUN_0018aa70(local_48,&local_24);
    FUN_0019a9c0(param_1,local_48);
    return;
  }
  plVar12 = plVar9;
  do {
    plVar2 = plVar14;
    if (*(uint *)(plVar14 + 4) < *(uint *)(param_1 + 0xa0)) {
      plVar2 = plVar12;
      plVar14 = plVar14 + 1;
    }
    plVar14 = (long *)*plVar14;
    plVar12 = plVar2;
  } while (plVar14 != (long *)0x0);
  if (((plVar2 == plVar9) || (*(uint *)(param_1 + 0xa0) < *(uint *)(plVar2 + 4))) ||
     (plVar2[5] == 0)) goto LAB_0019a86c;
  lVar15 = *(long *)(param_1 + 0xb0);
  if (*(int *)(lVar15 + 0x14) != 1) {
    FUN_00187810(local_48);
    *(undefined **)(param_1 + 0x80) = PTR_LAB_04bcc0e0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x68) = local_48[0];
    *(undefined8 **)(param_1 + 0x90) = &DAT_0407ebb1;
    return;
  }
  *(undefined4 *)(param_1 + 0x40) = 2;
  plVar14 = (long *)FUN_00185a6c(0x20);
  puVar7 = PTR_LAB_04bcc0e0;
  puVar6 = PTR_DAT_04bcc0c0;
  if (plVar14 != (long *)0x0) {
    plVar14[2] = 0;
    plVar14[3] = (long)&DAT_0407ebb1;
    *plVar14 = (long)(puVar6 + 0x10);
    plVar14[1] = (long)puVar7;
  }
  piVar1 = (int *)(param_1 + 8);
  iVar11 = *piVar1;
  if (iVar11 == *piVar1) {
    cVar5 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar13) {
      *piVar1 = *piVar1 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') {
      bVar13 = true;
      goto LAB_0019a8e8;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  bVar13 = false;
LAB_0019a8e8:
  if (bVar13) {
LAB_0019a8ec:
    plVar9 = (long *)FUN_00185a6c(0x28);
    if (plVar9 != (long *)0x0) {
      *plVar9 = (long)(PTR_DAT_04bcc0e8 + 0x10);
      plVar9[1] = param_1;
      puVar6 = PTR_LAB_04bcc0f0;
      plVar9[4] = (long)plVar14;
      plVar9[2] = (long)puVar6;
      plVar9[3] = 0;
    }
    plVar14 = (long *)FUN_00187df4(0x20);
    puVar6 = PTR_FUN_04bcc060;
    *plVar14 = 0;
    plVar14[2] = (long)puVar6;
    plVar14[3] = (long)plVar9;
    plVar9 = (long *)(lVar15 + 0x20);
    lVar10 = *plVar9;
    *plVar14 = lVar10;
    plVar14[1] = (long)plVar9;
    *(long **)(lVar10 + 8) = plVar14;
    *plVar9 = (long)plVar14;
    *(long *)(lVar15 + 0x30) = *(long *)(lVar15 + 0x30) + 1;
    return;
  }
  do {
    iVar3 = *piVar1;
    if (iVar3 == iVar11) {
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar13) {
        *piVar1 = iVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') goto LAB_0019a8ec;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = iVar3;
  } while( true );
}

