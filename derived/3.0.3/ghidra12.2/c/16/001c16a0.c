
void FUN_001c16a0(long *param_1,undefined4 param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_e0 [144];
  
  if ((*(char *)(param_1[0x35] + 8) != '\0') &&
     (uVar7 = (**(code **)(*param_1 + 0x30))(), (uVar7 & 1) != 0)) {
    iVar2 = *(int *)PTR_DAT_04bcbfe8;
    do {
      plVar8 = (long *)FUN_00185a6c(0x38);
      if (plVar8 != (long *)0x0) {
        *plVar8 = (long)&PTR_LAB_04838fe8;
        *(undefined4 *)(plVar8 + 1) = 1;
        *(undefined1 *)((long)plVar8 + 0xc) = 0;
        *plVar8 = (long)&PTR_FUN_048393d8;
        FUN_00196a24(plVar8,param_2,0);
      }
      FUN_001e1500(auStack_e0);
      iVar6 = (**(code **)(*param_1 + 0x40))(param_1,plVar8,auStack_e0);
      if (iVar6 == iVar2) {
        FUN_001d7920(param_1 + 0x29,plVar8,auStack_e0);
      }
      plVar1 = plVar8 + 1;
      iVar10 = (int)*plVar1;
      iVar9 = (int)*plVar1 + -1;
      if (iVar10 != (int)*plVar1) {
        ClearExclusiveLocal();
LAB_001c1820:
        do {
          lVar5 = *plVar1;
          iVar9 = iVar10 + -1;
          if ((int)lVar5 == iVar10) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar9;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_001c17bc;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar10 = (int)lVar5;
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_001c1820;
LAB_001c17bc:
      if ((iVar9 == 0) && (*(char *)((long)plVar8 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar8 + 0xc) = 1;
        (**(code **)(*plVar8 + 8))(plVar8);
      }
      FUN_001e1868(auStack_e0);
      uVar7 = (**(code **)(*param_1 + 0x30))(param_1);
    } while (((uVar7 & 1) != 0) && (iVar6 == iVar2));
  }
  return;
}

