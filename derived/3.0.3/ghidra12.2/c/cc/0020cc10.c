
long * FUN_0020cc10(long param_1,uint param_2)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long *plVar9;
  uint *puVar10;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  long *plVar14;
  undefined4 uVar15;
  int iVar16;
  bool bVar17;
  int iVar18;
  int *piVar19;
  undefined *local_40;
  long *local_38;
  
  if (*(code **)(param_1 + 0x508) == (code *)0x0) {
    plVar9 = (long *)FUN_00185a6c(0x70);
    if (plVar9 != (long *)0x0) {
      FUN_0020aa20(plVar9);
    }
  }
  else {
    plVar9 = (long *)(**(code **)(param_1 + 0x508))();
  }
  if (*(code **)(param_1 + 0x510) == (code *)0x0) {
    if ((param_2 & 1) == 0) {
      uVar7 = 0xc;
      if (*(char *)(param_1 + 0x4b1) != '\0') {
        uVar7 = 0x2c;
      }
      pcVar13 = *(code **)(param_1 + 0x518);
      if (pcVar13 == (code *)0x0) goto LAB_0020cd74;
    }
    else {
      uVar7 = 0xc;
      if (*PTR_DAT_04bccc70 != '\0') {
        uVar7 = 0x4c;
      }
      pcVar13 = *(code **)(param_1 + 0x518);
      if (pcVar13 == (code *)0x0) goto LAB_0020cca0;
    }
LAB_0020cd44:
    uVar15 = 1;
    if ((param_2 & 1) == 0) {
      uVar15 = 2;
    }
    uVar8 = (*pcVar13)(param_2 & 1);
    uVar11 = FUN_001fc7b4(plVar9,uVar8,uVar15,uVar7);
    if ((uVar11 & 1) == 0) {
LAB_0020cdf0:
      if (*(long *)(param_1 + 0x508) == 0) {
        FUN_001fd058(plVar9);
        (**(code **)(*plVar9 + 8))(plVar9);
        return (long *)0x0;
      }
      return plVar9;
    }
    if ((param_2 & 1) != 0) {
      return plVar9;
    }
  }
  else {
    uVar7 = (**(code **)(param_1 + 0x510))(param_2 & 1);
    pcVar13 = *(code **)(param_1 + 0x518);
    if (pcVar13 != (code *)0x0) goto LAB_0020cd44;
    if ((param_2 & 1) != 0) {
LAB_0020cca0:
      puVar1 = PTR_DAT_04bcb900;
      plVar14 = (long *)(PTR_DAT_04bcb900 + 0x90);
      if (*PTR_DAT_04bcb908 != '\0') {
        puVar10 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
        uVar4 = *puVar10;
        if (uVar4 != 0) {
          lVar12 = **(long **)(puVar1 + 0xa0);
          if ((ulong)((*(long **)(puVar1 + 0xa0))[1] - lVar12 >> 3) <= (ulong)uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                         ,0x47,0xe0000003,0);
          }
          plVar14 = (long *)(*(long *)(lVar12 + (ulong)uVar4 * 8) + 0x88);
        }
      }
      uVar11 = FUN_001fc7b4(plVar9,*(undefined2 *)(*(long *)(*plVar14 + 0x10) + 0x80),1,uVar7);
      if ((uVar11 & 1) != 0) {
        return plVar9;
      }
      goto LAB_0020cdf0;
    }
LAB_0020cd74:
    uVar11 = FUN_001fc7b4(plVar9,*(undefined2 *)
                                  (*(long *)(*(long *)(*(long *)(param_1 + 0x2f0) + 0xc0) + 0x70) +
                                  0x4c),2,uVar7);
    if ((uVar11 & 1) == 0) goto LAB_0020cdf0;
  }
  lVar12 = FUN_00185a6c(0x70);
  puVar1 = PTR_DAT_04bccc50 + 0x10;
  plVar14 = *(long **)(param_1 + 0x4c0);
  local_38 = (long *)0x0;
  if ((plVar14 != (long *)0x0) && (plVar2 = plVar14 + 1, local_38 = plVar14, (int)*plVar2 != 0)) {
    lVar6 = *plVar2;
    if ((int)lVar6 == (int)*plVar2) {
      cVar5 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar17) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_0020ce30;
      bVar17 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_0020ce30:
      bVar17 = false;
    }
    iVar16 = (int)lVar6;
    if (!bVar17) {
      do {
        lVar6 = *plVar2;
        if ((int)lVar6 == iVar16) {
          cVar5 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar17) {
            *(int *)plVar2 = iVar16 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar16 = (int)lVar6;
      } while( true );
    }
  }
  local_40 = puVar1;
  FUN_002138f0(lVar12,&local_40);
  plVar14 = local_38;
  local_40 = puVar1;
  if (local_38 == (long *)0x0) goto LAB_0020cf58;
  plVar2 = local_38 + 1;
  lVar6 = *plVar2;
  iVar16 = (int)*plVar2 + -1;
  if ((int)lVar6 == (int)*plVar2) {
    cVar5 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar17) {
      *(int *)plVar2 = iVar16;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_0020cebc;
    bVar17 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_0020cebc:
    bVar17 = false;
  }
  iVar18 = (int)lVar6;
  if (!bVar17) {
    do {
      lVar6 = *plVar2;
      iVar16 = iVar18 + -1;
      if ((int)lVar6 == iVar18) {
        cVar5 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar17) {
          *(int *)plVar2 = iVar16;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') break;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar18 = (int)lVar6;
    } while( true );
  }
  if (iVar16 != 0) goto LAB_0020cf58;
  piVar19 = (int *)((long)local_38 + 0xc);
  (**(code **)(*local_38 + 0x10))(local_38);
  iVar18 = *piVar19 + -1;
  iVar16 = *piVar19;
  if (iVar16 == *piVar19) {
    cVar5 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(piVar19,0x10);
    if (bVar17) {
      *piVar19 = iVar18;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_0020cf3c;
    bVar17 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_0020cf3c:
    bVar17 = false;
  }
  if (!bVar17) {
    do {
      iVar3 = *piVar19;
      iVar18 = iVar16 + -1;
      if (iVar3 == iVar16) {
        cVar5 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(piVar19,0x10);
        if (bVar17) {
          *piVar19 = iVar18;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') break;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar16 = iVar3;
    } while( true );
  }
  if (iVar18 == 0) {
    (**(code **)(*plVar14 + 8))(plVar14);
  }
LAB_0020cf58:
  *(long *)(lVar12 + 0x58) = plVar9[2];
  FUN_001fd07c(plVar9,lVar12,PTR_LAB_04bccc90);
  return plVar9;
}

