
int FUN_001e6b30(long param_1,void *param_2,size_t param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  int *piVar13;
  long *plVar14;
  undefined2 local_5ac [2];
  undefined8 local_5a8;
  ulong local_48;
  
  if (param_3 - 0x555 < 0xfffffffffffffaac) {
    return 1;
  }
  plVar14 = (long *)(param_1 + 0xb8);
  (**(code **)(*plVar14 + 0x10))(plVar14);
  lVar7 = FUN_001ed690(param_1 + 0x38,param_4);
  if (param_1 + 0x40 == lVar7) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
    return 4;
  }
  plVar11 = *(long **)(lVar7 + 0xc0);
  if ((plVar11 != (long *)0x0) && (plVar12 = plVar11 + 1, (int)*plVar12 != 0)) {
    lVar5 = *plVar12;
    if ((int)lVar5 == (int)*plVar12) {
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar9) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_001e6bec;
      bVar9 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_001e6bec:
      bVar9 = false;
    }
    iVar6 = (int)lVar5;
    if (!bVar9) {
      do {
        lVar5 = *plVar12;
        if ((int)lVar5 == iVar6) {
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar9) {
            *(int *)plVar12 = iVar6 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar6 = (int)lVar5;
      } while( true );
    }
  }
  plVar12 = *(long **)(lVar7 + 0xd0);
  if ((plVar12 != (long *)0x0) && (plVar1 = plVar12 + 1, (int)*plVar1 != 0)) {
    lVar5 = *plVar1;
    if ((int)lVar5 == (int)*plVar1) {
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_001e6c6c;
      bVar9 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_001e6c6c:
      bVar9 = false;
    }
    iVar6 = (int)lVar5;
    if (!bVar9) {
      do {
        lVar5 = *plVar1;
        if ((int)lVar5 == iVar6) {
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *(int *)plVar1 = iVar6 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') break;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar6 = (int)lVar5;
      } while( true );
    }
  }
  cVar4 = *(char *)(lVar7 + 0xd8);
  (**(code **)(*plVar14 + 0x20))(plVar14);
  if (cVar4 == '\0') {
    iVar6 = 4;
joined_r0x001e6d1c:
    if (plVar12 != (long *)0x0) goto LAB_001e6dd8;
  }
  else {
    if (*(char *)(param_1 + 0x100) == '\0') {
      local_5a8 = 0;
      iVar6 = (**(code **)(*(long *)plVar11[2] + 0x70))
                        ((long *)plVar11[2],param_2,param_3,&local_5a8);
      goto joined_r0x001e6d1c;
    }
    if (*(long *)(plVar12[2] + 0x30) == 0) {
LAB_001e6d70:
      local_5ac[0] = (undefined2)param_3;
      memcpy(&local_5a8,local_5ac,2);
      memcpy((void *)((long)&local_5a8 + 2),param_2,param_3);
      local_48 = 0;
      uVar2 = param_3 + 2;
      (**(code **)(*(long *)plVar11[2] + 0x70))((long *)plVar11[2],&local_5a8,uVar2,&local_48);
      if (local_48 <= uVar2 && uVar2 - local_48 != 0) {
        FUN_0018a5b8(plVar12[2],(long)local_5ac + local_48 + 4,uVar2 - local_48);
      }
      iVar6 = 0;
    }
    else {
      local_48 = 0;
      FUN_0018a674(plVar12[2],&local_5a8);
      iVar6 = (**(code **)(*(long *)plVar11[2] + 0x70))
                        ((long *)plVar11[2],&local_5a8,*(undefined8 *)(plVar12[2] + 0x30),&local_48)
      ;
      if (iVar6 == 0) {
        FUN_0018a6fc(plVar12[2],local_48);
        if (*(long *)(plVar12[2] + 0x30) == 0) goto LAB_001e6d70;
        iVar6 = 1;
      }
    }
LAB_001e6dd8:
    plVar14 = plVar12 + 1;
    iVar10 = (int)*plVar14;
    iVar8 = (int)*plVar14 + -1;
    if (iVar10 != (int)*plVar14) {
      ClearExclusiveLocal();
LAB_001e6e60:
      do {
        lVar7 = *plVar14;
        iVar8 = iVar10 + -1;
        if ((int)lVar7 == iVar10) {
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar9) {
            *(int *)plVar14 = iVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_001e6e10;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = (int)lVar7;
      } while( true );
    }
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar9) {
      *(int *)plVar14 = iVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_001e6e60;
LAB_001e6e10:
    if (iVar8 != 0) goto LAB_001e6ea8;
    piVar13 = (int *)((long)plVar12 + 0xc);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    iVar8 = *piVar13 + -1;
    iVar10 = *piVar13;
    if (iVar10 == *piVar13) {
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar9) {
        *piVar13 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_001e6e8c;
      bVar9 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_001e6e8c:
      bVar9 = false;
    }
    if (!bVar9) {
      do {
        iVar3 = *piVar13;
        iVar8 = iVar10 + -1;
        if (iVar3 == iVar10) {
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar9) {
            *piVar13 = iVar8;
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
      (**(code **)(*plVar12 + 8))(plVar12);
    }
  }
LAB_001e6ea8:
  if (plVar11 == (long *)0x0) {
    return iVar6;
  }
  plVar14 = plVar11 + 1;
  lVar7 = *plVar14;
  iVar10 = (int)*plVar14 + -1;
  if ((int)lVar7 == (int)*plVar14) {
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar9) {
      *(int *)plVar14 = iVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_001e6f10;
    bVar9 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_001e6f10:
    bVar9 = false;
  }
  iVar8 = (int)lVar7;
  if (!bVar9) {
    do {
      lVar7 = *plVar14;
      iVar10 = iVar8 + -1;
      if ((int)lVar7 == iVar8) {
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar9) {
          *(int *)plVar14 = iVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') break;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar8 = (int)lVar7;
    } while( true );
  }
  if (iVar10 != 0) {
    return iVar6;
  }
  piVar13 = (int *)((long)plVar11 + 0xc);
  (**(code **)(*plVar11 + 0x10))(plVar11);
  iVar8 = *piVar13 + -1;
  iVar10 = *piVar13;
  if (iVar10 == *piVar13) {
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(piVar13,0x10);
    if (bVar9) {
      *piVar13 = iVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
      bVar9 = true;
      goto LAB_001e6f94;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  bVar9 = false;
LAB_001e6f94:
  if (!bVar9) {
    do {
      iVar3 = *piVar13;
      iVar8 = iVar10 + -1;
      if (iVar3 == iVar10) {
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar9) {
          *piVar13 = iVar8;
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
    (**(code **)(*plVar11 + 8))(plVar11);
  }
  return iVar6;
}

