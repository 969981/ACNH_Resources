
void FUN_001d8400(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined1 auStack_c0 [8];
  long *local_b8;
  undefined1 auStack_b0 [144];
  
  FUN_00187810(auStack_c0);
  lVar8 = *(long *)(param_1 + 0x48);
  FUN_001e1500(auStack_b0);
  local_b8 = *(long **)(lVar8 + 0x10);
  plVar1 = local_b8 + 1;
  iVar6 = (int)*plVar1;
  if (iVar6 == (int)*plVar1) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
LAB_001d846c:
      FUN_001e15a8(auStack_b0,lVar8 + 0x18);
      plVar9 = *(long **)(param_1 + 0x48);
      lVar8 = *plVar9;
      *(long *)(lVar8 + 8) = plVar9[1];
      *(long *)plVar9[1] = lVar8;
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + -1;
      plVar5 = (long *)plVar9[2];
      plVar1 = plVar5 + 1;
      iVar6 = (int)*plVar1;
      iVar7 = (int)*plVar1 + -1;
      if (iVar6 == (int)*plVar1) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
LAB_001d8514:
          if ((iVar7 == 0) && (*(char *)((long)plVar5 + 0xc) == '\0')) {
            *(undefined1 *)((long)plVar5 + 0xc) = 1;
            (**(code **)(*plVar5 + 8))();
          }
          FUN_001e1868(plVar9 + 3);
          FUN_00187e4c(plVar9);
          plVar1 = local_b8 + 1;
          iVar6 = (int)*plVar1;
          iVar7 = (int)*plVar1 + -1;
          if (iVar6 == (int)*plVar1) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar7;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
LAB_001d85b8:
              if ((iVar7 == 0) && (*(char *)((long)local_b8 + 0xc) == '\0')) {
                *(undefined1 *)((long)local_b8 + 0xc) = 1;
                (**(code **)(*local_b8 + 8))();
                FUN_001e1868(auStack_b0);
                return;
              }
              FUN_001e1868(auStack_b0);
              return;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          do {
            lVar8 = *plVar1;
            iVar7 = iVar6 + -1;
            if ((int)lVar8 == iVar6) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *(int *)plVar1 = iVar7;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_001d85b8;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar6 = (int)lVar8;
          } while( true );
        }
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        lVar8 = *plVar1;
        iVar7 = iVar6 + -1;
        if ((int)lVar8 == iVar6) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_001d8514;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar6 = (int)lVar8;
      } while( true );
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar4 = *plVar1;
    if ((int)lVar4 == iVar6) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_001d846c;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar6 = (int)lVar4;
  } while( true );
}

