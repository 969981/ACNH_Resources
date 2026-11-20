
undefined4 FUN_03f34850(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  void *pvVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **__src;
  undefined **ppuVar7;
  bool bVar8;
  byte bVar9;
  long lVar10;
  ulong uVar11;
  void *pvVar12;
  int iVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined ***pppuVar17;
  undefined *puVar18;
  undefined4 uVar19;
  undefined **ppuVar20;
  long *plVar21;
  uint uVar22;
  undefined **local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  long local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined *puStack_2c0;
  char *local_2b8;
  byte local_2b0;
  undefined8 local_2a8;
  long lStack_2a0;
  undefined *local_298;
  undefined **ppuStack_290;
  int local_288;
  undefined *local_284 [15];
  undefined1 local_205;
  undefined *local_200;
  uint local_1f8;
  undefined *local_1f0;
  undefined *local_1e8;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 local_1d4;
  undefined4 uStack_1d0;
  undefined4 local_1cc;
  undefined4 uStack_1c8;
  undefined4 local_1c4;
  undefined4 uStack_1c0;
  undefined4 local_1bc;
  undefined4 uStack_1b8;
  undefined4 local_1b4;
  undefined4 uStack_1b0;
  undefined4 local_1ac;
  undefined4 uStack_1a8;
  undefined4 local_1a4;
  undefined4 uStack_1a0;
  undefined4 local_19c;
  undefined *local_198;
  undefined **local_190;
  undefined **local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined1 local_155;
  undefined *local_f0;
  undefined **local_e8;
  undefined *local_e0;
  undefined4 local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  undefined1 uStack_bc;
  char cStack_bb;
  undefined2 uStack_ba;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined *local_78;
  undefined **local_70 [2];
  
  puVar18 = PTR_DAT_04bdf0b0;
  puVar6 = PTR_DAT_04bb2120;
  puVar5 = PTR_DAT_04bb2020;
  uStack_bc = 0;
  local_d8 = 1;
  local_c0 = 0x1010100;
  local_d0 = PTR_DAT_04bb2020 + 0x10;
  local_c8 = PTR_DAT_04bb2120;
  local_b4 = 0;
  uStack_b0 = 0;
  local_ac = 0;
  uStack_a8 = 0;
  local_a4 = 0;
  uStack_a0 = 0;
  local_9c = 0;
  uStack_98 = 0;
  local_e0 = PTR_DAT_04bdf0b0 + 0x10;
  local_94 = 0;
  uStack_90 = 0;
  local_8c = 0;
  uStack_88 = 0;
  local_84 = 0;
  uStack_80 = 0;
  local_7c = 0;
  cStack_bb = '\x01';
  uStack_ba = 0x101;
  uStack_b8 = CONCAT31(uStack_b8._1_3_,1);
  local_70[0] = (undefined **)PTR_DAT_04bb2120;
  local_78 = local_d0;
  FUN_03f335d0(param_1,&local_e0);
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  if (*(int *)(param_1 + 0x1f8) != 0) {
    lVar14 = (long)*(int *)(param_1 + 0x1f8) << 3;
    puVar15 = *(undefined8 **)(param_1 + 0x200);
    do {
      if (*(int *)*puVar15 == *(int *)(lVar10 + 200)) {
        if ((*(byte *)(*(long *)(param_1 + 0x138) + 0x104) >> 3 & 1) == 0) {
          bVar8 = true;
          goto LAB_03f34940;
        }
        uVar19 = 8;
        goto LAB_03f34a84;
      }
      puVar15 = puVar15 + 1;
      lVar14 = lVar14 + -8;
    } while (lVar14 != 0);
  }
  bVar8 = false;
LAB_03f34940:
  if (((*PTR_DAT_04bb4f18 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb4f18), iVar13 != 0)) {
    *(undefined **)PTR_DAT_04bb4f10 = PTR_DAT_04bb4ef8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb4f18);
  }
  if (param_4 == (undefined8 *)0x0) {
    bVar9 = 0;
  }
  else {
    bVar9 = (**(code **)*param_4)(param_4,PTR_DAT_04bb4f10);
  }
  if (((*PTR_DAT_04bdf0d8 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04bdf0d8), iVar13 != 0)) {
    *(undefined **)PTR_DAT_04bdf0d0 = PTR_DAT_04bb4ef8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bdf0d8);
  }
  if ((param_4 == (undefined8 *)0x0) ||
     (uVar11 = (**(code **)*param_4)(param_4,PTR_DAT_04bdf0d0), (uVar11 & 1) == 0)) {
    uVar16 = 0;
    lVar10 = CONCAT44(local_8c,uStack_90);
  }
  else {
    uVar16 = *(undefined8 *)(param_4[4] + 0x10);
    lVar10 = CONCAT44(local_8c,uStack_90);
  }
  if (lVar10 != 0) {
    local_178 = (undefined *)((ulong)local_178 & 0xffffffffffffff00);
    local_f0 = puVar5 + 0x10;
    local_e8 = (undefined **)puVar6;
    local_188 = (undefined **)&local_178;
    local_180 = (undefined ***)0x8100000000;
    if (cStack_bb == '\0') {
      pppuVar17 = local_70;
    }
    else {
      (**(code **)(local_78 + 0x18))(&local_78);
      ppuVar20 = local_188;
      if (local_188 != local_70[0]) {
        lVar10 = 0;
        do {
          pcVar2 = (char *)((long)local_70[0] + lVar10);
          lVar10 = lVar10 + 1;
        } while (*pcVar2 != '\0');
        uVar22 = (int)lVar10 - 1;
        if (local_180._4_4_ <= (int)uVar22) {
          uVar22 = local_180._4_4_ - 1;
        }
        if ((int)uVar22 < 1) {
          uVar22 = 0;
        }
        else {
          memcpy(local_188,local_70[0],(ulong)uVar22);
          ppuVar20 = (undefined **)((long)ppuVar20 + (ulong)uVar22);
        }
        *(undefined1 *)ppuVar20 = 0;
        local_180 = (undefined ***)CONCAT44(local_180._4_4_,uVar22);
      }
      pppuVar17 = &local_188;
      FUN_03f34470(param_1,&local_188);
      lVar10 = CONCAT44(local_8c,uStack_90);
    }
    local_e8 = *pppuVar17;
    plVar21 = *(long **)(*(long *)(lVar10 + 0x10) + 0x30);
    lVar10 = (**(code **)(*plVar21 + 0x30))(plVar21,&local_f0,0);
    puVar18 = PTR_DAT_04bdf0b0;
    if ((lVar10 == 0) && (lVar10 = (**(code **)(*plVar21 + 0x30))(plVar21,&local_78,0), lVar10 == 0)
       ) {
      if (local_c0._3_1_ == '\0') {
        uVar19 = 5;
LAB_03f34a84:
        *(undefined4 *)(param_2 + 0xc) = uVar19;
        FUN_03f2dedc(param_2,CONCAT44(local_7c,uStack_80));
        return uVar19;
      }
      if (CONCAT44(local_8c,uStack_90) == *(long *)(param_1 + 0x5e8)) {
        (**(code **)(local_78 + 0x18))(&local_78);
        FUN_006e9528(&local_300,&DAT_04064d1a,local_70[0]);
      }
      uStack_90 = 0;
      local_8c = 0;
    }
  }
  local_2b8 = puVar6;
  uStack_2d8 = 0;
  local_300 = &PTR_LAB_04ba8c98;
  puStack_2c0 = puVar5 + 0x10;
  local_288 = 0x80;
  bVar3 = 2;
  if (!bVar8) {
    bVar3 = (byte)local_d8;
  }
  local_205 = 0;
  local_284[0]._0_1_ = 0;
  local_1f8 = 1;
  local_200 = puVar18 + 0x10;
  local_1e0 = 0x1010100;
  local_2e0 = param_1 + 0x420;
  ppuVar20 = local_284;
  local_2e8 = 0;
  local_298 = PTR_DAT_04bb2d88 + 0x10;
  local_2b0 = bVar9 & 1;
  local_1e8 = puVar6;
  uStack_1dc = 0x1010100;
  uStack_1d8 = CONCAT31(uStack_1d8._1_3_,1);
  local_1a4 = 0;
  uStack_1a0 = 0;
  local_1ac = 0;
  uStack_1a8 = 0;
  local_1b4 = 0;
  uStack_1b0 = 0;
  local_1bc = 0;
  uStack_1b8 = 0;
  local_1c4 = 0;
  uStack_1c0 = 0;
  local_1cc = 0;
  uStack_1c8 = 0;
  local_1d4 = 0;
  uStack_1d0 = 0;
  local_19c = 0;
  local_2d0 = 0;
  local_2f0 = *(undefined8 *)(param_1 + 0x140);
  local_2f8._0_3_ = CONCAT12(bVar3,0x101);
  local_190 = (undefined **)puVar6;
  local_2c8 = 0;
  local_2a8 = uVar16;
  lStack_2a0 = param_2;
  ppuStack_290 = ppuVar20;
  local_1f0 = puStack_2c0;
  local_198 = puStack_2c0;
  (**(code **)(local_78 + 0x18))(&local_78);
  __src = local_70[0];
  if (ppuVar20 != local_70[0]) {
    (**(code **)(local_78 + 0x18))(&local_78);
    ppuVar7 = local_70[0];
    lVar10 = 0;
    do {
      if (*(char *)((long)local_70[0] + lVar10) == '\0') goto LAB_03f34cc4;
      if (*(char *)((long)local_70[0] + lVar10 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_03f34cc4;
      }
      if (*(char *)((long)local_70[0] + lVar10 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_03f34cc4;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_03f34cc4:
    iVar13 = (int)lVar10;
    if (local_288 <= (int)lVar10) {
      iVar13 = local_288 + -1;
    }
    memcpy(ppuVar20,__src,(long)iVar13);
    *(undefined1 *)((long)ppuVar20 + (long)iVar13) = 0;
    ppuVar20 = ppuVar7;
  }
  uStack_1b0 = uStack_90;
  local_1ac = local_8c;
  uStack_1a8 = uStack_88;
  local_1a4 = local_84;
  uStack_1a0 = uStack_80;
  local_19c = local_7c;
  uStack_1d0 = uStack_b0;
  local_1cc = local_ac;
  uStack_1c8 = uStack_a8;
  local_1c4 = local_a4;
  uStack_1c0 = uStack_a0;
  local_1bc = local_9c;
  uStack_1b8 = uStack_98;
  local_1b4 = local_94;
  local_1e0 = local_c0;
  uStack_1dc = (undefined4)
               (CONCAT26(uStack_ba,CONCAT15(cStack_bb,CONCAT14(uStack_bc,local_c0))) >> 0x20);
  uStack_1d8 = uStack_b8;
  local_1d4 = local_b4;
  local_1f8 = (uint)bVar3;
  local_1e8 = local_c8;
  local_2b8 = "Load(ForSync)";
  local_190 = ppuVar20;
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  local_188 = *(undefined ***)(param_1 + 0x1b0);
  if (*(long *)(param_1 + 0x140) != lVar10) {
    local_188 = (undefined **)0x0;
  }
  local_178 = (undefined *)(param_2 + 0x18);
  local_180 = &local_300;
  FUN_03f45184(*(undefined8 *)(param_1 + 0x1a0),&local_188);
  puVar5 = PTR_PTR_04bb2238;
  pvVar1 = (void *)((long)&local_2f0 + 4);
  local_2f0 = CONCAT44(local_2f0._4_4_,0x20);
  local_2d0._0_4_ = (uint)(uint3)local_2d0;
  pvVar12 = *(void **)(PTR_PTR_04bb2238 + 8);
  local_2f8 = pvVar1;
  if (pvVar1 != pvVar12) {
    lVar10 = 0;
    do {
      if (*(char *)((long)pvVar12 + lVar10) == '\0') {
LAB_03f34dd8:
        iVar13 = (int)lVar10;
joined_r0x03f34ddc:
        if (0x1f < iVar13) {
          iVar13 = 0x1f;
        }
        goto LAB_03f34de4;
      }
      if (*(char *)((long)pvVar12 + lVar10 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_03f34dd8;
      }
      if (*(char *)((long)pvVar12 + lVar10 + 2) == '\0') {
        iVar13 = (int)lVar10 + 2;
        goto joined_r0x03f34ddc;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    iVar13 = 0;
LAB_03f34de4:
    memcpy(pvVar1,pvVar12,(long)iVar13);
    *(undefined1 *)((long)pvVar1 + (long)iVar13) = 0;
  }
  ppuVar20 = (undefined **)(PTR_DAT_04bb2028 + 0x10);
  local_300 = ppuVar20;
  FUN_03f2de8c(param_2);
  pvVar12 = *(void **)(puVar5 + 8);
  pvVar1 = (void *)((long)&local_178 + 4);
  local_178 = (undefined *)CONCAT44(local_178._4_4_,0x20);
  local_155 = 0;
  local_180 = pvVar1;
  if (pvVar1 != pvVar12) {
    lVar10 = 0;
    do {
      if (*(char *)((long)pvVar12 + lVar10) == '\0') {
LAB_03f34e68:
        iVar13 = (int)lVar10;
joined_r0x03f34e6c:
        if (0x1f < iVar13) {
          iVar13 = 0x1f;
        }
        goto LAB_03f34e74;
      }
      if (*(char *)((long)pvVar12 + lVar10 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_03f34e68;
      }
      if (*(char *)((long)pvVar12 + lVar10 + 2) == '\0') {
        iVar13 = (int)lVar10 + 2;
        goto joined_r0x03f34e6c;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    iVar13 = 0;
LAB_03f34e74:
    memcpy(pvVar1,pvVar12,(long)iVar13);
    *(undefined1 *)((long)pvVar1 + (long)iVar13) = 0;
  }
  local_188 = ppuVar20;
  uVar11 = FUN_03f2dedc(param_2,CONCAT44(local_7c,uStack_80));
  puVar5 = PTR_DAT_04bb2020;
  if ((uVar11 & 1) == 0) {
    if ((*(uint *)(param_2 + 0xc) & 0xfffffffe) == 2) {
      FUN_03f2d620(param_2);
      *(undefined4 *)(param_2 + 0xc) = 8;
      goto LAB_03f34ec4;
    }
    local_f0 = (undefined *)CONCAT44(local_f0._4_4_,*(uint *)(param_2 + 0xc));
    uVar22 = *(uint *)(param_1 + 8);
  }
  else {
LAB_03f34ec4:
    uVar22 = *(uint *)(param_1 + 8);
  }
  if ((uVar22 >> 9 & 1) == 0) goto LAB_03f3505c;
  lVar10 = 0;
  if (*(long *)(param_2 + 0x10) != 0) {
    lVar10 = *(long *)(*(long *)(param_2 + 0x10) + 0x348);
  }
  if ((((!bVar8) || ((uVar22 >> 2 & 1) != 0)) || (*(int *)(param_2 + 0xc) != 1)) ||
     (lVar10 != *(long *)(param_1 + 0x5e0))) goto LAB_03f3505c;
  local_300 = (undefined **)(puVar5 + 0x10);
  local_2f8 = ".bactorpack";
  (**(code **)(local_78 + 0x18))(&local_78);
  lVar10 = 0;
  do {
    if (*(char *)((long)local_70[0] + lVar10) == '\0') {
LAB_03f34f9c:
      iVar13 = (int)lVar10;
joined_r0x03f34fa0:
      if (10 < iVar13) {
        uVar11 = 0;
        goto LAB_03f34fbc;
      }
      break;
    }
    if (*(char *)((long)local_70[0] + lVar10 + 1) == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_03f34f9c;
    }
    if (*(char *)((long)local_70[0] + lVar10 + 2) == '\0') {
      iVar13 = (int)lVar10 + 2;
      goto joined_r0x03f34fa0;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  goto LAB_03f35020;
  while( true ) {
    lVar10 = 0;
    while (cVar4 = pcVar2[lVar10], cVar4 == local_2f8[lVar10]) {
      if ((cVar4 == '\0') || (bVar8 = lVar10 == 10, lVar10 = lVar10 + 1, bVar8)) goto LAB_03f35018;
    }
    uVar11 = uVar11 + 1;
    if (uVar11 == iVar13 - 10) break;
LAB_03f34fbc:
    pcVar2 = (char *)((long)local_70[0] + uVar11);
    (*(code *)local_300[3])(&local_300);
    if (pcVar2 == local_2f8) {
LAB_03f35018:
      if ((int)uVar11 != -1) goto LAB_03f3505c;
      break;
    }
  }
LAB_03f35020:
  (**(code **)(local_d0 + 0x18))(&local_d0);
  puVar5 = local_c8;
  (**(code **)(local_78 + 0x18))(&local_78);
  FUN_006e9528(&local_300,&DAT_0410140e,puVar5,local_70[0]);
LAB_03f3505c:
  return *(undefined4 *)(param_2 + 0xc);
}

