
/* WARNING: Removing unreachable block (ram,0x001a039c) */

void FUN_001a0200(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  uint *puVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_28;
  
  puVar6 = PTR_DAT_04bcb900;
  plVar10 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar3 = *puVar7;
    if (uVar3 != 0) {
      lVar8 = **(long **)(puVar6 + 0xa0);
      if ((ulong)((*(long **)(puVar6 + 0xa0))[1] - lVar8 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar10 = (long *)(*(long *)(lVar8 + (ulong)uVar3 * 8) + 0x20);
    }
  }
  if ((((*plVar10 == 0) || (lVar8 = *(long *)(*plVar10 + 0x10), lVar8 == 0)) ||
      (lVar8 = *(long *)(lVar8 + 0x10), lVar8 == 0)) ||
     (*(long *)(*(long *)(lVar8 + 0x18) + 0x60) != *(long *)(*(long *)(lVar8 + 0x18) + 0x58))) {
    return;
  }
  local_38 = 0;
  if (*PTR_DAT_04bcbca8 == '\0') {
    FUN_0018cb8c(&local_40);
  }
  else {
    FUN_0018c9b0(&local_40,0);
  }
  *(undefined8 *)PTR_DAT_04bcbcb0 = local_40;
  plVar10 = (long *)(lVar8 + 0x78);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  lVar11 = *(long *)(lVar8 + 0x178);
  if (lVar11 != *(long *)(lVar8 + 0x188)) {
    do {
      piVar1 = (int *)(lVar11 + 8);
      iVar9 = *piVar1;
      if (iVar9 != *piVar1) {
        ClearExclusiveLocal();
LAB_001a03b0:
        do {
          iVar2 = *piVar1;
          if (iVar2 == iVar9) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar9 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_001a0330;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar9 = iVar2;
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_001a03b0;
LAB_001a0330:
      *(undefined4 *)(lVar11 + 0x40) = 3;
      local_28 = local_40;
      FUN_0019fea0(lVar8,lVar11,&local_38,&local_28);
      *(undefined4 *)(lVar11 + 0x40) = 0;
      lVar11 = *(long *)(lVar11 + 0x10);
    } while (lVar11 != *(long *)(lVar8 + 0x188));
  }
  *(undefined1 *)(lVar8 + 0x1d0) = 0;
  (**(code **)(*(long *)(lVar8 + 0x78) + 0x20))(plVar10);
  return;
}

