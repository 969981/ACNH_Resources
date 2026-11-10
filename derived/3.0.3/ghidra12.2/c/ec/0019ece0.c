
undefined8 FUN_0019ece0(long param_1,ulong *param_2)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  
  puVar3 = PTR_DAT_04bcbd30;
  if (*(long **)(param_1 + 0x158) == (long *)(param_1 + 0x160)) {
    uVar14 = 0;
  }
  else {
    uVar14 = 0;
    plVar11 = *(long **)(param_1 + 0x158);
    do {
      plVar12 = (long *)plVar11[5];
      if ((((*(char *)(param_1 + 0x198) == '\0') ||
           (uVar5 = (**(code **)(*plVar12 + 0x40))(plVar12), (uVar5 & 1) == 0)) &&
          ((int)plVar12[8] != 5)) && (*param_2 < (ulong)plVar11[4])) break;
      plVar6 = (long *)plVar11[1];
      plVar8 = plVar11;
      plVar9 = plVar6;
      if (plVar6 == (long *)0x0) {
        do {
          plVar13 = (long *)plVar8[2];
          bVar4 = (long *)*plVar13 != plVar8;
          plVar8 = plVar13;
        } while (bVar4);
      }
      else {
        do {
          plVar13 = plVar9;
          plVar9 = (long *)*plVar13;
        } while ((long *)*plVar13 != (long *)0x0);
      }
      plVar8 = plVar11;
      if (plVar6 == (long *)0x0) {
        do {
          plVar9 = (long *)plVar8[2];
          bVar4 = (long *)*plVar9 != plVar8;
          plVar8 = plVar9;
        } while (bVar4);
      }
      else {
        do {
          plVar9 = plVar6;
          plVar6 = (long *)*plVar9;
        } while ((long *)*plVar9 != (long *)0x0);
      }
      if (*(long **)(param_1 + 0x158) == plVar11) {
        *(long **)(param_1 + 0x158) = plVar9;
      }
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + -1;
      FUN_00192390(*(undefined8 *)(param_1 + 0x160),plVar11);
      FUN_00187e4c(plVar11);
      if ((int)plVar12[8] == 1) {
        cVar2 = *puVar3;
        *(undefined4 *)(plVar12 + 8) = 3;
        if (cVar2 == '\0') {
          FUN_0019eaa0(param_1,plVar12,0);
        }
        else {
          (**(code **)(*(long *)(param_1 + 0xc0) + 0x10))(param_1 + 0xc0);
          (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(param_1 + 0x30);
          FUN_0019eaa0(param_1,plVar12,0);
          (**(code **)(*(long *)(param_1 + 0x30) + 0x20))(param_1 + 0x30);
          (**(code **)(*(long *)(param_1 + 0xc0) + 0x20))(param_1 + 0xc0);
        }
        uVar14 = 1;
      }
      else {
        plVar11 = plVar12 + 1;
        iVar10 = (int)*plVar11;
        iVar7 = (int)*plVar11 + -1;
        if (iVar10 != (int)*plVar11) {
          ClearExclusiveLocal();
LAB_0019eef4:
          do {
            lVar1 = *plVar11;
            iVar7 = iVar10 + -1;
            if ((int)lVar1 == iVar10) {
              cVar2 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar4) {
                *(int *)plVar11 = iVar7;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_0019eebc;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar10 = (int)lVar1;
          } while( true );
        }
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *(int *)plVar11 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_0019eef4;
LAB_0019eebc:
        if ((iVar7 == 0) && (*(char *)((long)plVar12 + 0xc) == '\0')) {
          *(undefined1 *)((long)plVar12 + 0xc) = 1;
          (**(code **)(*plVar12 + 8))(plVar12);
        }
      }
      plVar11 = plVar13;
    } while (plVar13 != (long *)(param_1 + 0x160));
  }
  plVar11 = *(long **)(param_1 + 0x138);
  if (plVar11 != *(long **)(param_1 + 0x148)) {
    do {
      iVar10 = (int)plVar11[8];
      if (iVar10 == 2) {
        (**(code **)(*plVar11 + 0x20))(plVar11);
        iVar10 = (int)plVar11[8];
      }
      if (iVar10 == 2) {
        plVar12 = (long *)plVar11[2];
      }
      else if (iVar10 == 5) {
        plVar12 = (long *)plVar11[2];
        lVar1 = plVar11[3];
        if (lVar1 != 0) {
          *(long **)(lVar1 + 0x10) = plVar12;
        }
        plVar11[3] = 0;
        if (plVar12 != (long *)0x0) {
          plVar12[3] = lVar1;
        }
        plVar11[2] = 0;
        if (*(long **)(param_1 + 0x138) == plVar11) {
          *(long **)(param_1 + 0x138) = plVar12;
          plVar6 = *(long **)(param_1 + 0x140);
        }
        else {
          plVar6 = *(long **)(param_1 + 0x140);
        }
        if (plVar6 == plVar11) {
          *(long *)(param_1 + 0x140) = lVar1;
        }
        *(long *)(param_1 + 0x150) = *(long *)(param_1 + 0x150) + -1;
        plVar6 = plVar11 + 1;
        iVar10 = (int)*plVar6;
        iVar7 = (int)*plVar6 + -1;
        if (iVar10 != (int)*plVar6) {
          ClearExclusiveLocal();
LAB_0019f100:
          do {
            lVar1 = *plVar6;
            iVar7 = iVar10 + -1;
            if ((int)lVar1 == iVar10) {
              cVar2 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar4) {
                *(int *)plVar6 = iVar7;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_0019f0c4;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar10 = (int)lVar1;
          } while( true );
        }
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *(int *)plVar6 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_0019f100;
LAB_0019f0c4:
        if ((iVar7 == 0) && (*(char *)((long)plVar11 + 0xc) == '\0')) {
          *(undefined1 *)((long)plVar11 + 0xc) = 1;
          (**(code **)(*plVar11 + 8))(plVar11);
        }
      }
      else if (iVar10 == 3) {
        plVar12 = (long *)plVar11[2];
        lVar1 = plVar11[3];
        if (lVar1 != 0) {
          *(long **)(lVar1 + 0x10) = plVar12;
        }
        plVar11[3] = 0;
        if (plVar12 != (long *)0x0) {
          plVar12[3] = lVar1;
        }
        plVar11[2] = 0;
        if (*(long **)(param_1 + 0x138) == plVar11) {
          *(long **)(param_1 + 0x138) = plVar12;
          if (*(long **)(param_1 + 0x140) != plVar11) goto LAB_0019efd4;
LAB_0019f150:
          *(long *)(param_1 + 0x140) = lVar1;
          *(long *)(param_1 + 0x150) = *(long *)(param_1 + 0x150) + -1;
          cVar2 = *puVar3;
        }
        else {
          if (*(long **)(param_1 + 0x140) == plVar11) goto LAB_0019f150;
LAB_0019efd4:
          *(long *)(param_1 + 0x150) = *(long *)(param_1 + 0x150) + -1;
          cVar2 = *puVar3;
        }
        if (cVar2 == '\0') {
          FUN_0019eaa0(param_1,plVar11,0);
          uVar14 = 1;
        }
        else {
          (**(code **)(*(long *)(param_1 + 0xc0) + 0x10))(param_1 + 0xc0);
          (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(param_1 + 0x30);
          FUN_0019eaa0(param_1,plVar11,0);
          (**(code **)(*(long *)(param_1 + 0x30) + 0x20))(param_1 + 0x30);
          (**(code **)(*(long *)(param_1 + 0xc0) + 0x20))(param_1 + 0xc0);
          uVar14 = 1;
        }
      }
      else {
        plVar12 = plVar11;
      }
      plVar11 = plVar12;
    } while (plVar11 != *(long **)(param_1 + 0x148));
  }
  return uVar14;
}

