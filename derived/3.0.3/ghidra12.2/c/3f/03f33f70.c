
undefined8 FUN_03f33f70(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong *__src;
  ulong *puVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  ulong **ppuVar10;
  long *plVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined **local_300;
  undefined2 local_2f8;
  undefined1 local_2f6;
  undefined8 local_2f0;
  undefined8 local_2e8;
  long local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined *puStack_2c0;
  undefined *local_2b8;
  byte local_2b0;
  undefined8 local_2a8;
  long lStack_2a0;
  undefined *local_298;
  ulong *puStack_290;
  int local_288;
  ulong local_284 [15];
  undefined1 local_205;
  undefined *local_200;
  undefined4 local_1f8;
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
  ulong *local_190;
  ulong *local_188;
  undefined8 local_180;
  ulong local_178 [17];
  undefined *local_f0;
  ulong *local_e8;
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
  ulong *local_70 [2];
  
  puVar3 = PTR_DAT_04bb2120;
  puVar2 = PTR_DAT_04bb2020;
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
  local_70[0] = (ulong *)PTR_DAT_04bb2120;
  local_78 = local_d0;
  FUN_03f335d0(param_1,&local_e0);
  if (((*PTR_DAT_04bb4f18 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb4f18), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bb4f10 = PTR_DAT_04bb4ef8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb4f18);
  }
  if (param_4 == (undefined8 *)0x0) {
    bVar5 = 0;
  }
  else {
    bVar5 = (**(code **)*param_4)(param_4,PTR_DAT_04bb4f10);
  }
  if (((*PTR_DAT_04bdf0d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bdf0d8), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bdf0d0 = PTR_DAT_04bb4ef8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bdf0d8);
  }
  if ((param_4 == (undefined8 *)0x0) ||
     (uVar7 = (**(code **)*param_4)(param_4,PTR_DAT_04bdf0d0), (uVar7 & 1) == 0)) {
    uVar13 = 0;
    lVar8 = CONCAT44(local_8c,uStack_90);
  }
  else {
    uVar13 = *(undefined8 *)(param_4[4] + 0x10);
    lVar8 = CONCAT44(local_8c,uStack_90);
  }
  if (lVar8 != 0) {
    local_178[0] = local_178[0] & 0xffffffffffffff00;
    local_f0 = puVar2 + 0x10;
    local_188 = local_178;
    local_180 = (undefined ***)0x8100000000;
    if (cStack_bb == '\0') {
      ppuVar10 = local_70;
    }
    else {
      (**(code **)(local_78 + 0x18))(&local_78);
      puVar9 = local_188;
      if (local_188 != local_70[0]) {
        lVar8 = 0;
        do {
          pcVar1 = (char *)((long)local_70[0] + lVar8);
          lVar8 = lVar8 + 1;
        } while (*pcVar1 != '\0');
        uVar12 = (int)lVar8 - 1;
        if (local_180._4_4_ <= (int)uVar12) {
          uVar12 = local_180._4_4_ - 1;
        }
        if ((int)uVar12 < 1) {
          uVar12 = 0;
        }
        else {
          memcpy(local_188,local_70[0],(ulong)uVar12);
          puVar9 = (ulong *)((long)puVar9 + (ulong)uVar12);
        }
        *(undefined1 *)puVar9 = 0;
        local_180 = (undefined ***)CONCAT44(local_180._4_4_,uVar12);
      }
      ppuVar10 = &local_188;
      FUN_03f34470(param_1,&local_188);
      lVar8 = CONCAT44(local_8c,uStack_90);
    }
    local_e8 = *ppuVar10;
    plVar11 = *(long **)(*(long *)(lVar8 + 0x10) + 0x30);
    lVar8 = (**(code **)(*plVar11 + 0x30))(plVar11,&local_f0,0);
    if ((lVar8 == 0) && (lVar8 = (**(code **)(*plVar11 + 0x30))(plVar11,&local_78,0), lVar8 == 0)) {
      if (local_c0._3_1_ == '\0') {
        *(undefined4 *)(param_2 + 0xc) = 5;
        FUN_03f2dedc(param_2,CONCAT44(local_7c,uStack_80));
        return 5;
      }
      if (CONCAT44(local_8c,uStack_90) == *(long *)(param_1 + 0x5e8)) {
        (**(code **)(local_78 + 0x18))(&local_78);
        FUN_006e9528(&local_300,&DAT_04064d1a,local_70[0]);
      }
      uStack_90 = 0;
      local_8c = 0;
    }
  }
  local_2b8 = puVar3;
  uStack_2d8 = 0;
  puStack_2c0 = puVar2 + 0x10;
  puVar9 = local_284;
  local_300 = &PTR_LAB_04ba8c98;
  local_288 = 0x80;
  local_205 = 0;
  local_298 = PTR_DAT_04bb2d88 + 0x10;
  local_284[0]._0_1_ = 0;
  local_1f8 = 1;
  local_1e8 = puVar3;
  local_200 = PTR_DAT_04bdf0b0 + 0x10;
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
  local_2f8 = 1;
  local_2e0 = param_1 + 0x420;
  local_1e0 = 0x1010100;
  local_19c = 0;
  uStack_1dc = 0x1010100;
  uStack_1d8 = CONCAT31(uStack_1d8._1_3_,1);
  local_2b0 = bVar5 & 1;
  local_2d0 = 0;
  local_2f6 = (undefined1)local_d8;
  local_2f0 = *(undefined8 *)(param_1 + 0x140);
  local_190 = (ulong *)puVar3;
  local_2c8 = 0;
  local_2e8 = 0;
  local_2a8 = uVar13;
  lStack_2a0 = param_2;
  puStack_290 = puVar9;
  local_1f0 = puStack_2c0;
  local_198 = puStack_2c0;
  (**(code **)(local_78 + 0x18))(&local_78);
  __src = local_70[0];
  if (puVar9 != local_70[0]) {
    (**(code **)(local_78 + 0x18))(&local_78);
    puVar4 = local_70[0];
    lVar8 = 0;
    do {
      if (*(char *)((long)local_70[0] + lVar8) == '\0') goto LAB_03f34334;
      if (*(char *)((long)local_70[0] + lVar8 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_03f34334;
      }
      if (*(char *)((long)local_70[0] + lVar8 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_03f34334;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_03f34334:
    iVar6 = (int)lVar8;
    if (local_288 <= (int)lVar8) {
      iVar6 = local_288 + -1;
    }
    memcpy(puVar9,__src,(long)iVar6);
    *(undefined1 *)((long)puVar9 + (long)iVar6) = 0;
    puVar9 = puVar4;
  }
  local_1f8 = local_d8;
  local_188 = (ulong *)0x0;
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
  local_1e8 = local_c8;
  local_2b8 = &DAT_040e09dd;
  local_178[0] = param_2 + 0x18;
  local_190 = puVar9;
  local_180 = &local_300;
  FUN_03f45184(*(undefined8 *)(param_1 + 0x1a0),&local_188);
  return 4;
}

