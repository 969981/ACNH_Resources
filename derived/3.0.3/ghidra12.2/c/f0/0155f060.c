
void FUN_0155f060(long param_1,undefined8 param_2,uint param_3,undefined8 param_4,undefined4 param_5
                 )

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  puVar1 = (uint *)(param_1 + 0x14);
  do {
    uVar2 = *puVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = uVar2 | 0x80000000;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar2 & 0x7fffffff) != 0) {
    if ((int)uVar2 < 0) {
      if ((int)*puVar1 < 0) {
        lVar5 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar5 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(param_1);
    }
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (*(uint *)(param_1 + 0x60) <= param_3) {
    param_3 = 0;
  }
  FUN_0390d290(param_4,param_2,*(long *)(param_1 + 0x68) + (long)(int)param_3 * 0x18,param_5,0);
  return;
}

