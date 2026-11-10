
void FUN_001e9dd0(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  char cVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int *piVar15;
  undefined1 auStack_140 [8];
  undefined **local_138;
  long *local_130;
  undefined **local_128;
  long *local_120;
  undefined1 local_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [144];
  undefined **local_78;
  long *local_70;
  char local_68;
  
  puVar13 = *(undefined8 **)(param_1 + 0x50);
  if (puVar13 != *(undefined8 **)(param_1 + 0x58)) {
    plVar1 = (long *)(param_1 + 0xb8);
    do {
      puVar14 = puVar13;
      FUN_001e9a30(auStack_110,param_1,puVar14);
      plVar10 = local_70;
      if (local_68 != '\0') {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        lVar9 = FUN_001ed690(param_1 + 0x38,auStack_108);
        local_138 = &PTR_LAB_0483cdf8;
        local_130 = (long *)0x0;
        if (param_1 + 0x40 == lVar9) {
          local_118 = 0;
          local_120 = (long *)0x0;
        }
        else {
          plVar10 = *(long **)(lVar9 + 0xc0);
          if (plVar10 != (long *)0x0) {
            plVar3 = plVar10 + 1;
            local_130 = plVar10;
            if ((int)*plVar3 != 0) {
              iVar11 = (int)*plVar3;
              if (iVar11 != (int)*plVar3) {
                ClearExclusiveLocal();
LAB_001e9f50:
                do {
                  lVar7 = *plVar3;
                  if ((int)lVar7 == iVar11) {
                    cVar6 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                    if (bVar8) {
                      *(int *)plVar3 = iVar11 + 1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') goto LAB_001e9ef0;
                  }
                  else {
                    ClearExclusiveLocal();
                  }
                  iVar11 = (int)lVar7;
                } while( true );
              }
              cVar6 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar8) {
                *(int *)plVar3 = (int)*plVar3 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 != '\0') goto LAB_001e9f50;
            }
          }
LAB_001e9ef0:
          local_120 = (long *)0x0;
          plVar10 = *(long **)(lVar9 + 0xd0);
          if (plVar10 != (long *)0x0) {
            plVar3 = plVar10 + 1;
            local_120 = plVar10;
            if ((int)*plVar3 != 0) {
              iVar11 = (int)*plVar3;
              if (iVar11 != (int)*plVar3) {
                ClearExclusiveLocal();
LAB_001ea000:
                do {
                  lVar7 = *plVar3;
                  if ((int)lVar7 == iVar11) {
                    cVar6 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                    if (bVar8) {
                      *(int *)plVar3 = iVar11 + 1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') goto LAB_001e9f84;
                  }
                  else {
                    ClearExclusiveLocal();
                  }
                  iVar11 = (int)lVar7;
                } while( true );
              }
              cVar6 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar8) {
                *(int *)plVar3 = (int)*plVar3 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 != '\0') goto LAB_001ea000;
            }
          }
LAB_001e9f84:
          local_118 = *(undefined1 *)(lVar9 + 0xd8);
        }
        local_128 = &PTR_LAB_0483cd28;
        (**(code **)(*(long *)(param_1 + 0xb8) + 0x20))(plVar1);
        FUN_001ea3e0(param_1,auStack_140,auStack_110);
        plVar10 = local_120;
        local_128 = &PTR_LAB_0483cd28;
        if (local_120 != (long *)0x0) {
          plVar3 = local_120 + 1;
          iVar11 = (int)*plVar3;
          iVar12 = (int)*plVar3 + -1;
          if (iVar11 != (int)*plVar3) {
            ClearExclusiveLocal();
LAB_001ea084:
            do {
              lVar9 = *plVar3;
              iVar12 = iVar11 + -1;
              if ((int)lVar9 == iVar11) {
                cVar6 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar8) {
                  *(int *)plVar3 = iVar12;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') goto LAB_001ea034;
              }
              else {
                ClearExclusiveLocal();
              }
              iVar11 = (int)lVar9;
            } while( true );
          }
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar8) {
            *(int *)plVar3 = iVar12;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_001ea084;
LAB_001ea034:
          if (iVar12 == 0) {
            piVar15 = (int *)((long)local_120 + 0xc);
            (**(code **)(*local_120 + 0x10))(local_120);
            iVar12 = *piVar15 + -1;
            iVar11 = *piVar15;
            if (iVar11 != *piVar15) {
              ClearExclusiveLocal();
LAB_001ea124:
              do {
                iVar5 = *piVar15;
                iVar12 = iVar11 + -1;
                if (iVar5 == iVar11) {
                  cVar6 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar15,0x10);
                  if (bVar8) {
                    *piVar15 = iVar12;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                  if (cVar6 == '\0') goto LAB_001ea0b8;
                }
                else {
                  ClearExclusiveLocal();
                }
                iVar11 = iVar5;
              } while( true );
            }
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar8) {
              *piVar15 = iVar12;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 != '\0') goto LAB_001ea124;
LAB_001ea0b8:
            if (iVar12 == 0) {
              (**(code **)(*plVar10 + 8))(plVar10);
            }
          }
        }
        plVar3 = local_130;
        local_138 = &PTR_LAB_0483cdf8;
        plVar10 = local_70;
        if (local_130 != (long *)0x0) {
          plVar4 = local_130 + 1;
          iVar11 = (int)*plVar4;
          iVar12 = (int)*plVar4 + -1;
          if (iVar11 != (int)*plVar4) {
            ClearExclusiveLocal();
LAB_001ea1b0:
            do {
              lVar9 = *plVar4;
              iVar12 = iVar11 + -1;
              if ((int)lVar9 == iVar11) {
                cVar6 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                if (bVar8) {
                  *(int *)plVar4 = iVar12;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') goto LAB_001ea158;
              }
              else {
                ClearExclusiveLocal();
              }
              iVar11 = (int)lVar9;
            } while( true );
          }
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar8) {
            *(int *)plVar4 = iVar12;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_001ea1b0;
LAB_001ea158:
          if (iVar12 == 0) {
            piVar15 = (int *)((long)local_130 + 0xc);
            (**(code **)(*local_130 + 0x10))(local_130);
            iVar12 = *piVar15 + -1;
            iVar11 = *piVar15;
            if (iVar11 != *piVar15) {
              ClearExclusiveLocal();
LAB_001ea240:
              do {
                iVar5 = *piVar15;
                iVar12 = iVar11 + -1;
                if (iVar5 == iVar11) {
                  cVar6 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(piVar15,0x10);
                  if (bVar8) {
                    *piVar15 = iVar12;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                  if (cVar6 == '\0') goto LAB_001ea1e4;
                }
                else {
                  ClearExclusiveLocal();
                }
                iVar11 = iVar5;
              } while( true );
            }
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar8) {
              *piVar15 = iVar12;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 != '\0') goto LAB_001ea240;
LAB_001ea1e4:
            plVar10 = local_70;
            if (iVar12 == 0) {
              (**(code **)(*plVar3 + 8))(plVar3);
              plVar10 = local_70;
            }
          }
        }
      }
      local_78 = &PTR_LAB_0483cd28;
      local_70 = plVar10;
      if (plVar10 != (long *)0x0) {
        local_78 = &PTR_LAB_0483cd28;
        plVar3 = plVar10 + 1;
        iVar11 = (int)*plVar3;
        iVar12 = (int)*plVar3 + -1;
        if (iVar11 != (int)*plVar3) {
          ClearExclusiveLocal();
LAB_001ea2d0:
          do {
            lVar9 = *plVar3;
            iVar12 = iVar11 + -1;
            if ((int)lVar9 == iVar11) {
              cVar6 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar8) {
                *(int *)plVar3 = iVar12;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_001ea27c;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar11 = (int)lVar9;
          } while( true );
        }
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar8) {
          *(int *)plVar3 = iVar12;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_001ea2d0;
LAB_001ea27c:
        if (iVar12 == 0) {
          piVar15 = (int *)((long)plVar10 + 0xc);
          (**(code **)(*plVar10 + 0x10))(plVar10);
          iVar12 = *piVar15 + -1;
          iVar11 = *piVar15;
          if (iVar11 != *piVar15) {
            ClearExclusiveLocal();
LAB_001ea330:
            do {
              iVar5 = *piVar15;
              iVar12 = iVar11 + -1;
              if (iVar5 == iVar11) {
                cVar6 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar15,0x10);
                if (bVar8) {
                  *piVar15 = iVar12;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') goto LAB_001ea304;
              }
              else {
                ClearExclusiveLocal();
              }
              iVar11 = iVar5;
            } while( true );
          }
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar8) {
            *piVar15 = iVar12;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_001ea330;
LAB_001ea304:
          if (iVar12 == 0) {
            (**(code **)(*plVar10 + 8))(plVar10);
          }
        }
      }
      FUN_001e1868(auStack_108);
      puVar2 = puVar14 + 2;
      puVar13 = puVar2;
    } while (puVar2 != *(undefined8 **)(param_1 + 0x58));
    puVar13 = *(undefined8 **)(param_1 + 0x50);
    if (puVar2 != puVar13) {
      do {
        (**(code **)*puVar14)(puVar14);
        bVar8 = puVar14 != puVar13;
        puVar14 = puVar14 + -2;
      } while (bVar8);
    }
  }
  *(undefined8 **)(param_1 + 0x58) = puVar13;
  return;
}

