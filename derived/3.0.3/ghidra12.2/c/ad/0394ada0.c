
void FUN_0394ada0(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x70) + 8);
  if (param_4 < 1) {
    lVar6 = *(long *)(lVar6 + 0x18);
  }
  else {
    uVar5 = param_4 - 1;
    if (*(uint *)(lVar6 + 0x20) <= uVar5) {
      uVar5 = 0;
    }
    lVar6 = *(long *)(lVar6 + 0x28) + (ulong)uVar5 * 0x150;
  }
  FUN_03907810(lVar6,param_1);
  puVar1 = (uint *)(lVar6 + 0x14);
  do {
    uVar5 = *puVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = uVar5 | 0x80000000;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar5 & 0x7fffffff) != 0) {
    if ((int)uVar5 < 0) {
      if ((int)*puVar1 < 0) {
        lVar7 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar7 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar6);
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
  lVar7 = 0x1b0;
  if (*(uint *)(lVar6 + 0x30) < 0x13) {
    lVar7 = 0;
  }
  iVar2 = *(int *)(*(long *)(lVar6 + 0x38) + lVar7);
  if (iVar2 != -1) {
    (*DAT_04c62af0)(*(undefined8 *)(param_1 + 0xb8),
                    *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                    *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar2,8,param_5);
  }
  FUN_03949e90(param_1,lVar6,param_2,param_3,param_6,param_7);
  return;
}

