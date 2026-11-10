
void FUN_001e3aa0(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 *puVar16;
  int *piVar17;
  undefined1 auVar18 [16];
  undefined **local_188;
  long *local_180;
  undefined **local_178;
  long *local_170;
  undefined **local_168;
  long *local_160;
  long local_158;
  undefined **local_150;
  long *local_148;
  undefined **local_140;
  long *local_138;
  undefined1 local_130;
  undefined1 auStack_128 [8];
  undefined **local_120;
  long *local_118;
  undefined **local_110;
  long *local_108;
  undefined4 local_98;
  undefined **local_90;
  long *local_88;
  undefined **local_80;
  long *local_78;
  undefined1 local_70;
  undefined1 uStack_61;
  
  plVar13 = (long *)(param_1 + 0xb8);
  (**(code **)(*plVar13 + 0x10))(plVar13);
  if (*(ulong *)(*(long *)(*(long *)(param_1 + 0x88) + 0x10) + 0x38) <= *(ulong *)(param_1 + 0x48))
  goto LAB_001e4938;
  plVar9 = *(long **)(param_3 + 8);
  local_168 = &PTR_LAB_0483cdf8;
  local_160 = (long *)0x0;
  if ((plVar9 != (long *)0x0) && (plVar14 = plVar9 + 1, local_160 = plVar9, (int)*plVar14 != 0)) {
    lVar5 = *plVar14;
    if ((int)lVar5 == (int)*plVar14) {
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar12) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_001e3b44;
      bVar12 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_001e3b44:
      bVar12 = false;
    }
    iVar10 = (int)lVar5;
    if (!bVar12) {
      do {
        lVar5 = *plVar14;
        if ((int)lVar5 == iVar10) {
          cVar3 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar12) {
            *(int *)plVar14 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = (int)lVar5;
      } while( true );
    }
  }
  plVar9 = (long *)(param_1 + 0x38);
  FUN_001e7740(&local_158,&local_168,*(undefined1 *)(param_1 + 0x100));
  FUN_001e1564(auStack_128,param_2);
  local_90 = &PTR_LAB_0483cdf8;
  local_88 = (long *)0x0;
  if (local_148 != (long *)0x0) {
    local_88 = local_148;
    plVar14 = local_148 + 1;
    if ((int)*plVar14 != 0) {
      lVar5 = *plVar14;
      if ((int)lVar5 == (int)*plVar14) {
        cVar3 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar12) {
          *(int *)plVar14 = (int)*plVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_001e3bec;
        bVar12 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_001e3bec:
        bVar12 = false;
      }
      iVar10 = (int)lVar5;
      if (!bVar12) {
        do {
          lVar5 = *plVar14;
          if ((int)lVar5 == iVar10) {
            cVar3 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar12) {
              *(int *)plVar14 = iVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar10 = (int)lVar5;
        } while( true );
      }
    }
  }
  local_80 = &PTR_LAB_0483cd28;
  local_78 = (long *)0x0;
  if (local_138 != (long *)0x0) {
    local_78 = local_138;
    plVar14 = local_138 + 1;
    if ((int)*plVar14 != 0) {
      lVar5 = *plVar14;
      if ((int)lVar5 == (int)*plVar14) {
        cVar3 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar12) {
          *(int *)plVar14 = (int)*plVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_001e3c7c;
        bVar12 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_001e3c7c:
        bVar12 = false;
      }
      iVar10 = (int)lVar5;
      if (!bVar12) {
        do {
          lVar5 = *plVar14;
          if ((int)lVar5 == iVar10) {
            cVar3 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar12) {
              *(int *)plVar14 = iVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar10 = (int)lVar5;
        } while( true );
      }
    }
  }
  local_70 = local_130;
  auVar18 = FUN_001ecc20(plVar9,auStack_128,auStack_128);
  plVar14 = local_78;
  local_80 = &PTR_LAB_0483cd28;
  if (local_78 != (long *)0x0) {
    plVar1 = local_78 + 1;
    iVar10 = (int)*plVar1;
    iVar11 = (int)*plVar1 + -1;
    if (iVar10 != (int)*plVar1) {
      ClearExclusiveLocal();
LAB_001e3d74:
      do {
        lVar5 = *plVar1;
        iVar11 = iVar10 + -1;
        if ((int)lVar5 == iVar10) {
          cVar3 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar12) {
            *(int *)plVar1 = iVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_001e3d24;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = (int)lVar5;
      } while( true );
    }
    cVar3 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *(int *)plVar1 = iVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_001e3d74;
LAB_001e3d24:
    if (iVar11 != 0) goto LAB_001e3dc0;
    piVar17 = (int *)((long)local_78 + 0xc);
    (**(code **)(*local_78 + 0x10))(local_78);
    iVar11 = *piVar17 + -1;
    iVar10 = *piVar17;
    if (iVar10 == *piVar17) {
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar12) {
        *piVar17 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_001e3da0;
      bVar12 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_001e3da0:
      bVar12 = false;
    }
    if (!bVar12) {
      do {
        iVar2 = *piVar17;
        iVar11 = iVar10 + -1;
        if (iVar2 == iVar10) {
          cVar3 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar12) {
            *piVar17 = iVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar2;
      } while( true );
    }
    if (iVar11 == 0) {
      (**(code **)(*plVar14 + 8))(plVar14);
    }
  }
LAB_001e3dc0:
  plVar14 = local_88;
  local_90 = &PTR_LAB_0483cdf8;
  if (local_88 != (long *)0x0) {
    plVar1 = local_88 + 1;
    iVar10 = (int)*plVar1;
    iVar11 = (int)*plVar1 + -1;
    if (iVar10 != (int)*plVar1) {
      ClearExclusiveLocal();
LAB_001e3e94:
      do {
        lVar5 = *plVar1;
        iVar11 = iVar10 + -1;
        if ((int)lVar5 == iVar10) {
          cVar3 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar12) {
            *(int *)plVar1 = iVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_001e3e44;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = (int)lVar5;
      } while( true );
    }
    cVar3 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *(int *)plVar1 = iVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_001e3e94;
LAB_001e3e44:
    if (iVar11 != 0) goto LAB_001e3ee0;
    piVar17 = (int *)((long)local_88 + 0xc);
    (**(code **)(*local_88 + 0x10))(local_88);
    iVar11 = *piVar17 + -1;
    iVar10 = *piVar17;
    if (iVar10 == *piVar17) {
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar12) {
        *piVar17 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_001e3ec0;
      bVar12 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_001e3ec0:
      bVar12 = false;
    }
    if (!bVar12) {
      do {
        iVar2 = *piVar17;
        iVar11 = iVar10 + -1;
        if (iVar2 == iVar10) {
          cVar3 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar12) {
            *piVar17 = iVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar2;
      } while( true );
    }
    if (iVar11 == 0) {
      (**(code **)(*plVar14 + 8))(plVar14);
    }
  }
LAB_001e3ee0:
  FUN_001e1868(auStack_128);
  local_140 = &PTR_LAB_0483cd28;
  if (local_138 != (long *)0x0) {
    plVar14 = local_138 + 1;
    iVar10 = (int)*plVar14;
    iVar11 = (int)*plVar14 + -1;
    if (iVar10 != (int)*plVar14) {
      ClearExclusiveLocal();
LAB_001e3fc0:
      do {
        lVar5 = *plVar14;
        iVar11 = iVar10 + -1;
        if ((int)lVar5 == iVar10) {
          cVar3 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar12) {
            *(int *)plVar14 = iVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_001e3f68;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = (int)lVar5;
      } while( true );
    }
    cVar3 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar12) {
      *(int *)plVar14 = iVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_001e3fc0;
LAB_001e3f68:
    if (iVar11 != 0) goto LAB_001e400c;
    piVar17 = (int *)((long)local_138 + 0xc);
    (**(code **)(*local_138 + 0x10))(local_138);
    iVar11 = *piVar17 + -1;
    iVar10 = *piVar17;
    if (iVar10 == *piVar17) {
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar12) {
        *piVar17 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_001e3fec;
      bVar12 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_001e3fec:
      bVar12 = false;
    }
    if (!bVar12) {
      do {
        iVar2 = *piVar17;
        iVar11 = iVar10 + -1;
        if (iVar2 == iVar10) {
          cVar3 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar12) {
            *piVar17 = iVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar2;
      } while( true );
    }
    if (iVar11 == 0) {
      (**(code **)(*local_138 + 8))(local_138);
    }
  }
LAB_001e400c:
  local_150 = &PTR_LAB_0483cdf8;
  if (local_148 != (long *)0x0) {
    plVar14 = local_148 + 1;
    iVar10 = (int)*plVar14;
    iVar11 = (int)*plVar14 + -1;
    if (iVar10 != (int)*plVar14) {
      ClearExclusiveLocal();
LAB_001e40e0:
      do {
        lVar5 = *plVar14;
        iVar11 = iVar10 + -1;
        if ((int)lVar5 == iVar10) {
          cVar3 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar12) {
            *(int *)plVar14 = iVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_001e4094;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = (int)lVar5;
      } while( true );
    }
    cVar3 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar12) {
      *(int *)plVar14 = iVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_001e40e0;
LAB_001e4094:
    if (iVar11 != 0) goto LAB_001e4128;
    piVar17 = (int *)((long)local_148 + 0xc);
    (**(code **)(*local_148 + 0x10))(local_148);
    iVar11 = *piVar17 + -1;
    iVar10 = *piVar17;
    if (iVar10 == *piVar17) {
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar12) {
        *piVar17 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_001e410c;
      bVar12 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_001e410c:
      bVar12 = false;
    }
    if (!bVar12) {
      do {
        iVar2 = *piVar17;
        iVar11 = iVar10 + -1;
        if (iVar2 == iVar10) {
          cVar3 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar12) {
            *piVar17 = iVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar2;
      } while( true );
    }
    if (iVar11 == 0) {
      (**(code **)(*local_148 + 8))(local_148);
    }
  }
LAB_001e4128:
  plVar14 = local_160;
  local_168 = &PTR_LAB_0483cdf8;
  if (local_160 != (long *)0x0) {
    plVar1 = local_160 + 1;
    iVar10 = (int)*plVar1;
    iVar11 = (int)*plVar1 + -1;
    if (iVar10 != (int)*plVar1) {
      ClearExclusiveLocal();
LAB_001e4200:
      do {
        lVar5 = *plVar1;
        iVar11 = iVar10 + -1;
        if ((int)lVar5 == iVar10) {
          cVar3 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar12) {
            *(int *)plVar1 = iVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_001e41b4;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = (int)lVar5;
      } while( true );
    }
    cVar3 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *(int *)plVar1 = iVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_001e4200;
LAB_001e41b4:
    if (iVar11 != 0) goto LAB_001e424c;
    piVar17 = (int *)((long)local_160 + 0xc);
    (**(code **)(*local_160 + 0x10))(local_160);
    iVar11 = *piVar17 + -1;
    iVar10 = *piVar17;
    if (iVar10 == *piVar17) {
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar12) {
        *piVar17 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_001e422c;
      bVar12 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_001e422c:
      bVar12 = false;
    }
    if (!bVar12) {
      do {
        iVar2 = *piVar17;
        iVar11 = iVar10 + -1;
        if (iVar2 == iVar10) {
          cVar3 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar12) {
            *piVar17 = iVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar2;
      } while( true );
    }
    if (iVar11 == 0) {
      (**(code **)(*plVar14 + 8))(plVar14);
    }
  }
LAB_001e424c:
  if ((auVar18._8_8_ & 0xff) == 0) {
    (**(code **)(**(long **)(*(long *)(auVar18._0_8_ + 0xc0) + 0x10) + 8))();
    plVar14 = *(long **)(auVar18._0_8_ + 0xc0);
    local_178 = &PTR_LAB_0483cdf8;
    local_170 = (long *)0x0;
    if (plVar14 == (long *)0x0) {
      FUN_001e7b70(param_1,&local_178);
      local_178 = &PTR_LAB_0483cdf8;
    }
    else {
      plVar1 = plVar14 + 1;
      if ((int)*plVar1 != 0) {
        lVar5 = *plVar1;
        if ((int)lVar5 == (int)*plVar1) {
          cVar3 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar12) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_001e4410;
          bVar12 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_001e4410:
          bVar12 = false;
        }
        iVar10 = (int)lVar5;
        if (!bVar12) {
          do {
            lVar5 = *plVar1;
            if ((int)lVar5 == iVar10) {
              cVar3 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar12) {
                *(int *)plVar1 = iVar10 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') break;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar10 = (int)lVar5;
          } while( true );
        }
      }
      local_170 = plVar14;
      FUN_001e7b70(param_1,&local_178);
      local_178 = &PTR_LAB_0483cdf8;
      if (plVar14 != (long *)0x0) {
        plVar1 = plVar14 + 1;
        lVar5 = *plVar1;
        iVar10 = (int)*plVar1 + -1;
        if ((int)lVar5 == (int)*plVar1) {
          cVar3 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar12) {
            *(int *)plVar1 = iVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_001e481c;
          bVar12 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_001e481c:
          bVar12 = false;
        }
        iVar11 = (int)lVar5;
        if (!bVar12) {
          do {
            lVar5 = *plVar1;
            iVar10 = iVar11 + -1;
            if ((int)lVar5 == iVar11) {
              cVar3 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar12) {
                *(int *)plVar1 = iVar10;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') break;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar11 = (int)lVar5;
          } while( true );
        }
        if (iVar10 == 0) {
          piVar17 = (int *)((long)plVar14 + 0xc);
          (**(code **)(*plVar14 + 0x10))(plVar14);
          iVar11 = *piVar17 + -1;
          iVar10 = *piVar17;
          if (iVar10 == *piVar17) {
            cVar3 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar12) {
              *piVar17 = iVar11;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_001e49ac;
            bVar12 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_001e49ac:
            bVar12 = false;
          }
          if (!bVar12) {
            do {
              iVar2 = *piVar17;
              iVar11 = iVar10 + -1;
              if (iVar2 == iVar10) {
                cVar3 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(piVar17,0x10);
                if (bVar12) {
                  *piVar17 = iVar11;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') break;
              }
              else {
                ClearExclusiveLocal();
              }
              iVar10 = iVar2;
            } while( true );
          }
          if (iVar11 == 0) {
            (**(code **)(*plVar14 + 8))(plVar14);
          }
        }
      }
    }
    local_188 = &PTR_LAB_0483cdf8;
    local_180 = (long *)0x0;
    plVar14 = *(long **)(param_3 + 8);
    if ((plVar14 != (long *)0x0) && (plVar1 = plVar14 + 1, local_180 = plVar14, (int)*plVar1 != 0))
    {
      lVar5 = *plVar1;
      if ((int)lVar5 == (int)*plVar1) {
        cVar3 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_001e4a4c;
        bVar12 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_001e4a4c:
        bVar12 = false;
      }
      iVar10 = (int)lVar5;
      if (!bVar12) {
        do {
          lVar5 = *plVar1;
          if ((int)lVar5 == iVar10) {
            cVar3 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar12) {
              *(int *)plVar1 = iVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar10 = (int)lVar5;
        } while( true );
      }
    }
    FUN_001e7740(auStack_128,&local_188,*(undefined1 *)(param_1 + 0x100));
    puVar7 = (undefined8 *)FUN_001ece00(plVar9,&local_158,param_2);
    puVar16 = (undefined8 *)*puVar7;
    if (puVar16 == (undefined8 *)0x0) {
      puVar16 = (undefined8 *)FUN_00187df4(0xe0);
      FUN_001e1564(puVar16 + 4,param_2);
      *(undefined1 *)(puVar16 + 0x1b) = 0;
      puVar16[0x17] = &PTR_LAB_0483cdf8;
      puVar16[0x18] = 0;
      puVar16[0x19] = &PTR_LAB_0483cd28;
      puVar16[0x1a] = 0;
      puVar16[2] = local_158;
      *puVar16 = 0;
      puVar16[1] = 0;
      *puVar7 = puVar16;
      puVar8 = puVar16;
      if (**(long **)(param_1 + 0x38) != 0) {
        *plVar9 = **(long **)(param_1 + 0x38);
        puVar8 = (undefined8 *)*puVar7;
      }
      FUN_03876250(*(undefined8 *)(param_1 + 0x40),puVar8);
      *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
    }
    FUN_001e7d90(puVar16 + 0x16,auStack_128);
    local_110 = &PTR_LAB_0483cd28;
    if (local_108 != (long *)0x0) {
      plVar9 = local_108 + 1;
      lVar5 = *plVar9;
      iVar10 = (int)*plVar9 + -1;
      if ((int)lVar5 == (int)*plVar9) {
        cVar3 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar12) {
          *(int *)plVar9 = iVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_001e4b6c;
        bVar12 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_001e4b6c:
        bVar12 = false;
      }
      iVar11 = (int)lVar5;
      if (!bVar12) {
        do {
          lVar5 = *plVar9;
          iVar10 = iVar11 + -1;
          if ((int)lVar5 == iVar11) {
            cVar3 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar12) {
              *(int *)plVar9 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = (int)lVar5;
        } while( true );
      }
      if (iVar10 == 0) {
        piVar17 = (int *)((long)local_108 + 0xc);
        (**(code **)(*local_108 + 0x10))(local_108);
        iVar11 = *piVar17 + -1;
        iVar10 = *piVar17;
        if (iVar10 == *piVar17) {
          cVar3 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar12) {
            *piVar17 = iVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_001e4bec;
          bVar12 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_001e4bec:
          bVar12 = false;
        }
        if (!bVar12) {
          do {
            iVar2 = *piVar17;
            iVar11 = iVar10 + -1;
            if (iVar2 == iVar10) {
              cVar3 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar17,0x10);
              if (bVar12) {
                *piVar17 = iVar11;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') break;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar10 = iVar2;
          } while( true );
        }
        if (iVar11 == 0) {
          (**(code **)(*local_108 + 8))(local_108);
        }
      }
    }
    local_120 = &PTR_LAB_0483cdf8;
    if (local_118 != (long *)0x0) {
      plVar9 = local_118 + 1;
      lVar5 = *plVar9;
      iVar10 = (int)*plVar9 + -1;
      if ((int)lVar5 == (int)*plVar9) {
        cVar3 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar12) {
          *(int *)plVar9 = iVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_001e4c7c;
        bVar12 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_001e4c7c:
        bVar12 = false;
      }
      iVar11 = (int)lVar5;
      if (!bVar12) {
        do {
          lVar5 = *plVar9;
          iVar10 = iVar11 + -1;
          if ((int)lVar5 == iVar11) {
            cVar3 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar12) {
              *(int *)plVar9 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = (int)lVar5;
        } while( true );
      }
      if (iVar10 == 0) {
        piVar17 = (int *)((long)local_118 + 0xc);
        (**(code **)(*local_118 + 0x10))(local_118);
        iVar11 = *piVar17 + -1;
        iVar10 = *piVar17;
        if (iVar10 == *piVar17) {
          cVar3 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar12) {
            *piVar17 = iVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_001e4cfc;
          bVar12 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_001e4cfc:
          bVar12 = false;
        }
        if (!bVar12) {
          do {
            iVar2 = *piVar17;
            iVar11 = iVar10 + -1;
            if (iVar2 == iVar10) {
              cVar3 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar17,0x10);
              if (bVar12) {
                *piVar17 = iVar11;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') break;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar10 = iVar2;
          } while( true );
        }
        if (iVar11 == 0) {
          (**(code **)(*local_118 + 8))(local_118);
        }
      }
    }
    plVar9 = local_180;
    local_188 = &PTR_LAB_0483cdf8;
    if (local_180 != (long *)0x0) {
      plVar14 = local_180 + 1;
      lVar5 = *plVar14;
      iVar10 = (int)*plVar14 + -1;
      if ((int)lVar5 == (int)*plVar14) {
        cVar3 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar12) {
          *(int *)plVar14 = iVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_001e4d8c;
        bVar12 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_001e4d8c:
        bVar12 = false;
      }
      iVar11 = (int)lVar5;
      if (!bVar12) {
        do {
          lVar5 = *plVar14;
          iVar10 = iVar11 + -1;
          if ((int)lVar5 == iVar11) {
            cVar3 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar12) {
              *(int *)plVar14 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = (int)lVar5;
        } while( true );
      }
      if (iVar10 == 0) {
        piVar17 = (int *)((long)local_180 + 0xc);
        (**(code **)(*local_180 + 0x10))(local_180);
        iVar11 = *piVar17 + -1;
        iVar10 = *piVar17;
        if (iVar10 == *piVar17) {
          cVar3 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar12) {
            *piVar17 = iVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_001e4e0c;
          bVar12 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_001e4e0c:
          bVar12 = false;
        }
        if (!bVar12) {
          do {
            iVar2 = *piVar17;
            iVar11 = iVar10 + -1;
            if (iVar2 == iVar10) {
              cVar3 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar17,0x10);
              if (bVar12) {
                *piVar17 = iVar11;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') break;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar10 = iVar2;
          } while( true );
        }
        if (iVar11 == 0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
  }
  FUN_001e8110(auStack_128,param_2,*(undefined1 *)(param_1 + 0x100));
  local_158 = param_3;
  lVar5 = FUN_001ecf50(param_1 + 8,param_3,PTR_piecewise_construct_04bcbf80,&local_158,&uStack_61);
  memcpy((void *)(lVar5 + 0x40),&local_118,0x80);
  *(undefined4 *)(lVar5 + 0xc0) = local_98;
  plVar9 = *(long **)(lVar5 + 0xd0);
  if (plVar9 != local_88) {
    if (plVar9 != (long *)0x0) {
      plVar14 = plVar9 + 1;
      lVar4 = *plVar14;
      iVar10 = (int)*plVar14 + -1;
      if ((int)lVar4 == (int)*plVar14) {
        cVar3 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar12) {
          *(int *)plVar14 = iVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_001e4378;
        bVar12 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_001e4378:
        bVar12 = false;
      }
      iVar11 = (int)lVar4;
      if (!bVar12) {
        do {
          lVar4 = *plVar14;
          iVar10 = iVar11 + -1;
          if ((int)lVar4 == iVar11) {
            cVar3 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar12) {
              *(int *)plVar14 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = (int)lVar4;
        } while( true );
      }
      if (iVar10 == 0) {
        piVar17 = (int *)((long)plVar9 + 0xc);
        (**(code **)(*plVar9 + 0x10))(plVar9);
        iVar11 = *piVar17 + -1;
        iVar10 = *piVar17;
        if (iVar10 == *piVar17) {
          cVar3 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar12) {
            *piVar17 = iVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_001e449c;
          bVar12 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_001e449c:
          bVar12 = false;
        }
        if (!bVar12) {
          do {
            iVar2 = *piVar17;
            iVar11 = iVar10 + -1;
            if (iVar2 == iVar10) {
              cVar3 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar17,0x10);
              if (bVar12) {
                *piVar17 = iVar11;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') break;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar10 = iVar2;
          } while( true );
        }
        if (iVar11 == 0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    *(long **)(lVar5 + 0xd0) = local_88;
    if ((local_88 != (long *)0x0) && (plVar9 = local_88 + 1, (int)*plVar9 != 0)) {
      lVar4 = *plVar9;
      if ((int)lVar4 == (int)*plVar9) {
        cVar3 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar12) {
          *(int *)plVar9 = (int)*plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_001e4530;
        bVar12 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_001e4530:
        bVar12 = false;
      }
      iVar10 = (int)lVar4;
      if (!bVar12) {
        do {
          lVar4 = *plVar9;
          if ((int)lVar4 == iVar10) {
            cVar3 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar12) {
              *(int *)plVar9 = iVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar10 = (int)lVar4;
        } while( true );
      }
    }
    plVar9 = local_88;
  }
  *(undefined1 *)(lVar5 + 0xd8) = local_80._0_1_;
  local_90 = &PTR_LAB_0483cd28;
  if (plVar9 != (long *)0x0) {
    plVar14 = plVar9 + 1;
    iVar10 = (int)*plVar14;
    iVar11 = (int)*plVar14 + -1;
    if (iVar10 != (int)*plVar14) {
      ClearExclusiveLocal();
LAB_001e4610:
      do {
        lVar5 = *plVar14;
        iVar11 = iVar10 + -1;
        if ((int)lVar5 == iVar10) {
          cVar3 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar12) {
            *(int *)plVar14 = iVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_001e45c4;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = (int)lVar5;
      } while( true );
    }
    cVar3 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar12) {
      *(int *)plVar14 = iVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_001e4610;
LAB_001e45c4:
    if (iVar11 != 0) goto LAB_001e4658;
    piVar17 = (int *)((long)plVar9 + 0xc);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    iVar11 = *piVar17 + -1;
    iVar10 = *piVar17;
    if (iVar10 == *piVar17) {
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar12) {
        *piVar17 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_001e463c;
      bVar12 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_001e463c:
      bVar12 = false;
    }
    if (!bVar12) {
      do {
        iVar2 = *piVar17;
        iVar11 = iVar10 + -1;
        if (iVar2 == iVar10) {
          cVar3 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar12) {
            *piVar17 = iVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar2;
      } while( true );
    }
    if (iVar11 == 0) {
      (**(code **)(*plVar9 + 8))(plVar9);
    }
  }
LAB_001e4658:
  FUN_001e1868(&local_120);
  plVar9 = *(long **)(param_3 + 8);
  if (plVar9 == (long *)0x0) {
    uVar15 = 0;
    puVar7 = *(undefined8 **)(param_1 + 0x28);
    if (*(undefined8 **)(param_1 + 0x28) == (undefined8 *)0x0) goto LAB_001e46c8;
LAB_001e46dc:
    do {
      while (puVar6 = puVar7, puVar16 = puVar6, uVar15 < (ulong)puVar6[4]) {
        puVar7 = (undefined8 *)*puVar6;
        puVar8 = puVar6;
        if ((undefined8 *)*puVar6 == (undefined8 *)0x0) goto LAB_001e4700;
      }
      if (uVar15 <= (ulong)puVar6[4]) goto LAB_001e4758;
      puVar7 = (undefined8 *)puVar6[1];
    } while ((undefined8 *)puVar6[1] != (undefined8 *)0x0);
    puVar8 = puVar6 + 1;
  }
  else {
    uVar15 = plVar9[2];
    puVar7 = *(undefined8 **)(param_1 + 0x28);
    if (*(undefined8 **)(param_1 + 0x28) != (undefined8 *)0x0) goto LAB_001e46dc;
LAB_001e46c8:
    puVar16 = (undefined8 *)(param_1 + 0x28);
    puVar8 = (undefined8 *)(param_1 + 0x28);
  }
LAB_001e4700:
  puVar6 = (undefined8 *)FUN_00187df4(0x38);
  puVar6[6] = 0;
  puVar6[4] = uVar15;
  puVar6[5] = &PTR_LAB_0483cdf8;
  puVar6[2] = puVar16;
  *puVar6 = 0;
  puVar6[1] = 0;
  *puVar8 = puVar6;
  puVar7 = puVar6;
  if (**(long **)(param_1 + 0x20) != 0) {
    *(long *)(param_1 + 0x20) = **(long **)(param_1 + 0x20);
    puVar7 = (undefined8 *)*puVar8;
  }
  FUN_03876250(*(undefined8 *)(param_1 + 0x28),puVar7);
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  plVar9 = *(long **)(param_3 + 8);
LAB_001e4758:
  plVar14 = (long *)puVar6[6];
  if (plVar14 == plVar9) goto LAB_001e4938;
  if (plVar14 != (long *)0x0) {
    plVar9 = plVar14 + 1;
    lVar5 = *plVar9;
    iVar10 = (int)*plVar9 + -1;
    if ((int)lVar5 == (int)*plVar9) {
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar12) {
        *(int *)plVar9 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_001e4794;
      bVar12 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_001e4794:
      bVar12 = false;
    }
    iVar11 = (int)lVar5;
    if (!bVar12) {
      do {
        lVar5 = *plVar9;
        iVar10 = iVar11 + -1;
        if ((int)lVar5 == iVar11) {
          cVar3 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar12) {
            *(int *)plVar9 = iVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = (int)lVar5;
      } while( true );
    }
    if (iVar10 == 0) {
      piVar17 = (int *)((long)plVar14 + 0xc);
      (**(code **)(*plVar14 + 0x10))(plVar14);
      iVar11 = *piVar17 + -1;
      iVar10 = *piVar17;
      if (iVar10 == *piVar17) {
        cVar3 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar12) {
          *piVar17 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_001e489c;
        bVar12 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_001e489c:
        bVar12 = false;
      }
      if (!bVar12) {
        do {
          iVar2 = *piVar17;
          iVar11 = iVar10 + -1;
          if (iVar2 == iVar10) {
            cVar3 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar12) {
              *piVar17 = iVar11;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar10 = iVar2;
        } while( true );
      }
      if (iVar11 == 0) {
        (**(code **)(*plVar14 + 8))(plVar14);
      }
    }
    plVar9 = *(long **)(param_3 + 8);
  }
  puVar6[6] = plVar9;
  if ((plVar9 == (long *)0x0) || (plVar9 = plVar9 + 1, (int)*plVar9 == 0)) goto LAB_001e4938;
  lVar5 = *plVar9;
  if ((int)lVar5 == (int)*plVar9) {
    cVar3 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar12) {
      *(int *)plVar9 = (int)*plVar9 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_001e4930;
    bVar12 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_001e4930:
    bVar12 = false;
  }
  iVar10 = (int)lVar5;
  if (!bVar12) {
    do {
      lVar5 = *plVar9;
      if ((int)lVar5 == iVar10) {
        cVar3 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar12) {
          *(int *)plVar9 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') break;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = (int)lVar5;
    } while( true );
  }
LAB_001e4938:
  (**(code **)(*plVar13 + 0x20))(plVar13);
  return;
}

