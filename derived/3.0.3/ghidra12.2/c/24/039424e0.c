
void FUN_039424e0(long param_1,undefined8 param_2,undefined8 param_3)

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
  
  if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 0x3a) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x1c8);
  }
  FUN_03907810(lVar9,param_1);
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
  if (**(int **)(lVar9 + 0x38) != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(lVar9 + 0x38),0x30
               ,PTR_DAT_04bb2f80);
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
  iVar2 = *(int *)(*(long *)(lVar9 + 0x38) + (ulong)(1 < *(uint *)(lVar9 + 0x30)) * 0x18);
  if (iVar2 != -1) {
    lVar8 = *(long *)puVar7;
    (**(code **)puVar6)(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(lVar8 + 0x70),
                        *(undefined8 *)(lVar8 + 0x18),(long)iVar2,0x30,param_2);
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
  lVar8 = 0x30;
  if (*(uint *)(lVar9 + 0x30) < 3) {
    lVar8 = 0;
  }
  iVar2 = *(int *)(*(long *)(lVar9 + 0x38) + lVar8);
  if (iVar2 == -1) {
    return;
  }
  lVar9 = *(long *)puVar7;
                    /* WARNING: Could not recover jumptable at 0x03942790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)puVar6)(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(lVar9 + 0x70),
                      *(undefined8 *)(lVar9 + 0x18),(long)iVar2,0x40,param_3);
  return;
}

