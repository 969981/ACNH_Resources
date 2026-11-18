
undefined8 FUN_0367a534(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  void *pvVar10;
  long lVar11;
  long lVar12;
  
  puVar2 = PTR_DAT_04bb3350;
  if (param_2 == (long *)0x0) {
    lVar12 = 1;
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *(long *)(lVar3 + 0xa8);
    *(long **)(lVar3 + 0xa8) = param_2;
  }
  lVar3 = DAT_05ae7600;
  if (*(char *)(param_1 + 0xc0) != '\0' || *(char *)(param_1 + 0xc2) != '\0') goto LAB_0367ac20;
  if (DAT_05ae7600 == 0) {
    puVar6 = malloc(0x30);
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
      plVar5 = (long *)(lVar3 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x30,8);
  }
  *(undefined4 *)(puVar6 + 3) = 0;
  puVar6[2] = 0xe000000100;
  puVar6[4] = 0;
  puVar6[5] = 0;
  *puVar6 = &PTR_LAB_04b42eb8;
  puVar6[1] = 0x100000001;
  *(undefined8 **)(param_1 + 0x38) = puVar6;
  lVar3 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar6 = malloc(0xd0);
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
      plVar5 = (long *)(lVar3 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      puVar6 = (undefined8 *)0x0;
      if (plVar5 == (long *)0x0) goto LAB_0367a668;
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0xd0,8);
  }
LAB_0367a668:
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  puVar6[2] = 0;
  *(undefined1 *)(puVar6 + 3) = 0;
  *(undefined2 *)(puVar6 + 5) = 0xe0;
  *(undefined4 *)(puVar6 + 7) = 0;
  *(undefined4 *)((long)puVar6 + 0x4c) = 0;
  *(undefined1 *)(puVar6 + 9) = 0;
  *(undefined4 *)(puVar6 + 0x14) = 0;
  *(undefined4 *)((long)puVar6 + 0x2c) = 0;
  puVar6[0x19] = 0;
  puVar6[4] = uVar8;
  puVar6[6] = &PTR_LAB_04baa670;
  *puVar6 = &PTR_LAB_04baa450;
  puVar6[1] = 0;
  puVar6[8] = 0x106;
  puVar6[10] = 0x2180000000000;
  *(undefined4 *)(puVar6 + 0xb) = 0x44800;
  *(undefined8 *)((long)puVar6 + 0x5c) = 0x5540000002800;
  *(undefined8 *)((long)puVar6 + 100) = 0x14f900000003;
  *(undefined4 *)((long)puVar6 + 0x6c) = 0x14f9514;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  puVar6[0x13] = 0;
  puVar6[0x15] = 0;
  puVar6[0x16] = 0;
  puVar6[0x17] = 0;
  puVar6[0x18] = 0;
  plVar5 = *(long **)(param_1 + 8);
  *(undefined8 **)(param_1 + 8) = puVar6;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  lVar3 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar7 = malloc(0x5c0);
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
      plVar5 = (long *)(lVar3 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
    }
    puVar7 = (undefined1 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x5c0,8);
  }
  *puVar7 = 0;
  *(char **)(puVar7 + 0x288) = "EmulatorTime";
  *(char **)(puVar7 + 0x2a0) = "ActivePlayers";
  *(undefined8 *)(puVar7 + 0x290) = 0;
  puVar7[0x298] = 0;
  *(undefined8 *)(puVar7 + 0x2a8) = 0;
  puVar7[0x2b0] = 0;
  *(undefined8 *)(puVar7 + 0x2b8) = 0;
  *(undefined8 *)(puVar7 + 0x2c0) = 0;
  puVar7[0x2c8] = 0;
  *(undefined4 *)(puVar7 + 0x5b4) = 0;
  *(undefined8 *)(puVar7 + 0x5b8) = 0;
  *(undefined8 *)(puVar7 + 0x2cc) = 0;
  *(undefined8 *)(puVar7 + 0x2d4) = 0;
  *(undefined8 *)(puVar7 + 0x2d9) = 0;
  *(undefined8 *)(puVar7 + 0x2e4) = 0;
  *(undefined8 *)(puVar7 + 0x2ec) = 0;
  *(undefined8 *)(puVar7 + 0x2f1) = 0;
  *(undefined8 *)(puVar7 + 0x309) = 0;
  *(undefined8 *)(puVar7 + 0x304) = 0;
  *(undefined8 *)(puVar7 + 0x2fc) = 0;
  *(undefined8 *)(puVar7 + 0x314) = 0;
  *(undefined8 *)(puVar7 + 0x31c) = 0;
  *(undefined8 *)(puVar7 + 0x321) = 0;
  *(undefined8 *)(puVar7 + 0x32c) = 0;
  *(undefined8 *)(puVar7 + 0x334) = 0;
  *(undefined8 *)(puVar7 + 0x339) = 0;
  *(undefined8 *)(puVar7 + 0x344) = 0;
  *(undefined8 *)(puVar7 + 0x34c) = 0;
  *(undefined8 *)(puVar7 + 0x351) = 0;
  *(undefined8 *)(puVar7 + 0x35c) = 0;
  *(undefined8 *)(puVar7 + 0x364) = 0;
  *(undefined8 *)(puVar7 + 0x369) = 0;
  *(undefined8 *)(puVar7 + 0x374) = 0;
  *(undefined8 *)(puVar7 + 0x37c) = 0;
  *(undefined8 *)(puVar7 + 0x381) = 0;
  *(undefined8 *)(puVar7 + 0x399) = 0;
  *(undefined8 *)(puVar7 + 0x394) = 0;
  *(undefined8 *)(puVar7 + 0x38c) = 0;
  *(undefined8 *)(puVar7 + 0x3b1) = 0;
  *(undefined8 *)(puVar7 + 0x3ac) = 0;
  *(undefined8 *)(puVar7 + 0x3a4) = 0;
  *(undefined8 *)(puVar7 + 0x3c9) = 0;
  *(undefined8 *)(puVar7 + 0x3c4) = 0;
  *(undefined8 *)(puVar7 + 0x3bc) = 0;
  *(undefined8 *)(puVar7 + 0x3e1) = 0;
  *(undefined8 *)(puVar7 + 0x3dc) = 0;
  *(undefined8 *)(puVar7 + 0x3d4) = 0;
  *(undefined8 *)(puVar7 + 0x3f9) = 0;
  *(undefined8 *)(puVar7 + 0x3f4) = 0;
  *(undefined8 *)(puVar7 + 0x3ec) = 0;
  *(undefined8 *)(puVar7 + 0x404) = 0;
  *(undefined8 *)(puVar7 + 0x40c) = 0;
  *(undefined8 *)(puVar7 + 0x411) = 0;
  *(undefined8 *)(puVar7 + 0x429) = 0;
  *(undefined8 *)(puVar7 + 0x424) = 0;
  *(undefined8 *)(puVar7 + 0x41c) = 0;
  *(undefined8 *)(puVar7 + 0x441) = 0;
  *(undefined8 *)(puVar7 + 0x43c) = 0;
  *(undefined8 *)(puVar7 + 0x434) = 0;
  *(undefined8 *)(puVar7 + 0x459) = 0;
  *(undefined8 *)(puVar7 + 0x454) = 0;
  *(undefined8 *)(puVar7 + 0x44c) = 0;
  *(undefined8 *)(puVar7 + 0x471) = 0;
  *(undefined8 *)(puVar7 + 0x46c) = 0;
  *(undefined8 *)(puVar7 + 0x464) = 0;
  *(undefined8 *)(puVar7 + 0x489) = 0;
  *(undefined8 *)(puVar7 + 0x484) = 0;
  *(undefined8 *)(puVar7 + 0x47c) = 0;
  *(undefined8 *)(puVar7 + 0x4a1) = 0;
  *(undefined8 *)(puVar7 + 0x49c) = 0;
  *(undefined8 *)(puVar7 + 0x494) = 0;
  *(undefined8 *)(puVar7 + 0x4b9) = 0;
  *(undefined8 *)(puVar7 + 0x4b4) = 0;
  *(undefined8 *)(puVar7 + 0x4ac) = 0;
  *(undefined8 *)(puVar7 + 0x4d1) = 0;
  *(undefined8 *)(puVar7 + 0x4cc) = 0;
  *(undefined8 *)(puVar7 + 0x4c4) = 0;
  *(undefined8 *)(puVar7 + 0x4e9) = 0;
  *(undefined8 *)(puVar7 + 0x4e4) = 0;
  *(undefined8 *)(puVar7 + 0x4dc) = 0;
  *(undefined8 *)(puVar7 + 0x501) = 0;
  *(undefined8 *)(puVar7 + 0x4fc) = 0;
  *(undefined8 *)(puVar7 + 0x4f4) = 0;
  *(undefined8 *)(puVar7 + 0x519) = 0;
  *(undefined8 *)(puVar7 + 0x514) = 0;
  *(undefined8 *)(puVar7 + 0x50c) = 0;
  *(undefined8 *)(puVar7 + 0x531) = 0;
  *(undefined8 *)(puVar7 + 0x52c) = 0;
  *(undefined8 *)(puVar7 + 0x524) = 0;
  *(undefined8 *)(puVar7 + 0x549) = 0;
  *(undefined8 *)(puVar7 + 0x544) = 0;
  *(undefined8 *)(puVar7 + 0x53c) = 0;
  *(undefined8 *)(puVar7 + 0x561) = 0;
  *(undefined8 *)(puVar7 + 0x55c) = 0;
  *(undefined8 *)(puVar7 + 0x554) = 0;
  *(undefined8 *)(puVar7 + 0x579) = 0;
  *(undefined8 *)(puVar7 + 0x574) = 0;
  *(undefined8 *)(puVar7 + 0x56c) = 0;
  *(undefined8 *)(puVar7 + 0x591) = 0;
  *(undefined8 *)(puVar7 + 0x58c) = 0;
  *(undefined8 *)(puVar7 + 0x584) = 0;
  *(undefined8 *)(puVar7 + 0x5a9) = 0;
  *(undefined8 *)(puVar7 + 0x5a4) = 0;
  *(undefined8 *)(puVar7 + 0x59c) = 0;
  pvVar10 = *(void **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar7;
  if (pvVar10 == (void *)0x0) {
LAB_0367a9c0:
    if (DAT_05ae7600 != 0) goto LAB_0367a9c8;
LAB_0367aa18:
    plVar5 = malloc(0x30);
  }
  else {
    if (DAT_05ae7600 != 0) {
      plVar5 = (long *)FUN_038cb610(DAT_05ae7600,pvVar10);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar10);
      }
      goto LAB_0367a9c0;
    }
    free(pvVar10);
    if (DAT_05ae7600 == 0) goto LAB_0367aa18;
LAB_0367a9c8:
    lVar3 = DAT_05ae7600;
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
      plVar5 = (long *)(lVar3 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x30,8);
  }
  *(undefined8 *)((long)plVar5 + 0x1c) = 0;
  *(undefined8 *)((long)plVar5 + 0x16) = 0;
  *(undefined8 *)((long)plVar5 + 0xe) = 0;
  puVar1 = PTR_DAT_04bcaab8 + 0x10;
  *(undefined1 *)((long)plVar5 + 0x24) = 0;
  *(undefined4 *)((long)plVar5 + 9) = 0;
  *plVar5 = (long)puVar1;
  *(undefined4 *)(plVar5 + 5) = 1;
  *(undefined1 *)(plVar5 + 1) = 1;
  pvVar10 = *(void **)(param_1 + 0x18);
  *(long **)(param_1 + 0x18) = plVar5;
  if (pvVar10 == (void *)0x0) {
LAB_0367aa80:
    if (DAT_05ae7600 != 0) goto LAB_0367aa88;
LAB_0367aadc:
    pvVar10 = malloc(0xb6000);
  }
  else {
    if (DAT_05ae7600 != 0) {
      plVar5 = (long *)FUN_038cb610(DAT_05ae7600,pvVar10);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar10);
      }
      goto LAB_0367aa80;
    }
    free(pvVar10);
    if (DAT_05ae7600 == 0) goto LAB_0367aadc;
LAB_0367aa88:
    lVar3 = DAT_05ae7600;
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
      plVar5 = (long *)(lVar3 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
    }
    pvVar10 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0xb6000,0x1000);
  }
  FUN_03679fa4(pvVar10,param_2);
  lVar3 = DAT_05ae7600;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
  lVar11 = *(long *)(param_1 + 0x20);
  puVar6 = (undefined8 *)(lVar3 + 8);
  if (lVar4 != 0) {
    puVar6 = (undefined8 *)(lVar4 + 0xa8);
  }
  uVar8 = *puVar6;
  *(void **)(param_1 + 0x20) = pvVar10;
  if (lVar11 != 0) {
    plVar5 = *(long **)(param_1 + 0x28);
    FUN_0367a1b0(lVar11);
    (**(code **)(*plVar5 + 0x38))(plVar5,lVar11);
  }
  lVar3 = DAT_05ae7600;
  *(undefined8 *)(param_1 + 0x28) = uVar8;
  if (lVar3 == 0) {
    plVar5 = malloc(0x90);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
      param_2 = (long *)(lVar3 + 8);
      if (lVar4 != 0) {
        param_2 = (long *)(lVar4 + 0xa8);
      }
      param_2 = (long *)*param_2;
    }
    plVar5 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x90,8);
  }
  *(undefined4 *)(plVar5 + 0x11) = 0;
  *(undefined1 *)(plVar5 + 1) = 0;
  plVar5[3] = -0x13ffffff88;
  plVar5[4] = 0xa00000055;
  plVar5[6] = 0;
  plVar5[7] = 0;
  *(undefined8 *)((long)plVar5 + 0xc) = 1;
  *(undefined1 *)((long)plVar5 + 0x14) = 0;
  *(undefined4 *)(plVar5 + 5) = 0;
  *(undefined1 *)(plVar5 + 9) = 0;
  plVar5[8] = 0;
  plVar5[0x10] = 0x2d000000500;
  *(undefined1 *)((long)plVar5 + 0x8c) = 0;
  plVar5[10] = 0;
  plVar5[0xb] = 0;
  plVar5[0xc] = 0;
  plVar5[0xd] = 0;
  plVar5[0xe] = 0;
  plVar5[0xf] = 0;
  *plVar5 = (long)(PTR_DAT_04bcaaa8 + 0x10);
  plVar9 = *(long **)(param_1 + 0x30);
  *(long **)(param_1 + 0x30) = plVar5;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))(plVar9);
  }
  *(undefined1 *)(param_1 + 0xc0) = 1;
LAB_0367ac20:
  if (lVar12 != 1) {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    *(long *)(lVar3 + 0xa8) = lVar12;
  }
  return 1;
}

