
void FUN_001ca0c0(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  
  (**(code **)(**(long **)(param_1 + 0x328) + 0x18))();
  if ((*(ushort *)(param_2 + 0x60) >> 5 & 1) == 0) {
    FUN_001c9e94(param_1,*(undefined8 *)(param_2 + 0x138),param_2);
    return;
  }
  uVar5 = FUN_001c9b40(param_1,param_2);
  if ((uVar5 & 1) == 0) {
    return;
  }
  FUN_001c9e94(param_1,*(undefined8 *)
                        (*(long *)(param_1 + 0x1b8) + (ulong)*(byte *)(param_2 + 0xa4) * 8),param_2)
  ;
  *(undefined1 *)(*(long *)(param_1 + 0x1d0) + (ulong)*(byte *)(param_2 + 0xa4)) = 1;
  plVar6 = *(long **)(*(long *)(param_1 + 0x1b8) + (ulong)*(byte *)(param_2 + 0xa4) * 8);
  plVar1 = plVar6 + 1;
  iVar8 = (int)*plVar1;
  iVar7 = (int)*plVar1 + -1;
  if (iVar8 == (int)*plVar1) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
LAB_001ca17c:
      if ((iVar7 == 0) && (*(char *)((long)plVar6 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar6 + 0xc) = 1;
        (**(code **)(*plVar6 + 8))();
      }
      *(undefined8 *)(*(long *)(param_1 + 0x1b8) + (ulong)*(byte *)(param_2 + 0xa4) * 8) = 0;
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar4 = *plVar1;
    iVar7 = iVar8 + -1;
    if ((int)lVar4 == iVar8) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_001ca17c;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar8 = (int)lVar4;
  } while( true );
}

