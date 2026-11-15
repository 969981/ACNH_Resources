
void FUN_024f1650(long param_1,long param_2,long *param_3)

{
  byte *pbVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  ulong uVar10;
  undefined8 *puVar11;
  byte bVar12;
  uint uVar13;
  long lVar14;
  undefined8 *puVar15;
  char *pcVar16;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 local_104;
  undefined *local_f8;
  undefined1 *puStack_f0;
  undefined4 local_e8;
  undefined1 local_e4 [127];
  undefined1 local_65;
  undefined4 local_60;
  undefined2 local_5c;
  undefined8 local_58;
  
  local_65 = 0;
  local_e4[0] = 0;
  local_114 = 0x3f800000;
  local_60 = 7;
  puStack_f0 = local_e4;
  local_e8 = 0x80;
  local_58 = 0;
  local_f8 = PTR_DAT_04bb2d88 + 0x10;
  local_5c = 0;
  local_10c = 0;
  local_104 = 0;
  uStack_120 = *(undefined8 *)(param_2 + 8);
  local_118 = *(undefined4 *)(param_2 + 0x10);
  local_128 = 0x8700000000;
  uVar5 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_128,*(undefined4 *)(param_1 + 0x230),0
                      );
  *(undefined4 *)(param_1 + 0x388) = uVar5;
  if (*(long *)(param_2 + 0xd0) == 0) {
    pbVar1 = PTR_DAT_04bb5038 + *(uint *)(param_2 + 0x1c);
    if (7 < *(uint *)(param_2 + 0x1c)) {
      pbVar1 = PTR_DAT_04bb32e0;
    }
    bVar12 = *pbVar1;
    if (7 < bVar12) {
      bVar12 = 0xff;
    }
    *(byte *)(param_1 + 0x3b4) = bVar12;
    *(undefined4 *)(param_1 + 0x3b0) = 1;
  }
  else {
    FUN_024f1d00(param_1 + 0x3b0);
  }
  puVar3 = PTR_DAT_04bb2698;
  lVar14 = *(long *)PTR_DAT_04bb2698;
  if (lVar14 == 0) {
    pvVar9 = malloc(0x348);
  }
  else {
    plVar8 = param_3;
    if (param_3 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar14 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
    }
    pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x348,8);
  }
  FUN_0233127c(pvVar9,param_1);
  FUN_006f9fc0(param_1,pvVar9,0xffffffff);
  plVar8 = *(long **)(param_1 + 0x68);
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    if (((*PTR_DAT_04bc3050 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc3050), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bc3048 = PTR_DAT_04bb2e20 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc3050);
    }
    uVar10 = (**(code **)(*plVar8 + 0x10))(plVar8,PTR_DAT_04bc3048);
    if ((uVar10 & 1) == 0) {
      plVar8 = (long *)0x0;
    }
  }
  lVar14 = *(long *)puVar3;
  *(long **)(param_1 + 0x4c8) = plVar8;
  if (lVar14 == 0) {
    plVar8 = malloc(0x2a8);
  }
  else {
    plVar8 = param_3;
    if (param_3 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar14 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0x0;
        goto LAB_024f1864;
      }
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x2a8,8);
  }
LAB_024f1864:
  FUN_00705c50(plVar8);
  *(undefined4 *)(plVar8 + 0x51) = 0;
  puVar4 = PTR_DAT_04bb35d0;
  pcVar16 = (char *)plVar8[0xc];
  *(undefined4 *)(plVar8 + 0x52) = 0;
  plVar8[0x53] = 0;
  *(undefined2 *)(plVar8 + 0x54) = 0;
  plVar8[0x50] = (long)(plVar8 + 0x4f);
  plVar8[0x4f] = (long)(plVar8 + 0x4f);
  *plVar8 = (long)(puVar4 + 0x10);
  if (pcVar16 != "ModelResLoader") {
    iVar6 = 0xe;
    if ((int)plVar8[0xd] < 0xf) {
      iVar6 = (int)plVar8[0xd] + -1;
    }
    memcpy(pcVar16,"ModelResLoader",(long)iVar6);
    pcVar16[iVar6] = '\0';
  }
  *(undefined4 *)((long)plVar8 + 0x28c) = 8;
  *(uint *)(plVar8 + 0x4c) = *(uint *)(plVar8 + 0x4c) & 0xfffffff0 | 1;
  FUN_006f9fc0(param_1,plVar8,0xffffffff);
  lVar14 = *(long *)puVar3;
  if (lVar14 == 0) {
    plVar8 = malloc(0x2e0);
  }
  else {
    plVar8 = param_3;
    if (param_3 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar14 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0x0;
        goto LAB_024f1964;
      }
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x2e0,8);
  }
LAB_024f1964:
  FUN_00705c50(plVar8);
  plVar8[0x4f] = 0;
  puVar4 = PTR_DAT_04bb3300;
  plVar8[0x50] = 0;
  plVar8[0x53] = -0x100000000;
  plVar8[0x52] = (long)(plVar8 + 0x51);
  plVar8[0x51] = (long)(plVar8 + 0x51);
  *plVar8 = (long)(puVar4 + 0x10);
  FUN_038e18e4(plVar8 + 0x54);
  pcVar16 = (char *)plVar8[0xc];
  if (pcVar16 != "Family") {
    iVar6 = 6;
    if ((int)plVar8[0xd] < 7) {
      iVar6 = (int)plVar8[0xd] + -1;
    }
    memcpy(pcVar16,"Family",(long)iVar6);
    pcVar16[iVar6] = '\0';
  }
  *(uint *)(plVar8 + 0x4c) = *(uint *)(plVar8 + 0x4c) & 0xfffffff0;
  *(undefined4 *)((long)plVar8 + 0x29c) = 0x278;
  FUN_006f9fc0(param_1,plVar8,0xffffffff);
  lVar14 = *(long *)puVar3;
  if (lVar14 == 0) {
    pvVar9 = malloc(0xc398);
  }
  else {
    plVar8 = param_3;
    if (param_3 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar14 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
    }
    pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0xc398,8);
  }
  FUN_02335234(pvVar9,param_1 + 0x3b0);
  FUN_006f9fc0(param_1,pvVar9,0xffffffff);
  lVar14 = *(long *)(param_1 + 0x60);
  uVar2 = *(uint *)(lVar14 + 0x11a0);
  *(uint *)(lVar14 + 0x11a0) = uVar2 | 4;
  uVar13 = (uint)*(byte *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x70) + 0xd0);
  *(uint *)(lVar14 + 0x11a0) = uVar2 & 0xffffbfff | 4 | uVar13 << 0xe;
  lVar14 = *(long *)(lVar14 + 0x1150);
  if (lVar14 != 0) {
    uVar2 = *(uint *)(lVar14 + 0x20);
    if ((uint)*(ushort *)(lVar14 + 0x284) <= *(uint *)(lVar14 + 0x20)) {
      uVar2 = (uint)*(ushort *)(lVar14 + 0x284);
    }
    if (uVar2 != 0) {
      lVar14 = *(long *)(lVar14 + 0x28);
      if (uVar13 == 0) {
        uVar13 = 0;
        do {
          lVar7 = *(long *)(lVar14 + (long)(int)uVar13 * 0x38);
          *(ushort *)(lVar7 + 0xac) = *(ushort *)(lVar7 + 0xac) & 0xfffd;
          uVar13 = uVar13 + 1;
        } while (uVar2 != uVar13);
      }
      else {
        uVar13 = 0;
        do {
          lVar7 = *(long *)(lVar14 + (long)(int)uVar13 * 0x38);
          *(ushort *)(lVar7 + 0xac) = *(ushort *)(lVar7 + 0xac) | 2;
          uVar13 = uVar13 + 1;
        } while (uVar2 != uVar13);
      }
    }
  }
  lVar14 = *(long *)puVar3;
  if (lVar14 == 0) {
    puVar11 = malloc(0x20);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar11 = (undefined8 *)(lVar14 + 8);
      if (lVar7 != 0) {
        puVar11 = (undefined8 *)(lVar7 + 0xa8);
      }
      param_3 = (long *)*puVar11;
      puVar11 = (undefined8 *)0x0;
      if (param_3 == (long *)0x0) goto LAB_024f1b94;
    }
    puVar11 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3,0x20,8);
  }
LAB_024f1b94:
  plVar8 = *(long **)(param_1 + 0x60);
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    if (((*PTR_DAT_04bb37a0 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37a0), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb3798 = PTR_DAT_04bb37a8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37a0);
    }
    uVar10 = (**(code **)(*plVar8 + 0x10))(plVar8,PTR_DAT_04bb3798);
    if ((uVar10 & 1) == 0) {
      plVar8 = (long *)0x0;
    }
  }
  *(undefined4 *)(puVar11 + 2) = 0;
  *(undefined4 *)((long)puVar11 + 0x15) = 0;
  *puVar11 = plVar8;
  puVar11[1] = 0xfffffffe00000000;
  *(undefined1 *)((long)puVar11 + 0x14) = 1;
  puVar15 = *(undefined8 **)(param_1 + 0x60);
  *(undefined8 **)(param_1 + 0x4d0) = puVar11;
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  puVar15[0xbd7] = *(undefined8 *)(param_1 + 0x4d0);
  return;
}

