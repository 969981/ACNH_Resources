
void FUN_004111c0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  int *piVar11;
  
  puVar7 = PTR_DAT_04bd2a68;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  *param_1 = (long)(PTR_DAT_04bd2ac0 + 0x10);
  param_1[0x40] = (long)puVar1;
  param_1[0x39] = (long)(puVar7 + 0x10);
  FUN_0018b1a0(param_1 + 0x40);
  puVar7 = PTR_DAT_04bd2a60;
  param_1[0x3b] = (long)puVar1;
  param_1[0x39] = (long)(puVar7 + 0x10);
  FUN_0018b1a0(param_1 + 0x3b);
  param_1[0x33] = (long)(PTR_DAT_04bd2a50 + 0x10);
  param_1[0x34] = (long)puVar1;
  FUN_0018b1a0(param_1 + 0x34);
  plVar10 = (long *)param_1[0x32];
  param_1[0x31] = (long)(PTR_DAT_04bd2a58 + 0x10);
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 1;
    iVar9 = (int)*plVar2;
    iVar8 = (int)*plVar2 + -1;
    if (iVar9 != (int)*plVar2) {
      ClearExclusiveLocal();
LAB_004112e0:
      do {
        lVar6 = *plVar2;
        iVar8 = iVar9 + -1;
        if ((int)lVar6 == iVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0041128c;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = (int)lVar6;
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = iVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_004112e0;
LAB_0041128c:
    if (iVar8 == 0) {
      piVar11 = (int *)((long)plVar10 + 0xc);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      iVar8 = *piVar11 + -1;
      iVar9 = *piVar11;
      if (iVar9 != *piVar11) {
        ClearExclusiveLocal();
LAB_00411390:
        do {
          iVar3 = *piVar11;
          iVar8 = iVar9 + -1;
          if (iVar3 == iVar9) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar5) {
              *piVar11 = iVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_00411314;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar9 = iVar3;
        } while( true );
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar5) {
        *piVar11 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_00411390;
LAB_00411314:
      if (iVar8 == 0) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
  }
  param_1[0x2b] = (long)puVar1;
  FUN_0018b1a0(param_1 + 0x2b);
  FUN_0040dcbc(param_1 + 0x2a);
  plVar10 = (long *)param_1[0x29];
  param_1[0x28] = (long)(PTR_DAT_04bd2a48 + 0x10);
  if (plVar10 == (long *)0x0) goto LAB_0041145c;
  plVar2 = plVar10 + 1;
  iVar9 = (int)*plVar2;
  iVar8 = (int)*plVar2 + -1;
  if (iVar9 == (int)*plVar2) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = iVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
LAB_004113c4:
      if (iVar8 != 0) {
LAB_0041145c:
        FUN_001976b0(param_1 + 0x15);
        FUN_0019a368(param_1);
        return;
      }
      piVar11 = (int *)((long)plVar10 + 0xc);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      iVar8 = *piVar11 + -1;
      iVar9 = *piVar11;
      if (iVar9 == *piVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar5) {
          *piVar11 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
LAB_00411448:
          if (iVar8 == 0) {
            (**(code **)(*plVar10 + 8))(plVar10);
          }
          goto LAB_0041145c;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        iVar3 = *piVar11;
        iVar8 = iVar9 + -1;
        if (iVar3 == iVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar5) {
            *piVar11 = iVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00411448;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar3;
      } while( true );
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar6 = *plVar2;
    iVar8 = iVar9 + -1;
    if ((int)lVar6 == iVar9) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_004113c4;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar9 = (int)lVar6;
  } while( true );
}

