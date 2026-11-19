
void FUN_038c1ee0(long *param_1,long *param_2,uint param_3,uint param_4)

{
  MutexType *pMVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  void *pvVar11;
  void *pvVar12;
  void *pvVar13;
  long lVar14;
  void *pvVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined1 auStack_1a8 [64];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  uVar17 = *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x30);
  (*DAT_04c62118)(&local_e8,uVar17);
  (**(code **)PTR_DAT_04bcf070)(&local_e8);
  (**(code **)PTR_DAT_04bcf710)(&local_e8,param_3,param_4);
  (**(code **)PTR_DAT_04bcf098)(&local_e8,1);
  puVar5 = PTR_DAT_04bcf090;
  (**(code **)PTR_DAT_04bcf090)(&local_e8,0x25);
  (**(code **)PTR_DAT_04bcf0a0)(&local_e8,8);
  local_108 = local_88;
  uStack_100 = uStack_80;
  local_f8 = local_78;
  uStack_f0 = uStack_70;
  local_128 = local_a8;
  uStack_120 = uStack_a0;
  local_118 = local_98;
  uStack_110 = uStack_90;
  local_148 = local_c8;
  uStack_140 = uStack_c0;
  local_138 = local_b8;
  uStack_130 = uStack_b0;
  local_168 = local_e8;
  uStack_160 = uStack_e0;
  local_158 = local_d8;
  uStack_150 = uStack_d0;
  (**(code **)puVar5)(&local_168,0x35);
  lVar14 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    pvVar11 = malloc(0x100);
LAB_038c2088:
    pvVar12 = malloc(0x80);
LAB_038c2094:
    pvVar13 = malloc(0x80);
  }
  else {
    plVar10 = param_1;
    if (param_1 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar10 = (long *)(lVar14 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 != (long *)0x0) goto LAB_038c2050;
      pvVar11 = (void *)0x0;
      if (DAT_05ae7600 == 0) goto LAB_038c2088;
LAB_038c20ac:
      lVar14 = DAT_05ae7600;
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar10 = (long *)(lVar14 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 != (long *)0x0) goto LAB_038c20d8;
      pvVar12 = (void *)0x0;
      if (DAT_05ae7600 == 0) goto LAB_038c2094;
LAB_038c2110:
      lVar14 = DAT_05ae7600;
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar10 = (long *)(lVar14 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) {
        pvVar13 = (void *)0x0;
        goto LAB_038c2154;
      }
    }
    else {
LAB_038c2050:
      pvVar11 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,0x100,8);
      if (DAT_05ae7600 == 0) goto LAB_038c2088;
      if (param_1 == (long *)0x0) goto LAB_038c20ac;
      plVar10 = param_1;
LAB_038c20d8:
      pvVar12 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,0x80,8);
      if (DAT_05ae7600 == 0) goto LAB_038c2094;
      if (param_1 == (long *)0x0) goto LAB_038c2110;
      plVar10 = param_1;
    }
    pvVar13 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,0x80,8);
  }
LAB_038c2154:
  puVar7 = PTR_DAT_04bcf740;
  lVar14 = (**(code **)PTR_DAT_04bcf740)(&local_e8);
  puVar5 = PTR_DAT_04bcf0b0;
  iVar8 = (**(code **)PTR_DAT_04bcf0b0)(&local_168);
  uVar16 = (ulong)iVar8;
  uVar18 = 0;
  if (uVar16 != 0) {
    uVar18 = ((lVar14 + uVar16) - 1) / uVar16;
  }
  lVar14 = (**(code **)puVar7)(&local_168);
  uVar18 = lVar14 + uVar18 * uVar16 + 0xfff & 0xfffffffffffff000;
  (*DAT_04c61f80)(auStack_1a8);
  (**(code **)PTR_DAT_04bcf330)(auStack_1a8,uVar17);
  (**(code **)PTR_DAT_04bcf620)(auStack_1a8,0xa1);
  lVar14 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    pvVar15 = malloc(uVar18);
  }
  else {
    plVar10 = param_1;
    if (param_1 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar10 = (long *)(lVar14 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) {
        pvVar15 = (void *)0x0;
        goto LAB_038c225c;
      }
    }
    pvVar15 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,uVar18,0x1000);
  }
LAB_038c225c:
  (**(code **)PTR_DAT_04bcf618)(auStack_1a8,pvVar15,uVar18);
  (**(code **)PTR_DAT_04bcf338)(pvVar11,auStack_1a8);
  puVar6 = PTR_DAT_04bcf0a8;
  (**(code **)PTR_DAT_04bcf0a8)(&local_e8,pvVar11,0);
  lVar14 = (**(code **)puVar7)(&local_e8);
  iVar8 = (**(code **)puVar5)(&local_168);
  uVar16 = (ulong)iVar8;
  uVar18 = 0;
  if (uVar16 != 0) {
    uVar18 = ((lVar14 + uVar16) - 1) / uVar16;
  }
  (*DAT_04c622e8)(pvVar12,&local_e8);
  pMVar1 = (MutexType *)(DAT_05ae77d8 + 0x158);
  nn::os::LockMutex(pMVar1);
  lVar14 = DAT_05ae77d8;
  piVar2 = (int *)(DAT_05ae77d8 + 0xec);
  do {
    iVar8 = *piVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar4) {
      *piVar2 = iVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  (*DAT_04c62020)(lVar14 + 0x58,iVar8,pvVar12,0);
  nn::os::UnlockMutex(pMVar1);
  (**(code **)puVar6)(&local_168,pvVar11,uVar18 * uVar16);
  (*DAT_04c622e8)(pvVar13,&local_168);
  pMVar1 = (MutexType *)(DAT_05ae77d8 + 0x158);
  nn::os::LockMutex(pMVar1);
  lVar14 = DAT_05ae77d8;
  piVar2 = (int *)(DAT_05ae77d8 + 0xec);
  do {
    iVar8 = *piVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar4) {
      *piVar2 = iVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  (*DAT_04c62020)(lVar14 + 0x58,iVar8,pvVar13,0);
  nn::os::UnlockMutex(pMVar1);
  lVar14 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    plVar10 = malloc(0x30);
  }
  else {
    if (param_1 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_1 = (long *)(lVar14 + 8);
      if (lVar9 != 0) {
        param_1 = (long *)(lVar9 + 0xa8);
      }
      param_1 = (long *)*param_1;
    }
    plVar10 = (long *)(**(code **)(*param_1 + 0x30))(param_1,0x30,8);
  }
  *plVar10 = (long)(PTR_DAT_04bc95a8 + 0x10);
  lVar14 = *param_2;
  plVar10[4] = (long)pvVar12;
  plVar10[5] = (long)pvVar13;
  *plVar10 = (long)&PTR_FUN_04b64030;
  plVar10[1] = lVar14;
  plVar10[2] = 0;
  *(float *)(plVar10 + 3) = (float)param_3;
  *(float *)((long)plVar10 + 0x1c) = (float)param_4;
  return;
}

