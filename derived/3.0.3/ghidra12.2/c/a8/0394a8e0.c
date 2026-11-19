
void FUN_0394a8e0(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined4 local_64;
  
  if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 0x2d) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x160);
  }
  FUN_03907810(lVar9,param_2);
  puVar1 = (uint *)(lVar9 + 0x14);
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
        lVar8 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar8 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar9);
    }
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
    puVar7 = PTR_DAT_04bd0fc8;
    puVar6 = PTR_DAT_04bcf2e0;
  } while (cVar4 != '\0');
  lVar8 = 0x60;
  if (*(uint *)(lVar9 + 0x30) < 5) {
    lVar8 = 0;
  }
  iVar2 = *(int *)(*(long *)(lVar9 + 0x38) + lVar8);
  if (iVar2 != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar2,8,param_5);
  }
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
        lVar8 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar8 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar9);
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
  lVar8 = 0x78;
  if (*(uint *)(lVar9 + 0x30) < 6) {
    lVar8 = 0;
  }
  iVar2 = *(int *)(*(long *)(lVar9 + 0x38) + lVar8);
  local_64 = param_1;
  if (iVar2 != -1) {
    lVar8 = *(long *)puVar7;
    (**(code **)puVar6)(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(lVar8 + 0x70),
                        *(undefined8 *)(lVar8 + 0x18),(long)iVar2,4,&local_64);
  }
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
        lVar8 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar8 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar9);
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
  lVar8 = 0x90;
  if (*(uint *)(lVar9 + 0x30) < 7) {
    lVar8 = 0;
  }
  iVar2 = *(int *)(*(long *)(lVar9 + 0x38) + lVar8);
  if (iVar2 != -1) {
    lVar8 = *(long *)puVar7;
    (**(code **)puVar6)(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(lVar8 + 0x70),
                        *(undefined8 *)(lVar8 + 0x18),(long)iVar2,8,param_6);
  }
  FUN_03949e90(param_2,lVar9,param_3,param_4,param_7,param_8);
  return;
}

