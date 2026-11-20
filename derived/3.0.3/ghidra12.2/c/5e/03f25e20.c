
bool FUN_03f25e20(long *param_1,long *param_2)

{
  uint *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  void *pvVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  ulong uVar15;
  uint *puVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  undefined *local_70;
  char *pcStack_68;
  
  puVar2 = PTR_DAT_04bb2020;
  uVar4 = *(uint *)(param_1 + 0x16);
  if ((uVar4 & 1) != 0) goto LAB_03f266f0;
  puVar1 = (uint *)(param_1 + 0x16);
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "PlayReporter";
  lVar8 = FUN_038c6d48(param_2[1],&local_70,*param_2,8,1,0);
  puVar16 = (uint *)(lVar8 + 0xd0);
  *param_1 = lVar8;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar16,0x10);
    if (bVar6) {
      *puVar16 = *puVar16 | 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    puVar7 = PTR_DAT_04bb2698;
  } while (cVar5 != '\0');
  plVar18 = (long *)*param_2;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    plVar10 = malloc(0x128);
  }
  else {
    if (plVar18 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar12 = (undefined8 *)(lVar8 + 8);
      if (lVar9 != 0) {
        puVar12 = (undefined8 *)(lVar9 + 0xa8);
      }
      plVar18 = (long *)*puVar12;
      if (plVar18 != (long *)0x0) goto LAB_03f25ef4;
      plVar10 = (long *)0x0;
    }
    else {
LAB_03f25ef4:
      plVar10 = (long *)(**(code **)(*plVar18 + 0x30))(plVar18,0x128,8);
    }
    plVar18 = (long *)*param_2;
  }
  uVar3 = *(uint *)(param_2 + 3);
  uVar19 = (ulong)uVar3;
  local_70 = puVar2 + 0x10;
  pcStack_68 = "PlayReporter";
  FUN_038e1f88(plVar10,&local_70,plVar18,*(undefined4 *)((long)param_2 + 0x14),0,0x7fffffff,
               (int)param_2[4],(int)param_2[5]);
  *(undefined4 *)(plVar10 + 0x21) = 0;
  puVar2 = PTR_DAT_04bdf050;
  plVar10[0x22] = 0;
  *plVar10 = (long)(puVar2 + 0x10);
  *(undefined4 *)(plVar10 + 0x23) = 0;
  *(undefined4 *)((long)plVar10 + 0x11c) = 0;
  *(undefined4 *)(plVar10 + 0x24) = 0;
  if ((int)uVar3 < 1) {
LAB_03f25fec:
    uVar19 = (ulong)*(uint *)(plVar10 + 0x21);
    if (0 < (int)*(uint *)(plVar10 + 0x21)) goto LAB_03f25ff8;
  }
  else {
    lVar8 = *(long *)puVar7;
    if (lVar8 == 0) {
      pvVar11 = malloc(uVar19 << 3);
    }
    else {
      if (plVar18 == (long *)0x0) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar12 = (undefined8 *)(lVar8 + 8);
        if (lVar9 != 0) {
          puVar12 = (undefined8 *)(lVar9 + 0xa8);
        }
        plVar18 = (long *)*puVar12;
        if (plVar18 == (long *)0x0) goto LAB_03f25fec;
      }
      pvVar11 = (void *)(**(code **)(*plVar18 + 0x30))(plVar18,uVar19 << 3,8);
    }
    if (pvVar11 == (void *)0x0) goto LAB_03f25fec;
    *(uint *)(plVar10 + 0x21) = uVar3;
    plVar10[0x22] = (long)pvVar11;
LAB_03f25ff8:
    uVar15 = uVar19 & 3;
    if (uVar19 - 1 < 3) {
      uVar17 = 0;
    }
    else {
      uVar17 = 0;
      do {
        lVar8 = uVar17 * 8;
        uVar17 = uVar17 + 4;
        *(undefined8 *)(plVar10[0x22] + lVar8) = 0;
        *(undefined8 *)(plVar10[0x22] + lVar8 + 8) = 0;
        *(undefined8 *)(plVar10[0x22] + lVar8 + 0x10) = 0;
        *(undefined8 *)(plVar10[0x22] + lVar8 + 0x18) = 0;
      } while ((uVar19 & 0xfffffffc) != uVar17);
    }
    if (uVar15 != 0) {
      lVar8 = uVar17 << 3;
      do {
        uVar15 = uVar15 - 1;
        *(undefined8 *)(plVar10[0x22] + lVar8) = 0;
        lVar8 = lVar8 + 8;
      } while (uVar15 != 0);
    }
  }
  param_1[1] = (long)plVar10;
  uVar3 = *(uint *)(param_2 + 2);
  *(uint *)(plVar10 + 0x1a) = uVar3;
  nn::os::GetThreadAvailableCoreMask();
  nn::os::SetThreadCoreMask((ThreadType *)plVar10[0x1d],-1,(ulong)uVar3);
  (**(code **)(*(long *)param_1[1] + 0x30))();
  lVar8 = *(long *)puVar7;
  *(undefined4 *)(param_1 + 7) = 0;
  if (lVar8 == 0) {
    pvVar11 = malloc(8);
joined_r0x03f261b4:
    if (pvVar11 != (void *)0x0) {
      param_1[8] = 0x100000000;
      param_1[9] = (long)pvVar11;
    }
  }
  else {
    plVar18 = (long *)*param_2;
    if (plVar18 != (long *)0x0) {
LAB_03f260e8:
      pvVar11 = (void *)(**(code **)(*plVar18 + 0x30))(plVar18,8,8);
      goto joined_r0x03f261b4;
    }
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar18 = (long *)(lVar8 + 8);
    if (lVar9 != 0) {
      plVar18 = (long *)(lVar9 + 0xa8);
    }
    plVar18 = (long *)*plVar18;
    if (plVar18 != (long *)0x0) goto LAB_03f260e8;
  }
  lVar8 = *(long *)puVar7;
  if (lVar8 == 0) {
    puVar12 = malloc(0x10);
LAB_03f261c8:
    puVar13 = malloc(8);
  }
  else {
    plVar18 = (long *)*param_2;
    if (plVar18 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar18 = (long *)(lVar8 + 8);
      if (lVar9 != 0) {
        plVar18 = (long *)(lVar9 + 0xa8);
      }
      plVar18 = (long *)*plVar18;
      if (plVar18 != (long *)0x0) goto LAB_03f26144;
      puVar12 = (undefined8 *)0x0;
      lVar8 = *(long *)puVar7;
    }
    else {
LAB_03f26144:
      puVar12 = (undefined8 *)(**(code **)(*plVar18 + 0x30))(plVar18,0x10,8);
      lVar8 = *(long *)puVar7;
    }
    if (lVar8 == 0) goto LAB_03f261c8;
    plVar18 = (long *)*param_2;
    if (plVar18 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar18 = (long *)(lVar8 + 8);
      if (lVar9 != 0) {
        plVar18 = (long *)(lVar9 + 0xa8);
      }
      plVar18 = (long *)*plVar18;
    }
    puVar13 = (undefined8 *)(**(code **)(*plVar18 + 0x30))(plVar18,8,8);
  }
  *puVar13 = &PTR_LAB_04ba8698;
  *puVar12 = puVar13;
  *(undefined4 *)(puVar12 + 1) = 0;
  if ((int)param_1[8] < *(int *)((long)param_1 + 0x44)) {
    *(undefined8 **)(param_1[9] + (long)(int)param_1[8] * 8) = puVar12;
    *(int *)(param_1 + 8) = (int)param_1[8] + 1;
  }
  lVar8 = *(long *)puVar7;
  *(undefined4 *)(param_1 + 0xc) = 1;
  if (lVar8 == 0) {
    pvVar11 = malloc(0x20);
joined_r0x03f26320:
    if (pvVar11 != (void *)0x0) {
      param_1[0xd] = 0x400000000;
      param_1[0xe] = (long)pvVar11;
    }
  }
  else {
    plVar18 = (long *)*param_2;
    if (plVar18 != (long *)0x0) {
LAB_03f26250:
      pvVar11 = (void *)(**(code **)(*plVar18 + 0x30))(plVar18,0x20,8);
      goto joined_r0x03f26320;
    }
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar18 = (long *)(lVar8 + 8);
    if (lVar9 != 0) {
      plVar18 = (long *)(lVar9 + 0xa8);
    }
    plVar18 = (long *)*plVar18;
    if (plVar18 != (long *)0x0) goto LAB_03f26250;
  }
  lVar8 = *(long *)puVar7;
  if (lVar8 == 0) {
    puVar12 = malloc(0x10);
LAB_03f26334:
    plVar18 = malloc(0x20);
  }
  else {
    plVar18 = (long *)*param_2;
    if (plVar18 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar18 = (long *)(lVar8 + 8);
      if (lVar9 != 0) {
        plVar18 = (long *)(lVar9 + 0xa8);
      }
      plVar18 = (long *)*plVar18;
      if (plVar18 != (long *)0x0) goto LAB_03f262ac;
      puVar12 = (undefined8 *)0x0;
      lVar8 = *(long *)puVar7;
    }
    else {
LAB_03f262ac:
      puVar12 = (undefined8 *)(**(code **)(*plVar18 + 0x30))(plVar18,0x10,8);
      lVar8 = *(long *)puVar7;
    }
    if (lVar8 == 0) goto LAB_03f26334;
    plVar10 = (long *)*param_2;
    if (plVar10 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar10 = (long *)(lVar8 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      plVar18 = (long *)0x0;
      if (plVar10 != (long *)0x0) goto LAB_03f26300;
    }
    else {
LAB_03f26300:
      plVar18 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x20,8);
    }
  }
  puVar2 = PTR_DAT_04bdf070;
  *(undefined4 *)(plVar18 + 1) = 0;
  plVar18[2] = 0;
  plVar18[3] = 0;
  *plVar18 = (long)(puVar2 + 0x10);
  *puVar12 = plVar18;
  local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
  puVar16 = (uint *)(puVar12 + 1);
  *puVar16 = 0;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar16,0x10);
    if (bVar6) {
      *puVar16 = *puVar16 | 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((int)param_1[0xd] < *(int *)((long)param_1 + 0x6c)) {
    *(undefined8 **)(param_1[0xe] + (long)(int)param_1[0xd] * 8) = puVar12;
    *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
  }
  lVar8 = *(long *)puVar7;
  if (lVar8 == 0) {
    puVar12 = malloc(0x10);
LAB_03f26454:
    plVar18 = malloc(0x108);
  }
  else {
    plVar18 = (long *)*param_2;
    if (plVar18 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar18 = (long *)(lVar8 + 8);
      if (lVar9 != 0) {
        plVar18 = (long *)(lVar9 + 0xa8);
      }
      plVar18 = (long *)*plVar18;
      if (plVar18 != (long *)0x0) goto LAB_03f263e0;
      puVar12 = (undefined8 *)0x0;
      lVar8 = *(long *)puVar7;
    }
    else {
LAB_03f263e0:
      puVar12 = (undefined8 *)(**(code **)(*plVar18 + 0x30))(plVar18,0x10,8);
      lVar8 = *(long *)puVar7;
    }
    if (lVar8 == 0) goto LAB_03f26454;
    plVar18 = (long *)*param_2;
    if (plVar18 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar18 = (long *)(lVar8 + 8);
      if (lVar9 != 0) {
        plVar18 = (long *)(lVar9 + 0xa8);
      }
      plVar18 = (long *)*plVar18;
    }
    plVar18 = (long *)(**(code **)(*plVar18 + 0x30))(plVar18,0x108,8);
  }
  plVar18[0x20] = 0;
  puVar2 = PTR_DAT_04bdf060 + 0x10;
  plVar18[2] = 0;
  plVar18[3] = 0;
  plVar18[4] = 0;
  plVar18[5] = 0;
  plVar18[6] = 0;
  plVar18[7] = 0;
  plVar18[8] = 0;
  plVar18[9] = 0;
  *plVar18 = (long)puVar2;
  plVar18[1] = 0;
  plVar18[10] = 0;
  plVar18[0xb] = 0;
  plVar18[0xc] = 0;
  plVar18[0xd] = 0;
  plVar18[0xe] = 0;
  plVar18[0xf] = 0;
  plVar18[0x10] = 0;
  plVar18[0x11] = 0;
  plVar18[0x12] = 0;
  plVar18[0x13] = 0;
  plVar18[0x14] = 0;
  plVar18[0x15] = 0;
  plVar18[0x16] = 0;
  plVar18[0x17] = 0;
  plVar18[0x18] = 0;
  plVar18[0x19] = 0;
  plVar18[0x1a] = 0;
  plVar18[0x1b] = 0;
  plVar18[0x1c] = 0;
  plVar18[0x1d] = 0;
  plVar18[0x1e] = 0;
  plVar18[0x1f] = 0x400000002;
  *puVar12 = plVar18;
  *(undefined4 *)(puVar12 + 1) = 0;
  if ((int)param_1[0xd] < *(int *)((long)param_1 + 0x6c)) {
    *(undefined8 **)(param_1[0xe] + (long)(int)param_1[0xd] * 8) = puVar12;
    *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
  }
  lVar8 = *(long *)puVar7;
  if (lVar8 == 0) {
    puVar12 = malloc(0x10);
LAB_03f26590:
    puVar13 = malloc(8);
  }
  else {
    plVar18 = (long *)*param_2;
    if (plVar18 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar18 = (long *)(lVar8 + 8);
      if (lVar9 != 0) {
        plVar18 = (long *)(lVar9 + 0xa8);
      }
      plVar18 = (long *)*plVar18;
      if (plVar18 != (long *)0x0) goto LAB_03f2651c;
      puVar12 = (undefined8 *)0x0;
      lVar8 = *(long *)puVar7;
    }
    else {
LAB_03f2651c:
      puVar12 = (undefined8 *)(**(code **)(*plVar18 + 0x30))(plVar18,0x10,8);
      lVar8 = *(long *)puVar7;
    }
    if (lVar8 == 0) goto LAB_03f26590;
    plVar18 = (long *)*param_2;
    if (plVar18 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar18 = (long *)(lVar8 + 8);
      if (lVar9 != 0) {
        plVar18 = (long *)(lVar9 + 0xa8);
      }
      plVar18 = (long *)*plVar18;
    }
    puVar13 = (undefined8 *)(**(code **)(*plVar18 + 0x30))(plVar18,8,8);
  }
  *puVar13 = &PTR_LAB_04ba8558;
  *puVar12 = puVar13;
  *(undefined4 *)(puVar12 + 1) = 0;
  iVar14 = (int)param_1[0xd];
  if (iVar14 < *(int *)((long)param_1 + 0x6c)) {
    *(undefined8 **)(param_1[0xe] + (long)iVar14 * 8) = puVar12;
    iVar14 = (int)param_1[0xd] + 1;
    *(int *)(param_1 + 0xd) = iVar14;
  }
  lVar8 = param_2[7];
  param_1[5] = param_2[6];
  param_1[6] = lVar8;
  if ((int)param_1[8] != 0) {
    lVar8 = (long)(int)param_1[8] << 3;
    puVar12 = (undefined8 *)param_1[9];
    do {
      (**(code **)(**(long **)*puVar12 + 0x10))(*(long **)*puVar12,*param_2);
      lVar8 = lVar8 + -8;
      puVar12 = puVar12 + 1;
    } while (lVar8 != 0);
    iVar14 = (int)param_1[0xd];
  }
  if (iVar14 != 0) {
    lVar8 = (long)iVar14 << 3;
    puVar12 = (undefined8 *)param_1[0xe];
    do {
      (**(code **)(**(long **)*puVar12 + 0x10))(*(long **)*puVar12,*param_2);
      lVar8 = lVar8 + -8;
      puVar12 = puVar12 + 1;
    } while (lVar8 != 0);
  }
  if ((int)param_1[0x12] != 0) {
    lVar8 = (long)(int)param_1[0x12] << 3;
    puVar12 = (undefined8 *)param_1[0x13];
    do {
      (**(code **)(**(long **)*puVar12 + 0x10))(*(long **)*puVar12,*param_2);
      lVar8 = lVar8 + -8;
      puVar12 = puVar12 + 1;
    } while (lVar8 != 0);
  }
  if (*(char *)((long)param_2 + 0x2c) == '\0') {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 & 0xffffffbf;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  else {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 | 0x40;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = *puVar1 | 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_03f266f0:
  return (uVar4 & 1) == 0;
}

