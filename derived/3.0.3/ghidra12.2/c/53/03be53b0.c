
/* WARNING: Removing unreachable block (ram,0x03be5a0c) */
/* WARNING: Removing unreachable block (ram,0x03be590c) */
/* WARNING: Removing unreachable block (ram,0x03be5a20) */

void FUN_03be53b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 *__dest;
  int iVar5;
  long lVar6;
  undefined1 (*pauVar7) [12];
  long lVar8;
  long lVar9;
  undefined1 (*pauVar10) [12];
  long lVar11;
  long lVar12;
  uint uVar13;
  long *plVar14;
  char *__s2;
  ulong uVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined **ppuVar18;
  undefined1 *__src;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  long local_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined8 local_214;
  undefined4 local_20c;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined1 *local_1dc;
  undefined8 local_1d4;
  undefined8 local_1cc;
  undefined8 local_1c4;
  undefined8 local_1bc;
  undefined8 local_1b4;
  undefined8 local_1ac;
  undefined1 *local_1a4;
  undefined1 *local_19c;
  undefined8 local_194;
  undefined4 local_18c;
  float fStack_188;
  undefined8 local_184;
  undefined8 local_17c;
  undefined4 local_174;
  undefined *local_170;
  undefined1 *local_168;
  int local_160;
  undefined1 local_15c [127];
  undefined1 local_dd;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  ushort local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  
  local_1f8 = 0;
  local_1e4 = 0x3f80000000000000;
  local_1cc = 0x3f80000000000000;
  local_1ac = 0x3f80000000000000;
  local_194 = 0xbf80000000000000;
  local_1c4 = 0x3f19999a3f19999a;
  local_184 = 0x41f0000040000000;
  local_1bc = 0x3f8000003f19999a;
  local_1dc = &DAT_3f8000003f800000;
  local_1a4 = &DAT_3f8000003f800000;
  local_19c = &DAT_3f8000003f800000;
  local_18c = 0x3f800000;
  fStack_188 = 1.0;
  local_17c = 0x53f800000;
  local_1d4 = 0;
  local_1b4 = 0x3e20a0a13f800000;
  local_174 = 0x40;
  local_168 = local_15c;
  local_160 = 0x80;
  local_dd = 0;
  local_208 = 0;
  local_200 = 0;
  local_170 = PTR_DAT_04bb2d88 + 0x10;
  local_15c[0] = 0;
  local_c8 = 0;
  local_d8 = 0x4396000043160000;
  uStack_d0 = 0x3d4ccccd;
  local_c4 = 0xa3;
  if (*(char *)(param_1 + 0x20) == '\0') {
    return;
  }
  plVar16 = *(long **)PTR_DAT_04bb49b0;
  local_228 = plVar16[0x130];
  if (local_228 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x18))((long *)(param_1 + 0x28));
    __s2 = *(char **)(param_1 + 0x30);
    plVar14 = (long *)(**(code **)(*plVar16 + 0x38))(plVar16);
    (**(code **)(*plVar14 + 0x10))();
    uVar13 = 0;
    if ((long *)plVar16[3] != plVar16 + 2) {
      lVar11 = (long)*(int *)((long)plVar16 + 0x24);
      lVar6 = plVar16[3] - lVar11;
      do {
        iVar5 = strcmp(*(char **)(lVar6 + 0x10),__s2);
        if (iVar5 == 0 && (int)uVar13 < 8) {
          (&local_c0)[(int)uVar13] = lVar6;
          uVar13 = uVar13 + 1;
        }
        lVar6 = *(long *)(lVar6 + lVar11 + 8) - lVar11;
      } while (lVar6 != (long)(plVar16 + 2) - lVar11);
    }
    (**(code **)(*plVar14 + 0x18))(plVar14);
    if ((int)uVar13 < 1) {
      return;
    }
    uVar15 = 0;
    local_228 = 0;
    do {
      lVar11 = (&local_c0)[uVar15];
      lVar6 = lVar11 + 0x20;
      if (*(long *)(lVar11 + 0x28) != lVar6) {
        lVar12 = (long)*(int *)(lVar11 + 0x34);
        lVar9 = *(long *)(lVar11 + 0x28) - lVar12;
        do {
          FUN_03bf4e8c(lVar9);
          lVar9 = *(long *)(lVar9 + lVar12 + 8) - lVar12;
        } while (lVar9 != lVar6 - lVar12);
        if (*(long *)(lVar11 + 0x28) != lVar6) {
          lVar12 = (long)*(int *)(lVar11 + 0x34);
          lVar11 = *(long *)(lVar11 + 0x28) - lVar12;
          fVar31 = INFINITY;
          lVar9 = 0;
          do {
            lVar8 = (**(code **)(**(long **)(*(long *)(lVar11 + 0x30) + 0x18) + 0x20))();
            lVar1 = 0x538;
            if (*(char *)(lVar8 + 0x968) != '\0') {
              lVar1 = 0x108;
            }
            if ((*(byte *)(lVar8 + lVar1 + 3) >> 1 & 1) == 0) {
              fVar30 = *(float *)(lVar11 + 0x60);
              if ((*(byte *)(lVar11 + 0xd8) & 2) != 0) {
                fVar30 = INFINITY;
              }
            }
            else {
              fVar30 = *(float *)(lVar11 + 0x60);
            }
            lVar1 = lVar11;
            if (fVar31 <= fVar30) {
              lVar1 = lVar9;
              fVar30 = fVar31;
            }
            fVar31 = fVar30;
            lVar11 = *(long *)(lVar11 + lVar12 + 8) - lVar12;
            lVar9 = lVar1;
          } while (lVar6 - lVar12 != lVar11);
          if (lVar1 != 0) {
            if (local_228 != 0) {
              lVar11 = (**(code **)(**(long **)(*(long *)(lVar1 + 0x30) + 0x18) + 0x20))();
              lVar6 = 0x538;
              if (*(char *)(lVar11 + 0x968) != '\0') {
                lVar6 = 0x108;
              }
              if ((*(byte *)(lVar11 + lVar6 + 3) >> 1 & 1) == 0) {
                fVar31 = *(float *)(lVar1 + 0x60);
                if ((*(byte *)(lVar1 + 0xd8) & 2) != 0) {
                  fVar31 = INFINITY;
                }
              }
              else {
                fVar31 = *(float *)(lVar1 + 0x60);
              }
              lVar11 = (**(code **)(**(long **)(*(long *)(local_228 + 0x30) + 0x18) + 0x20))();
              lVar6 = 0x538;
              if (*(char *)(lVar11 + 0x968) != '\0') {
                lVar6 = 0x108;
              }
              if ((*(byte *)(lVar11 + lVar6 + 3) >> 1 & 1) == 0) {
                fVar30 = *(float *)(local_228 + 0x60);
                if ((*(byte *)(local_228 + 0xd8) & 2) != 0) {
                  fVar30 = INFINITY;
                }
              }
              else {
                fVar30 = *(float *)(local_228 + 0x60);
              }
              if (fVar30 <= fVar31) goto LAB_03be5674;
            }
            local_228 = lVar1;
          }
        }
      }
LAB_03be5674:
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar13);
    if (local_228 == 0) {
      return;
    }
  }
  plVar16 = *(long **)(local_228 + 0x38);
  plVar14 = (long *)(param_1 + 0xd8);
  (**(code **)(*plVar14 + 0x18))(plVar14);
  uVar17 = *(undefined8 *)(param_1 + 0xe0);
  lVar6 = (**(code **)(*plVar16 + 0x10))(plVar16,uVar17);
  if (lVar6 == 0) {
    pauVar10 = *(undefined1 (**) [12])(local_228 + 0x40);
    if (*(char *)(local_228 + 0x48) == '\0') {
      uVar24 = (undefined4)*(undefined8 *)(*pauVar10 + 8);
      uVar25 = (undefined4)((ulong)*(undefined8 *)(*pauVar10 + 8) >> 0x20);
      uVar29 = (undefined4)*(undefined8 *)*pauVar10;
      uVar19 = (undefined4)((ulong)*(undefined8 *)*pauVar10 >> 0x20);
      uVar26 = (undefined4)*(undefined8 *)pauVar10[2];
      uVar27 = (undefined4)((ulong)*(undefined8 *)pauVar10[2] >> 0x20);
      uVar20 = (undefined4)*(undefined8 *)(pauVar10[1] + 4);
      uVar21 = (undefined4)((ulong)*(undefined8 *)(pauVar10[1] + 4) >> 0x20);
      uVar28 = (undefined4)*(undefined8 *)(pauVar10[3] + 4);
      local_20c = (undefined4)((ulong)*(undefined8 *)(pauVar10[3] + 4) >> 0x20);
      uVar22 = (undefined4)*(undefined8 *)(pauVar10[2] + 8);
      uVar23 = (undefined4)((ulong)*(undefined8 *)(pauVar10[2] + 8) >> 0x20);
    }
    else {
      auVar3 = *(undefined1 (*) [12])(pauVar10[1] + 4);
      auVar2 = *(undefined1 (*) [12])(pauVar10[2] + 8);
      auVar4 = pauVar10[4];
      uVar29 = SUB124(*pauVar10,0);
      uVar20 = SUB124(*pauVar10,4);
      uVar24 = auVar2._0_4_;
      uVar26 = auVar2._4_4_;
      uVar22 = SUB124(*pauVar10,8);
      uVar28 = SUB124(*(undefined1 (*) [12])(pauVar10[2] + 8),8);
      uVar19 = auVar3._0_4_;
      uVar21 = auVar3._4_4_;
      uVar25 = auVar4._0_4_;
      uVar27 = auVar4._4_4_;
      uVar23 = SUB124(*(undefined1 (*) [12])(pauVar10[1] + 4),8);
      local_20c = SUB124(pauVar10[4],8);
    }
    uStack_b8 = CONCAT44(uVar25,uVar24);
    local_c0 = CONCAT44(uVar19,uVar29);
    uStack_a8 = CONCAT44(uVar27,uVar26);
    local_b0 = CONCAT44(uVar21,uVar20);
    uStack_98 = CONCAT44(local_20c,uVar28);
    local_a0 = CONCAT44(uVar23,uVar22);
    local_214 = CONCAT44(uVar27,uVar25);
    (**(code **)(*plVar16 + 0x30))(plVar16,&local_c0);
  }
  else {
    pauVar7 = (undefined1 (*) [12])(**(code **)(*plVar16 + 0x10))(plVar16,uVar17);
    auVar3 = *(undefined1 (*) [12])(pauVar7[1] + 4);
    auVar2 = *(undefined1 (*) [12])(pauVar7[2] + 8);
    pauVar10 = pauVar7 + 4;
    local_20c = (undefined4)*(undefined8 *)(pauVar7[4] + 8);
    local_214 = *(undefined8 *)*pauVar10;
    local_c0 = CONCAT44(auVar3._0_4_,SUB124(*pauVar7,0));
    uStack_b8 = CONCAT44(SUB124(*pauVar10,0),auVar2._0_4_);
    uStack_a8 = CONCAT44(SUB124(*pauVar10,4),auVar2._4_4_);
    local_b0 = CONCAT44(auVar3._4_4_,SUB124(*pauVar7,4));
    local_a0 = CONCAT44(SUB124(*(undefined1 (*) [12])(pauVar7[1] + 4),8),SUB124(*pauVar7,8));
    uStack_98 = CONCAT44(SUB124(*pauVar10,8),SUB124(*(undefined1 (*) [12])(pauVar7[2] + 8),8));
    (**(code **)(*(long *)(param_1 + 0xd8) + 0x18))(plVar14);
    (**(code **)(*plVar16 + 0x48))(plVar16,*(undefined8 *)(param_1 + 0xe0),&local_c0);
  }
  plVar16 = (long *)PTR_DAT_04bc3ee8;
  local_1f0 = uStack_b8._4_4_;
  uStack_1ec = uStack_a8._4_4_;
  local_1e8 = uStack_98._4_4_;
  if (*(long *)PTR_DAT_04bc3ee8 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x28);
  }
  lVar11 = param_1 + 0x80;
  lVar9 = FUN_03baddf0(lVar6,lVar11);
  __dest = local_168;
  lVar6 = *(long *)(lVar6 + 0x88);
  if (lVar9 != 0) {
    lVar6 = lVar9;
  }
  if (lVar6 != 0) {
    local_220 = 0;
    plVar14 = *(long **)(lVar6 + 0x60);
    if (plVar14 != (long *)0x0) {
      (**(code **)(*(long *)(param_1 + 0x80) + 0x18))(lVar11);
      __src = *(undefined1 **)(param_1 + 0x88);
      if (__dest != __src) {
        (**(code **)(*(long *)(param_1 + 0x80) + 0x18))(lVar11);
        plVar16 = &DAT_05aebb78;
        lVar11 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x88) + lVar11) == '\0') goto LAB_03be59d0;
          lVar9 = *(long *)(param_1 + 0x88) + lVar11;
          if (*(char *)(lVar9 + 1) == '\0') {
            lVar11 = lVar11 + 1;
            goto LAB_03be59d0;
          }
          if (*(char *)(lVar9 + 2) == '\0') {
            lVar11 = lVar11 + 2;
            goto LAB_03be59d0;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        lVar11 = 0;
LAB_03be59d0:
        iVar5 = (int)lVar11;
        if (local_160 <= (int)lVar11) {
          iVar5 = local_160 + -1;
        }
        memcpy(__dest,__src,(long)iVar5);
        __dest[iVar5] = 0;
      }
      local_220 = 0;
      if (*(long *)(lVar6 + 0xa0) == 0) {
        ppuVar18 = &PTR_PTR_04c4b980;
      }
      else {
        ppuVar18 = *(undefined ***)(lVar6 + 0xa0);
      }
      (**(code **)(*ppuVar18 + 0x18))(ppuVar18);
      FUN_038d13f0(&local_170,&DAT_040fc288,ppuVar18[1]);
      lVar11 = 0;
      if (*plVar16 != 0) {
        lVar11 = *(long *)(*plVar16 + 0x20);
      }
      if ((0 < *(int *)(lVar11 + 0x10)) && (lVar11 = **(long **)(lVar11 + 0x18), lVar11 != 0)) {
        uVar29 = FUN_03baa168(lVar11,&local_214,0);
        local_194 = CONCAT44(uVar29,(undefined4)local_194);
        local_208 = local_214;
        local_220 = *(undefined4 *)(lVar11 + 0x134);
        uStack_21c = *(undefined4 *)(lVar11 + 0x144);
        local_218 = *(undefined4 *)(lVar11 + 0x154);
        lVar9 = *(long *)(lVar6 + 0x90);
        local_200 = CONCAT44(local_200._4_4_,local_20c);
        if (lVar9 != 0) {
          uStack_d0 = CONCAT44(*(undefined4 *)(lVar9 + 0x50),(undefined4)uStack_d0);
          local_c8 = *(undefined4 *)(lVar9 + 0x54);
        }
        lVar9 = *(long *)(lVar6 + 0x88);
        if (lVar9 != 0) {
          fVar32 = *(float *)(lVar9 + 0x50) * 0.017453292;
          fVar30 = *(float *)(lVar9 + 0x54) * 0.017453292;
          lVar12 = *(long *)(param_1 + 0x138);
          fVar31 = 0.0;
          if (0.0 <= fVar30) {
            fVar31 = fVar30;
          }
          fVar30 = 3.1415927;
          if (fVar31 <= 3.1415927) {
            fVar30 = fVar31;
          }
          fVar31 = 0.0;
          if (0.0 <= fVar32) {
            fVar31 = fVar32;
          }
          fVar32 = fVar30;
          if (fVar31 <= fVar30) {
            fVar32 = fVar31;
          }
          *(float *)(lVar12 + 0x44) = fVar32;
          *(float *)(lVar12 + 0x48) = fVar30;
          *(float *)(lVar12 + 0x4c) = fVar30 - fVar32;
          fVar31 = (float)((ulong)uStack_b8 >> 0x20);
          lVar12 = *(long *)(param_1 + 0x138);
          *(undefined8 *)(lVar12 + 0x10) = uStack_b8;
          *(undefined8 *)(lVar12 + 8) = local_c0;
          fVar30 = (float)((ulong)uStack_a8 >> 0x20);
          *(undefined8 *)(lVar12 + 0x20) = uStack_a8;
          *(undefined8 *)(lVar12 + 0x18) = local_b0;
          fVar32 = (float)((ulong)uStack_98 >> 0x20);
          *(undefined8 *)(lVar12 + 0x30) = uStack_98;
          *(undefined8 *)(lVar12 + 0x28) = local_a0;
          *(float *)(lVar12 + 0x38) =
               (fVar31 + (float)uStack_b8 +
                         (float)((ulong)local_c0 >> 0x20) * 0.0 + (float)local_c0 * 0.0) - fVar31;
          *(float *)(lVar12 + 0x3c) =
               (fVar30 + (float)uStack_a8 +
                         (float)((ulong)local_b0 >> 0x20) * 0.0 + (float)local_b0 * 0.0) - fVar30;
          *(float *)(lVar12 + 0x40) =
               (fVar32 + (float)uStack_98 +
                         (float)((ulong)local_a0 >> 0x20) * 0.0 + (float)local_a0 * 0.0) - fVar32;
          fVar31 = (float)FUN_03bbfd48(*(undefined8 *)(param_1 + 0x138),&local_220);
          if (fVar31 <= 0.0) {
            fStack_188 = 1.0;
          }
          else {
            fStack_188 = *(float *)(lVar9 + 0x58);
            if (fVar31 < 1.0) {
              fStack_188 = 1.0 - fVar31 * (1.0 - fStack_188);
            }
          }
        }
        if ((*(char *)(lVar11 + 0x68) != '\0') && (*(char *)(lVar6 + 0x98) != '\0')) {
          local_18c = FUN_03baa4d0(lVar11 + 0x60,&local_214);
        }
        local_c4 = local_c4 & 0xfeff | (ushort)*(byte *)(param_1 + 0x21) << 8;
        local_184 = CONCAT44(*(undefined4 *)(param_1 + 0x130),(undefined4)local_184);
        (**(code **)(*plVar14 + 0x40))(plVar14,param_2,param_3,param_4,param_5,&local_208);
      }
    }
  }
  return;
}

