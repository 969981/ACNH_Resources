
void FUN_02492410(long param_1)

{
  byte *pbVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  undefined2 uVar9;
  long lVar10;
  long lVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int local_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined1 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  int local_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  undefined1 uStack_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  float local_a0;
  float fStack_9c;
  float local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined1 local_88;
  undefined4 local_84;
  undefined2 local_80;
  undefined2 local_7e;
  undefined1 local_7c;
  undefined4 local_78;
  
  fVar17 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
  fVar19 = (float)*(int *)(param_1 + 0x1900) * 0.001;
  fVar18 = (float)*(int *)(param_1 + 0x1906) * 0.001;
  local_a8 = (undefined *)CONCAT44(fVar17,fVar19);
  lVar10 = *(long *)PTR_DAT_04bb2720;
  local_a0 = fVar18;
  if (lVar10 == 0) {
    puVar15 = &DAT_055c04a0;
  }
  else {
    puVar15 = &DAT_055c04a0;
    if (*(long *)(lVar10 + 0x330) != 0) {
      puVar15 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar5 = FUN_006bd550(*puVar15,0);
      puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar15 = &DAT_055c04a0;
      }
    }
  }
  if (DAT_055c1b60 != &DAT_055c1b58) {
    uVar6 = 0;
    puVar14 = DAT_055c1b60;
    do {
      if (*(int *)(puVar14 + -1) == *(int *)(puVar15 + 7)) {
        if (((uVar6 ^ 0xffffffff) & 0xffff) != 0) goto LAB_02492544;
        break;
      }
      puVar14 = (undefined8 *)puVar14[1];
      uVar6 = uVar6 + 1;
    } while (puVar14 != &DAT_055c1b58);
  }
  uVar6 = 0;
LAB_02492544:
  local_f8 = (undefined *)(CONCAT44(local_f8._4_4_,uVar6) & 0xffffffff0000ffff);
  local_f8._0_5_ = CONCAT14(1,(float)local_f8);
  uVar16 = FUN_016e06d0(0,&local_a8,0,0,&local_f8,0);
  local_a8 = (undefined *)CONCAT44(uVar16,(undefined4)local_a8);
  local_e8 = (undefined *)CONCAT71(local_e8._1_7_,1);
  local_f8 = (undefined *)CONCAT44(uVar16,(undefined4)local_a8);
  local_f0._0_4_ = local_a0;
  local_f0._4_4_ = 0x101;
  FUN_016dec40(param_1,&local_f8,1,1,0,0,1);
  local_a8 = (undefined *)0x0;
  puVar15 = *(undefined8 **)(param_1 + 0x60);
  local_f8._4_4_ = (float)(int)*(short *)(param_1 + 0x190e) * 0.25;
  local_f8._0_4_ = (float)*(int *)(param_1 + 0x190a) * 0.001;
  local_f0 = (char *)CONCAT44(local_f0._4_4_,(float)*(int *)(param_1 + 0x1910) * 0.001);
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  FUN_01706fac(puVar15,&local_f8,&local_a8);
  local_f8 = (undefined *)((ulong)(uint)local_f8._4_4_ << 0x20);
  puVar15 = *(undefined8 **)(param_1 + 0x60);
  local_a8 = (undefined *)
             ((ulong)CONCAT42(local_a8._4_4_,*(undefined2 *)(param_1 + 0x1914)) << 0x10);
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  FUN_017071b4(puVar15,&local_a8,&local_f8);
  *(undefined8 *)(param_1 + 0x740) = 0;
  *(undefined8 *)(param_1 + 0x72e) = 0;
  *(undefined8 *)(param_1 + 0x738) = 0x100000002;
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  *(undefined8 *)(param_1 + 0x728) = 0;
  *(undefined8 *)(param_1 + 0x748) = 0;
  *(undefined8 *)(param_1 + 0x750) = 0;
  *(undefined8 *)(param_1 + 0x758) = 0;
  *(undefined1 *)(param_1 + 0x760) = 0;
  if (*(byte *)(param_1 + 0x1ee8) < 8) {
    uVar6 = FUN_02582d8c(pbVar1,1);
    if (((uVar6 < 8) &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar6 * 0x13f0 + 0x13d4) != '\0')) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar6 * 0x13f0 + 0x13d6) != '\0')) {
      FUN_02582d8c(pbVar1,1);
    }
    if (7 < *pbVar1) goto LAB_02492780;
    uVar6 = FUN_02582d8c(pbVar1,1);
    puVar3 = PTR_DAT_04bb4fb8;
    if (((7 < uVar6) ||
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar6 * 0x13f0 + 0x13d4) == '\0')) ||
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar6 * 0x13f0 + 0x13d6) == '\0'))
    goto LAB_02492780;
    uVar6 = FUN_02582d8c(pbVar1,1);
    if (uVar6 < 8) {
      lVar10 = *(long *)puVar3 + (ulong)uVar6 * 0x13f0;
      lVar11 = 0;
      if (*(char *)(lVar10 + 0x13d4) != '\0') {
        lVar11 = lVar10;
      }
    }
    else {
      lVar11 = 0;
    }
    lVar10 = 0;
    if (lVar11 != 0) {
      lVar10 = lVar11 + 8;
    }
    iVar5 = *(int *)(param_1 + 0x178);
  }
  else {
LAB_02492780:
    lVar10 = 0;
    iVar5 = *(int *)(param_1 + 0x178);
  }
  if (iVar5 != 0) {
    *(undefined1 *)(param_1 + 0x760) = 0;
    goto LAB_024929f8;
  }
  local_84 = 1;
  local_a8 = PTR_DAT_04bc2ef8 + 0x10;
  FUN_007ef010(&local_80,PTR_DAT_04bb3170);
  local_7e = 0;
  local_7c = 0;
  local_8c = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
  local_94 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
  local_78 = 0;
  local_88 = 0;
  local_a0 = fVar19;
  fStack_9c = fVar17;
  local_98 = fVar18;
  if (lVar10 == 0) {
    local_f8 = (undefined *)CONCAT44(local_f8._4_4_,1);
    FUN_007ef010((long)&local_f8 + 4,PTR_DAT_04bb3170);
    uVar12 = 0;
    uVar9 = 0;
    local_f8 = (undefined *)((ulong)local_f8 & 0xffffffffffff);
  }
  else {
    local_f8 = (undefined *)CONCAT44(local_f8._4_4_,*(undefined4 *)(lVar10 + 0x580));
    FUN_007ef010((long)&local_f8 + 4,lVar10 + 0x584);
    uVar9 = *(undefined2 *)(lVar10 + 0x586);
    local_f8 = (undefined *)CONCAT26(uVar9,(undefined6)local_f8);
    uVar12 = (undefined1)((ushort)uVar9 >> 8);
  }
  local_7e = CONCAT11(uVar12,(char)uVar9);
  local_84 = (float)local_f8;
  local_80 = local_f8._4_2_;
  lVar10 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*pbVar1 * 0x740;
  if (7 < *pbVar1) {
    lVar10 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  *(undefined8 *)(lVar10 + 0x118) = 0x100000000;
  *(undefined4 *)(lVar10 + 0x1b8) = 0;
  iVar5 = FUN_022e2e54(lVar10 + 0x1c0,&local_a8);
  uVar6 = *(uint *)(lVar10 + 0x1e8);
  local_f8 = PTR_DAT_04bc2f00 + 0x10;
  local_e8 = PTR_DAT_04bbc248 + 0x10;
  local_f0 = (char *)CONCAT44(local_f0._4_4_,uVar6);
  local_e0 = (int)*(undefined8 *)(lVar10 + 0x1f8);
  uStack_b8 = *(undefined8 *)(lVar10 + 0x220);
  uVar13 = *(undefined8 *)(lVar10 + 0x1fd);
  uStack_dc._0_1_ = (undefined1)((ulong)*(undefined8 *)(lVar10 + 0x1f8) >> 0x20);
  uStack_dc._1_3_ = (undefined3)uVar13;
  iStack_d8 = (int)((ulong)uVar13 >> 0x18);
  uStack_d4 = (undefined1)((ulong)uVar13 >> 0x38);
  uVar13 = *(undefined8 *)(lVar10 + 0x218);
  local_b0 = *(undefined4 *)(lVar10 + 0x228);
  local_d0 = *(undefined8 *)(lVar10 + 0x208);
  local_c8 = *(undefined8 *)(lVar10 + 0x210);
  local_c0._4_1_ = (char)((ulong)uVar13 >> 0x20);
  local_c0 = uVar13;
  if (local_c0._4_1_ == '\0') {
    if (iStack_d8 == 0) {
      local_11c = local_e0;
      if (local_e0 == 0) {
        *(undefined1 *)(param_1 + 0x191a) = 0;
      }
      else {
        *(bool *)(param_1 + 0x191a) = local_e0 == 5 || local_e0 == 0xf;
        if (local_e0 != 0) goto LAB_02492948;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x191a) = 0;
    }
LAB_0249292c:
    uVar16 = FUN_022edb8c(&local_f8);
    uVar8 = FUN_02472a24(param_1,param_1 + 0x728,uVar16);
    if ((uVar8 & 1) != 0) goto LAB_024929f8;
  }
  else {
    *(bool *)(param_1 + 0x191a) = uVar6 == 1;
    if (1 < uVar6) goto LAB_0249292c;
  }
LAB_02492948:
  iVar4 = (int)local_d0;
  local_11c = (int)local_d0;
  puVar15 = *(undefined8 **)(param_1 + 0x60);
  *(short *)(param_1 + 0x1918) = (short)local_d0;
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  *(int *)((long)puVar15 + 0x5e7c) = iVar4;
  *(bool *)(param_1 + 0x760) = iVar5 == 0;
  if (local_d0._4_1_ != '\0') {
    local_108 = local_c8;
    local_100 = (undefined4)local_c0;
    uStack_118 = FUN_016e026c(0,&local_108,0,0);
    local_110 = 0x101;
    local_108 = CONCAT44(uStack_118,(int)local_108);
    local_10c = 1;
    local_11c = (int)local_108;
    local_114 = local_100;
    FUN_016dec40(param_1,&local_11c,1,1,0,0,1);
  }
LAB_024929f8:
  cVar2 = *(char *)(param_1 + 0x191a);
  puVar15 = *(undefined8 **)(param_1 + 0x60);
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  if (cVar2 == '\0') {
    local_f0 = "PlayerLinecarReady";
  }
  else {
    local_f0 = "PlayerLinecarDeleteReady";
  }
  local_f8 = PTR_DAT_04bb2020 + 0x10;
  FUN_017081d0(puVar15,&local_f8,6,0,0);
  return;
}

