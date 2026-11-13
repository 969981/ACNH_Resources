
void FUN_013668a0(void)

{
  long *plVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  ushort uVar21;
  undefined *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined **local_1b0;
  undefined ***pppuStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 uStack_119;
  undefined *local_118;
  undefined8 local_110;
  uint local_108;
  uint uStack_104;
  uint local_100;
  uint uStack_fc;
  undefined **local_f8;
  undefined **local_f0;
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
  
  uVar8 = nn::os::GetSystemTick();
  local_e8 = 0;
  uStack_e0 = 0;
  local_108 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
  local_d8 = 0;
  uStack_d0 = 0;
  pppuStack_1a8 = &local_f8;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_104 = (local_108 ^ local_108 >> 0x1e) * 0x6c078965 + 2;
  local_1b0 = &PTR_LAB_0498df40;
  local_100 = (uStack_104 ^ uStack_104 >> 0x1e) * 0x6c078965 + 3;
  uStack_fc = (local_100 ^ local_100 >> 0x1e) * 0x6c078965 + 4;
  local_f8 = &PTR_LAB_0498df20;
  local_f0 = (undefined **)0x0;
  FUN_0131c950(&local_1b0);
  iVar9 = FUN_00da1ae4(&local_f0);
  if (iVar9 == 0) {
    uVar16 = FUN_00da1ae4(&local_f0);
    uVar8 = local_108 ^ local_108 << 0xb;
    local_108 = uStack_104;
    uStack_104 = local_100;
    uVar8 = uVar8 >> 8 ^ uStack_fc >> 0x13 ^ uVar8 ^ uStack_fc;
    local_100 = uStack_fc;
    uStack_fc = uVar8;
    uVar8 = FUN_00edf160(&local_f0,(int)((ulong)uVar8 * (uVar16 & 0xffffffff) >> 0x20) + 1);
    uVar8 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
  }
  else {
    uVar8 = 0;
  }
  local_118 = PTR_DAT_04bbc350 + 0x10;
  uVar12 = (uVar8 & 0xffff) - (uint)*(ushort *)(DAT_0519d040 + 0x1168);
  if (uVar12 < *(uint *)(DAT_0519d040 + 0x1148)) {
    local_110 = *(undefined8 *)(*(long *)(DAT_0519d040 + 0x1150) + (long)(int)uVar12 * 8);
  }
  else {
    local_110 = 0;
  }
  uVar10 = FUN_0131c3d0(&local_118);
  uVar7 = FUN_013257f0(&uStack_119,uVar10,&local_108);
  uVar16 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_1b0 = (undefined **)0x0;
  pppuStack_1a8 = (undefined ***)0x0;
  do {
    lVar20 = uVar16 << 0x20;
    uVar3 = uVar16 << 1;
    uVar4 = uVar16 >> 0x1f;
    uVar12 = (int)uVar16 + 2;
    uVar16 = (ulong)uVar12;
    *(undefined2 *)((long)&local_1b0 + (-uVar4 & 0xfffffffe00000000 | uVar3)) = 0;
    *(undefined2 *)((long)&local_1b0 + (lVar20 + 0x100000000 >> 0x1f)) = 0;
  } while (uVar12 != 0x48);
  uVar16 = 0;
  local_1c8 = (undefined *)CONCAT62(local_1c8._2_6_,uVar7);
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = (undefined **)0x0;
  local_f0 = (undefined **)0x0;
  do {
    lVar20 = uVar16 << 0x20;
    uVar3 = uVar16 << 1;
    uVar4 = uVar16 >> 0x1f;
    uVar12 = (int)uVar16 + 2;
    uVar16 = (ulong)uVar12;
    *(undefined2 *)((long)&local_f8 + (-uVar4 & 0xfffffffe00000000 | uVar3)) = 0;
    *(undefined2 *)((long)&local_f8 + (lVar20 + 0x100000000 >> 0x1f)) = 0;
  } while (uVar12 != 0x48);
  uVar16 = FUN_01263024(&local_1c8,&local_f8);
  if ((uVar16 & 1) != 0) {
    uVar13 = FUN_01263dec(&local_1c8,&local_f8);
    FUN_0126589c(uVar13,&local_f8);
    memcpy(&local_1b0,&local_f8,0x90);
  }
  local_1b8 = 0;
  local_1c8 = PTR_DAT_04bbbfa0 + 0x10;
  local_1c0 = 0;
  local_f8 = &PTR_LAB_0498b748;
  local_f0 = &local_1c8;
  FUN_012a8a70(&local_f8);
  uVar12 = (uint)local_1c0 - ((uint)local_1c0 >> 1 & 0x55555555);
  uVar11 = local_1c0._4_4_ - (local_1c0._4_4_ >> 1 & 0x55555555);
  uVar19 = (uint)local_1b8 - ((uint)local_1b8 >> 1 & 0x55555555);
  uVar5 = local_1b8._4_4_ - (local_1b8._4_4_ >> 1 & 0x55555555);
  uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
  uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
  uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
  uVar12 = uVar12 + (uVar12 >> 8);
  uVar19 = (uVar19 >> 2 & 0x33333333) + (uVar19 & 0x33333333);
  uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
  uVar11 = uVar11 + (uVar11 >> 8);
  uVar19 = uVar19 + (uVar19 >> 4) & 0xf0f0f0f;
  uVar19 = uVar19 + (uVar19 >> 8);
  uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
  uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
  uVar5 = uVar5 + (uVar5 >> 8);
  uVar12 = (uVar11 + (uVar11 >> 0x10) & 0x3f) + (uVar12 + (uVar12 >> 0x10) & 0x3f) +
           (uVar19 + (uVar19 >> 0x10) & 0x3f) + (uVar5 + (uVar5 >> 0x10) & 0x3f);
  if (uVar12 == 0) {
LAB_01366d70:
    uVar21 = 0;
  }
  else {
    uVar11 = nn::os::GetSystemTick();
    uVar11 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
    uVar19 = uVar11 ^ uVar11 * 0x800;
    uVar6 = (uint)local_1c0 - ((uint)local_1c0 >> 1 & 0x55555555);
    uVar11 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 2;
    uVar11 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 3;
    uVar5 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 4;
    uVar11 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
    uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
    uVar11 = uVar11 + (uVar11 >> 8);
    uVar11 = uVar11 + (uVar11 >> 0x10) & 0x3f;
    uVar12 = (uint)((ulong)(uVar19 >> 8 ^ uVar5 >> 0x13 ^ uVar19 ^ uVar5) * (ulong)uVar12 >> 0x20);
    if (uVar12 < uVar11) {
      lVar20 = 0;
      uVar11 = 0;
    }
    else {
      uVar19 = local_1c0._4_4_ - (local_1c0._4_4_ >> 1 & 0x55555555);
      uVar19 = (uVar19 >> 2 & 0x33333333) + (uVar19 & 0x33333333);
      uVar19 = uVar19 + (uVar19 >> 4) & 0xf0f0f0f;
      uVar19 = uVar19 + (uVar19 >> 8);
      uVar19 = (uVar19 + (uVar19 >> 0x10) & 0x3f) + uVar11;
      if (uVar12 < uVar19) {
        lVar20 = 1;
      }
      else {
        uVar11 = (uint)local_1b8 - ((uint)local_1b8 >> 1 & 0x55555555);
        uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
        uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
        uVar11 = uVar11 + (uVar11 >> 8);
        uVar11 = (uVar11 + (uVar11 >> 0x10) & 0x3f) + uVar19;
        if (uVar12 < uVar11) {
          lVar20 = 2;
          uVar11 = uVar19;
        }
        else {
          uVar19 = local_1b8._4_4_ - (local_1b8._4_4_ >> 1 & 0x55555555);
          uVar19 = (uVar19 >> 2 & 0x33333333) + (uVar19 & 0x33333333);
          uVar19 = uVar19 + (uVar19 >> 4) & 0xf0f0f0f;
          uVar19 = uVar19 + (uVar19 >> 8);
          if ((uVar19 + (uVar19 >> 0x10) & 0x3f) + uVar11 <= uVar12) goto LAB_01366d70;
          lVar20 = 3;
        }
      }
    }
    uVar19 = *(uint *)((long)&local_1c0 + lVar20 * 4);
    if (uVar19 == 0) {
      uVar12 = 0xffffffff;
    }
    else {
      iVar9 = (uVar12 - uVar11) + 2;
      uVar12 = 0xffffffff;
      do {
        iVar9 = iVar9 + -1;
        if (iVar9 < 2) {
          uVar12 = uVar19 - 1 & (uVar19 ^ 0xffffffff);
          uVar12 = uVar12 - (uVar12 >> 1 & 0x55555555);
          uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
          uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
          uVar12 = uVar12 + (uVar12 >> 8);
          uVar12 = uVar12 + (uVar12 >> 0x10) & 0x3f;
          break;
        }
        uVar19 = uVar19 - 1 & uVar19;
      } while (uVar19 != 0);
    }
    iVar9 = uVar12 + (int)lVar20 * 0x20;
    uVar21 = (ushort)iVar9 & ((ushort)(iVar9 >> 0x1f) ^ 0xffff);
  }
  if (DAT_05574040 == 0) goto LAB_0136702c;
  puVar17 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar20 = (**(code **)(*(long *)*puVar17 + 0x38))();
    if (lVar20 == 0) goto LAB_0136702c;
    lVar20 = lVar20 + 0x70;
  }
  else if (((puVar17 == (undefined8 *)0x0) || ((long *)puVar17[0x26] == (long *)0x0)) ||
          (lVar20 = (**(code **)(*(long *)puVar17[0x26] + 0x38))(), lVar20 == 0)) goto LAB_0136702c;
  plVar1 = (long *)(lVar20 + 0x116d00);
  plVar15 = (long *)(lVar20 + 0xe7628);
  lVar18 = *(long *)(lVar20 + 0xe7648);
  if (lVar18 == 0) {
    *(short *)(*(long *)(lVar20 + 0xe7630) + *plVar15 + 0x10063e) = (short)uVar8;
LAB_01366ec0:
    lVar18 = *(long *)(lVar20 + 0xe7648);
    if (lVar18 == 0) goto LAB_01366eec;
    if (*(undefined8 **)(lVar18 + 0x10) == (undefined8 *)0x0) {
      uVar8 = 1;
LAB_01366f18:
      plVar14 = *(long **)(lVar18 + 0x20);
      if (plVar14 != (long *)0x0) {
        local_f8 = (undefined **)*plVar15;
        local_f0 = *(undefined ***)(lVar20 + 0xe7630);
        local_e8 = 0x10d6e0;
        (**(code **)(*plVar14 + 0x20))(plVar14,&local_f8);
      }
    }
    else {
      uVar8 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      lVar18 = *(long *)(lVar20 + 0xe7648);
      uVar8 = uVar8 ^ 1;
      if (lVar18 != 0) goto LAB_01366f18;
    }
    *(ushort *)(*(long *)(lVar20 + 0xe7630) + *plVar15 + 0x10c6bc) = uVar21;
    if ((((uVar8 & 1) == 0) && (*(long *)(lVar20 + 0xe7648) != 0)) &&
       (puVar17 = *(undefined8 **)(*(long *)(lVar20 + 0xe7648) + 0x18), puVar17 != (undefined8 *)0x0
       )) {
      (**(code **)*puVar17)();
    }
  }
  else {
    if (*(undefined8 **)(lVar18 + 0x10) == (undefined8 *)0x0) {
      uVar12 = 1;
      plVar14 = *(long **)(lVar18 + 0x20);
joined_r0x01366f0c:
      if (plVar14 != (long *)0x0) {
        local_f8 = (undefined **)*plVar15;
        local_f0 = *(undefined ***)(lVar20 + 0xe7630);
        local_e8 = 0x10d6e0;
        (**(code **)(*plVar14 + 0x20))(plVar14,&local_f8);
      }
    }
    else {
      uVar12 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      uVar12 = uVar12 ^ 1;
      if (*(long *)(lVar20 + 0xe7648) != 0) {
        plVar14 = *(long **)(*(long *)(lVar20 + 0xe7648) + 0x20);
        goto joined_r0x01366f0c;
      }
    }
    *(short *)(*(long *)(lVar20 + 0xe7630) + *plVar15 + 0x10063e) = (short)uVar8;
    if ((uVar12 & 1) != 0) goto LAB_01366ec0;
    if (*(long *)(lVar20 + 0xe7648) != 0) {
      puVar17 = *(undefined8 **)(*(long *)(lVar20 + 0xe7648) + 0x18);
      if (puVar17 != (undefined8 *)0x0) {
        (**(code **)*puVar17)();
      }
      goto LAB_01366ec0;
    }
LAB_01366eec:
    *(ushort *)(*(long *)(lVar20 + 0xe7630) + *plVar15 + 0x10c6bc) = uVar21;
  }
  lVar18 = *(long *)(&LAB_00116d20 + lVar20);
  if (lVar18 == 0) {
    pvVar2 = (void *)(*(long *)(lVar20 + 0x116d08) + *plVar1);
    memcpy(pvVar2,&local_1b0,0x90);
    *(undefined2 *)((long)pvVar2 + 0x90) = uVar7;
    goto LAB_0136702c;
  }
  if (*(undefined8 **)(lVar18 + 0x10) == (undefined8 *)0x0) {
    uVar16 = 0;
    plVar15 = *(long **)(lVar18 + 0x20);
joined_r0x01367058:
    if (plVar15 != (long *)0x0) {
      local_f8 = (undefined **)*plVar1;
      local_f0 = *(undefined ***)(lVar20 + 0x116d08);
      local_e8 = 0x92;
      (**(code **)(*plVar15 + 0x20))(plVar15,&local_f8);
    }
  }
  else {
    uVar16 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
    uVar16 = uVar16 & 0xffffffff;
    if (*(long *)(&LAB_00116d20 + lVar20) != 0) {
      plVar15 = *(long **)(*(long *)(&LAB_00116d20 + lVar20) + 0x20);
      goto joined_r0x01367058;
    }
  }
  pvVar2 = (void *)(*(long *)(lVar20 + 0x116d08) + *plVar1);
  memcpy(pvVar2,&local_1b0,0x90);
  *(undefined2 *)((long)pvVar2 + 0x90) = uVar7;
  if ((((uVar16 & 1) != 0) && (*(long *)(&LAB_00116d20 + lVar20) != 0)) &&
     (puVar17 = *(undefined8 **)(*(long *)(&LAB_00116d20 + lVar20) + 0x18),
     puVar17 != (undefined8 *)0x0)) {
    (**(code **)*puVar17)();
  }
LAB_0136702c:
  FUN_01366410();
  return;
}

