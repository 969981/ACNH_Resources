
void FUN_01e39b50(long param_1)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_28;
  
  if ((*(byte *)(*(long *)(param_1 + 0x3b8) + 0xad5a) >> 1 & 1) == 0) {
    if ((((*(uint *)(param_1 + 0x248) >> 9 & 1) == 0) &&
        (puVar1 = (uint *)(param_1 + 0x248), (*puVar1 >> 1 & 1) == 0)) && ((*puVar1 >> 8 & 1) == 0))
    {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 0x200;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (*(long *)(param_1 + 0xb0) != param_1 + 0xa8) {
        lVar5 = (long)*(int *)(param_1 + 0xbc);
        plVar4 = (long *)(*(long *)(param_1 + 0xb0) - lVar5);
        do {
          (**(code **)(*plVar4 + 0xb0))(plVar4);
          plVar4 = (long *)(*(long *)((long)plVar4 + lVar5 + 8) - lVar5);
        } while (plVar4 != (long *)((param_1 + 0xa8) - lVar5));
      }
    }
    if (*(int *)(param_1 + 0x548) == 1) {
      *(undefined1 *)(param_1 + 0x68f) = 1;
      FUN_02051f70(param_1 + 0x540);
      return;
    }
  }
  else {
    lVar5 = *(long *)(param_1 + 0x3b0);
    if (*(int *)(lVar5 + 0x360) == 0xc) {
      local_28 = 0;
      FUN_01e5a930(0x40000000,lVar5,0xc,PTR_DAT_04bb2150,(long)&local_28 + 4,&local_28,
                   PTR_DAT_04bc1600,6);
      *(undefined4 *)(lVar5 + 0x3ac) = 0;
    }
  }
  return;
}

