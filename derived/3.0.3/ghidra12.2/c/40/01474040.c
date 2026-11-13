
/* WARNING: Removing unreachable block (ram,0x014743d4) */
/* WARNING: Removing unreachable block (ram,0x014743e4) */
/* WARNING: Removing unreachable block (ram,0x01474408) */

void FUN_01474040(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  uint *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined2 *puVar17;
  long *plVar18;
  long lVar19;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined *local_190;
  undefined8 uStack_188;
  undefined2 *local_180;
  undefined8 local_178;
  int local_170;
  undefined2 local_168;
  undefined1 local_166;
  undefined1 local_165;
  undefined4 local_164;
  undefined *local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined2 local_130;
  undefined1 local_12e;
  undefined1 local_12d;
  undefined4 local_12c;
  undefined *local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined2 local_f8;
  undefined1 local_f6;
  undefined1 local_f5;
  undefined4 local_f4;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined2 local_c0;
  undefined1 local_be;
  undefined1 local_bd;
  undefined4 local_bc;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  byte local_78;
  undefined8 local_70 [2];
  
  puVar7 = PTR_DAT_04bb5928;
  puVar6 = PTR_DAT_04bb5920;
  puVar3 = PTR_DAT_04bb3350;
  puVar5 = PTR_DAT_04bb27c0;
  if ((*(int *)(param_1 + 0x300) != 0) &&
     (lVar19 = *(long *)(param_1 + 0x2f8), lVar19 != param_1 + 0x2f0)) {
    puVar13 = (uint *)(lVar19 + -8);
    puVar1 = PTR_DAT_04bb3290 + 0x10;
    do {
      lVar19 = *(long *)(lVar19 + 8);
      lVar12 = *(long *)puVar5;
      if (lVar12 != 0) {
        uVar14 = *puVar13;
        if ((((uVar14 == 0) ||
             (plVar18 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                                  ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar18 == (long *)0x0)) ||
            ((*(uint *)(plVar18 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar18 + 0x46) != uVar14)) {
          plVar18 = (long *)0x0;
        }
        if (*(int *)(lVar12 + 0x288) == 1 || *(int *)(lVar12 + 0x288) == -1) {
          plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
          lVar12 = *(long *)puVar5;
          iVar8 = (**(code **)(*plVar10 + 0x60))();
          if (iVar8 < 0x11) {
            uVar14 = 1;
          }
          else {
            uVar14 = *(uint *)(lVar12 + 0x5e8);
            if (4 < uVar14) goto LAB_01474174;
            uVar14 = 0x1aU >> (ulong)(uVar14 & 0x1f) & 1;
          }
        }
        else {
LAB_01474174:
          uVar14 = 0;
        }
        if (plVar18 != (long *)0x0) {
          if (((*puVar7 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar7), iVar8 != 0)) {
            *(undefined **)puVar6 = puVar1;
            __cxa_guard_release(puVar7);
          }
          uVar9 = (**(code **)(*plVar18 + 0x20))(plVar18,puVar6);
          if ((uVar14 & uVar9) == 1) {
            FUN_01472270(plVar18,PTR_DAT_04bb2150,PTR_DAT_04bb2ce8,1);
          }
        }
      }
      puVar13 = (uint *)(lVar19 + -8);
    } while (puVar13 != (uint *)(param_1 + 0x2e8));
  }
  local_80 = 0;
  lVar19 = *(long *)PTR_DAT_04bb2720;
  if (lVar19 == 0) {
    puVar15 = &DAT_055c04a0;
  }
  else {
    puVar15 = &DAT_055c04a0;
    if (*(long *)(lVar19 + 0x330) != 0) {
      puVar15 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
      iVar8 = FUN_006bd550(*puVar15,0);
      puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar8 != 0x758f7eaf) {
        puVar15 = &DAT_055c04a0;
      }
    }
  }
  local_7c = *(undefined4 *)(puVar15 + 7);
  local_78 = FUN_017baf44();
  puVar5 = PTR_DAT_04bb2010;
  local_78 = local_78 & 1;
  local_180 = &local_168;
  local_88 = PTR_DAT_04bb3140 + 0x10;
  local_160 = PTR_DAT_04bb2010 + 0x10;
  local_168 = *(undefined2 *)PTR_DAT_04bb37e0;
  local_166 = PTR_DAT_04bb37e0[2];
  local_165 = PTR_DAT_04bb37e0[3];
  local_164 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_158 = *(undefined4 *)(PTR_DAT_04bb5d40 + 8);
  uStack_154 = *(undefined4 *)(PTR_DAT_04bb5d40 + 0xc);
  local_d0 = 0;
  uStack_c8 = 0;
  local_170 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_178 = 4;
  local_130 = local_168;
  local_12e = local_166;
  local_12d = local_165;
  local_12c = local_164;
  local_128 = local_160;
  local_120 = local_158;
  uStack_11c = uStack_154;
  local_f8 = local_168;
  local_f6 = local_166;
  local_f5 = local_165;
  local_f4 = local_164;
  local_f0 = local_160;
  local_e8 = local_158;
  uStack_e4 = uStack_154;
  local_c0 = local_168;
  local_be = local_166;
  local_bd = local_165;
  local_bc = local_164;
  local_b8 = local_160;
  local_b0 = local_158;
  local_ac = uStack_154;
  FUN_014746c0(param_1,&local_180);
  iVar8 = local_170;
  puVar3 = PTR_DAT_04bb27a8;
  if (local_170 != 0) {
    iVar16 = 0;
    do {
      iVar4 = 0;
      if ((int)local_178 <= iVar16 + local_178._4_4_) {
        iVar4 = (int)local_178;
      }
      puVar17 = local_180 + (long)(iVar16 + (local_178._4_4_ - iVar4)) * 0x1c + 4;
      uVar11 = FUN_01a4f798(&local_88,1,puVar17);
      if ((uVar11 & 1) != 0) {
        local_1a0 = (undefined *)CONCAT44((int)((ulong)local_1a0 >> 0x20),1);
        lVar19 = *(long *)(*(long *)(*(long *)puVar3 + 0x1f8) + 0xe0);
        if (lVar19 != 0) {
          FUN_012e5af4(lVar19,puVar17);
        }
      }
      iVar16 = iVar16 + 1;
    } while (iVar8 != iVar16);
  }
  FUN_01472270(param_1,PTR_DAT_04bb2150,PTR_DAT_04bb2ce8,1);
  FUN_01474c34(param_1,param_2,param_3,param_4);
  puVar1 = PTR_DAT_04bb5928;
  puVar7 = PTR_DAT_04bb5920;
  puVar6 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb27c0;
  if ((*(int *)(param_1 + 0x300) != 0) &&
     (lVar19 = *(long *)(param_1 + 0x2f8), lVar19 != param_1 + 0x2f0)) {
    puVar13 = (uint *)(lVar19 + -8);
    puVar2 = PTR_DAT_04bb3290 + 0x10;
    do {
      lVar19 = *(long *)(lVar19 + 8);
      lVar12 = *(long *)puVar3;
      if (lVar12 != 0) {
        uVar14 = *puVar13;
        if ((((uVar14 == 0) ||
             (plVar18 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                                  ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar18 == (long *)0x0)) ||
            ((*(uint *)(plVar18 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar18 + 0x46) != uVar14)) {
          plVar18 = (long *)0x0;
        }
        if (*(int *)(lVar12 + 0x288) == 1 || *(int *)(lVar12 + 0x288) == -1) {
          plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
          lVar12 = *(long *)puVar3;
          iVar8 = (**(code **)(*plVar10 + 0x60))();
          if (iVar8 < 0x11) {
            uVar14 = 1;
          }
          else {
            uVar14 = *(uint *)(lVar12 + 0x5e8);
            if (4 < uVar14) goto LAB_01474560;
            uVar14 = 0x1aU >> (ulong)(uVar14 & 0x1f) & 1;
          }
        }
        else {
LAB_01474560:
          uVar14 = 0;
        }
        if (plVar18 != (long *)0x0) {
          if (((*puVar1 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar1), iVar8 != 0)) {
            *(undefined **)puVar7 = puVar2;
            __cxa_guard_release(puVar1);
          }
          uVar9 = (**(code **)(*plVar18 + 0x20))(plVar18,puVar7);
          if ((uVar14 & uVar9) == 1) {
            FUN_01474c34(plVar18,param_2,param_3,param_4);
          }
        }
      }
      puVar13 = (uint *)(lVar19 + -8);
    } while (puVar13 != (uint *)(param_1 + 0x2e8));
  }
  iVar8 = local_170;
  if (local_170 != 0) {
    iVar16 = 0;
    puVar3 = PTR_DAT_04bbd460 + 0x10;
    do {
      local_70[0] = 0xfffe;
      iVar4 = 0;
      if ((int)local_178 <= iVar16 + local_178._4_4_) {
        iVar4 = (int)local_178;
      }
      puVar17 = local_180 + (long)(iVar16 + (local_178._4_4_ - iVar4)) * 0x1c;
      FUN_0277d4ac(local_70);
      local_198 = 0xfffe;
      local_1a0 = puVar3;
      FUN_0277d4ac(&local_198);
      local_198 = local_70[0];
      uStack_188 = 0;
      local_190 = puVar5 + 0x10;
      uVar11 = FUN_01473ae8(param_1,&local_1a0,puVar17,param_2,param_3,param_4);
      if ((uVar11 & 1) != 0) {
        FUN_01a50970(&local_88,1,&local_198,&local_190);
      }
      iVar16 = iVar16 + 1;
    } while (iVar8 != iVar16);
  }
  return;
}

