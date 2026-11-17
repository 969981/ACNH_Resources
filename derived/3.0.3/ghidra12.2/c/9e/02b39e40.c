
/* WARNING: Removing unreachable block (ram,0x02b39fb4) */
/* WARNING: Removing unreachable block (ram,0x02b3a180) */
/* WARNING: Removing unreachable block (ram,0x02b39fac) */

undefined8 FUN_02b39e40(long param_1,uint param_2,int param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  undefined *__dest;
  undefined4 uVar19;
  undefined8 local_220;
  undefined *local_218;
  undefined8 local_210;
  undefined *local_208;
  undefined8 local_200;
  undefined1 local_1cd;
  undefined *local_1c8;
  undefined *puStack_1c0;
  undefined8 local_1b8;
  undefined *local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined *local_198;
  undefined *local_190;
  undefined4 local_188;
  undefined local_184 [127];
  undefined1 local_105;
  undefined4 local_100;
  undefined1 local_fc;
  undefined *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined *puStack_e0;
  undefined *local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  byte local_a8;
  undefined1 auStack_a0 [8];
  byte local_98;
  undefined4 local_94;
  int local_80;
  
  uVar18 = 0;
  do {
    uVar17 = (uint)uVar18;
    piVar6 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + uVar18 * 4);
    if (0x38 < uVar17) {
      piVar6 = (int *)(PTR_DAT_04bbbf90 + 8);
    }
    if (*piVar6 == param_3) goto LAB_02b39eac;
    uVar15 = 0x39;
    if ((int)uVar17 < 0x39) {
      uVar15 = uVar17 + 1;
    }
    uVar18 = (ulong)uVar15;
  } while (uVar15 != 0x39);
  uVar17 = 0;
LAB_02b39eac:
  if (uVar17 == 0) {
    plVar13 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  }
  else {
    plVar1 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
    plVar13 = plVar1 + uVar17;
    if (0x38 < uVar17) {
      plVar13 = plVar1;
    }
  }
  puVar7 = &DAT_05636dd8;
  if (*plVar13 != 0) {
    puVar7 = (undefined8 *)(*plVar13 + 0x148);
  }
  if (puVar7[1] != 0) {
    local_1a0._0_4_ = uVar17;
    FUN_01360490(auStack_a0,puVar7[1],param_2);
    uVar18 = FUN_02a8ec10(auStack_a0);
    if ((uVar18 & 1) != 0) {
      if ((uVar17 == 0x32) || (uVar17 == 1)) {
        param_1 = param_1 + 0x10;
      }
      else {
        param_1 = param_1 + 0x6dc8;
      }
      lVar8 = param_1 + 8 + (ulong)param_2 * 0x208;
      if (0x35 < param_2) {
        lVar8 = param_1 + 8;
      }
      if ((param_2 != 0xffffffff) && (*(long *)(lVar8 + 8) == 0)) {
        local_1a0 = (undefined *)((ulong)local_1a0._4_4_ << 0x20);
        puVar2 = (undefined8 *)(lVar8 + 0x10);
        *(undefined8 **)(lVar8 + 8) = puVar2;
        if (((*PTR_DAT_04bc4560 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc4560), iVar11 != 0)) {
          *(undefined **)PTR_DAT_04bc4558 = PTR_DAT_04bbba98 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4560);
        }
        uVar18 = (**(code **)*puVar2)(puVar2,PTR_DAT_04bc4558);
        puVar10 = PTR_DAT_04bbc1a0;
        puVar9 = PTR_DAT_04bb2010;
        if ((uVar18 & 1) != 0) {
          local_b0 = local_94;
          local_188 = 0x80;
          local_105 = 0;
          local_184[0] = 0;
          local_190 = local_184;
          local_100 = 0;
          local_fc = 0;
          local_b8 = 0;
          local_b4 = 0;
          local_198 = PTR_DAT_04bb2d88 + 0x10;
          puVar3 = PTR_DAT_04bb2010 + 0x10;
          puVar4 = PTR_DAT_04bbc1a0 + 0x10;
          uStack_f0 = 0;
          local_a8 = local_98 & 1;
          local_1a0 = PTR_DAT_04bc49b8 + 0x10;
          local_e8 = 0;
          uStack_d0 = 0;
          uStack_c0 = 0;
          local_ac = (undefined4)(long)((float)local_80 * 90.0 * 11930465.0);
          local_f8 = puVar3;
          puStack_e0 = puVar4;
          local_d8 = puVar3;
          local_c8 = puVar3;
          FUN_02b34590(&local_1a0,&local_b0);
          local_1b8 = 0;
          uStack_1a8 = 0;
          local_1c8 = puVar4;
          puStack_1c0 = puVar3;
          local_1b0 = puVar3;
          FUN_02a8f7b0(auStack_a0,&local_1c8);
          local_220 = (undefined *)((ulong)local_220._4_4_ << 0x20);
          uVar12 = FUN_02b677c0(&local_220,local_94);
          uVar18 = (ulong)local_220 & 0xffffffff;
          if ((uVar12 & 1) == 0) {
            uVar18 = 0;
          }
          uVar19 = FUN_02b57b70(uVar18,uVar17);
          puVar3 = (undefined *)((long)&local_210 + 4);
          local_210 = CONCAT44(local_210._4_4_,0x40);
          local_1cd = 0;
          local_220 = PTR_DAT_04bb2f70 + 0x10;
          local_218 = puVar3;
          (**(code **)(local_198 + 0x18))(&local_198);
          puVar4 = local_190;
          if (puVar3 != local_190) {
            (**(code **)(local_198 + 0x18))(&local_198);
            lVar14 = 0;
            do {
              if (local_190[lVar14] == '\0') goto LAB_02b3a198;
              if (local_190[lVar14 + 1] == '\0') {
                lVar14 = lVar14 + 1;
                goto LAB_02b3a198;
              }
              if (local_190[lVar14 + 2] == '\0') {
                lVar14 = lVar14 + 2;
                goto LAB_02b3a198;
              }
              lVar14 = lVar14 + 3;
            } while (lVar14 != 0x80001);
            lVar14 = 0;
LAB_02b3a198:
            iVar11 = (int)lVar14;
            if ((int)local_210 <= (int)lVar14) {
              iVar11 = (int)local_210 + -1;
            }
            memcpy(puVar3,puVar4,(long)iVar11);
            puVar3[iVar11] = 0;
          }
          puVar4 = local_218;
          puVar3 = PTR_DAT_04bb2bc0;
          local_220 = PTR_DAT_04bb2bc0 + 0x10;
          __dest = *(undefined **)(lVar8 + 0x60);
          local_218[(long)(int)local_210 + -1] = 0;
          if (__dest != local_218) {
            (**(code **)(puVar3 + 0x28))(&local_220);
            lVar14 = 0;
            do {
              if (local_218[lVar14] == '\0') goto LAB_02b3a244;
              if (local_218[lVar14 + 1] == '\0') {
                lVar14 = lVar14 + 1;
                goto LAB_02b3a244;
              }
              if (local_218[lVar14 + 2] == '\0') {
                lVar14 = lVar14 + 2;
                goto LAB_02b3a244;
              }
              lVar14 = lVar14 + 3;
            } while (lVar14 != 0x80001);
            lVar14 = 0;
LAB_02b3a244:
            iVar11 = (int)lVar14;
            if (*(int *)(lVar8 + 0x68) <= (int)lVar14) {
              iVar11 = *(int *)(lVar8 + 0x68) + -1;
            }
            memcpy(__dest,puVar4,(long)iVar11);
            __dest[iVar11] = 0;
          }
          puVar3 = PTR_DAT_04bb27c8;
          if (*(char *)(lVar8 + 0xb0) == '\0') {
            local_218 = puVar9 + 0x10;
            local_210 = 0;
            local_220 = puVar10 + 0x10;
            local_200 = 0;
            uVar5 = 1;
            if (uVar17 != 0x32 && uVar17 != 1) {
              uVar5 = 2;
            }
            local_208 = local_218;
            FUN_00947a00(uVar19,*(long *)PTR_DAT_04bb27c8 + 0x28,lVar8 + 0x58,&puStack_1c0,
                         &local_220,uVar5,0);
            if (*(char *)(lVar8 + 0xb0) == '\0') {
              lVar14 = *(long *)puVar3;
              lVar16 = *(long *)(lVar14 + 0x1150);
              plVar13 = (long *)((long)*(int *)(lVar14 + 0x1164) + (long)puVar2);
              *(long **)(lVar14 + 0x1150) = plVar13;
              *plVar13 = lVar16;
              plVar13[1] = lVar14 + 0x1150;
              if (lVar16 != 0) {
                *(long **)(lVar16 + 8) = plVar13;
              }
              *(int *)(lVar14 + 0x1160) = *(int *)(lVar14 + 0x1160) + 1;
            }
            *(undefined1 *)(lVar8 + 0xb0) = 1;
            *(undefined4 *)(lVar8 + 0xb4) = uVar5;
            *(int *)(lVar8 + 0x40) = (int)local_210;
            *(undefined4 *)(lVar8 + 0x44) = local_210._4_4_;
            *(undefined4 *)(lVar8 + 0x50) = (undefined4)local_200;
            *(undefined4 *)(lVar8 + 0x54) = local_200._4_4_;
          }
          if (puVar7[1] != 0) {
            FUN_013620a0(puVar7[1],param_2);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

