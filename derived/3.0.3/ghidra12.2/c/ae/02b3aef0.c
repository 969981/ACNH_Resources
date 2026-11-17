
/* WARNING: Removing unreachable block (ram,0x02b3b06c) */
/* WARNING: Removing unreachable block (ram,0x02b3b068) */
/* WARNING: Removing unreachable block (ram,0x02b3b24c) */
/* WARNING: Removing unreachable block (ram,0x02b3b074) */

undefined8 FUN_02b3aef0(long param_1,uint param_2,int param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  uint *puVar15;
  long lVar16;
  char cVar17;
  uint *puVar18;
  int *piVar19;
  undefined1 *puVar20;
  undefined *puVar21;
  uint uVar22;
  ulong uVar23;
  undefined4 uVar24;
  float fVar25;
  undefined *local_2c8;
  undefined1 *local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined1 local_275;
  float local_26c [3];
  undefined *local_260;
  int local_258;
  int iStack_254;
  undefined *local_250;
  undefined *puStack_248;
  undefined8 local_240;
  undefined *local_238;
  undefined8 uStack_230;
  undefined *local_228;
  undefined *local_220;
  undefined *local_218;
  undefined4 local_210;
  undefined local_20c [127];
  undefined1 local_18d;
  undefined4 local_188;
  undefined1 local_184;
  undefined *local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined *puStack_168;
  undefined *local_160;
  undefined8 local_158;
  undefined *local_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined4 local_13c;
  undefined *local_138;
  undefined1 *local_130;
  undefined4 local_128;
  undefined1 local_124 [127];
  undefined1 local_a5;
  undefined1 auStack_a0 [8];
  byte local_98;
  int local_94;
  int local_80;
  ushort local_7c;
  
  uVar23 = 0;
  do {
    uVar22 = (uint)uVar23;
    piVar19 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + uVar23 * 4);
    if (0x38 < uVar22) {
      piVar19 = (int *)(PTR_DAT_04bbbf90 + 8);
    }
    if (*piVar19 == param_3) goto LAB_02b3af5c;
    uVar11 = 0x39;
    if ((int)uVar22 < 0x39) {
      uVar11 = uVar22 + 1;
    }
    uVar23 = (ulong)uVar11;
  } while (uVar11 != 0x39);
  uVar22 = 0;
LAB_02b3af5c:
  if (param_2 != 0xffffffff) {
    if (uVar22 == 0) {
      plVar13 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
    }
    else {
      plVar2 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
      plVar13 = plVar2 + uVar22;
      if (0x38 < uVar22) {
        plVar13 = plVar2;
      }
    }
    puVar6 = &DAT_05636dd8;
    if (*plVar13 != 0) {
      puVar6 = (undefined8 *)(*plVar13 + 0x148);
    }
    if (puVar6[1] == 0) {
      return 0;
    }
    local_228._0_4_ = uVar22;
    FUN_01360490(auStack_a0,puVar6[1],param_2);
    if ((local_94 != 0) && (local_94 != 0)) {
      if (local_94 != 0x1a) {
        return 0;
      }
      if ((local_98 & 1) != 0) {
        return 0;
      }
      if ((uVar22 == 0x32) || (uVar22 == 1)) {
        param_1 = param_1 + 0x10;
      }
      else {
        param_1 = param_1 + 0x6dc8;
      }
      lVar7 = param_1 + 8 + (ulong)param_2 * 0x208;
      if (0x35 < param_2) {
        lVar7 = param_1 + 8;
      }
      if (*(long *)(lVar7 + 8) == 0) {
        local_228 = (undefined *)CONCAT44(local_228._4_4_,1);
        puVar3 = (undefined8 *)(lVar7 + 0xb8);
        *(undefined8 **)(lVar7 + 8) = puVar3;
        if (((*PTR_DAT_04bc49d8 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04bc49d8), iVar12 != 0)) {
          *(undefined **)PTR_DAT_04bc49d0 = PTR_DAT_04bbba98 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc49d8);
        }
        uVar23 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bc49d0);
        if ((uVar23 & 1) != 0) {
          uVar11 = (uint)local_7c;
          if (local_94 != 0x1a) {
            uVar11 = 0;
          }
          if ((local_98 >> 1 & 1) != 0) {
            uVar11 = FUN_02b5be60();
          }
          puVar21 = PTR_DAT_04bc4580;
          puVar4 = PTR_DAT_04bc4578;
          lVar14 = *(long *)PTR_DAT_04bb5008;
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar14 + 0xff0);
          if ((uVar11 < *(uint *)(lVar14 + 0xfd0)) &&
             (puVar15 = *(uint **)(*(long *)(lVar14 + 0xfd8) + (long)(int)uVar11 * 8),
             puVar15 != (uint *)0x0)) {
            uVar11 = *puVar15;
            if (uVar11 != 0) {
              cVar17 = *PTR_DAT_04bc4578;
              do {
                if (cVar17 == '\0') {
                  cVar17 = '\x01';
                  *(undefined8 *)puVar21 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar21 + 8) = 0xffffffffffffffff;
                  *puVar4 = 1;
                  uVar11 = *puVar15;
                }
                else {
                  uVar8 = *(uint *)(puVar21 + 0xc);
                  if (-1 < (int)uVar8) {
                    puVar20 = (undefined1 *)((ulong)uVar8 + (long)puVar15);
                    goto LAB_02b3b1cc;
                  }
                  if (uVar8 != 0xffffffff) break;
                }
                puVar18 = (uint *)(ulong)uVar11;
                puVar20 = (undefined1 *)0x0;
                if ((puVar18 == (uint *)0x0) || (puVar15 == puVar18)) goto LAB_02b3b1cc;
                lVar14 = 0xc;
                if (*(char *)((long)puVar15 + (10 - (long)puVar18)) != '\0') {
                  lVar14 = 0x1c;
                }
                lVar14 = (long)puVar15 + (lVar14 - (long)puVar18);
                puVar20 = (undefined1 *)0x0;
                if (lVar14 == 0) goto LAB_02b3b1cc;
                uVar23 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar18));
                *(undefined4 *)(puVar21 + 0xc) = 0xfffffffe;
                if (uVar23 == 0) break;
                piVar19 = (int *)(lVar14 + 4);
                while (piVar19[-1] != 0x39b5a93d) {
                  piVar19 = piVar19 + 2;
                  uVar23 = uVar23 - 1;
                  if (uVar23 == 0) goto LAB_02b3b1c8;
                }
                iVar12 = 0;
                if (*piVar19 != -1) {
                  iVar12 = *piVar19;
                }
                *(int *)(puVar21 + 0xc) = iVar12;
                uVar11 = *puVar15;
                if (uVar11 == 0) break;
              } while( true );
            }
LAB_02b3b1c8:
            puVar20 = (undefined1 *)0x0;
LAB_02b3b1cc:
            local_2c0 = *(undefined1 **)PTR_PTR_04bc45b0;
            if (puVar20 != (undefined1 *)0x0) {
              local_2c0 = puVar20;
            }
          }
          else {
            local_2c0 = *(undefined1 **)PTR_PTR_04bc45b8;
          }
          local_a5 = 0;
          local_128 = 0x80;
          local_130 = local_124;
          if (local_124 != local_2c0) {
            lVar14 = 0;
            do {
              if (local_2c0[lVar14] == '\0') {
LAB_02b3b264:
                iVar12 = (int)lVar14;
                if (0x7f < iVar12) {
                  iVar12 = 0x7f;
                }
                goto LAB_02b3b270;
              }
              if (local_2c0[lVar14 + 1] == '\0') {
                lVar14 = lVar14 + 1;
                goto LAB_02b3b264;
              }
              if (local_2c0[lVar14 + 2] == '\0') {
                lVar14 = lVar14 + 2;
                goto LAB_02b3b264;
              }
              lVar14 = lVar14 + 3;
            } while (lVar14 != 0x80001);
            iVar12 = 0;
LAB_02b3b270:
            memcpy(local_124,local_2c0,(long)iVar12);
            local_124[iVar12] = 0;
            local_2c0 = local_130;
          }
          local_220 = PTR_DAT_04bb2d88 + 0x10;
          local_210 = 0x80;
          local_18d = 0;
          local_20c[0] = 0;
          local_188 = 0;
          local_184 = 0;
          local_218 = local_20c;
          puVar4 = PTR_DAT_04bb2010 + 0x10;
          uStack_178 = 0;
          local_140 = 0;
          local_158 = 0;
          local_148 = 0;
          puVar21 = PTR_DAT_04bbc1a0 + 0x10;
          local_170 = 0;
          local_13c = 0;
          local_228 = PTR_DAT_04bc49b8 + 0x10;
          local_2b8._4_4_ = local_2b8._4_4_ & 0xffffff00;
          local_2b0 = (undefined *)((ulong)local_2b0._4_4_ << 0x20);
          local_2c8 = PTR_DAT_04bb2020 + 0x10;
          local_2b8._0_4_ = (int)(long)((float)local_80 * 90.0 * 11930465.0);
          local_180 = puVar4;
          puStack_168 = puVar21;
          local_160 = puVar4;
          local_150 = puVar4;
          local_138 = local_220;
          FUN_009893c0(&local_228,&local_2c8);
          local_240 = 0;
          uStack_230 = 0;
          local_250 = puVar21;
          puStack_248 = puVar4;
          local_238 = puVar4;
          FUN_02a8f7b0(auStack_a0,&local_250);
          local_26c[1] = 0.0;
          iVar9 = (int)local_148 - (int)local_158;
          iVar10 = local_148._4_4_ - local_158._4_4_;
          iVar12 = iVar10 + 2;
          iVar1 = iVar9 + 2;
          if (-1 < iVar9 + 1) {
            iVar1 = iVar9 + 1;
          }
          if (-1 < iVar10 + 1) {
            iVar12 = iVar10 + 1;
          }
          local_258 = (int)local_240 + (iVar1 >> 1);
          iStack_254 = local_240._4_4_ + (iVar12 >> 1);
          local_26c[0] = (float)local_258 * 5.0 + 2.5;
          local_26c[2] = (float)iStack_254 * 5.0 + 2.5;
          local_260 = puVar4;
          uVar24 = FUN_02b57ee0(local_26c,uVar22);
          puVar4 = (undefined *)((long)&local_2b8 + 4);
          local_2b8 = CONCAT44(local_2b8._4_4_,0x40);
          local_275 = 0;
          local_2c8 = PTR_DAT_04bb2f70 + 0x10;
          local_2c0 = puVar4;
          (**(code **)(local_220 + 0x18))(&local_220);
          puVar21 = local_218;
          if (puVar4 != local_218) {
            (**(code **)(local_220 + 0x18))(&local_220);
            lVar14 = 0;
            do {
              if (local_218[lVar14] == '\0') goto LAB_02b3b480;
              if (local_218[lVar14 + 1] == '\0') {
                lVar14 = lVar14 + 1;
                goto LAB_02b3b480;
              }
              if (local_218[lVar14 + 2] == '\0') {
                lVar14 = lVar14 + 2;
                goto LAB_02b3b480;
              }
              lVar14 = lVar14 + 3;
            } while (lVar14 != 0x80001);
            lVar14 = 0;
LAB_02b3b480:
            iVar12 = (int)lVar14;
            if ((int)local_2b8 <= (int)lVar14) {
              iVar12 = (int)local_2b8 + -1;
            }
            memcpy(puVar4,puVar21,(long)iVar12);
            puVar4[iVar12] = 0;
          }
          puVar20 = local_2c0;
          puVar4 = PTR_DAT_04bb2bc0;
          local_2c8 = PTR_DAT_04bb2bc0 + 0x10;
          puVar21 = *(undefined **)(lVar7 + 0x108);
          local_2c0[(long)(int)local_2b8 + -1] = 0;
          if (puVar21 != local_2c0) {
            (**(code **)(puVar4 + 0x28))(&local_2c8);
            lVar14 = 0;
            do {
              if (local_2c0[lVar14] == '\0') goto LAB_02b3b52c;
              if (local_2c0[lVar14 + 1] == '\0') {
                lVar14 = lVar14 + 1;
                goto LAB_02b3b52c;
              }
              if (local_2c0[lVar14 + 2] == '\0') {
                lVar14 = lVar14 + 2;
                goto LAB_02b3b52c;
              }
              lVar14 = lVar14 + 3;
            } while (lVar14 != 0x80001);
            lVar14 = 0;
LAB_02b3b52c:
            iVar12 = (int)lVar14;
            if (*(int *)(lVar7 + 0x110) <= (int)lVar14) {
              iVar12 = *(int *)(lVar7 + 0x110) + -1;
            }
            memcpy(puVar21,puVar20,(long)iVar12);
            puVar21[iVar12] = 0;
          }
          puVar4 = PTR_DAT_04bb27c8;
          if (*(char *)(lVar7 + 0x158) == '\0') {
            local_2b8 = 0;
            uVar5 = 1;
            if (uVar22 != 0x32 && uVar22 != 1) {
              uVar5 = 2;
            }
            fVar25 = (float)NEON_ucvtf(local_188);
            local_2c8 = PTR_DAT_04bbc1a0 + 0x10;
            local_2c0 = PTR_DAT_04bb2010 + 0x10;
            local_2a8 = 0;
            local_2b0 = local_2c0;
            FUN_009482cc(uVar24,fVar25 * 8.381903e-08,*(long *)PTR_DAT_04bb27c8 + 0x28,lVar7 + 0x100
                         ,&local_260,&local_2c8,uVar5);
            if (*(char *)(lVar7 + 0x158) == '\0') {
              lVar14 = *(long *)puVar4;
              lVar16 = *(long *)(lVar14 + 0x1150);
              plVar13 = (long *)((long)*(int *)(lVar14 + 0x1164) + (long)puVar3);
              *(long **)(lVar14 + 0x1150) = plVar13;
              *plVar13 = lVar16;
              plVar13[1] = lVar14 + 0x1150;
              if (lVar16 != 0) {
                *(long **)(lVar16 + 8) = plVar13;
              }
              *(int *)(lVar14 + 0x1160) = *(int *)(lVar14 + 0x1160) + 1;
            }
            *(undefined1 *)(lVar7 + 0x158) = 1;
            *(undefined4 *)(lVar7 + 0x15c) = uVar5;
            *(int *)(lVar7 + 0xe8) = (int)local_2b8;
            *(uint *)(lVar7 + 0xec) = local_2b8._4_4_;
            *(undefined4 *)(lVar7 + 0xf8) = (undefined4)local_2a8;
            *(undefined4 *)(lVar7 + 0xfc) = local_2a8._4_4_;
          }
          if (puVar6[1] != 0) {
            FUN_013620a0(puVar6[1],param_2);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

