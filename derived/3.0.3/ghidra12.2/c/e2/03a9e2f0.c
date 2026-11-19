
void FUN_03a9e2f0(long param_1,long param_2,uint param_3,long param_4)

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
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  float local_78;
  float fStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  float local_58;
  undefined4 uStack_54;
  
  puVar1 = (uint *)(param_4 + 0x14);
  param_3 = *(uint *)(param_1 + 0x18) & param_3;
  if (*(uint *)(param_1 + 400) <= param_3) {
    param_3 = 0;
  }
  lVar9 = *(long *)(*(long *)(param_1 + 0x198) + (long)(int)param_3 * 8);
  local_60 = *(undefined4 *)(lVar9 + 0x78);
  uStack_5c = *(undefined4 *)(lVar9 + 0x38);
  uStack_54 = *(undefined4 *)(lVar9 + 0x58);
  local_58 = 1.0 / *(float *)(lVar9 + 0x140);
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
      FUN_03907b80(param_4);
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
  if (**(int **)(param_4 + 0x38) != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(param_4 + 0x38),
               0x10,&local_60);
  }
  local_70 = *(undefined4 *)(lVar9 + 0xd8);
  uStack_6c = *(undefined4 *)(lVar9 + 0xf8);
  local_68 = *(undefined4 *)(lVar9 + 0x118);
  uStack_64 = *(undefined4 *)(lVar9 + 0x138);
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
      FUN_03907b80(param_4);
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
  iVar2 = *(int *)(*(long *)(param_4 + 0x38) + (ulong)(1 < *(uint *)(param_4 + 0x30)) * 0x18);
  if (iVar2 != -1) {
    (**(code **)puVar6)(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar7 + 0x70),
                        *(undefined8 *)(*(long *)puVar7 + 0x18),(long)iVar2,0x10,&local_70);
  }
  local_80 = *(undefined4 *)(lVar9 + 0x148);
  uStack_7c = *(undefined4 *)(lVar9 + 0x14c);
  local_78 = *(float *)(lVar9 + 0x144);
  fStack_74 = 1.0 / local_78;
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
      FUN_03907b80(param_4);
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
  lVar8 = 0x30;
  if (*(uint *)(param_4 + 0x30) < 3) {
    lVar8 = 0;
  }
  iVar2 = *(int *)(*(long *)(param_4 + 0x38) + lVar8);
  if (iVar2 != -1) {
    (**(code **)puVar6)(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar7 + 0x70),
                        *(undefined8 *)(*(long *)puVar7 + 0x18),(long)iVar2,0x10,&local_80);
  }
  local_90 = *(undefined4 *)(lVar9 + 0xb8);
  local_88 = 0;
  uStack_8c = *(undefined4 *)(lVar9 + 0x98);
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
        lVar9 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar9 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(param_4);
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
  lVar9 = 0x48;
  if (*(uint *)(param_4 + 0x30) < 4) {
    lVar9 = 0;
  }
  iVar2 = *(int *)(*(long *)(param_4 + 0x38) + lVar9);
  if (iVar2 != -1) {
    (**(code **)puVar6)(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar7 + 0x70),
                        *(undefined8 *)(*(long *)puVar7 + 0x18),(long)iVar2,0x10,&local_90);
  }
  return;
}

