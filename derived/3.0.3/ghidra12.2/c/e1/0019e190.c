
void FUN_0019e190(long *param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  
  lVar14 = param_1[3];
  *param_1 = (long)(PTR_DAT_04bcc1d0 + 0x10);
  plVar12 = (long *)(lVar14 + 8);
  (**(code **)(*plVar12 + 0x10))(plVar12);
  if (*(int *)(lVar14 + 0x50) == 0) {
    *(undefined4 *)(lVar14 + 0x50) = 1;
    (**(code **)(*(long *)(lVar14 + 8) + 0x20))(plVar12);
    lVar5 = *(long *)(lVar14 + 0x60);
    if (lVar5 != *(long *)(lVar14 + 0x58)) {
      lVar5 = *(long *)(lVar14 + 0x58);
      uVar8 = 0;
      uVar15 = 1;
      do {
        FUN_00189140(*(undefined8 *)(lVar5 + uVar8 * 8),0xffffffff);
        lVar5 = *(long *)(lVar14 + 0x58);
        plVar13 = *(long **)(lVar5 + uVar8 * 8);
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 8))();
          lVar5 = *(long *)(lVar14 + 0x58);
        }
        bVar4 = uVar15 < (ulong)(*(long *)(lVar14 + 0x60) - lVar5 >> 3);
        uVar8 = uVar15;
        uVar15 = (ulong)((int)uVar15 + 1);
      } while (bVar4);
    }
    *(long *)(lVar14 + 0x60) = lVar5;
    (**(code **)(*(long *)(lVar14 + 8) + 0x10))(plVar12);
    *(undefined4 *)(lVar14 + 0x50) = 2;
    (**(code **)(*plVar12 + 0x20))(plVar12);
    plVar12 = (long *)param_1[3];
  }
  else {
    (**(code **)(*plVar12 + 0x20))(plVar12);
    plVar12 = (long *)param_1[3];
  }
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 8))();
  }
  if (param_1[0x32] != 0) {
    do {
      plVar13 = (long *)param_1[0x2f];
      (**(code **)(param_1[0xf] + 0x10))(param_1 + 0xf);
      plVar12 = (long *)param_1[0x2f];
      if (plVar12 != plVar13 && plVar12 != (long *)param_1[0x31]) {
        do {
          plVar12 = (long *)plVar12[2];
        } while (plVar12 != (long *)param_1[0x31] && plVar12 != plVar13);
      }
      lVar14 = plVar12[2];
      lVar5 = plVar12[3];
      if (lVar5 != 0) {
        *(long *)(lVar5 + 0x10) = lVar14;
      }
      plVar12[3] = 0;
      if (lVar14 != 0) {
        *(long *)(lVar14 + 0x18) = lVar5;
      }
      plVar12[2] = 0;
      if ((long *)param_1[0x2f] == plVar12) {
        param_1[0x2f] = lVar14;
        plVar10 = (long *)param_1[0x30];
      }
      else {
        plVar10 = (long *)param_1[0x30];
      }
      if (plVar10 == plVar12) {
        param_1[0x30] = lVar5;
      }
      param_1[0x32] = param_1[0x32] + -1;
      plVar12 = plVar13 + 1;
      iVar9 = (int)*plVar12;
      iVar6 = (int)*plVar12 + -1;
      if (iVar9 != (int)*plVar12) {
        ClearExclusiveLocal();
LAB_0019e310:
        do {
          lVar14 = *plVar12;
          iVar6 = iVar9 + -1;
          if ((int)lVar14 == iVar9) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar4) {
              *(int *)plVar12 = iVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_0019e2dc;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar9 = (int)lVar14;
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *(int *)plVar12 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_0019e310;
LAB_0019e2dc:
      if ((iVar6 == 0) && (*(char *)((long)plVar13 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar13 + 0xc) = 1;
        (**(code **)(*plVar13 + 8))(plVar13);
      }
      (**(code **)(param_1[0xf] + 0x20))(param_1 + 0xf);
    } while (param_1[0x32] != 0);
  }
  if ((long *)param_1[0x37] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x37] + 8))();
  }
  lVar14 = param_1[0x31];
  param_1[0x2e] = (long)&PTR_LAB_0483a1c0;
  if (param_1[0x2f] != lVar14) {
    lVar7 = param_1[0x32];
    lVar5 = param_1[0x2f];
    do {
      lVar1 = *(long *)(lVar5 + 0x10);
      lVar2 = *(long *)(lVar5 + 0x18);
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = lVar1;
      }
      *(undefined8 *)(lVar5 + 0x18) = 0;
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x18) = lVar2;
      }
      *(undefined8 *)(lVar5 + 0x10) = 0;
      if (param_1[0x2f] == lVar5) {
        param_1[0x2f] = lVar1;
        lVar11 = param_1[0x30];
      }
      else {
        lVar11 = param_1[0x30];
      }
      if (lVar11 == lVar5) {
        param_1[0x30] = lVar2;
      }
      lVar7 = lVar7 + -1;
      lVar5 = lVar1;
    } while (lVar1 != lVar14);
    param_1[0x32] = lVar7;
  }
  FUN_001a2d24(param_1 + 0x2b,param_1[0x2c]);
  param_1[0x26] = (long)&PTR_LAB_0483a1c0;
  lVar14 = param_1[0x29];
  if (param_1[0x27] != lVar14) {
    lVar7 = param_1[0x2a];
    lVar5 = param_1[0x27];
    do {
      lVar1 = *(long *)(lVar5 + 0x10);
      lVar2 = *(long *)(lVar5 + 0x18);
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = lVar1;
      }
      *(undefined8 *)(lVar5 + 0x18) = 0;
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x18) = lVar2;
      }
      *(undefined8 *)(lVar5 + 0x10) = 0;
      if (param_1[0x27] == lVar5) {
        param_1[0x27] = lVar1;
        lVar11 = param_1[0x28];
      }
      else {
        lVar11 = param_1[0x28];
      }
      if (lVar11 == lVar5) {
        param_1[0x28] = lVar2;
      }
      lVar7 = lVar7 + -1;
      lVar5 = lVar1;
    } while (lVar1 != lVar14);
    param_1[0x2a] = lVar7;
  }
  param_1[0x21] = (long)&PTR_LAB_0483a1c0;
  lVar14 = param_1[0x24];
  if (param_1[0x22] != lVar14) {
    lVar7 = param_1[0x25];
    lVar5 = param_1[0x22];
    do {
      lVar1 = *(long *)(lVar5 + 0x10);
      lVar2 = *(long *)(lVar5 + 0x18);
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = lVar1;
      }
      *(undefined8 *)(lVar5 + 0x18) = 0;
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x18) = lVar2;
      }
      *(undefined8 *)(lVar5 + 0x10) = 0;
      if (param_1[0x22] == lVar5) {
        param_1[0x22] = lVar1;
        lVar11 = param_1[0x23];
      }
      else {
        lVar11 = param_1[0x23];
      }
      if (lVar11 == lVar5) {
        param_1[0x23] = lVar2;
      }
      lVar7 = lVar7 + -1;
      lVar5 = lVar1;
    } while (lVar1 != lVar14);
    param_1[0x25] = lVar7;
  }
  FUN_0018ac30(param_1 + 0x18);
  FUN_0018ac30(param_1 + 0xf);
  FUN_0018ac30(param_1 + 6);
  FUN_0018ea90(param_1 + 4);
  return;
}

