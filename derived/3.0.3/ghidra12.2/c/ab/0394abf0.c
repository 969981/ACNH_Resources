
void FUN_0394abf0(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5
                 ,undefined8 param_6)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  float local_68;
  float fStack_64;
  undefined4 local_54;
  
  uVar5 = param_5 + 5;
  if (3 < param_5 - 1) {
    uVar5 = 5;
  }
  if (uVar5 < *(uint *)(DAT_05ae9310 + 8)) {
    lVar7 = *(long *)(*(long *)(DAT_05ae9310 + 0x10) + (ulong)uVar5 * 8);
  }
  else {
    lVar7 = 0;
  }
  FUN_03907810(lVar7,param_2);
  puVar1 = (uint *)(lVar7 + 0x14);
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
        lVar6 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar6 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar7);
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
  lVar6 = 0x108;
  if (*(uint *)(lVar7 + 0x30) < 0xc) {
    lVar6 = 0;
  }
  iVar2 = *(int *)(*(long *)(lVar7 + 0x38) + lVar6);
  local_54 = param_1;
  if (iVar2 != -1) {
    (*DAT_04c62af0)(*(undefined8 *)(param_2 + 0xb8),
                    *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                    *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar2,4,&local_54);
  }
  local_68 = 1.0 / (float)(1 << (ulong)(param_5 & 0x1f));
  fStack_64 = local_68;
  FUN_03949e90(param_2,lVar7,param_3,param_4,&local_68,param_6);
  return;
}

