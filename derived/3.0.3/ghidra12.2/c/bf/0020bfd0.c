
void FUN_0020bfd0(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int *piVar11;
  
  *param_1 = (long)(PTR_DAT_04bccc48 + 0x10);
  plVar6 = (long *)param_1[0x92];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    iVar9 = (int)*plVar1;
    iVar8 = (int)*plVar1 + -1;
    if (iVar9 != (int)*plVar1) {
      ClearExclusiveLocal();
LAB_0020c0c0:
      do {
        lVar7 = *plVar1;
        iVar8 = iVar9 + -1;
        if ((int)lVar7 == iVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0020c02c;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = (int)lVar7;
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_0020c0c0;
LAB_0020c02c:
    if ((iVar8 == 0) && (*(char *)((long)plVar6 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar6 + 0xc) = 1;
      (**(code **)(*plVar6 + 8))();
    }
    param_1[0x92] = 0;
  }
  if (param_1[0x1a] != 0) {
    FUN_00187e4c(param_1[0x1a] + -4);
  }
  FUN_001a6b28(param_1 + 0x99);
  plVar6 = (long *)param_1[0x98];
  param_1[0x97] = (long)&PTR_LAB_0483f968;
  if (plVar6 == (long *)0x0) goto LAB_0020c18c;
  plVar1 = plVar6 + 1;
  iVar9 = (int)*plVar1;
  iVar8 = (int)*plVar1 + -1;
  if (iVar9 == (int)*plVar1) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
LAB_0020c0f4:
      if (iVar8 != 0) {
LAB_0020c18c:
        param_1[0x6d] = (long)(PTR_DAT_04bccaa0 + 0x10);
        FUN_001b8504(param_1 + 0x80);
        if (param_1[0x7f] != 0) {
          plVar6 = (long *)param_1[0x7e];
          param_1[0x7f] = 0;
          lVar7 = param_1[0x7d];
          lVar10 = *plVar6;
          *(undefined8 *)(lVar10 + 8) = *(undefined8 *)(lVar7 + 8);
          **(long **)(lVar7 + 8) = lVar10;
          while (plVar6 != param_1 + 0x7d) {
            plVar6 = (long *)plVar6[1];
            FUN_00187e4c();
          }
        }
        FUN_001b8504(param_1 + 0x6f);
        FUN_001b8504(param_1 + 0x5f);
        FUN_00196ce0(param_1 + 0x57);
        FUN_001fbac0(param_1 + 0x39);
        FUN_001976b0(param_1 + 0x27);
        puVar2 = PTR_DAT_04bc0ec8 + 0x10;
        param_1[0x21] = (long)puVar2;
        FUN_0018b1a0(param_1 + 0x21);
        param_1[0x1b] = (long)puVar2;
        FUN_0018b1a0();
        param_1[0x15] = (long)puVar2;
        FUN_0018b1a0();
        FUN_0019a368(param_1);
        return;
      }
      piVar11 = (int *)((long)plVar6 + 0xc);
      (**(code **)(*plVar6 + 0x10))(plVar6);
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
LAB_0020c178:
          if (iVar8 == 0) {
            (**(code **)(*plVar6 + 8))(plVar6);
          }
          goto LAB_0020c18c;
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
          if (cVar4 == '\0') goto LAB_0020c178;
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
    lVar7 = *plVar1;
    iVar8 = iVar9 + -1;
    if ((int)lVar7 == iVar9) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_0020c0f4;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar9 = (int)lVar7;
  } while( true );
}

