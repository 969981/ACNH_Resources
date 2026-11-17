
/* WARNING: Removing unreachable block (ram,0x02b3b800) */
/* WARNING: Removing unreachable block (ram,0x02b3b808) */
/* WARNING: Removing unreachable block (ram,0x02b3b9f4) */
/* WARNING: Removing unreachable block (ram,0x02b3b80c) */
/* WARNING: Removing unreachable block (ram,0x02b3b81c) */

undefined8 FUN_02b3b680(long param_1,uint param_2,int param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  undefined *puVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  uint *puVar16;
  uint uVar17;
  long lVar18;
  char cVar19;
  uint *puVar20;
  int *piVar21;
  undefined1 *puVar22;
  undefined *puVar23;
  uint uVar24;
  ulong uVar25;
  undefined4 uVar26;
  float fVar27;
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
  undefined1 local_64 [4];
  
  if (param_2 == 0xffffffff) {
    return 0;
  }
  uVar25 = 0;
  do {
    uVar24 = (uint)uVar25;
    piVar21 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + uVar25 * 4);
    if (0x38 < uVar24) {
      piVar21 = (int *)(PTR_DAT_04bbbf90 + 8);
    }
    if (*piVar21 == param_3) goto LAB_02b3b6fc;
    uVar17 = 0x39;
    if ((int)uVar24 < 0x39) {
      uVar17 = uVar24 + 1;
    }
    uVar25 = (ulong)uVar17;
  } while (uVar17 != 0x39);
  uVar24 = 0;
LAB_02b3b6fc:
  if (uVar24 == 0) {
    plVar14 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  }
  else {
    plVar1 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
    plVar14 = plVar1 + uVar24;
    if (0x38 < uVar24) {
      plVar14 = plVar1;
    }
  }
  puVar6 = &DAT_05636dd8;
  if (*plVar14 != 0) {
    puVar6 = (undefined8 *)(*plVar14 + 0x148);
  }
  if (puVar6[1] == 0) {
    return 0;
  }
  local_228._0_4_ = uVar24;
  FUN_01360490(auStack_a0,puVar6[1],(ulong)param_2);
  if ((local_94 == 0) || (local_94 == 0)) {
    return 0;
  }
  if (local_94 != 0x1b) {
    return 0;
  }
  if ((local_98 & 1) != 0) {
    return 0;
  }
  if ((uVar24 == 0x32) || (uVar24 == 1)) {
    param_1 = param_1 + 0x10;
  }
  else {
    param_1 = param_1 + 0x6dc8;
  }
  lVar7 = param_1 + 8 + (ulong)param_2 * 0x208;
  if (0x35 < param_2) {
    lVar7 = param_1 + 8;
  }
  if (*(long *)(lVar7 + 8) != 0) {
    return 0;
  }
  local_228 = (undefined *)CONCAT44(local_228._4_4_,2);
  puVar2 = (undefined8 *)(lVar7 + 0x160);
  *(undefined8 **)(lVar7 + 8) = puVar2;
  if (((*PTR_DAT_04bc49f0 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04bc49f0), iVar13 != 0)) {
    *(undefined **)PTR_DAT_04bc49e8 = PTR_DAT_04bbba98 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc49f0);
  }
  uVar25 = (**(code **)*puVar2)(puVar2,PTR_DAT_04bc49e8);
  puVar4 = PTR_DAT_04bb5c18;
  puVar3 = PTR_DAT_04bb5c10;
  if ((uVar25 & 1) == 0) {
    return 0;
  }
  uVar17 = (uint)local_7c;
  if (local_94 != 0x1b) {
    uVar17 = 0;
  }
  if ((local_98 & 2) != 0) {
    uVar17 = 5;
  }
  lVar15 = *(long *)PTR_DAT_04bb5008;
  uVar17 = uVar17 - *(ushort *)(lVar15 + 0x13f0);
  if ((uVar17 < *(uint *)(lVar15 + 0x13d0)) &&
     (puVar16 = *(uint **)(*(long *)(lVar15 + 0x13d8) + (long)(int)uVar17 * 8),
     puVar16 != (uint *)0x0)) {
    uVar17 = *puVar16;
    if (uVar17 != 0) {
      cVar19 = *PTR_DAT_04bb5c10;
      do {
        if (cVar19 == '\0') {
          cVar19 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          uVar17 = *puVar16;
        }
        else {
          uVar8 = *(uint *)(puVar4 + 0xc);
          if (-1 < (int)uVar8) {
            puVar22 = (undefined1 *)((ulong)uVar8 + (long)puVar16);
            goto LAB_02b3b968;
          }
          if (uVar8 != 0xffffffff) break;
        }
        puVar20 = (uint *)(ulong)uVar17;
        puVar22 = (undefined1 *)0x0;
        if ((puVar20 == (uint *)0x0) || (puVar16 == puVar20)) goto LAB_02b3b968;
        lVar15 = 0xc;
        if (*(char *)((long)puVar16 + (10 - (long)puVar20)) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar16 + (lVar15 - (long)puVar20);
        puVar22 = (undefined1 *)0x0;
        if (lVar15 == 0) goto LAB_02b3b968;
        uVar25 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar20));
        *(undefined4 *)(puVar4 + 0xc) = 0xfffffffe;
        if (uVar25 == 0) break;
        piVar21 = (int *)(lVar15 + 4);
        while (piVar21[-1] != 0x39b5a93d) {
          piVar21 = piVar21 + 2;
          uVar25 = uVar25 - 1;
          if (uVar25 == 0) goto LAB_02b3b964;
        }
        iVar13 = 0;
        if (*piVar21 != -1) {
          iVar13 = *piVar21;
        }
        *(int *)(puVar4 + 0xc) = iVar13;
        uVar17 = *puVar16;
        if (uVar17 == 0) break;
      } while( true );
    }
LAB_02b3b964:
    puVar22 = (undefined1 *)0x0;
LAB_02b3b968:
    local_2c0 = *(undefined1 **)PTR_PTR_04bb5c08;
    if (puVar22 != (undefined1 *)0x0) {
      local_2c0 = puVar22;
    }
  }
  else {
    local_2c0 = *(undefined1 **)PTR_PTR_04bc4ad0;
  }
  local_128 = 0x80;
  local_a5 = 0;
  local_138 = PTR_DAT_04bb2030 + 0x10;
  local_130 = local_124;
  if (local_124 != local_2c0) {
    lVar15 = 0;
    do {
      if (local_2c0[lVar15] == '\0') {
LAB_02b3ba0c:
        iVar13 = (int)lVar15;
        if (0x7f < iVar13) {
          iVar13 = 0x7f;
        }
        goto LAB_02b3ba18;
      }
      if (local_2c0[lVar15 + 1] == '\0') {
        lVar15 = lVar15 + 1;
        goto LAB_02b3ba0c;
      }
      if (local_2c0[lVar15 + 2] == '\0') {
        lVar15 = lVar15 + 2;
        goto LAB_02b3ba0c;
      }
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
    iVar13 = 0;
LAB_02b3ba18:
    memcpy(local_124,local_2c0,(long)iVar13);
    local_124[iVar13] = 0;
    local_2c0 = local_130;
  }
  puVar12 = PTR_DAT_04bbc1a0;
  local_220 = PTR_DAT_04bb2d88 + 0x10;
  local_210 = 0x80;
  local_18d = 0;
  local_20c[0] = 0;
  local_188 = 0;
  local_184 = 0;
  local_218 = local_20c;
  local_140 = 0;
  puVar3 = PTR_DAT_04bb2010 + 0x10;
  puVar4 = PTR_DAT_04bbc1a0 + 0x10;
  uStack_178 = 0;
  local_170 = 0;
  local_158 = 0;
  local_148 = 0;
  local_13c = 0;
  local_228 = PTR_DAT_04bc49b8 + 0x10;
  local_2b0 = (undefined *)((ulong)local_2b0._4_4_ << 0x20);
  local_2c8 = PTR_DAT_04bb2020 + 0x10;
  local_2b8 = CONCAT44(local_2b8._4_4_,(int)(long)((float)local_80 * 90.0 * 11930465.0)) &
              0xffffff00ffffffff;
  local_180 = puVar3;
  puStack_168 = puVar4;
  local_160 = puVar3;
  local_150 = puVar3;
  local_138 = local_220;
  FUN_009893c0(&local_228,&local_2c8);
  local_240 = 0;
  uStack_230 = 0;
  local_250 = puVar4;
  puStack_248 = puVar3;
  local_238 = puVar3;
  FUN_02a8f7b0(auStack_a0,&local_250);
  puVar4 = PTR_DAT_04bb27c8;
  local_26c[1] = 0.0;
  iVar10 = (int)local_148 - (int)local_158;
  iVar11 = local_148._4_4_ - local_158._4_4_;
  iVar13 = iVar10 + 2;
  if (-1 < iVar10 + 1) {
    iVar13 = iVar10 + 1;
  }
  iVar10 = iVar11 + 2;
  if (-1 < iVar11 + 1) {
    iVar10 = iVar11 + 1;
  }
  local_258 = (int)local_240 + (iVar13 >> 1);
  iStack_254 = local_240._4_4_ + (iVar10 >> 1);
  local_26c[0] = (float)local_258 * 5.0 + 2.5;
  local_26c[2] = (float)iStack_254 * 5.0 + 2.5;
  local_260 = puVar3;
  if ((uVar24 == 0x32) || (uVar24 == 1)) {
    if ((*(long *)PTR_DAT_04bb27c8 != 0) &&
       (lVar15 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0x90), lVar15 != 0)) {
      sVar9 = *(short *)PTR_DAT_04bb6298;
      if (sVar9 == -1) {
        uVar26 = 7;
      }
      else {
        local_2c8 = (undefined *)CONCAT44(local_2c8._4_4_,1);
        puVar16 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar9 * 8);
        if (0xff < (uint)(int)sVar9) {
          puVar16 = (uint *)PTR_DAT_04bc39f8;
        }
        uVar26 = 7;
        if ((*puVar16 & 2) != 0) {
          uVar26 = 5;
        }
      }
      local_2c8 = (undefined *)CONCAT44(local_2c8._4_4_,uVar26);
      local_64[0] = 0;
      uVar26 = FUN_00962700(lVar15,local_26c,&local_2c8,1,local_64);
      goto LAB_02b3bc54;
    }
  }
  else {
    lVar15 = *(long *)PTR_DAT_04bb27c8;
    if (((lVar15 != 0) && (*(long *)(lVar15 + 0xa8) != 0)) && (*(char *)(lVar15 + 0x11c8) == '\0'))
    {
      uVar26 = FUN_0093b024(lVar15 + 0x28,local_26c,0);
LAB_02b3bc54:
      goto LAB_02b3bc58;
    }
  }
  uVar26 = 0xc3fa0000;
LAB_02b3bc58:
  puVar3 = (undefined *)((long)&local_2b8 + 4);
  local_2b8 = CONCAT44(local_2b8._4_4_,0x40);
  local_275 = 0;
  local_2c8 = PTR_DAT_04bb2f70 + 0x10;
  local_2c0 = puVar3;
  (**(code **)(local_220 + 0x18))(&local_220);
  puVar23 = local_218;
  if (puVar3 != local_218) {
    (**(code **)(local_220 + 0x18))(&local_220);
    lVar15 = 0;
    do {
      if (local_218[lVar15] == '\0') goto LAB_02b3bcec;
      if (local_218[lVar15 + 1] == '\0') {
        lVar15 = lVar15 + 1;
        goto LAB_02b3bcec;
      }
      if (local_218[lVar15 + 2] == '\0') {
        lVar15 = lVar15 + 2;
        goto LAB_02b3bcec;
      }
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
    lVar15 = 0;
LAB_02b3bcec:
    iVar13 = (int)lVar15;
    if ((int)local_2b8 <= (int)lVar15) {
      iVar13 = (int)local_2b8 + -1;
    }
    memcpy(puVar3,puVar23,(long)iVar13);
    puVar3[iVar13] = 0;
  }
  puVar22 = local_2c0;
  puVar3 = PTR_DAT_04bb2bc0;
  local_2c8 = PTR_DAT_04bb2bc0 + 0x10;
  puVar23 = *(undefined **)(lVar7 + 0x1b0);
  local_2c0[(long)(int)local_2b8 + -1] = 0;
  if (puVar23 != local_2c0) {
    (**(code **)(puVar3 + 0x28))(&local_2c8);
    lVar15 = 0;
    do {
      if (local_2c0[lVar15] == '\0') goto LAB_02b3bd98;
      if (local_2c0[lVar15 + 1] == '\0') {
        lVar15 = lVar15 + 1;
        goto LAB_02b3bd98;
      }
      if (local_2c0[lVar15 + 2] == '\0') {
        lVar15 = lVar15 + 2;
        goto LAB_02b3bd98;
      }
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
    lVar15 = 0;
LAB_02b3bd98:
    iVar13 = (int)lVar15;
    if (*(int *)(lVar7 + 0x1b8) <= (int)lVar15) {
      iVar13 = *(int *)(lVar7 + 0x1b8) + -1;
    }
    memcpy(puVar23,puVar22,(long)iVar13);
    puVar23[iVar13] = 0;
  }
  if (*(char *)(lVar7 + 0x200) == '\0') {
    local_2c8 = puVar12 + 0x10;
    uVar5 = 1;
    if (uVar24 != 0x32 && uVar24 != 1) {
      uVar5 = 2;
    }
    local_2b8 = 0;
    fVar27 = (float)NEON_ucvtf(local_188);
    local_2c0 = PTR_DAT_04bb2010 + 0x10;
    local_2a8 = 0;
    local_2b0 = local_2c0;
    FUN_009485f0(uVar26,fVar27 * 8.381903e-08,*(long *)puVar4 + 0x28,lVar7 + 0x1a8,&local_260,
                 &local_2c8,uVar5);
    if (*(char *)(lVar7 + 0x200) == '\0') {
      lVar15 = *(long *)puVar4;
      lVar18 = *(long *)(lVar15 + 0x1150);
      plVar14 = (long *)((long)*(int *)(lVar15 + 0x1164) + (long)puVar2);
      *(long **)(lVar15 + 0x1150) = plVar14;
      *plVar14 = lVar18;
      plVar14[1] = lVar15 + 0x1150;
      if (lVar18 != 0) {
        *(long **)(lVar18 + 8) = plVar14;
      }
      *(int *)(lVar15 + 0x1160) = *(int *)(lVar15 + 0x1160) + 1;
    }
    *(undefined1 *)(lVar7 + 0x200) = 1;
    *(undefined4 *)(lVar7 + 0x204) = uVar5;
    *(int *)(lVar7 + 400) = (int)local_2b8;
    *(undefined4 *)(lVar7 + 0x194) = local_2b8._4_4_;
    *(undefined4 *)(lVar7 + 0x1a0) = (undefined4)local_2a8;
    *(undefined4 *)(lVar7 + 0x1a4) = local_2a8._4_4_;
  }
  if (puVar6[1] != 0) {
    FUN_013620a0(puVar6[1],param_2);
  }
  return 1;
}

