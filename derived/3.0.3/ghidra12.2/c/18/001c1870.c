
void FUN_001c1870(long *param_1,long param_2,short param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  ulong local_58;
  
  FUN_00187810(&local_58);
  plVar8 = *(long **)(param_2 + 8);
  plVar9 = *(long **)(param_2 + 0x18);
  if (plVar8 != plVar9) {
    do {
      if (*(char *)((long)plVar8 + 0x211) != '\0') {
        plVar9 = (long *)plVar8[6];
        lVar1 = plVar8[7];
        if (lVar1 != 0) {
          *(long **)(lVar1 + 0x30) = plVar9;
        }
        plVar8[7] = 0;
        if (plVar9 != (long *)0x0) {
          plVar9[7] = lVar1;
        }
        plVar8[6] = 0;
        if (*(long **)(param_2 + 8) == plVar8) {
          *(long **)(param_2 + 8) = plVar9;
          plVar5 = *(long **)(param_2 + 0x10);
        }
        else {
          plVar5 = *(long **)(param_2 + 0x10);
        }
        if (plVar5 == plVar8) {
          *(long *)(param_2 + 0x10) = lVar1;
        }
        *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + -1;
        plVar5 = plVar8 + 1;
        iVar7 = (int)*plVar5;
        iVar4 = (int)*plVar5 + -1;
        if (iVar7 != (int)*plVar5) {
          ClearExclusiveLocal();
LAB_001c1a10:
          do {
            lVar1 = *plVar5;
            iVar4 = iVar7 + -1;
            if ((int)lVar1 == iVar7) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar3) {
                *(int *)plVar5 = iVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto joined_r0x001c19dc;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar7 = (int)lVar1;
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *(int *)plVar5 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_001c1a10;
joined_r0x001c19dc:
        if ((iVar4 == 0) && (*(char *)((long)plVar8 + 0xc) == '\0')) {
          *(undefined1 *)((long)plVar8 + 0xc) = 1;
          (**(code **)(*plVar8 + 8))(plVar8);
        }
        goto LAB_001c18c4;
      }
      if (*(short *)((long)plVar8 + 0xac) == param_3) {
        iVar7 = (int)plVar8[0x44];
        if (iVar7 - 1U < 2) {
          if ((ulong)plVar8[0x45] <= local_58) {
            *(undefined4 *)(plVar8 + 0x44) = 3;
          }
          goto LAB_001c18c0;
        }
        if (iVar7 != 3) {
          if (iVar7 == 0) {
            if ((ulong)plVar8[0x45] <= local_58) {
              *(undefined4 *)(plVar8 + 0x44) = 2;
              *(undefined1 *)(plVar8 + 0x42) = 1;
              plVar5 = plVar8 + 1;
              *(short *)((long)plVar8 + 0x202) = *(short *)((long)plVar8 + 0x202) + 1;
              iVar7 = (int)*plVar5;
              if (iVar7 != (int)*plVar5) {
                ClearExclusiveLocal();
LAB_001c1b00:
                do {
                  lVar1 = *plVar5;
                  if ((int)lVar1 == iVar7) {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                    if (bVar3) {
                      *(int *)plVar5 = iVar7 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                    if (cVar2 == '\0') goto LAB_001c1a84;
                  }
                  else {
                    ClearExclusiveLocal();
                  }
                  iVar7 = (int)lVar1;
                } while( true );
              }
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar3) {
                *(int *)plVar5 = (int)*plVar5 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 != '\0') goto LAB_001c1b00;
LAB_001c1a84:
              plVar9 = (long *)plVar8[6];
              lVar1 = plVar8[7];
              if (lVar1 != 0) {
                *(long **)(lVar1 + 0x30) = plVar9;
              }
              plVar8[7] = 0;
              if (plVar9 != (long *)0x0) {
                plVar9[7] = lVar1;
              }
              plVar8[6] = 0;
              if (*(long **)(param_2 + 8) == plVar8) {
                *(long **)(param_2 + 8) = plVar9;
                plVar6 = *(long **)(param_2 + 0x10);
              }
              else {
                plVar6 = *(long **)(param_2 + 0x10);
              }
              if (plVar6 == plVar8) {
                *(long *)(param_2 + 0x10) = lVar1;
              }
              *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + -1;
              iVar7 = (int)*plVar5;
              iVar4 = (int)*plVar5 + -1;
              if (iVar7 != (int)*plVar5) {
                ClearExclusiveLocal();
LAB_001c1bb0:
                do {
                  lVar1 = *plVar5;
                  iVar4 = iVar7 + -1;
                  if ((int)lVar1 == iVar7) {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                    if (bVar3) {
                      *(int *)plVar5 = iVar4;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                    if (cVar2 == '\0') goto LAB_001c1b34;
                  }
                  else {
                    ClearExclusiveLocal();
                  }
                  iVar7 = (int)lVar1;
                } while( true );
              }
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar3) {
                *(int *)plVar5 = iVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 != '\0') goto LAB_001c1bb0;
LAB_001c1b34:
              if ((iVar4 == 0) && (*(char *)((long)plVar8 + 0xc) == '\0')) {
                *(undefined1 *)((long)plVar8 + 0xc) = 1;
                (**(code **)(*plVar8 + 8))(plVar8);
              }
              (**(code **)(*param_1 + 0x20))(param_1,plVar8,0);
              iVar7 = (int)*plVar5;
              iVar4 = (int)plVar8[1] + -1;
              if (iVar7 != (int)plVar8[1]) {
                ClearExclusiveLocal();
LAB_001c1c00:
                do {
                  lVar1 = *plVar5;
                  iVar4 = iVar7 + -1;
                  if ((int)lVar1 == iVar7) {
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                    if (bVar3) {
                      *(int *)plVar5 = iVar4;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                    if (cVar2 == '\0') goto joined_r0x001c19dc;
                  }
                  else {
                    ClearExclusiveLocal();
                  }
                  iVar7 = (int)lVar1;
                } while( true );
              }
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar3) {
                *(int *)plVar5 = iVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 != '\0') goto LAB_001c1c00;
              goto joined_r0x001c19dc;
            }
            goto LAB_001c18c0;
          }
          plVar9 = plVar8;
        }
      }
      else {
LAB_001c18c0:
        plVar9 = (long *)plVar8[6];
      }
LAB_001c18c4:
      plVar8 = plVar9;
      plVar9 = *(long **)(param_2 + 0x18);
    } while (plVar8 != plVar9);
  }
  return;
}

