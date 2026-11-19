
void FUN_03b4fa00(undefined1 *param_1,undefined8 *param_2)

{
  AudioRendererConfig *pAVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined2 uVar10;
  uint uVar11;
  undefined8 uVar12;
  void *pvVar13;
  size_t sVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  AudioRendererParameter *pAVar22;
  long *plVar23;
  ulong uVar24;
  MutexType *pMVar25;
  long lVar26;
  void *pvVar27;
  undefined8 local_70;
  char *pcStack_68;
  
  if (param_1[1] != '\0') {
    return;
  }
  *(undefined8 *)(param_1 + 0x30) = param_2[0x11];
  plVar23 = (long *)param_2[0x12];
  *(long **)(param_1 + 0x38) = plVar23;
  uVar12 = param_2[1];
  uVar5 = param_2[2];
  pAVar22 = (AudioRendererParameter *)(param_1 + 0x50);
  *(undefined8 *)pAVar22 = *param_2;
  *(undefined8 *)(param_1 + 0x58) = uVar12;
  *(undefined8 *)(param_1 + 0x60) = uVar5;
  uVar12 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[6];
  *(undefined8 *)(param_1 + 0x78) = param_2[5];
  *(undefined8 *)(param_1 + 0x80) = uVar6;
  *(undefined8 *)(param_1 + 0x68) = uVar12;
  *(undefined8 *)(param_1 + 0x70) = uVar5;
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 7);
  puVar8 = PTR_DAT_04bb2698;
  if (plVar23 == (long *)0x0) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
  }
  else {
    uVar18 = 0;
    if (*(char *)((long)param_2 + 100) != '\0') {
      uVar18 = 6;
    }
    *(undefined4 *)(param_1 + 0x6c) = uVar18;
    uVar12 = nn::audio::GetRequiredBufferSizeForPerformanceFrames(pAVar22);
    if (*(long *)puVar8 == 0) {
      pvVar13 = malloc(0x8e0);
    }
    else {
      pvVar13 = (void *)(**(code **)(*plVar23 + 0x30))(plVar23,0x8e0,8);
    }
    FUN_03b581a4(pvVar13,param_1 + 0x98);
    *(void **)(param_1 + 0x1b8) = pvVar13;
    *(undefined4 *)((long)pvVar13 + 0x50) = 0;
    plVar16 = *(long **)((long)pvVar13 + 0x1b0);
    while (plVar16 != (long *)((long)pvVar13 + 0x1a8)) {
      plVar4 = (long *)plVar16[1];
      plVar21 = plVar4;
      if (*plVar16 != 0) {
        *(long **)(*plVar16 + 8) = plVar4;
        plVar21 = (long *)plVar16[1];
      }
      if (plVar21 != (long *)0x0) {
        *plVar21 = *plVar16;
      }
      *plVar16 = 0;
      plVar16[1] = 0;
      *(int *)((long)pvVar13 + 0x1b8) = *(int *)((long)pvVar13 + 0x1b8) + -1;
      plVar16[-0x14] = *(long *)((long)pvVar13 + 0x1c0);
      *(long **)((long)pvVar13 + 0x1c0) = plVar16 + -0x14;
      plVar16 = plVar4;
    }
    FUN_03b582f0(pvVar13,uVar12,plVar23);
  }
  sVar14 = nn::audio::GetAudioRendererWorkBufferSize(pAVar22);
  lVar26 = *(long *)puVar8;
  if (lVar26 == 0) {
    pvVar13 = malloc(sVar14);
  }
  else {
    plVar23 = *(long **)(param_1 + 0x30);
    if (plVar23 == (long *)0x0) {
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar23 = (long *)(lVar26 + 8);
      if (lVar15 != 0) {
        plVar23 = (long *)(lVar15 + 0xa8);
      }
      plVar23 = (long *)*plVar23;
      if (plVar23 == (long *)0x0) {
        pvVar13 = (void *)0x0;
        goto LAB_03b4fbc8;
      }
    }
    pvVar13 = (void *)(**(code **)(*plVar23 + 0x30))(plVar23,sVar14,0x1000);
  }
LAB_03b4fbc8:
  pvVar27 = *(void **)(param_1 + 0x40);
  *(void **)(param_1 + 0x40) = pvVar13;
  if (pvVar27 != (void *)0x0) {
    if (*(long *)puVar8 == 0) {
      free(pvVar27);
    }
    else {
      plVar23 = (long *)FUN_038cb610(*(long *)puVar8,pvVar27);
      if (plVar23 != (long *)0x0) {
        (**(code **)(*plVar23 + 0x38))(plVar23,pvVar27);
      }
    }
    pvVar13 = *(void **)(param_1 + 0x40);
  }
  nn::audio::OpenAudioRenderer
            (param_1 + 0x88,(SystemEvent *)(param_1 + 0x110),pAVar22,pvVar13,sVar14);
  sVar14 = nn::audio::GetAudioRendererConfigWorkBufferSize(pAVar22);
  lVar26 = *(long *)puVar8;
  if (lVar26 == 0) {
    pvVar13 = malloc(sVar14);
  }
  else {
    plVar23 = *(long **)(param_1 + 0x30);
    if (plVar23 == (long *)0x0) {
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar23 = (long *)(lVar26 + 8);
      if (lVar15 != 0) {
        plVar23 = (long *)(lVar15 + 0xa8);
      }
      plVar23 = (long *)*plVar23;
      if (plVar23 == (long *)0x0) {
        pvVar13 = (void *)0x0;
        goto LAB_03b4fc88;
      }
    }
    pvVar13 = (void *)(**(code **)(*plVar23 + 0x30))(plVar23,sVar14,0x1000);
  }
LAB_03b4fc88:
  pvVar27 = *(void **)(param_1 + 0x48);
  *(void **)(param_1 + 0x48) = pvVar13;
  if (pvVar27 != (void *)0x0) {
    if (*(long *)puVar8 == 0) {
      free(pvVar27);
    }
    else {
      plVar23 = (long *)FUN_038cb610(*(long *)puVar8,pvVar27);
      if (plVar23 != (long *)0x0) {
        (**(code **)(*plVar23 + 0x38))(plVar23,pvVar27);
      }
    }
    pvVar13 = *(void **)(param_1 + 0x48);
  }
  pAVar1 = (AudioRendererConfig *)(param_1 + 0x98);
  nn::audio::InitializeAudioRendererConfig(pAVar1,pAVar22,pvVar13,sVar14);
  nn::audio::StartAudioRenderer(*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90));
  lVar26 = *(long *)puVar8;
  if (lVar26 == 0) {
    plVar23 = malloc(0x48);
  }
  else {
    plVar23 = *(long **)(param_1 + 0x30);
    if (plVar23 == (long *)0x0) {
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar23 = (long *)(lVar26 + 8);
      if (lVar15 != 0) {
        plVar23 = (long *)(lVar15 + 0xa8);
      }
      plVar23 = (long *)*plVar23;
    }
    plVar23 = (long *)(**(code **)(*plVar23 + 0x30))(plVar23,0x48,8);
  }
  puVar7 = PTR_DAT_04bd2000;
  *(undefined1 *)(plVar23 + 1) = 0;
  *(undefined8 *)((long)plVar23 + 0xc) = 0;
  *plVar23 = (long)(puVar7 + 0x10);
  puVar7 = PTR_DAT_04bd1f10;
  *(undefined4 *)(plVar23 + 5) = 0;
  plVar23[6] = 0;
  *(undefined4 *)(plVar23 + 7) = 0;
  plVar23[8] = 0;
  plVar23[3] = 0;
  plVar23[4] = (long)(puVar7 + 0x10);
  *(long **)(param_1 + 0x188) = plVar23;
  FUN_03b5c690(plVar23,*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_2 + 0xb));
  lVar26 = *(long *)puVar8;
  if (lVar26 == 0) {
    plVar23 = malloc(0x48);
  }
  else {
    plVar23 = *(long **)(param_1 + 0x30);
    if (plVar23 == (long *)0x0) {
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar23 = (long *)(lVar26 + 8);
      if (lVar15 != 0) {
        plVar23 = (long *)(lVar15 + 0xa8);
      }
      plVar23 = (long *)*plVar23;
    }
    plVar23 = (long *)(**(code **)(*plVar23 + 0x30))(plVar23,0x48,8);
  }
  puVar2 = PTR_DAT_04bd1f20;
  *(undefined2 *)(plVar23 + 1) = 0;
  plVar23[2] = 0;
  *(undefined4 *)(plVar23 + 5) = 0;
  plVar23[6] = 0;
  *(undefined4 *)(plVar23 + 7) = 0;
  *(undefined1 *)(plVar23 + 8) = 0;
  *plVar23 = (long)(puVar2 + 0x10);
  plVar23[4] = (long)(puVar7 + 0x10);
  *(long **)(param_1 + 0x170) = plVar23;
  FUN_03b55d70(plVar23,*(undefined8 *)(param_1 + 0x30),*(undefined4 *)((long)param_2 + 0x44));
  lVar26 = *(long *)puVar8;
  if (lVar26 == 0) {
    plVar23 = malloc(0x208);
  }
  else {
    plVar23 = *(long **)(param_1 + 0x30);
    if (plVar23 == (long *)0x0) {
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar23 = (long *)(lVar26 + 8);
      if (lVar15 != 0) {
        plVar23 = (long *)(lVar15 + 0xa8);
      }
      plVar23 = (long *)*plVar23;
      if (plVar23 == (long *)0x0) {
        plVar23 = (long *)0x0;
        goto LAB_03b4fe7c;
      }
    }
    plVar23 = (long *)(**(code **)(*plVar23 + 0x30))(plVar23,0x208,8);
  }
LAB_03b4fe7c:
  *plVar23 = (long)(PTR_DAT_04bd1ec8 + 0x10);
  memset(plVar23 + 1,0,0x200);
  *(long **)(param_1 + 0x168) = plVar23;
  FUN_03b51fe0(plVar23,*(undefined4 *)param_2,*(undefined8 *)(param_1 + 0x30));
  lVar26 = *(long *)puVar8;
  if (lVar26 == 0) {
    pvVar13 = malloc(0x402b0);
  }
  else {
    plVar23 = *(long **)(param_1 + 0x30);
    if (plVar23 == (long *)0x0) {
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar23 = (long *)(lVar26 + 8);
      if (lVar15 != 0) {
        plVar23 = (long *)(lVar15 + 0xa8);
      }
      plVar23 = (long *)*plVar23;
    }
    pvVar13 = (void *)(**(code **)(*plVar23 + 0x30))(plVar23,0x402b0,8);
  }
  FUN_03b5c82c();
  *(void **)(param_1 + 400) = pvVar13;
  FUN_03b5ce40(pvVar13,*(undefined8 *)(param_1 + 0x30));
  lVar26 = *(long *)puVar8;
  if (lVar26 == 0) {
    plVar23 = malloc(0x400);
  }
  else {
    plVar16 = *(long **)(param_1 + 0x30);
    if (plVar16 == (long *)0x0) {
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar16 = (long *)(lVar26 + 8);
      if (lVar15 != 0) {
        plVar16 = (long *)(lVar15 + 0xa8);
      }
      plVar16 = (long *)*plVar16;
      plVar23 = (long *)0x0;
      if (plVar16 == (long *)0x0) goto LAB_03b4ff84;
    }
    plVar23 = (long *)(**(code **)(*plVar16 + 0x30))(plVar16,0x400,8);
  }
LAB_03b4ff84:
  *(undefined1 *)(plVar23 + 1) = 0;
  puVar2 = PTR_DAT_04bd2020;
  *(undefined2 *)(plVar23 + 2) = 0;
  plVar23[3] = 0;
  *(undefined4 *)(plVar23 + 6) = 0;
  plVar23[7] = 0;
  plVar23[5] = (long)(puVar7 + 0x10);
  *(undefined4 *)(plVar23 + 8) = 0;
  *(undefined2 *)(plVar23 + 9) = 0;
  plVar23[10] = 0;
  plVar23[0xc] = (long)(puVar7 + 0x10);
  *(undefined4 *)(plVar23 + 0xd) = 0;
  plVar23[0xe] = 0;
  *plVar23 = (long)(puVar2 + 0x10);
  *(undefined4 *)(plVar23 + 0xf) = 0;
  plVar23[0x14] = 0;
  plVar23[0x15] = 0;
  plVar23[0x10] = 0;
  plVar23[0x11] = 0;
  puVar2 = PTR_DAT_04bd1ee0 + 0x10;
  plVar23[0x7e] = 0;
  plVar23[0x7f] = 0;
  plVar23[0x1a] = 0;
  plVar23[0x1b] = 0;
  plVar23[0x12] = 0;
  plVar23[0x13] = (long)puVar2;
  plVar23[0x16] = (long)puVar2;
  plVar23[0x17] = 0;
  plVar23[0x18] = 0;
  plVar23[0x19] = (long)puVar2;
  plVar23[0x1c] = 0x6000000000;
  plVar23[0x1d] = (long)(plVar23 + 0x1e);
  *(long **)(param_1 + 0x1a0) = plVar23;
  FUN_03b68110(plVar23,*(undefined8 *)(param_1 + 0x30),pAVar1,*(undefined4 *)((long)param_2 + 0x3c))
  ;
  lVar26 = *(long *)puVar8;
  if (lVar26 == 0) {
    plVar23 = malloc(0x48);
  }
  else {
    plVar23 = *(long **)(param_1 + 0x30);
    if (plVar23 == (long *)0x0) {
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar23 = (long *)(lVar26 + 8);
      if (lVar15 != 0) {
        plVar23 = (long *)(lVar15 + 0xa8);
      }
      plVar23 = (long *)*plVar23;
    }
    plVar23 = (long *)(**(code **)(*plVar23 + 0x30))(plVar23,0x48,8);
  }
  puVar2 = PTR_DAT_04bd1f30;
  *(undefined2 *)(plVar23 + 1) = 0;
  plVar23[2] = 0;
  *(undefined4 *)(plVar23 + 5) = 0;
  plVar23[6] = 0;
  *(undefined4 *)(plVar23 + 7) = 0;
  *(undefined1 *)(plVar23 + 8) = 0;
  *plVar23 = (long)(puVar2 + 0x10);
  plVar23[4] = (long)(puVar7 + 0x10);
  *(long **)(param_1 + 0x180) = plVar23;
  FUN_03b57f00(plVar23,*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_2 + 8));
  lVar26 = *(long *)puVar8;
  if (lVar26 == 0) {
    plVar23 = malloc(0x110);
  }
  else {
    plVar23 = *(long **)(param_1 + 0x30);
    if (plVar23 == (long *)0x0) {
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar23 = (long *)(lVar26 + 8);
      if (lVar15 != 0) {
        plVar23 = (long *)(lVar15 + 0xa8);
      }
      plVar23 = (long *)*plVar23;
      if (plVar23 == (long *)0x0) {
        plVar23 = (long *)0x0;
        goto LAB_03b50110;
      }
    }
    plVar23 = (long *)(**(code **)(*plVar23 + 0x30))(plVar23,0x110,8);
  }
LAB_03b50110:
  *(undefined2 *)(plVar23 + 1) = 0;
  puVar2 = PTR_DAT_04bd2028;
  *(undefined2 *)(plVar23 + 0x16) = 0;
  plVar23[2] = 0;
  *(undefined4 *)(plVar23 + 5) = 0;
  plVar23[6] = 0;
  *(undefined4 *)(plVar23 + 7) = 0;
  *(undefined2 *)(plVar23 + 8) = 0;
  plVar23[9] = 0;
  *(undefined4 *)(plVar23 + 0xc) = 0;
  plVar23[0xd] = 0;
  *plVar23 = (long)(puVar2 + 0x10);
  puVar2 = puVar7 + 0x10;
  *(undefined4 *)(plVar23 + 0xe) = 0;
  plVar23[4] = (long)puVar2;
  plVar23[0xb] = (long)puVar2;
  *(undefined1 *)(plVar23 + 0xf) = 0;
  *(undefined8 *)((long)plVar23 + 0x7c) = 0;
  *(undefined4 *)(plVar23 + 0x13) = 0;
  plVar23[0x14] = 0;
  *(undefined4 *)(plVar23 + 0x15) = 0;
  *(undefined8 *)((long)plVar23 + 0xb4) = 0;
  plVar23[0x18] = 0;
  *(undefined4 *)(plVar23 + 0x19) = 0;
  plVar23[0x11] = 0;
  plVar23[0x12] = (long)puVar2;
  nn::os::InitializeMutex((MutexType *)(plVar23 + 0x16),false,0);
  plVar23[0x20] = 0;
  plVar23[0x1a] = (long)(plVar23 + 0x1a);
  plVar23[0x1b] = (long)(plVar23 + 0x1a);
  *(undefined2 *)(plVar23 + 0x21) = 0;
  plVar23[0x1c] = -0x100000000;
  plVar23[0x1d] = 0;
  plVar23[0x1e] = 0;
  plVar23[0x1f] = 0;
  *(long **)(param_1 + 0x1a8) = plVar23;
  FUN_03b69fc0(plVar23,*(undefined8 *)(param_1 + 0x30),*(undefined4 *)((long)param_2 + 0x4c),
               (long)*(int *)(param_2 + 10),*(undefined4 *)((long)param_2 + 0x54));
  lVar26 = *(long *)puVar8;
  if (lVar26 == 0) {
    plVar23 = malloc(0x308);
  }
  else {
    plVar23 = *(long **)(param_1 + 0x30);
    if (plVar23 == (long *)0x0) {
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar23 = (long *)(lVar26 + 8);
      if (lVar15 != 0) {
        plVar23 = (long *)(lVar15 + 0xa8);
      }
      plVar23 = (long *)*plVar23;
      if (plVar23 == (long *)0x0) {
        plVar23 = (long *)0x0;
        goto LAB_03b50224;
      }
    }
    plVar23 = (long *)(**(code **)(*plVar23 + 0x30))(plVar23,0x308,8);
  }
LAB_03b50224:
  *(undefined4 *)(plVar23 + 2) = 0;
  puVar2 = PTR_DAT_04bd1ed8;
  *(undefined4 *)(plVar23 + 4) = 0;
  puVar9 = PTR_DAT_04bd1ef0;
  *(undefined2 *)(plVar23 + 5) = 0;
  plVar23[6] = 0;
  *(undefined4 *)(plVar23 + 9) = 0;
  plVar23[10] = 0;
  *(undefined4 *)(plVar23 + 0xb) = 0;
  plVar23[3] = (long)(puVar9 + 0x10);
  *plVar23 = (long)(puVar2 + 0x10);
  plVar23[1] = (long)(puVar9 + 0x10);
  plVar23[8] = (long)(puVar7 + 0x10);
  FUN_03b52954(plVar23 + 0xc);
  *(undefined1 *)((long)plVar23 + 0x1f2) = 0;
  *(undefined2 *)(plVar23 + 0x3e) = 0xffff;
  plVar23[0x3f] = 0x2000000000;
  plVar23[0x40] = (long)(plVar23 + 0x41);
  *(long **)(param_1 + 0x178) = plVar23;
  FUN_03b54990(plVar23,*(undefined8 *)(param_1 + 0x30),pAVar1,pAVar22,
               *(undefined4 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x38),
               *(undefined1 *)((long)param_2 + 0x5c),*(undefined4 *)(param_2 + 0xc));
  lVar26 = *(long *)puVar8;
  *(undefined4 *)(param_1 + 0x224) = 0xc0;
  if (lVar26 == 0) {
    plVar23 = malloc(0x48);
  }
  else {
    plVar23 = *(long **)(param_1 + 0x30);
    if (plVar23 == (long *)0x0) {
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar23 = (long *)(lVar26 + 8);
      if (lVar15 != 0) {
        plVar23 = (long *)(lVar15 + 0xa8);
      }
      plVar23 = (long *)*plVar23;
    }
    plVar23 = (long *)(**(code **)(*plVar23 + 0x30))(plVar23,0x48,8);
  }
  puVar2 = PTR_DAT_04bd2038;
  *(undefined1 *)(plVar23 + 1) = 0;
  *(undefined4 *)((long)plVar23 + 0xc) = 0;
  *(undefined1 *)(plVar23 + 2) = 0;
  *(undefined8 *)((long)plVar23 + 0x14) = 0;
  *(undefined4 *)(plVar23 + 6) = 0;
  plVar23[7] = 0;
  *(undefined4 *)(plVar23 + 8) = 0;
  *plVar23 = (long)(puVar2 + 0x10);
  plVar23[4] = 0;
  plVar23[5] = (long)(puVar7 + 0x10);
  *(long **)(param_1 + 0x198) = plVar23;
  FUN_03b6baa0(plVar23,*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_2 + 9));
  lVar26 = *(long *)puVar8;
  if (lVar26 == 0) {
    pvVar13 = malloc(0x30c);
  }
  else {
    plVar23 = *(long **)(param_1 + 0x30);
    if (plVar23 == (long *)0x0) {
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar23 = (long *)(lVar26 + 8);
      if (lVar15 != 0) {
        plVar23 = (long *)(lVar15 + 0xa8);
      }
      plVar23 = (long *)*plVar23;
    }
    pvVar13 = (void *)(**(code **)(*plVar23 + 0x30))(plVar23,0x30c,8);
  }
  FUN_03b51ca0();
  uVar11 = *(uint *)(param_1 + 0x68);
  uVar24 = (ulong)uVar11;
  *(void **)(param_1 + 0x160) = pvVar13;
  if ((int)uVar11 < 1) {
LAB_03b50430:
    uVar24 = (ulong)*(uint *)(param_1 + 0x1e0);
    if (0 < (int)*(uint *)(param_1 + 0x1e0)) goto LAB_03b5043c;
  }
  else {
    lVar26 = *(long *)puVar8;
    if (lVar26 == 0) {
      pvVar13 = malloc(uVar24 << 3);
    }
    else {
      plVar23 = *(long **)(param_1 + 0x30);
      if (plVar23 == (long *)0x0) {
        lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar23 = (long *)(lVar26 + 8);
        if (lVar15 != 0) {
          plVar23 = (long *)(lVar15 + 0xa8);
        }
        plVar23 = (long *)*plVar23;
        if (plVar23 == (long *)0x0) goto LAB_03b50430;
      }
      pvVar13 = (void *)(**(code **)(*plVar23 + 0x30))(plVar23,uVar24 << 3,8);
    }
    if (pvVar13 == (void *)0x0) goto LAB_03b50430;
    *(uint *)(param_1 + 0x1e0) = uVar11;
    *(void **)(param_1 + 0x1e8) = pvVar13;
LAB_03b5043c:
    uVar19 = uVar24 & 3;
    if (uVar24 - 1 < 3) {
      uVar20 = 0;
    }
    else {
      uVar20 = 0;
      do {
        lVar26 = uVar20 * 8;
        uVar20 = uVar20 + 4;
        *(undefined8 *)(*(long *)(param_1 + 0x1e8) + lVar26) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x1e8) + lVar26 + 8) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x1e8) + lVar26 + 0x10) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x1e8) + lVar26 + 0x18) = 0;
      } while ((uVar24 & 0xfffffffc) != uVar20);
    }
    if (uVar19 != 0) {
      lVar26 = uVar20 << 3;
      do {
        uVar19 = uVar19 - 1;
        *(undefined8 *)(*(long *)(param_1 + 0x1e8) + lVar26) = 0;
        lVar26 = lVar26 + 8;
      } while (uVar19 != 0);
    }
  }
  if (*(char *)(param_2 + 0x10) != '\0') {
    lVar26 = *(long *)(param_1 + 0x178);
    param_1[0x1f0] = 1;
    puVar3 = param_1 + 0x1f8;
    *(undefined4 *)(param_1 + 0x20c) = 0xb0;
    plVar23 = (long *)FUN_03b54d30(lVar26,*(undefined4 *)(param_1 + 0x50),6);
    plVar16 = (long *)(lVar26 + 0x60);
    uVar11 = (**(code **)(*plVar16 + 0x48))(plVar16);
    if ((*(uint *)((long)plVar23 + (ulong)(uVar11 >> 5 & 0x7ff) * 4 + 0x10) >>
         (ulong)(uVar11 & 0x1f) & 1) == 0) {
      uVar11 = (**(code **)(*plVar16 + 0x48))(plVar16);
      lVar26 = (ulong)(uVar11 >> 5 & 0x7ff) * 4;
      *(uint *)((long)plVar23 + lVar26 + 0x10) =
           1 << (ulong)(uVar11 & 0x1f) | *(uint *)((long)plVar23 + lVar26 + 0x10);
      (**(code **)(*plVar23 + 0x30))(plVar23,plVar23 + 1);
      uVar10 = (**(code **)(*plVar16 + 0x48))(plVar16);
      local_70 = (undefined *)CONCAT62(local_70._2_6_,uVar10);
      local_70 = (undefined *)((ulong)local_70 & 0xffffffff);
      FUN_03b56150(plVar23 + 5,&local_70,0);
    }
    uVar10 = (**(code **)(*plVar16 + 0x48))(plVar16);
    local_70 = (undefined *)CONCAT62(local_70._2_6_,uVar10);
    local_70 = (undefined *)CONCAT44(0x3f800000,(undefined4)local_70);
    FUN_03b56150(plVar23 + 5,&local_70,0);
    plVar23 = (long *)((long)*(int *)(param_1 + 0x20c) + (long)plVar23);
    lVar26 = *(long *)(param_1 + 0x1f8);
    *(long **)(param_1 + 0x1f8) = plVar23;
    *plVar23 = lVar26;
    plVar23[1] = (long)puVar3;
    if (lVar26 != 0) {
      *(long **)(lVar26 + 8) = plVar23;
    }
    lVar26 = *(long *)(param_1 + 0x178);
    *(int *)(param_1 + 0x208) = *(int *)(param_1 + 0x208) + 1;
    plVar23 = (long *)FUN_03b54d30(lVar26,*(undefined4 *)(param_1 + 0x50),6);
    plVar16 = (long *)(lVar26 + 0x60);
    uVar11 = (**(code **)(*plVar16 + 0x48))(plVar16);
    if ((*(uint *)((long)plVar23 + (ulong)(uVar11 >> 5 & 0x7ff) * 4 + 0x10) >>
         (ulong)(uVar11 & 0x1f) & 1) == 0) {
      uVar11 = (**(code **)(*plVar16 + 0x48))(plVar16);
      lVar26 = (ulong)(uVar11 >> 5 & 0x7ff) * 4;
      *(uint *)((long)plVar23 + lVar26 + 0x10) =
           1 << (ulong)(uVar11 & 0x1f) | *(uint *)((long)plVar23 + lVar26 + 0x10);
      (**(code **)(*plVar23 + 0x30))(plVar23,plVar23 + 1);
      uVar10 = (**(code **)(*plVar16 + 0x48))(plVar16);
      local_70 = (undefined *)CONCAT62(local_70._2_6_,uVar10);
      local_70 = (undefined *)((ulong)local_70 & 0xffffffff);
      FUN_03b56150(plVar23 + 5,&local_70,0);
    }
    uVar10 = (**(code **)(*plVar16 + 0x48))(plVar16);
    local_70 = (undefined *)CONCAT62(local_70._2_6_,uVar10);
    local_70 = (undefined *)((ulong)local_70 & 0xffffffff);
    FUN_03b56150(plVar23 + 5,&local_70,0);
    plVar23 = (long *)((long)*(int *)(param_1 + 0x20c) + (long)plVar23);
    lVar26 = *(long *)(param_1 + 0x1f8);
    *(long **)(param_1 + 0x1f8) = plVar23;
    *plVar23 = lVar26;
    plVar23[1] = (long)puVar3;
    if (lVar26 != 0) {
      *(long **)(lVar26 + 8) = plVar23;
    }
    lVar26 = *(long *)(param_1 + 0x178);
    *(int *)(param_1 + 0x208) = *(int *)(param_1 + 0x208) + 1;
    plVar23 = (long *)FUN_03b54d30(lVar26,*(undefined4 *)(param_1 + 0x50),6);
    plVar16 = (long *)(lVar26 + 0x60);
    uVar11 = (**(code **)(*plVar16 + 0x48))(plVar16);
    if ((*(uint *)((long)plVar23 + (ulong)(uVar11 >> 5 & 0x7ff) * 4 + 0x10) >>
         (ulong)(uVar11 & 0x1f) & 1) == 0) {
      uVar11 = (**(code **)(*plVar16 + 0x48))(plVar16);
      lVar26 = (ulong)(uVar11 >> 5 & 0x7ff) * 4;
      *(uint *)((long)plVar23 + lVar26 + 0x10) =
           1 << (ulong)(uVar11 & 0x1f) | *(uint *)((long)plVar23 + lVar26 + 0x10);
      (**(code **)(*plVar23 + 0x30))(plVar23,plVar23 + 1);
      uVar10 = (**(code **)(*plVar16 + 0x48))(plVar16);
      local_70 = (undefined *)CONCAT62(local_70._2_6_,uVar10);
      local_70 = (undefined *)((ulong)local_70 & 0xffffffff);
      FUN_03b56150(plVar23 + 5,&local_70,0);
    }
    uVar10 = (**(code **)(*plVar16 + 0x48))(plVar16);
    local_70 = (undefined *)CONCAT62(local_70._2_6_,uVar10);
    local_70 = (undefined *)((ulong)local_70 & 0xffffffff);
    FUN_03b56150(plVar23 + 5,&local_70,0);
    plVar23 = (long *)((long)*(int *)(param_1 + 0x20c) + (long)plVar23);
    lVar26 = *(long *)(param_1 + 0x1f8);
    *(long **)(param_1 + 0x1f8) = plVar23;
    *plVar23 = lVar26;
    plVar23[1] = (long)puVar3;
    if (lVar26 != 0) {
      *(long **)(lVar26 + 8) = plVar23;
    }
    lVar26 = *(long *)(param_1 + 0x178);
    *(int *)(param_1 + 0x208) = *(int *)(param_1 + 0x208) + 1;
    plVar23 = (long *)FUN_03b54d30(lVar26,*(undefined4 *)(param_1 + 0x50),6);
    plVar16 = (long *)(lVar26 + 0x60);
    uVar11 = (**(code **)(*plVar16 + 0x48))(plVar16);
    if ((*(uint *)((long)plVar23 + (ulong)(uVar11 >> 5 & 0x7ff) * 4 + 0x10) >>
         (ulong)(uVar11 & 0x1f) & 1) == 0) {
      uVar11 = (**(code **)(*plVar16 + 0x48))(plVar16);
      lVar26 = (ulong)(uVar11 >> 5 & 0x7ff) * 4;
      *(uint *)((long)plVar23 + lVar26 + 0x10) =
           1 << (ulong)(uVar11 & 0x1f) | *(uint *)((long)plVar23 + lVar26 + 0x10);
      (**(code **)(*plVar23 + 0x30))(plVar23,plVar23 + 1);
      uVar10 = (**(code **)(*plVar16 + 0x48))(plVar16);
      local_70 = (undefined *)CONCAT62(local_70._2_6_,uVar10);
      local_70 = (undefined *)((ulong)local_70 & 0xffffffff);
      FUN_03b56150(plVar23 + 5,&local_70,0);
    }
    uVar10 = (**(code **)(*plVar16 + 0x48))(plVar16);
    local_70 = (undefined *)CONCAT62(local_70._2_6_,uVar10);
    local_70 = (undefined *)((ulong)local_70 & 0xffffffff);
    FUN_03b56150(plVar23 + 5,&local_70,0);
    plVar23 = (long *)((long)*(int *)(param_1 + 0x20c) + (long)plVar23);
    lVar26 = *(long *)(param_1 + 0x1f8);
    *(long **)(param_1 + 0x1f8) = plVar23;
    *plVar23 = lVar26;
    plVar23[1] = (long)puVar3;
    if (lVar26 != 0) {
      *(long **)(lVar26 + 8) = plVar23;
    }
    *(int *)(param_1 + 0x208) = *(int *)(param_1 + 0x208) + 1;
  }
  if (*(char *)((long)param_2 + 0x81) != '\0') goto LAB_03b508dc;
  *param_1 = 1;
  lVar26 = *(long *)puVar8;
  if (lVar26 == 0) {
    puVar17 = malloc(0x110);
  }
  else {
    plVar23 = *(long **)(param_1 + 0x30);
    if (plVar23 == (long *)0x0) {
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar23 = (long *)(lVar26 + 8);
      if (lVar15 != 0) {
        plVar23 = (long *)(lVar15 + 0xa8);
      }
      plVar23 = (long *)*plVar23;
      if (plVar23 == (long *)0x0) {
        puVar17 = (undefined8 *)0x0;
        goto LAB_03b509b4;
      }
    }
    puVar17 = (undefined8 *)(**(code **)(*plVar23 + 0x30))(plVar23,0x110,8);
  }
LAB_03b509b4:
  puVar7 = PTR_DAT_04bb2020;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "AudioFrameworkThread";
  FUN_038e1f88(puVar17,&local_70,*(undefined8 *)(param_1 + 0x30),
               *(undefined4 *)((long)param_2 + 0x6c),0,0x7fffffff,*(undefined4 *)(param_2 + 0xe),1);
  puVar17[0x21] = param_1;
  *puVar17 = &PTR_FUN_04b765f8;
  plVar23 = *(long **)(param_1 + 0x148);
  *(undefined8 **)(param_1 + 0x148) = puVar17;
  if (plVar23 != (long *)0x0) {
    (**(code **)(*plVar23 + 8))();
    puVar17 = *(undefined8 **)(param_1 + 0x148);
  }
  uVar11 = *(uint *)(param_2 + 0xf);
  *(uint *)(puVar17 + 0x1a) = uVar11;
  nn::os::GetThreadAvailableCoreMask();
  nn::os::SetThreadCoreMask((ThreadType *)puVar17[0x1d],-1,(ulong)uVar11);
  (**(code **)(**(long **)(param_1 + 0x148) + 0x30))();
  (**(code **)(**(long **)(param_1 + 0x148) + 0x18))(*(long **)(param_1 + 0x148),1,0);
  if (*(char *)(param_2 + 0xd) == '\0') goto LAB_03b508dc;
  lVar26 = *(long *)puVar8;
  if (lVar26 == 0) {
    pvVar13 = malloc(0x28);
  }
  else {
    plVar23 = *(long **)(param_1 + 0x30);
    if (plVar23 == (long *)0x0) {
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar23 = (long *)(lVar26 + 8);
      if (lVar15 != 0) {
        plVar23 = (long *)(lVar15 + 0xa8);
      }
      plVar23 = (long *)*plVar23;
    }
    pvVar13 = (void *)(**(code **)(*plVar23 + 0x30))(plVar23,0x28,8);
  }
  FUN_03b58de0(pvVar13,*(undefined8 *)(param_1 + 0x30),*(undefined4 *)((long)param_2 + 0x4c));
  plVar23 = *(long **)(param_1 + 0x158);
  *(void **)(param_1 + 0x158) = pvVar13;
  if (plVar23 != (long *)0x0) {
    (**(code **)(*plVar23 + 8))();
  }
  lVar26 = *(long *)puVar8;
  if (lVar26 == 0) {
    plVar23 = malloc(0x148);
  }
  else {
    plVar23 = *(long **)(param_1 + 0x30);
    if (plVar23 == (long *)0x0) {
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar23 = (long *)(lVar26 + 8);
      if (lVar15 != 0) {
        plVar23 = (long *)(lVar15 + 0xa8);
      }
      plVar23 = (long *)*plVar23;
      if (plVar23 == (long *)0x0) {
        plVar23 = (long *)0x0;
        goto LAB_03b50b6c;
      }
    }
    plVar23 = (long *)(**(code **)(*plVar23 + 0x30))(plVar23,0x148,8);
  }
LAB_03b50b6c:
  local_70 = puVar7 + 0x10;
  pcStack_68 = "AudioUserTaskThread";
  FUN_038e1f88(plVar23,&local_70,*(undefined8 *)(param_1 + 0x30),0x10,0,0x7fffffff,0x5000,1);
  *(undefined2 *)(plVar23 + 0x25) = 0;
  puVar8 = PTR_DAT_04bd1f38;
  pMVar25 = (MutexType *)(plVar23 + 0x25);
  plVar16 = plVar23 + 0x22;
  *(undefined8 *)((long)plVar23 + 300) = 0;
  plVar23[0x23] = (long)plVar16;
  plVar23[0x24] = -0x100000000;
  plVar23[0x21] = (long)param_1;
  plVar23[0x22] = (long)plVar16;
  plVar23[0x27] = 0;
  *(undefined4 *)(plVar23 + 0x28) = 0;
  *plVar23 = (long)(puVar8 + 0x10);
  nn::os::InitializeMutex(pMVar25,false,0);
  local_70 = (undefined *)CONCAT44(local_70._4_4_,1);
  *(undefined4 *)((long)plVar23 + 0x124) = 8;
  *(undefined4 *)(plVar23 + 0x1a) = 2;
  nn::os::GetThreadAvailableCoreMask();
  nn::os::SetThreadCoreMask((ThreadType *)plVar23[0x1d],-1,2);
  (**(code **)(*plVar23 + 0x30))(plVar23);
  (**(code **)(*plVar23 + 0x18))(plVar23,1,0);
  lVar26 = *(long *)(param_1 + 0x158);
  nn::os::LockMutex(pMVar25);
  plVar4 = (long *)(*(int *)((long)plVar23 + 0x124) + lVar26);
  puVar17 = (undefined8 *)plVar23[0x23];
  plVar23[0x23] = (long)plVar4;
  *plVar4 = (long)plVar16;
  plVar4[1] = (long)puVar17;
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = plVar4;
  }
  *(int *)(plVar23 + 0x24) = (int)plVar23[0x24] + 1;
  nn::os::UnlockMutex(pMVar25);
  plVar16 = *(long **)(param_1 + 0x150);
  *(long **)(param_1 + 0x150) = plVar23;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 8))();
  }
LAB_03b508dc:
  lVar26 = *(long *)(DAT_05aebb88 + 400);
  pMVar25 = *(MutexType **)(lVar26 + 0x40270);
  nn::os::LockMutex(pMVar25);
  *(undefined4 *)(*(long *)(lVar26 + 0x40250) + 0x4010) = 0;
  FUN_03b5e290(lVar26,lVar26 + 0x401b0,(long *)(lVar26 + 0x40250));
  nn::os::UnlockMutex(pMVar25);
  param_1[1] = 1;
  return;
}

