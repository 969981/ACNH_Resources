
int FUN_001e9290(long param_1,long param_2,undefined1 *param_3,ulong param_4,ulong *param_5,
                long param_6,undefined4 param_7)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  int *piVar11;
  ulong uVar12;
  undefined **local_680;
  long *local_678;
  long local_670;
  undefined1 auStack_666 [1366];
  undefined **local_110;
  long *local_108;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [128];
  undefined4 local_70;
  undefined **local_68;
  long *local_60;
  char local_58;
  ushort local_44 [2];
  
  if (param_4 < 0x554) {
    return 1;
  }
  FUN_001e9a30(auStack_100);
  if (local_58 == '\0') {
LAB_001e98a4:
    iVar5 = 4;
    plVar6 = local_60;
  }
  else {
    if (*(char *)(param_1 + 0x100) != '\0') {
      local_670 = 0;
      local_44[0] = 0;
      if (local_60 != (long *)0x0) {
        puVar2 = (undefined *)0x0;
        if (local_60[2] != 0) {
          puVar2 = PTR_LAB_04bcbfb0;
        }
        if ((puVar2 == (undefined *)0x0) || (*(ulong *)(local_60[2] + 0x30) < 3)) goto LAB_001e9434;
        FUN_0018a674(local_60[2],local_44,2);
        uVar12 = (ulong)local_44[0];
        lVar7 = local_60[2];
        if (local_44[0] - 0x555 < 0xfffffaac) {
          FUN_0018a71c();
          goto LAB_001e9434;
        }
        if (*(ulong *)(lVar7 + 0x30) < uVar12 + 2) goto LAB_001e9434;
LAB_001e9710:
        FUN_0018a6fc(lVar7,2);
        FUN_0018a674(local_60[2],param_3,uVar12);
        *param_5 = uVar12;
        FUN_0018a6fc(local_60[2],uVar12);
        memcpy((void *)(param_6 + 8),auStack_f0,0x80);
        iVar5 = 0;
        goto LAB_001e9758;
      }
LAB_001e9434:
      plVar6 = *(long **)(*(long *)(param_2 + 8) + 0x10);
      iVar5 = (**(code **)(*plVar6 + 0x68))(plVar6,auStack_666,0x556,&local_670,param_7);
      if (iVar5 != 4) {
        if ((iVar5 == 0) && (local_670 != 0)) {
          FUN_0018a5b8(local_60[2],auStack_666);
        }
        if (iVar5 == 4) goto LAB_001e98a4;
        local_44[0] = 0;
        if (local_60 != (long *)0x0) {
          puVar2 = (undefined *)0x0;
          if (local_60[2] != 0) {
            puVar2 = PTR_LAB_04bcbfb0;
          }
          if ((puVar2 != (undefined *)0x0) && (2 < *(ulong *)(local_60[2] + 0x30))) {
            FUN_0018a674(local_60[2],local_44,2);
            uVar12 = (ulong)local_44[0];
            lVar7 = local_60[2];
            if (local_44[0] - 0x555 < 0xfffffaac) {
              FUN_0018a71c();
            }
            else if (uVar12 + 2 <= *(ulong *)(lVar7 + 0x30)) goto LAB_001e9710;
          }
        }
        iVar5 = 1;
        plVar6 = local_60;
        goto joined_r0x001e98bc;
      }
      (**(code **)(**(long **)(*(long *)(param_2 + 8) + 0x10) + 8))();
      plVar6 = *(long **)(param_2 + 8);
      local_680 = &PTR_LAB_0483cdf8;
      local_678 = (long *)0x0;
      if ((plVar6 != (long *)0x0) && (plVar1 = plVar6 + 1, local_678 = plVar6, (int)*plVar1 != 0)) {
        lVar7 = *plVar1;
        if ((int)lVar7 == (int)*plVar1) {
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_001e94f0;
          bVar9 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_001e94f0:
          bVar9 = false;
        }
        iVar5 = (int)lVar7;
        if (!bVar9) {
          do {
            lVar7 = *plVar1;
            if ((int)lVar7 == iVar5) {
              cVar4 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar9) {
                *(int *)plVar1 = iVar5 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') break;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar5 = (int)lVar7;
          } while( true );
        }
      }
      FUN_001e5db0(param_1,&local_680);
      plVar6 = local_678;
      local_680 = &PTR_LAB_0483cdf8;
      if (local_678 != (long *)0x0) {
        plVar1 = local_678 + 1;
        lVar7 = *plVar1;
        iVar5 = (int)*plVar1 + -1;
        if ((int)lVar7 == (int)*plVar1) {
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(int *)plVar1 = iVar5;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_001e957c;
          bVar9 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_001e957c:
          bVar9 = false;
        }
        iVar10 = (int)lVar7;
        if (!bVar9) {
          do {
            lVar7 = *plVar1;
            iVar5 = iVar10 + -1;
            if ((int)lVar7 == iVar10) {
              cVar4 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar9) {
                *(int *)plVar1 = iVar5;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') break;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar10 = (int)lVar7;
          } while( true );
        }
        if (iVar5 == 0) {
          piVar11 = (int *)((long)local_678 + 0xc);
          (**(code **)(*local_678 + 0x10))(local_678);
          iVar10 = *piVar11 + -1;
          iVar5 = *piVar11;
          if (iVar5 == *piVar11) {
            cVar4 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar9) {
              *piVar11 = iVar10;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_001e95fc;
            bVar9 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_001e95fc:
            bVar9 = false;
          }
          if (!bVar9) {
            do {
              iVar8 = *piVar11;
              iVar10 = iVar5 + -1;
              if (iVar8 == iVar5) {
                cVar4 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                if (bVar9) {
                  *piVar11 = iVar10;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') break;
              }
              else {
                ClearExclusiveLocal();
              }
              iVar5 = iVar8;
            } while( true );
          }
          if (iVar10 == 0) {
            (**(code **)(*plVar6 + 8))(plVar6);
          }
        }
      }
      *param_3 = 0;
      goto LAB_001e98a4;
    }
    plVar6 = *(long **)(*(long *)(param_2 + 8) + 0x10);
    iVar5 = (**(code **)(*plVar6 + 0x68))(plVar6,param_3,param_4,param_5,param_7);
    if (iVar5 == 0) {
      memcpy((void *)(param_6 + 8),auStack_f0,0x80);
LAB_001e9758:
      *(undefined4 *)(param_6 + 0x88) = local_70;
      plVar6 = local_60;
    }
    else {
      plVar6 = local_60;
      if (iVar5 == 4) {
        (**(code **)(**(long **)(*(long *)(param_2 + 8) + 0x10) + 8))();
        local_108 = (long *)0x0;
        plVar6 = *(long **)(param_2 + 8);
        local_110 = &PTR_LAB_0483cdf8;
        if ((plVar6 != (long *)0x0) && (plVar1 = plVar6 + 1, local_108 = plVar6, (int)*plVar1 != 0))
        {
          lVar7 = *plVar1;
          if ((int)lVar7 == (int)*plVar1) {
            cVar4 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar9) {
              *(int *)plVar1 = (int)*plVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_001e9780;
            bVar9 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_001e9780:
            bVar9 = false;
          }
          iVar5 = (int)lVar7;
          if (!bVar9) {
            do {
              lVar7 = *plVar1;
              if ((int)lVar7 == iVar5) {
                cVar4 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar9) {
                  *(int *)plVar1 = iVar5 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') break;
              }
              else {
                ClearExclusiveLocal();
              }
              iVar5 = (int)lVar7;
            } while( true );
          }
        }
        FUN_001e5db0(param_1,&local_110);
        plVar6 = local_108;
        local_110 = &PTR_LAB_0483cdf8;
        if (local_108 != (long *)0x0) {
          plVar1 = local_108 + 1;
          lVar7 = *plVar1;
          iVar5 = (int)*plVar1 + -1;
          if ((int)lVar7 == (int)*plVar1) {
            cVar4 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar9) {
              *(int *)plVar1 = iVar5;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_001e9804;
            bVar9 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_001e9804:
            bVar9 = false;
          }
          iVar10 = (int)lVar7;
          if (!bVar9) {
            do {
              lVar7 = *plVar1;
              iVar5 = iVar10 + -1;
              if ((int)lVar7 == iVar10) {
                cVar4 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar9) {
                  *(int *)plVar1 = iVar5;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') break;
              }
              else {
                ClearExclusiveLocal();
              }
              iVar10 = (int)lVar7;
            } while( true );
          }
          if (iVar5 == 0) {
            piVar11 = (int *)((long)local_108 + 0xc);
            (**(code **)(*local_108 + 0x10))(local_108);
            iVar10 = *piVar11 + -1;
            iVar5 = *piVar11;
            if (iVar5 == *piVar11) {
              cVar4 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar9) {
                *piVar11 = iVar10;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 != '\0') goto LAB_001e9884;
              bVar9 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_001e9884:
              bVar9 = false;
            }
            if (!bVar9) {
              do {
                iVar8 = *piVar11;
                iVar10 = iVar5 + -1;
                if (iVar8 == iVar5) {
                  cVar4 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                  if (bVar9) {
                    *piVar11 = iVar10;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') break;
                }
                else {
                  ClearExclusiveLocal();
                }
                iVar5 = iVar8;
              } while( true );
            }
            if (iVar10 == 0) {
              (**(code **)(*plVar6 + 8))(plVar6);
            }
          }
        }
        *param_3 = 0;
        goto LAB_001e98a4;
      }
    }
  }
joined_r0x001e98bc:
  local_68 = &PTR_LAB_0483cd28;
  if (plVar6 == (long *)0x0) goto LAB_001e99c4;
  local_68 = &PTR_LAB_0483cd28;
  plVar1 = plVar6 + 1;
  iVar10 = (int)*plVar1;
  iVar8 = (int)*plVar1 + -1;
  if (iVar10 != (int)*plVar1) {
    ClearExclusiveLocal();
LAB_001e9944:
    do {
      lVar7 = *plVar1;
      iVar8 = iVar10 + -1;
      if ((int)lVar7 == iVar10) {
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *(int *)plVar1 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') goto LAB_001e98f8;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = (int)lVar7;
    } while( true );
  }
  cVar4 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar9) {
    *(int *)plVar1 = iVar8;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 != '\0') goto LAB_001e9944;
LAB_001e98f8:
  if (iVar8 != 0) goto LAB_001e99c4;
  piVar11 = (int *)((long)plVar6 + 0xc);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  iVar8 = *piVar11 + -1;
  iVar10 = *piVar11;
  if (iVar10 == *piVar11) {
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(piVar11,0x10);
    if (bVar9) {
      *piVar11 = iVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_001e99a8;
    bVar9 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_001e99a8:
    bVar9 = false;
  }
  if (!bVar9) {
    do {
      iVar3 = *piVar11;
      iVar8 = iVar10 + -1;
      if (iVar3 == iVar10) {
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar9) {
          *piVar11 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') break;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar3;
    } while( true );
  }
  if (iVar8 == 0) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
LAB_001e99c4:
  FUN_001e1868(auStack_f8);
  return iVar5;
}

