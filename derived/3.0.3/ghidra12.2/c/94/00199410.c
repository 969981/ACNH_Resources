
void FUN_00199410(long param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  long *plVar8;
  uint *puVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined *local_58;
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined8 uStack_38;
  
  plVar8 = (long *)FUN_00185a6c(0x88);
  local_50[0] = 0;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  local_40 = local_50;
  uStack_38 = 0x10;
  local_58 = puVar1;
  FUN_0018b070(&local_58,"CallContextRegister::CheckExpiredCalls",0xffffffffffffffff);
  *plVar8 = (long)(PTR_DAT_04bcbc48 + 0x10);
  *(undefined4 *)(plVar8 + 1) = 1;
  *(undefined1 *)((long)plVar8 + 0xc) = 0;
  plVar8[2] = 0;
  plVar8[3] = 0;
  *(undefined4 *)(plVar8 + 6) = 0;
  *(undefined4 *)(plVar8 + 7) = 0;
  *(undefined4 *)(plVar8 + 9) = 0;
  plVar8[5] = 0;
  *(undefined1 *)(plVar8 + 4) = 0;
  *(undefined4 *)((long)plVar8 + 100) = 0;
  plVar8[8] = 1;
  *(undefined2 *)(plVar8 + 0xc) = 0x100;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  *plVar8 = (long)(PTR_DAT_04bcc0a8 + 0x10);
  puVar7 = PTR_LAB_04bcc0b0;
  *(undefined4 *)(plVar8 + 0x10) = 0;
  plVar8[0xd] = (long)puVar7;
  plVar8[0xe] = 0;
  plVar8[0xf] = param_1;
  *(long **)(param_1 + 0x80) = plVar8;
  local_58 = puVar1;
  FUN_0018b1a0(&local_58);
  puVar1 = PTR_DAT_04bcc0b8;
  lVar10 = *(long *)(param_1 + 0x80);
  *(undefined1 *)(lVar10 + 0x61) = 0;
  *(undefined4 *)(lVar10 + 100) = *(undefined4 *)(puVar1 + 0x20);
  piVar2 = (int *)(lVar10 + 8);
  iVar11 = *piVar2;
  if (iVar11 == *piVar2) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar6) {
      *piVar2 = *piVar2 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') {
LAB_00199538:
      puVar1 = PTR_DAT_04bcb900;
      plVar8 = (long *)(PTR_DAT_04bcb900 + 0x28);
      if (*PTR_DAT_04bcb908 != '\0') {
        puVar9 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
        uVar4 = *puVar9;
        if (uVar4 != 0) {
          lVar10 = **(long **)(puVar1 + 0xa0);
          if ((ulong)((*(long **)(puVar1 + 0xa0))[1] - lVar10 >> 3) <= (ulong)uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                         ,0x47,0xe0000003,0);
          }
          plVar8 = (long *)(*(long *)(lVar10 + (ulong)uVar4 * 8) + 0x20);
        }
      }
      if ((*plVar8 == 0) || (lVar10 = *(long *)(*plVar8 + 0x10), lVar10 == 0)) {
        lVar10 = 0;
        uVar12 = *(undefined8 *)(param_1 + 0x80);
        cVar5 = *PTR_DAT_04bcbd30;
      }
      else {
        lVar10 = *(long *)(lVar10 + 0x10);
        uVar12 = *(undefined8 *)(param_1 + 0x80);
        cVar5 = *PTR_DAT_04bcbd30;
      }
      if (cVar5 == '\0') {
        FUN_0019eaa0(lVar10,uVar12,0);
        return;
      }
      plVar8 = (long *)(lVar10 + 0xc0);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      plVar13 = (long *)(lVar10 + 0x30);
      (**(code **)(*plVar13 + 0x10))(plVar13);
      FUN_0019eaa0(lVar10,uVar12,0);
      (**(code **)(*plVar13 + 0x20))(plVar13);
      (**(code **)(*plVar8 + 0x20))(plVar8);
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    iVar3 = *piVar2;
    if (iVar3 == iVar11) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') goto LAB_00199538;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = iVar3;
  } while( true );
}

