
void FUN_0394d790(long param_1,undefined8 param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  float local_44;
  
  if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 0x19) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0xc0);
  }
  FUN_03907810(lVar7,param_1);
  puVar1 = (uint *)(lVar7 + 0x14);
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
  local_44 = (float)param_3;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar6 = 0x48;
  if (*(uint *)(lVar7 + 0x30) < 4) {
    lVar6 = 0;
  }
  iVar2 = *(int *)(*(long *)(lVar7 + 0x38) + lVar6);
  if (iVar2 != -1) {
    (*DAT_04c62af0)(*(undefined8 *)(param_1 + 0xb8),
                    *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                    *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar2,4,&local_44);
  }
  FUN_0394a420(param_1,lVar7,param_2);
  return;
}

