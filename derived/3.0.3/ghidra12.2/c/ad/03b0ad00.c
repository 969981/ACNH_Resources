
void FUN_03b0ad00(undefined8 param_1,long param_2,undefined4 param_3,long param_4)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  long local_48;
  long local_28;
  
  if (*(int *)(param_4 + 0x50) == -1) {
    local_28 = -1;
  }
  else {
    uVar4 = *(int *)(param_4 + 0x50) - (uint)*(ushort *)(DAT_05ae78f0 + 0x3da);
    if (*(uint *)(DAT_05ae78f0 + 0x368) <= uVar4) {
      uVar4 = 0;
    }
    puVar1 = (uint *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar4 * 0x20 + 4);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    local_28 = (long)*(int *)(param_4 + 0x50);
  }
  puVar1 = (uint *)(param_4 + 0xd4);
  do {
    uVar4 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar4 | 0x80000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((uVar4 & 0x7fffffff) != 0) {
    if ((int)uVar4 < 0) {
      if ((int)*puVar1 < 0) {
        lVar5 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar5 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_0390d37c(param_4);
    }
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  local_48 = (long)*(short *)(param_4 + 0xda);
  param_2 = param_2 + 8;
  FUN_00348c64(param_2,param_3,0,&local_28,&local_48);
  FUN_00348c64(param_2,param_3,4,&local_28,&local_48);
  FUN_00348c64(param_2,param_3,5,&local_28,&local_48);
  return;
}

