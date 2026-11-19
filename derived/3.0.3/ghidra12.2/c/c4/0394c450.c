
void FUN_0394c450(float param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  float local_54;
  
  if (param_1 == 1.0) {
    lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x28) + 8) +
                     0x18);
    FUN_03907810(lVar7,param_2);
  }
  else {
    lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x1b8) + 8)
                     + 0x18);
    FUN_03907810(lVar7,param_2);
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
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar6 = 0x228;
    if (*(uint *)(lVar7 + 0x30) < 0x18) {
      lVar6 = 0;
    }
    iVar2 = *(int *)(*(long *)(lVar7 + 0x38) + lVar6);
    local_54 = param_1;
    if (iVar2 != -1) {
      (*DAT_04c62af0)(*(undefined8 *)(param_2 + 0xb8),
                      *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                      *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar2,4,&local_54);
    }
  }
  FUN_03949e90(param_2,lVar7,param_3,param_4,param_5,param_6);
  return;
}

