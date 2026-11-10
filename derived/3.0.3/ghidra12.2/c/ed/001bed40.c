
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001bed40(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint *puVar7;
  long *plVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;
  int iVar12;
  long lVar13;
  undefined *local_60;
  undefined1 local_58 [16];
  undefined1 *local_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  puVar5 = PTR_DAT_04bcb908;
  puVar4 = PTR_DAT_04bcb900;
  if (*(long *)(param_1 + 0x2b8) != 0) goto LAB_001bed5c;
  plVar8 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar7;
    if (uVar2 != 0) {
      lVar13 = **(long **)(puVar4 + 0xa0);
      if ((ulong)((*(long **)(puVar4 + 0xa0))[1] - lVar13 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar8 = (long *)(*(long *)(lVar13 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  if (((*plVar8 == 0) || (lVar13 = *(long *)(*plVar8 + 0x10), lVar13 == 0)) ||
     (*(long *)(lVar13 + 0x10) == 0)) goto LAB_001bed5c;
  plVar8 = (long *)FUN_00185a6c(0x70);
  if (plVar8 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    piVar9 = (int *)&DAT_00000008;
    iVar12 = _DAT_00000008;
    iVar10 = _DAT_00000008;
LAB_001bef0c:
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(piVar9,0x10);
    if (bVar11) {
      *piVar9 = iVar12 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_001bef78;
    bVar11 = true;
  }
  else {
    local_58[0] = 0;
    puVar1 = PTR_DAT_04bc0ec8 + 0x10;
    local_48 = local_58;
    uStack_40 = 0x10;
    local_60 = puVar1;
    FUN_0018b070(&local_60,"SocketTransport::TransportJob",0xffffffffffffffff);
    FUN_001944f8(plVar8,0,&uStack_31);
    puVar6 = PTR_DAT_04bcc620;
    plVar8[0xd] = param_1;
    *(undefined1 *)((long)plVar8 + 0x61) = 0;
    *plVar8 = (long)(puVar6 + 0x10);
    *(long **)(param_1 + 0x2b8) = plVar8;
    local_60 = puVar1;
    FUN_0018b1a0(&local_60);
    piVar9 = (int *)(*(long *)(param_1 + 0x2b8) + 8);
    iVar10 = *piVar9;
    iVar12 = *piVar9;
    if (iVar10 == *piVar9) goto LAB_001bef0c;
    ClearExclusiveLocal();
LAB_001bef78:
    bVar11 = false;
  }
  if (!bVar11) {
    do {
      iVar12 = *piVar9;
      if (iVar12 == iVar10) {
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar11) {
          *piVar9 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') break;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar12;
    } while( true );
  }
  plVar8 = (long *)(puVar4 + 0x28);
  if (*puVar5 != '\0') {
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar7;
    if (uVar2 != 0) {
      lVar13 = **(long **)(puVar4 + 0xa0);
      if ((ulong)((*(long **)(puVar4 + 0xa0))[1] - lVar13 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar8 = (long *)(*(long *)(lVar13 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  FUN_001a0568(*(undefined8 *)(*(long *)(*plVar8 + 0x10) + 0x10),*(undefined8 *)(param_1 + 0x2b8),0)
  ;
LAB_001bed5c:
  if (*PTR_DAT_04bcc108 != '\0') {
    if (*(long **)(param_1 + 0x2b0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x2b0) + 8))();
      lVar13 = *(long *)(param_1 + 0x510);
      *(undefined8 *)(param_1 + 0x2b0) = 0;
      if (lVar13 != 0) {
        FUN_001c3440(lVar13);
        FUN_00185ac4(lVar13);
        *(undefined8 *)(param_1 + 0x510) = 0;
      }
    }
    if (*PTR_DAT_04bcbb50 == '\0') {
      *(undefined8 *)(param_1 + 0x510) = 0;
      lVar13 = FUN_00185a6c(0x328);
    }
    else {
      lVar13 = FUN_00185a6c(0x58);
      if (lVar13 != 0) {
        FUN_001c32a0(lVar13,*(undefined8 *)PTR_DAT_04bcbb70,*(undefined4 *)(param_1 + 0x98));
      }
      *(long *)(param_1 + 0x510) = lVar13;
      lVar13 = FUN_00185a6c(0x328);
    }
    if (lVar13 != 0) {
      FUN_001bb97c(lVar13);
    }
    *(long *)(param_1 + 0x2b0) = lVar13;
  }
  return;
}

