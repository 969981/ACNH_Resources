
void FUN_001d7920(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  ulong local_d0;
  long *local_c8;
  undefined1 auStack_c0 [144];
  ulong local_28;
  
  FUN_001e1500(auStack_c0);
  plVar1 = param_2 + 1;
  iVar7 = (int)*plVar1;
  if (iVar7 == (int)*plVar1) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
LAB_001d7990:
      local_c8 = param_2;
      FUN_001e15a8(auStack_c0,param_3);
      FUN_00187810(&local_d0);
      local_28 = *(ulong *)(param_1 + 0x30);
      if (*(ulong *)(param_1 + 0x30) < local_d0) {
        *(ulong *)(param_1 + 0x30) = local_d0;
        local_28 = local_d0;
      }
      FUN_001dcec0(param_1 + 8,&local_c8,&local_28);
      uVar2 = *(uint *)(*(long *)(param_1 + 0x28) + 0x18);
      if (uVar2 != 0xffffffff) {
        uVar5 = 0;
        if ((ulong)uVar2 != 0) {
          uVar5 = (ulong)(local_c8[3] * 8000) / (ulong)uVar2;
        }
        *(ulong *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + uVar5;
      }
      plVar1 = local_c8 + 1;
      iVar7 = (int)*plVar1;
      iVar8 = (int)*plVar1 + -1;
      if (iVar7 == (int)*plVar1) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
LAB_001d7a74:
          if ((iVar8 == 0) && (*(char *)((long)local_c8 + 0xc) == '\0')) {
            *(undefined1 *)((long)local_c8 + 0xc) = 1;
            (**(code **)(*local_c8 + 8))();
          }
          FUN_001e1868(auStack_c0);
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        lVar6 = *plVar1;
        iVar8 = iVar7 + -1;
        if ((int)lVar6 == iVar7) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_001d7a74;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar7 = (int)lVar6;
      } while( true );
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar6 = *plVar1;
    if ((int)lVar6 == iVar7) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_001d7990;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar7 = (int)lVar6;
  } while( true );
}

