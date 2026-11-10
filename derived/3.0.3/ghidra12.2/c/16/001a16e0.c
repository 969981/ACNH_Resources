
void FUN_001a16e0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  
  *param_1 = (long)(PTR_DAT_04bcc250 + 0x10);
  lVar7 = param_1[0xb];
  if (lVar7 == 0) {
LAB_001a1818:
    *param_1 = (long)&PTR_FUN_048398b8;
    if (param_1[8] != 0) {
      param_1[8] = 0;
    }
    param_1[2] = (long)(PTR_DAT_04bc0ec8 + 0x10);
    FUN_0018b1a0();
    *param_1 = (long)&PTR_LAB_04838fe8;
    return;
  }
  plVar1 = param_1 + 9;
  if ((long *)param_1[10] == plVar1) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
LAB_001a172c:
  plVar6 = (long *)param_1[10];
  if (plVar6 != plVar1) {
    plVar10 = (long *)plVar6[2];
    do {
      if ((long *)plVar6[2] == plVar10) {
        if (plVar6 != plVar1) {
          lVar2 = *plVar6;
          lVar3 = plVar6[1];
          param_1[0xb] = lVar7 + -1;
          *(long *)(lVar2 + 8) = lVar3;
          *(long *)plVar6[1] = lVar2;
          FUN_00187e4c();
          plVar6 = plVar10 + 1;
          iVar9 = (int)*plVar6;
          iVar8 = (int)*plVar6 + -1;
          if (iVar9 != (int)*plVar6) {
            ClearExclusiveLocal();
            goto LAB_001a17f0;
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar5) {
            *(int *)plVar6 = iVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_001a17f0;
          goto LAB_001a17bc;
        }
        break;
      }
      plVar6 = (long *)plVar6[1];
    } while (plVar6 != plVar1);
  }
  goto LAB_001a1724;
LAB_001a17f0:
  lVar7 = *plVar6;
  iVar8 = iVar9 + -1;
  if ((int)lVar7 == iVar9) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar5) {
      *(int *)plVar6 = iVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_001a17bc;
  }
  else {
    ClearExclusiveLocal();
  }
  iVar9 = (int)lVar7;
  goto LAB_001a17f0;
LAB_001a17bc:
  if ((iVar8 == 0) && (*(char *)((long)plVar10 + 0xc) == '\0')) {
    *(undefined1 *)((long)plVar10 + 0xc) = 1;
    (**(code **)(*plVar10 + 8))(plVar10);
  }
LAB_001a1724:
  lVar7 = param_1[0xb];
  if (lVar7 == 0) goto LAB_001a1818;
  goto LAB_001a172c;
}

