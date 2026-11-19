
void FUN_038ca450(long *param_1,long param_2,long param_3,long param_4,long param_5,
                 undefined4 param_6,uint param_7)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  puVar5 = PTR_DAT_04bd0d40;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[1] = param_3;
  lVar8 = param_3;
  if (param_3 == 0) {
    if (DAT_05ae7600 == 0) goto LAB_038ca520;
    lVar8 = FUN_038cb610(DAT_05ae7600,param_1);
    param_1[1] = lVar8;
    if (lVar8 == 0) goto LAB_038ca520;
  }
  if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = lVar8 + 0x90;
    nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
  }
  plVar9 = (long *)(lVar8 + 0x70);
  lVar6 = *plVar9;
  plVar1 = (long *)((long)*(int *)(lVar8 + 0x84) + (long)param_1);
  *plVar9 = (long)plVar1;
  *plVar1 = lVar6;
  plVar1[1] = (long)plVar9;
  if (lVar6 != 0) {
    *(long **)(lVar6 + 8) = plVar1;
  }
  *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + 1;
  if (lVar10 != 0) {
    nn::os::UnlockMutex((MutexType *)(lVar10 + 0x20));
  }
LAB_038ca520:
  param_1[4] = (long)(PTR_DAT_04bb2020 + 0x10);
  lVar8 = *(long *)(param_2 + 8);
  *param_1 = (long)&PTR_FUN_04b64650;
  param_1[7] = param_5;
  param_1[8] = param_3;
  *(undefined4 *)(param_1 + 0x11) = param_6;
  param_1[0xd] = 0;
  param_1[0xe] = (long)(param_1 + 0xe);
  param_1[9] = (long)(param_1 + 9);
  param_1[10] = (long)(param_1 + 9);
  param_1[0xb] = -0x100000000;
  param_1[0xc] = 0;
  param_1[0xf] = (long)(param_1 + 0xe);
  param_1[0x10] = -0x100000000;
  param_1[5] = lVar8;
  param_1[6] = param_4;
  FUN_038e19ac(param_1 + 0x12,param_3);
  puVar5 = PTR_DAT_04bd0d50;
  do {
    uVar2 = *(uint *)puVar5;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar4) {
      *(uint *)puVar5 = uVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0' || (uVar2 & 0xffff) == 0xffff);
  puVar7 = (uint *)(param_1 + 0x1a);
  *puVar7 = uVar2 << 0x10 | 4;
  if ((param_7 & 1) == 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar7,0x10);
      if (bVar4) {
        *puVar7 = *puVar7 & 0xfffffffe;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar7,0x10);
      if (bVar4) {
        *puVar7 = *puVar7 | 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if ((*puVar7 & 1) == 0) {
    *(undefined4 *)((long)param_1 + 0x5c) = 0x60;
    *(undefined4 *)((long)param_1 + 0x84) = 0x10;
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x16));
  *(undefined4 *)((long)param_1 + 0x5c) = 0x60;
  *(undefined4 *)((long)param_1 + 0x84) = 0x10;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x16));
  return;
}

