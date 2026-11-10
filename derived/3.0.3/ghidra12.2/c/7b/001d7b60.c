
undefined8 FUN_001d7b60(long param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_1b8 [8];
  ulong local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  undefined1 auStack_198 [8];
  long *local_190;
  undefined1 auStack_188 [144];
  ulong local_f8;
  undefined1 auStack_f0 [144];
  long local_48;
  
  FUN_001e1500(auStack_f0);
  FUN_00187810(&local_f8);
  if (*(long *)(param_1 + 0x20) != 0) {
    do {
      if (local_f8 < *(ulong *)(*(long *)(param_1 + 0x18) + 0xa8)) break;
      FUN_00187810(auStack_198);
      lVar11 = *(long *)(param_1 + 0x18);
      FUN_001e1500(auStack_188);
      local_190 = *(long **)(lVar11 + 0x10);
      plVar1 = local_190 + 1;
      iVar8 = (int)*plVar1;
      if (iVar8 != (int)*plVar1) {
        ClearExclusiveLocal();
LAB_001d7cc0:
        do {
          lVar4 = *plVar1;
          if ((int)lVar4 == iVar8) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar8 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_001d7c40;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar8 = (int)lVar4;
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 != '\0') goto LAB_001d7cc0;
LAB_001d7c40:
      FUN_001e15a8(auStack_188,lVar11 + 0x18);
      FUN_00187810(&local_1a0);
      fVar14 = *(float *)(*(long *)(param_1 + 0x58) + 0x24);
      fVar13 = (float)FUN_0018a080(0x3f800000);
      if (fVar14 <= fVar13) {
        uVar5 = *(uint *)(*(long *)(param_1 + 0x58) + 0x1c);
        uVar7 = (ulong)uVar5;
        if (*(int *)(*(long *)(param_1 + 0x58) + 0x20) == 0) {
          if ((int)uVar5 < 0) {
            uVar7 = -(ulong)-uVar5;
          }
          local_48 = local_1a0 + uVar7;
        }
        else {
          if ((int)uVar5 < 0) {
            uVar7 = -(ulong)-uVar5;
          }
          lVar11 = local_1a0 + uVar7;
          uVar5 = FUN_00189e50();
          uVar7 = (ulong)uVar5;
          if ((int)uVar5 < 0) {
            uVar7 = -(ulong)-uVar5;
          }
          local_48 = lVar11 + uVar7;
        }
        FUN_001dcec0(param_1 + 0x38,&local_190,&local_48);
      }
      plVar1 = local_190 + 1;
      iVar8 = (int)*plVar1;
      iVar9 = (int)*plVar1 + -1;
      if (iVar8 != (int)*plVar1) {
        ClearExclusiveLocal();
LAB_001d7dd0:
        do {
          lVar11 = *plVar1;
          iVar9 = iVar8 + -1;
          if ((int)lVar11 == iVar8) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar9;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_001d7d4c;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar8 = (int)lVar11;
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar9;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 != '\0') goto LAB_001d7dd0;
LAB_001d7d4c:
      if ((iVar9 == 0) && (*(char *)((long)local_190 + 0xc) == '\0')) {
        *(undefined1 *)((long)local_190 + 0xc) = 1;
        (**(code **)(*local_190 + 8))();
      }
      FUN_001e1868(auStack_188);
      FUN_00187810(auStack_1a8);
      lVar11 = *(long *)(param_1 + 0x18);
      FUN_001e1500(auStack_188);
      local_190 = *(long **)(lVar11 + 0x10);
      plVar1 = local_190 + 1;
      iVar8 = (int)*plVar1;
      if (iVar8 != (int)*plVar1) {
        ClearExclusiveLocal();
LAB_001d7e80:
        do {
          lVar4 = *plVar1;
          if ((int)lVar4 == iVar8) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar8 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_001d7e0c;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar8 = (int)lVar4;
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 != '\0') goto LAB_001d7e80;
LAB_001d7e0c:
      FUN_001e15a8(auStack_188,lVar11 + 0x18);
      plVar12 = *(long **)(param_1 + 0x18);
      lVar11 = *plVar12;
      *(long *)(lVar11 + 8) = plVar12[1];
      *(long *)plVar12[1] = lVar11;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
      plVar6 = (long *)plVar12[2];
      plVar1 = plVar6 + 1;
      iVar8 = (int)*plVar1;
      iVar9 = (int)*plVar1 + -1;
      if (iVar8 != (int)*plVar1) {
        ClearExclusiveLocal();
LAB_001d7f30:
        do {
          lVar11 = *plVar1;
          iVar9 = iVar8 + -1;
          if ((int)lVar11 == iVar8) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar9;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_001d7ebc;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar8 = (int)lVar11;
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar9;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 != '\0') goto LAB_001d7f30;
LAB_001d7ebc:
      if ((iVar9 == 0) && (*(char *)((long)plVar6 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar6 + 0xc) = 1;
        (**(code **)(*plVar6 + 8))();
      }
      FUN_001e1868(plVar12 + 3);
      FUN_00187e4c(plVar12);
      plVar1 = local_190 + 1;
      iVar8 = (int)*plVar1;
      iVar9 = (int)*plVar1 + -1;
      if (iVar8 != (int)*plVar1) {
        ClearExclusiveLocal();
LAB_001d7fa0:
        do {
          lVar11 = *plVar1;
          iVar9 = iVar8 + -1;
          if ((int)lVar11 == iVar8) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar9;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_001d7f6c;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar8 = (int)lVar11;
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar9;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 != '\0') goto LAB_001d7fa0;
LAB_001d7f6c:
      if ((iVar9 == 0) && (*(char *)((long)local_190 + 0xc) == '\0')) {
        *(undefined1 *)((long)local_190 + 0xc) = 1;
        (**(code **)(*local_190 + 8))();
      }
      FUN_001e1868(auStack_188);
      FUN_00187810(&local_f8);
    } while (*(long *)(param_1 + 0x20) != 0);
  }
  FUN_00187810(&local_1b0);
  if ((*(long *)(param_1 + 0x50) == 0) || (local_1b0 < *(ulong *)(*(long *)(param_1 + 0x48) + 0xa8))
     ) {
    uVar10 = 0;
LAB_001d8120:
    FUN_001e1868(auStack_f0);
    return uVar10;
  }
  FUN_00187810(auStack_1b8);
  lVar11 = *(long *)(param_1 + 0x48);
  FUN_001e1500(auStack_188);
  local_190 = *(long **)(lVar11 + 0x10);
  plVar1 = local_190 + 1;
  iVar8 = (int)*plVar1;
  if (iVar8 == (int)*plVar1) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
LAB_001d8050:
      FUN_001e15a8(auStack_188,lVar11 + 0x18);
      if (param_2 != (undefined8 *)0x0) {
        *param_2 = local_190;
      }
      if (param_3 != 0) {
        FUN_001e15a8(param_3,auStack_188);
      }
      plVar1 = local_190 + 1;
      iVar8 = (int)*plVar1;
      iVar9 = (int)*plVar1 + -1;
      if (iVar8 == (int)*plVar1) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar9;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
LAB_001d80f4:
          if ((iVar9 == 0) && (*(char *)((long)local_190 + 0xc) == '\0')) {
            *(undefined1 *)((long)local_190 + 0xc) = 1;
            (**(code **)(*local_190 + 8))();
          }
          FUN_001e1868(auStack_188);
          uVar10 = 1;
          goto LAB_001d8120;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        lVar11 = *plVar1;
        iVar9 = iVar8 + -1;
        if ((int)lVar11 == iVar8) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_001d80f4;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = (int)lVar11;
      } while( true );
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar4 = *plVar1;
    if ((int)lVar4 == iVar8) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_001d8050;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar8 = (int)lVar4;
  } while( true );
}

