
void FUN_0394a740(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined4 local_64;
  
  lVar6 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x28) + 8);
  lVar9 = *(long *)(lVar6 + 0x28);
  uVar8 = (ulong)(1 < *(uint *)(lVar6 + 0x20));
  lVar6 = lVar9 + uVar8 * 0x150;
  FUN_03907810(lVar6,param_2);
  puVar1 = (uint *)(lVar6 + 0x14);
  do {
    uVar3 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar3 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar3 & 0x7fffffff) != 0) {
    if ((int)uVar3 < 0) {
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
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar9 = lVar9 + uVar8 * 0x150;
  lVar7 = 0x30;
  if (*(uint *)(lVar9 + 0x30) < 3) {
    lVar7 = 0;
  }
  iVar2 = *(int *)(*(long *)(lVar9 + 0x38) + lVar7);
  local_64 = param_1;
  if (iVar2 != -1) {
    (*DAT_04c62af0)(*(undefined8 *)(param_2 + 0xb8),
                    *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                    *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar2,4,&local_64);
  }
  FUN_03949e90(param_2,lVar6,param_3,param_4,param_5,param_6);
  return;
}

