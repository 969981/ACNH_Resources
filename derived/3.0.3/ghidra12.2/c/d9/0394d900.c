
void FUN_0394d900(long param_1,undefined8 param_2,ulong param_3,ulong param_4,int param_5)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  float local_44;
  
  bVar4 = (param_3 & 1) == 0;
  uVar5 = 0x1a;
  if (bVar4) {
    uVar5 = 0x1c;
  }
  uVar7 = 0x1f;
  if (bVar4) {
    uVar7 = 0x21;
  }
  if ((param_4 & 1) == 0) {
    uVar5 = uVar7;
  }
  if (uVar5 < *(uint *)(DAT_05ae9310 + 8)) {
    lVar8 = *(long *)(*(long *)(DAT_05ae9310 + 0x10) + (ulong)uVar5 * 8);
  }
  else {
    lVar8 = 0;
  }
  FUN_03907810(lVar8,param_1);
  puVar1 = (uint *)(lVar8 + 0x14);
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
      FUN_03907b80(lVar8);
    }
  }
  local_44 = (float)param_5;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar6 = 0x48;
  if (*(uint *)(lVar8 + 0x30) < 4) {
    lVar6 = 0;
  }
  iVar2 = *(int *)(*(long *)(lVar8 + 0x38) + lVar6);
  if (iVar2 != -1) {
    (*DAT_04c62af0)(*(undefined8 *)(param_1 + 0xb8),
                    *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                    *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar2,4,&local_44);
  }
  FUN_0394a420(param_1,lVar8,param_2);
  return;
}

