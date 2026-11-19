
void FUN_03946bc0(float param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 int param_6,undefined4 param_7)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined1 *local_80;
  undefined1 *puStack_78;
  
  uVar7 = 0x28;
  if (*(short *)(param_3 + 0x3a) == 9) {
    uVar7 = 0x29;
  }
  lVar9 = 0x28;
  if (param_1 == -1.0) {
    lVar9 = 0x18;
  }
  lVar9 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) +
                                       (ulong)uVar7 * 8) + 8) + lVar9);
  FUN_03907810(lVar9,param_2);
  puVar1 = (uint *)(lVar9 + 0x14);
  do {
    uVar7 = *puVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = uVar7 | 0x80000000;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar7 & 0x7fffffff) != 0) {
    if ((int)uVar7 < 0) {
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
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
    puVar6 = PTR_DAT_04bd0fc8;
    puVar5 = PTR_DAT_04bcf2e0;
  } while (cVar3 != '\0');
  local_80 = (undefined1 *)CONCAT44(local_80._4_4_,(float)param_6);
  lVar8 = 0x48;
  if (*(uint *)(lVar9 + 0x30) < 4) {
    lVar8 = 0;
  }
  iVar2 = *(int *)(*(long *)(lVar9 + 0x38) + lVar8);
  if (iVar2 != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar2,4,&local_80);
  }
  do {
    uVar7 = *puVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = uVar7 | 0x80000000;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar7 & 0x7fffffff) != 0) {
    if ((int)uVar7 < 0) {
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
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  local_80 = (undefined1 *)CONCAT44(local_80._4_4_,param_7);
  lVar8 = 0x198;
  if (*(uint *)(lVar9 + 0x30) < 0x12) {
    lVar8 = 0;
  }
  iVar2 = *(int *)(*(long *)(lVar9 + 0x38) + lVar8);
  if (iVar2 != -1) {
    lVar8 = *(long *)puVar6;
    (**(code **)puVar5)(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(lVar8 + 0x70),
                        *(undefined8 *)(lVar8 + 0x18),(long)iVar2,4,&local_80);
  }
  do {
    uVar7 = *puVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = uVar7 | 0x80000000;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar7 & 0x7fffffff) != 0) {
    if ((int)uVar7 < 0) {
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
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  local_80 = (undefined1 *)CONCAT44(local_80._4_4_,param_1);
  lVar8 = 0x30;
  if (*(uint *)(lVar9 + 0x30) < 3) {
    lVar8 = 0;
  }
  iVar2 = *(int *)(*(long *)(lVar9 + 0x38) + lVar8);
  if (iVar2 != -1) {
    lVar8 = *(long *)puVar6;
    (**(code **)puVar5)(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(lVar8 + 0x70),
                        *(undefined8 *)(lVar8 + 0x18),(long)iVar2,4,&local_80);
  }
  local_80 = &DAT_3f8000003f800000;
  puStack_78 = &DAT_3f8000003f800000;
  FUN_039466e0(param_2,lVar9,param_3,param_4,param_5,&local_80);
  return;
}

