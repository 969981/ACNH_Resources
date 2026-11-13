
ulong FUN_0148deb0(long param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
                  int *param_5,undefined4 param_6)

{
  uint *puVar1;
  undefined *puVar2;
  short sVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong local_258 [2];
  undefined8 local_244;
  undefined *local_238;
  undefined *puStack_230;
  undefined8 local_228;
  undefined *puStack_220;
  undefined8 local_218;
  undefined1 local_210;
  undefined *local_208;
  undefined *puStack_200;
  undefined8 local_1f8;
  undefined *local_1f0;
  undefined8 uStack_1e8;
  undefined1 local_1e0;
  undefined *local_1d8;
  undefined *puStack_1d0;
  undefined8 local_1c8;
  undefined *local_1c0;
  undefined8 uStack_1b8;
  undefined1 local_1b0;
  undefined *local_1a8;
  undefined *puStack_1a0;
  undefined8 local_198;
  undefined *local_190;
  undefined8 uStack_188;
  undefined1 local_180;
  undefined *local_178;
  undefined *puStack_170;
  undefined8 local_168;
  undefined *local_160;
  undefined8 uStack_158;
  undefined1 local_150;
  undefined *local_148;
  undefined *puStack_140;
  undefined8 local_138;
  undefined *local_130;
  undefined8 uStack_128;
  undefined1 local_120;
  undefined *local_118;
  undefined *puStack_110;
  undefined8 local_108;
  undefined *local_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  uint local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  byte local_b8;
  undefined4 local_b4;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined4 local_94;
  int local_90;
  undefined4 uStack_8c;
  undefined *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  long local_78;
  undefined4 local_70;
  uint local_6c;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(param_3);
  lVar12 = *(long *)puVar2;
  if (lVar12 == 0) {
    return 0;
  }
  lVar13 = *(long *)(lVar13 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
  if (*(uint *)(lVar13 + 0x1d8) <= uVar6) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) == 0) {
    return 0;
  }
  local_78 = 0;
  local_80 = *(undefined4 *)param_3;
  uStack_7c = *(undefined4 *)((long)param_3 + 4);
  local_88 = PTR_DAT_04bc0510 + 0x10;
  uVar6 = FUN_0277d6c4(&local_80);
  if (*(long *)puVar2 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar12 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(param_3);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if (uVar6 < *(uint *)(lVar12 + 0x1d8)) {
        lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8);
        if (lVar12 != 0) {
          local_78 = lVar12;
        }
      }
    }
  }
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
LAB_0148e01c:
    if (*(long *)PTR_DAT_04bb59d8 == 0) goto LAB_0148e28c;
    lVar12 = *(long *)PTR_DAT_04bb2720;
    if (lVar12 == 0) {
      puVar10 = &DAT_055c04a0;
    }
    else {
      puVar10 = &DAT_055c04a0;
      if (*(long *)(lVar12 + 0x330) != 0) {
        puVar10 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
        iVar7 = FUN_006bd550(*puVar10,0);
        puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar7 != 0x758f7eaf) {
          puVar10 = &DAT_055c04a0;
        }
      }
    }
    if (*(int *)(puVar10 + 7) != -0x17df00c3) goto LAB_0148e28c;
  }
  else {
    local_258[0] = local_258[0] & 0xffffffff00000000;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 & 1) == 0) goto LAB_0148e01c;
  }
  puVar5 = PTR_DAT_04bbce88;
  puVar2 = PTR_DAT_04bbce80;
  if (*(long *)(param_1 + 0xb0) != param_1 + 0xa8) {
    lVar12 = (long)*(int *)(param_1 + 0xbc);
    plVar11 = (long *)(*(long *)(param_1 + 0xb0) - lVar12);
    do {
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
        *(undefined ***)puVar2 = &PTR_LAB_049a5a90;
        __cxa_guard_release(puVar5);
      }
      if ((plVar11 != (long *)0x0) &&
         (uVar8 = (**(code **)(*plVar11 + 0x10))(plVar11,puVar2), (uVar8 & 1) != 0)) {
        uVar8 = FUN_01499bcc(plVar11,param_3);
        if ((uVar8 & 1) != 0) {
          return 2;
        }
        break;
      }
      plVar11 = (long *)(*(long *)((long)plVar11 + lVar12 + 8) - lVar12);
    } while (plVar11 != (long *)((param_1 + 0xa8) - lVar12));
  }
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 != -1) {
    local_258[0] = CONCAT44(local_258[0]._4_4_,0x20);
    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8;
    if (0xff < (uint)(int)sVar3) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if (((*(uint *)(puVar2 + 4) & 1) != 0) && (uVar8 = FUN_0252c550(0), (uVar8 & 1) != 0)) {
      uVar6 = FUN_01ae7550(&local_88);
      local_258[0] = CONCAT44(local_258[0]._4_4_,uVar6);
      if ((9 < uVar6) && (uVar8 = FUN_0277e294(param_3), (uVar8 & 1) != 0)) {
        uVar8 = FUN_01ae87f0(&local_88);
        if ((uVar8 & 1) == 0) {
          local_258[0]._0_4_ = 0xe;
          local_a4._0_4_ = FUN_01ae7550(&local_88);
          if ((int)local_a4 == (int)local_258[0]) {
            return 7;
          }
          local_258[0] = CONCAT44(local_258[0]._4_4_,0xd);
          iVar7 = FUN_01ae7550(&local_88);
          local_a4 = CONCAT44(local_a4._4_4_,iVar7);
          if (iVar7 == (int)local_258[0]) {
            return 8;
          }
          uVar8 = FUN_01ae7a70(&local_88);
          if (((uVar8 & 1) == 0) || ((local_80._2_1_ >> 3 & 1) == 0)) goto LAB_0148e28c;
        }
        return 6;
      }
    }
  }
LAB_0148e28c:
  local_258[0]._0_4_ = 10;
  iVar7 = FUN_01ae7550(&local_88);
  if (iVar7 != (int)local_258[0]) {
    local_258[0]._0_4_ = 0xb;
    local_a4._0_4_ = iVar7;
    local_a4._0_4_ = FUN_01ae7550(&local_88);
    if ((int)local_a4 != (int)local_258[0]) {
      local_258[0]._0_4_ = 0xc;
      iVar7 = FUN_01ae7550(&local_88);
      if (iVar7 != (int)local_258[0]) {
        local_a4 = 0xfffe;
        FUN_0277d4ac(&local_a4);
        local_a4 = *param_3;
        local_94 = *(undefined4 *)(param_4 + 1);
        local_258[0] = 0xfffe;
        local_9c = *param_4;
        local_90 = *param_5;
        uStack_8c = param_6;
        FUN_0277d4ac(local_258);
        local_244 = 0;
        local_218 = 0;
        local_210 = 0;
        local_1f8 = 0;
        local_238 = PTR_DAT_04bbc1a0 + 0x10;
        local_1e0 = 0;
        local_1c8 = 0;
        puStack_230 = PTR_DAT_04bb2010 + 0x10;
        local_1b0 = 0;
        local_198 = 0;
        local_180 = 0;
        local_168 = 0;
        local_150 = 0;
        local_138 = 0;
        local_120 = 0;
        local_108 = 0;
        local_f0 = 0;
        local_e8 = 1;
        local_228 = 0;
        uStack_1e8 = 0;
        uStack_1b8 = 0;
        uStack_188 = 0;
        uStack_158 = 0;
        uStack_128 = 0;
        uStack_f8 = 0;
        local_e0 = *(undefined4 *)PTR_DAT_04bb37e0;
        local_dc = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
        local_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        local_b8 = *PTR_DAT_04bb32e0;
        if (7 < local_b8) {
          local_b8 = 0xff;
        }
        local_b4 = 0;
        puStack_220 = puStack_230;
        local_208 = local_238;
        puStack_200 = puStack_230;
        local_1f0 = puStack_230;
        local_1d8 = local_238;
        puStack_1d0 = puStack_230;
        local_1c0 = puStack_230;
        local_1a8 = local_238;
        puStack_1a0 = puStack_230;
        local_190 = puStack_230;
        local_178 = local_238;
        puStack_170 = puStack_230;
        local_160 = puStack_230;
        local_148 = local_238;
        puStack_140 = puStack_230;
        local_130 = puStack_230;
        local_118 = local_238;
        puStack_110 = puStack_230;
        local_100 = puStack_230;
        local_d8 = puStack_230;
        FUN_01540110(local_258,&local_a4);
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = local_e0;
          param_2[1] = local_dc;
          *(undefined8 *)(param_2 + 6) = local_c8;
          param_2[4] = (undefined4)local_d0;
          param_2[5] = local_d0._4_4_;
          param_2[8] = (undefined4)local_c0;
          param_2[9] = local_c0._4_4_;
          if (7 < local_b8) {
            local_b8 = 0xff;
          }
          *(byte *)(param_2 + 10) = local_b8;
          param_2[0xb] = local_b4;
        }
        return (ulong)local_e8;
      }
    }
  }
  iVar7 = *param_5;
  local_a4 = CONCAT44(local_a4._4_4_,iVar7 + 0x20000000U >> 0x1e);
  local_6c = iVar7 + 0x10000000U >> 0x1d;
  if ((local_6c & 1) == 0) {
    puVar9 = local_258;
    local_258[0] = CONCAT44(local_258[0]._4_4_,iVar7);
  }
  else {
    local_258[0] = CONCAT44(local_258[0]._4_4_,iVar7);
    uVar8 = FUN_0148f600(param_2,param_3,param_4,local_258);
    if ((int)uVar8 == 9) {
      return uVar8;
    }
    puVar9 = (ulong *)&local_70;
    uVar6 = local_6c - (int)local_a4 & 3;
    uVar4 = -(local_6c - (int)local_a4);
    if (-1 < (int)uVar4) {
      uVar6 = -(uVar4 & 3);
    }
    local_70 = (undefined4)(long)((float)(int)uVar6 * 90.0 * 11930465.0);
  }
  uVar8 = FUN_0148f600(param_2,param_3,param_4,puVar9);
  return uVar8;
}

