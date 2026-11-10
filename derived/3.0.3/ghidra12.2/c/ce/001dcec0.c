
void FUN_001dcec0(long param_1,long *param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined1 auStack_c8 [144];
  ulong local_38;
  
  plVar4 = *(long **)(param_1 + 0x10);
  plVar10 = (long *)(param_1 + 8);
  uVar9 = *param_3;
  if (plVar10 != plVar4) {
    do {
      plVar8 = (long *)*plVar10;
      if ((ulong)plVar8[0x15] <= uVar9) goto LAB_001dcf10;
      plVar10 = plVar8;
    } while (plVar8 != plVar4);
    plVar10 = plVar4;
  }
LAB_001dcf10:
  FUN_001e1500(auStack_c8);
  plVar8 = (long *)*param_2;
  plVar4 = plVar8 + 1;
  iVar6 = (int)*plVar4;
  if (iVar6 == (int)*plVar4) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *(int *)plVar4 = (int)*plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') {
LAB_001dcf60:
      FUN_001e15a8(auStack_c8,param_2 + 1);
      local_38 = uVar9;
      plVar3 = (long *)FUN_00187df4(0xb0);
      *plVar3 = 0;
      FUN_001e1500(plVar3 + 3);
      plVar3[2] = (long)plVar8;
      plVar4 = plVar8 + 1;
      iVar6 = (int)*plVar4;
      if (iVar6 == (int)*plVar4) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *(int *)plVar4 = (int)*plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
LAB_001dd004:
          FUN_001e15a8(plVar3 + 3,auStack_c8);
          plVar3[0x15] = local_38;
          lVar5 = *plVar10;
          *(long **)(lVar5 + 8) = plVar3;
          *plVar3 = lVar5;
          *plVar10 = (long)plVar3;
          plVar3[1] = (long)plVar10;
          *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
          plVar10 = plVar8 + 1;
          iVar6 = (int)*plVar10;
          iVar7 = (int)*plVar10 + -1;
          if (iVar6 == (int)*plVar10) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar2) {
              *(int *)plVar10 = iVar7;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') {
LAB_001dd0b4:
              if ((iVar7 == 0) && (*(char *)((long)plVar8 + 0xc) == '\0')) {
                *(undefined1 *)((long)plVar8 + 0xc) = 1;
                (**(code **)(*plVar8 + 8))();
              }
              FUN_001e1868(auStack_c8);
              return;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          do {
            lVar5 = *plVar10;
            iVar7 = iVar6 + -1;
            if ((int)lVar5 == iVar6) {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar2) {
                *(int *)plVar10 = iVar7;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_001dd0b4;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar6 = (int)lVar5;
          } while( true );
        }
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        lVar5 = *plVar4;
        if ((int)lVar5 == iVar6) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *(int *)plVar4 = iVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_001dd004;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar6 = (int)lVar5;
      } while( true );
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar5 = *plVar4;
    if ((int)lVar5 == iVar6) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *(int *)plVar4 = iVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') goto LAB_001dcf60;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar6 = (int)lVar5;
  } while( true );
}

