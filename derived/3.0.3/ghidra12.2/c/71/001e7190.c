
ulong FUN_001e7190(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  bool bVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  int *piVar16;
  long *plVar17;
  undefined1 auVar18 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar7 = param_3;
  if (*(char *)(param_1 + 0xb0) == '\0') {
    plVar17 = (long *)(param_1 + 0xb8);
    (**(code **)(*plVar17 + 0x10))(plVar17);
    *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_1 + 0xb1);
    (**(code **)(*plVar17 + 0x20))(plVar17);
    if (*(char *)(param_1 + 0xb0) == '\0') {
      if ((param_6 & 1) == 0) {
        FUN_001878b0(1);
      }
      return 1;
    }
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x88) + 0x10);
  if (*(long *)(lVar6 + 0x30) == 0) {
    uVar8 = 100;
    if ((param_6 & 1) != 0) {
      uVar8 = 0;
    }
    FUN_001e84c0(param_1,uVar8);
    lVar6 = *(long *)(*(long *)(param_1 + 0x88) + 0x10);
    if (*(long *)(lVar6 + 0x30) == 0) {
      return 1;
    }
  }
  uVar13 = *(ulong *)(lVar6 + 0x38);
  uVar10 = 0;
  if (uVar13 != 0) {
    uVar10 = *(ulong *)(lVar6 + 0x28) / uVar13;
  }
  uVar10 = *(ulong *)(lVar6 + 0x28) - uVar10 * uVar13;
  if ((ulong)(*(long *)(lVar6 + 0x10) - *(long *)(lVar6 + 8) >> 4) <= uVar10) {
    auVar18 = FUN_001ed150();
    lVar6 = auVar18._8_8_;
    local_50 = 0x1e741c;
    local_58 = 0;
    uStack_48 = param_5;
    uVar10 = FUN_001e708c(auVar18._0_8_,*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 0x28),
                          *(long *)(lVar6 + 0x20) - *(long *)(lVar6 + 0x28),&local_58,uVar7,0);
    if ((int)uVar10 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = local_58;
      return uVar10;
    }
    return uVar10;
  }
  uVar13 = FUN_001e9290(param_1,*(long *)(lVar6 + 8) + uVar10 * 0x10,param_2,param_3,param_4,param_5
                        ,param_6 | 1);
  lVar14 = *(long *)(*(long *)(param_1 + 0x88) + 0x10);
  lVar6 = *(long *)(lVar14 + 0x28);
  uVar10 = lVar6 + 1;
  *(ulong *)(lVar14 + 0x28) = uVar10;
  puVar15 = (undefined8 *)(*(long *)(lVar14 + 8) + lVar6 * 0x10 + 8);
  plVar17 = (long *)*puVar15;
  if (plVar17 == (long *)0x0) goto LAB_001e73b4;
  plVar1 = plVar17 + 1;
  iVar12 = (int)*plVar1;
  iVar9 = (int)*plVar1 + -1;
  if (iVar12 != (int)*plVar1) {
    ClearExclusiveLocal();
LAB_001e7320:
    do {
      lVar6 = *plVar1;
      iVar9 = iVar12 + -1;
      if ((int)lVar6 == iVar12) {
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *(int *)plVar1 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') goto LAB_001e72cc;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar12 = (int)lVar6;
    } while( true );
  }
  cVar4 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar11) {
    *(int *)plVar1 = iVar9;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 != '\0') goto LAB_001e7320;
LAB_001e72cc:
  if (iVar9 == 0) {
    piVar16 = (int *)((long)plVar17 + 0xc);
    (**(code **)(*plVar17 + 0x10))(plVar17);
    iVar9 = *piVar16 + -1;
    iVar12 = *piVar16;
    if (iVar12 == *piVar16) {
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar11) {
        *piVar16 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_001e7390;
      bVar11 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_001e7390:
      bVar11 = false;
    }
    if (!bVar11) {
      do {
        iVar2 = *piVar16;
        iVar9 = iVar12 + -1;
        if (iVar2 == iVar12) {
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar11) {
            *piVar16 = iVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar12 = iVar2;
      } while( true );
    }
    if (iVar9 == 0) {
      (**(code **)(*plVar17 + 8))(plVar17);
    }
  }
  uVar10 = *(ulong *)(lVar14 + 0x28);
  *puVar15 = 0;
LAB_001e73b4:
  uVar3 = *(ulong *)(lVar14 + 0x38);
  uVar5 = 0;
  if (uVar3 != 0) {
    uVar5 = uVar10 / uVar3;
  }
  *(ulong *)(lVar14 + 0x28) = uVar10 - uVar5 * uVar3;
  *(long *)(lVar14 + 0x30) = *(long *)(lVar14 + 0x30) + -1;
  return uVar13 & 0xffffffff;
}

