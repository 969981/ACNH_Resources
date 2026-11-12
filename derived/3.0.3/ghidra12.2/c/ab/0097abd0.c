
uint FUN_0097abd0(long param_1,ulong param_2)

{
  uint uVar1;
  short sVar2;
  undefined2 uVar3;
  short sVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *__s;
  bool bVar8;
  int iVar9;
  uint uVar10;
  short *psVar11;
  undefined2 *puVar12;
  ulong uVar13;
  float *pfVar14;
  long lVar15;
  uint *puVar16;
  uint *puVar17;
  undefined1 uVar18;
  int *piVar19;
  undefined1 uVar20;
  undefined8 *puVar21;
  long lVar22;
  char cVar23;
  float fVar24;
  undefined *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined *local_e0;
  undefined4 local_d8;
  int iStack_d4;
  uint *local_d0;
  undefined8 local_c8;
  undefined *puStack_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined *puStack_90;
  undefined4 local_88;
  undefined4 local_84;
  byte local_80;
  undefined8 local_68;
  
  local_88 = 0;
  lVar15 = *(long *)PTR_DAT_04bb2720;
  if (lVar15 == 0) {
    puVar21 = &DAT_055c04a0;
  }
  else {
    puVar21 = &DAT_055c04a0;
    if (*(long *)(lVar15 + 0x330) != 0) {
      puVar21 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
      iVar9 = FUN_006bd550(*puVar21,0);
      puVar21 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar9 != 0x758f7eaf) {
        puVar21 = &DAT_055c04a0;
      }
    }
  }
  local_84 = *(undefined4 *)(puVar21 + 7);
  local_80 = FUN_017baf44();
  puVar6 = PTR_DAT_04bb2010;
  local_80 = local_80 & 1;
  puStack_90 = PTR_DAT_04bb3140 + 0x10;
  local_98 = 0;
  local_a0 = PTR_DAT_04bb2010 + 0x10;
  local_68 = 0xfffe;
  FUN_0277d4ac(&local_68);
  if ((param_2 & 1) == 0) {
    FUN_01a5033c(&local_c8,&puStack_90,0,param_1,&local_a0);
    uVar18 = local_c8._2_1_;
    uVar20 = local_c8._3_1_;
    local_68._4_4_ = local_c8._4_4_;
    sVar2 = (short)local_c8;
  }
  else {
    psVar11 = (short *)FUN_01a5190c(&puStack_90,0,param_1,&local_a0);
    uVar18 = (char)psVar11[1];
    uVar20 = *(undefined1 *)((long)psVar11 + 3);
    local_68._4_4_ = *(int *)(psVar11 + 2);
    sVar2 = *psVar11;
  }
  puVar7 = PTR_DAT_04bb43c0;
  local_68._0_3_ = CONCAT12(uVar18,sVar2);
  local_68._0_4_ = CONCAT13(uVar20,(undefined3)local_68);
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 == -1) {
    bVar8 = false;
  }
  else {
    local_c8 = (undefined *)CONCAT44(local_c8._4_4_,4);
    puVar16 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar16 = (uint *)PTR_DAT_04bc39f8;
    }
    bVar8 = (*puVar16 & 0x10) != 0;
    if (((*puVar16 & 0x10) != 0) && (sVar2 == -2)) {
      local_e0 = puVar6 + 0x10;
      local_d8 = *(undefined4 *)(param_1 + 8);
      iStack_d4 = *(int *)(param_1 + 0xc) + 1;
      if ((param_2 & 1) == 0) {
        FUN_01a5033c(&local_c8,&puStack_90,0,&local_e0,&local_a0);
        uVar18 = local_c8._2_1_;
        uVar20 = local_c8._3_1_;
        local_68._4_4_ = local_c8._4_4_;
        uVar3 = (short)local_c8;
      }
      else {
        puVar12 = (undefined2 *)FUN_01a5190c(&puStack_90,0,&local_e0,&local_a0);
        uVar18 = *(undefined1 *)(puVar12 + 1);
        uVar20 = *(undefined1 *)((long)puVar12 + 3);
        local_68._4_4_ = *(int *)(puVar12 + 2);
        uVar3 = *puVar12;
      }
      lVar22 = *(long *)puVar7;
      local_68._0_3_ = CONCAT12(uVar18,uVar3);
      local_68._0_4_ = CONCAT13(uVar20,(undefined3)local_68);
      uVar10 = FUN_0277d6c4(&local_68);
      lVar15 = *(long *)puVar7;
      if (lVar15 == 0) {
        return 0;
      }
      lVar22 = *(long *)(lVar22 + 0x57e58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
      if (*(uint *)(lVar22 + 0x1d8) <= uVar10) {
        return 0;
      }
      if (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar10 * 8) == 0) {
        return 0;
      }
      local_f8 = 0;
      local_108 = PTR_DAT_04bc0510 + 0x10;
      local_100 = (undefined *)CONCAT44(local_68._4_4_,(undefined4)local_68);
      uVar10 = FUN_0277d6c4(&local_100);
      if (*(long *)puVar7 != 0) {
        lVar15 = *(long *)(lVar15 + 0x57e58);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((uVar10 < *(uint *)(lVar15 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
          lVar15 = *(long *)PTR_DAT_04bc0428;
          uVar10 = FUN_0277d6c4(&local_68);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if (uVar10 < *(uint *)(lVar15 + 0x1d8)) {
            lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8);
            if (lVar15 != 0) {
              local_f8 = lVar15;
            }
          }
        }
      }
      uVar13 = FUN_01ae59b0(&local_108);
      if ((uVar13 & 1) == 0) {
        return 0;
      }
      puStack_c0 = puVar6 + 0x10;
      local_b8 = 0;
      uStack_a8 = 0;
      local_c8 = PTR_DAT_04bbc1a0 + 0x10;
      local_b0 = puStack_c0;
      FUN_01afb480(&local_108,&local_c8);
      if (uStack_a8._4_4_ != local_b8._4_4_) {
        return 0;
      }
      bVar8 = true;
    }
  }
  lVar22 = *(long *)puVar7;
  uVar10 = FUN_0277d6c4(&local_68);
  lVar15 = *(long *)puVar7;
  if (lVar15 == 0) goto LAB_0097b2c8;
  lVar22 = *(long *)(lVar22 + 0x57e58);
  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
  if ((*(uint *)(lVar22 + 0x1d8) <= uVar10) ||
     (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar10 * 8) == 0)) goto LAB_0097b2c8;
  local_d0 = (uint *)0x0;
  local_e0 = PTR_DAT_04bc0510 + 0x10;
  local_d8 = (undefined4)local_68;
  iStack_d4 = local_68._4_4_;
  uVar10 = FUN_0277d6c4(&local_d8);
  if (*(long *)puVar7 != 0) {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar10 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
      lVar15 = *(long *)PTR_DAT_04bc0428;
      uVar10 = FUN_0277d6c4(&local_68);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if (uVar10 < *(uint *)(lVar15 + 0x1d8)) {
        puVar16 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8);
        if (puVar16 != (uint *)0x0) {
          local_d0 = puVar16;
        }
      }
    }
  }
  uVar13 = FUN_01ae59b0(&local_e0);
  puVar16 = local_d0;
  __s = PTR_DAT_04bbfe90;
  puVar7 = PTR_DAT_04bbfe88;
  if ((uVar13 & 1) == 0) goto LAB_0097b2c8;
  fVar24 = 0.0;
  if ((local_d0 != (uint *)0x0) && (uVar10 = *local_d0, uVar10 != 0)) {
    cVar23 = *PTR_DAT_04bbfe88;
    do {
      if (cVar23 == '\0') {
        cVar23 = '\x01';
        *puVar7 = 1;
        memset(__s,0xff,0x1ac);
        uVar10 = *puVar16;
      }
      else {
        uVar1 = *(uint *)(__s + 0x28);
        if (-1 < (int)uVar1) {
          if ((float *)((ulong)uVar1 + (long)puVar16) != (float *)0x0) {
            fVar24 = *(float *)((ulong)uVar1 + (long)puVar16);
          }
          break;
        }
        if (uVar1 != 0xffffffff) break;
      }
      puVar17 = (uint *)(ulong)uVar10;
      if ((puVar17 == (uint *)0x0) || (puVar16 == puVar17)) break;
      lVar15 = 0xc;
      if (*(char *)((long)puVar16 + (10 - (long)puVar17)) != '\0') {
        lVar15 = 0x1c;
      }
      lVar15 = (long)puVar16 + (lVar15 - (long)puVar17);
      if (lVar15 == 0) break;
      uVar13 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar17));
      *(undefined4 *)(__s + 0x28) = 0xfffffffe;
      if (uVar13 == 0) break;
      piVar19 = (int *)(lVar15 + 4);
      while (piVar19[-1] != -0x3e783aea) {
        piVar19 = piVar19 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) goto LAB_0097b108;
      }
      iVar9 = 0;
      if (*piVar19 != -1) {
        iVar9 = *piVar19;
      }
      *(int *)(__s + 0x28) = iVar9;
      uVar10 = *puVar16;
      if (uVar10 == 0) break;
    } while( true );
  }
LAB_0097b108:
  puVar7 = PTR_DAT_04bbc1a0;
  puStack_c0 = puVar6 + 0x10;
  local_b8 = 0;
  uStack_a8 = 0;
  local_c8 = PTR_DAT_04bbc1a0 + 0x10;
  local_b0 = puStack_c0;
  FUN_01afb480(&local_e0,&local_c8);
  iVar9 = FUN_0277ebd0(&local_68);
  if ((bool)(iVar9 == 0 & (bVar8 ^ 1U))) goto LAB_0097b2c8;
  iVar9 = FUN_0277ebd0(&local_68);
  local_108 = (undefined *)CONCAT44(local_108._4_4_,iVar9);
  bVar5 = (bool)(bVar8 ^ 1);
  if (iVar9 == 0) {
    bVar5 = true;
  }
  if (bVar5) {
LAB_0097b178:
    iVar9 = FUN_0277ebd0(&local_68);
    if ((bool)(iVar9 != 1 & (bVar8 ^ 1U))) {
      iVar9 = FUN_0277ebd0(&local_68);
      if (iVar9 == 4) {
        local_108 = puVar7 + 0x10;
        local_100 = puVar6 + 0x10;
        local_f8 = 0;
        local_e8 = 0;
        local_f0 = local_100;
        FUN_01afb480(&local_e0,&local_108);
        if ((-1.1920929e-07 <= fVar24) && (fVar24 <= 1.1920929e-07)) goto LAB_0097b2c8;
        if ((*(int *)(param_1 + 8) == (int)local_98 + 2) ||
           (*(int *)(param_1 + 8) == (int)local_98 + 3)) goto LAB_0097b2c8;
      }
      else {
        iVar9 = FUN_0277ebd0(&local_68);
        if (iVar9 != 3) goto LAB_0097b2c8;
        local_108 = puVar7 + 0x10;
        local_100 = puVar6 + 0x10;
        local_f8 = 0;
        local_e8 = 0;
        local_f0 = local_100;
        FUN_01afb480(&local_e0,&local_108);
        if ((-1.1920929e-07 <= fVar24) && (fVar24 <= 1.1920929e-07)) goto LAB_0097b2c8;
        if ((int)local_e8 - (int)local_f8 == 5) {
          if ((*(int *)(param_1 + 8) != (int)local_98 + 2) &&
             (*(int *)(param_1 + 8) != (int)local_98 + 3)) {
            return 1;
          }
        }
        if (local_e8._4_4_ - local_f8._4_4_ != 5) goto LAB_0097b2c8;
      }
      if ((*(int *)(param_1 + 0xc) != local_98._4_4_ + 2) &&
         (*(int *)(param_1 + 0xc) != local_98._4_4_ + 3)) {
        return 1;
      }
      goto LAB_0097b2c8;
    }
  }
  else if (uStack_a8._4_4_ != local_b8._4_4_) goto LAB_0097b178;
  if (fVar24 < -1.1920929e-07) {
    return 1;
  }
  if (1.1920929e-07 < fVar24) {
    return 1;
  }
LAB_0097b2c8:
  lVar15 = *(long *)PTR_DAT_04bbbc68;
  if ((((lVar15 != 0) && (*(long *)(lVar15 + 0xb0) != 0)) &&
      (*(long *)(*(long *)(lVar15 + 0xb0) + 8) != 0)) &&
     (((*(long *)(lVar15 + 0x488) != 0 && (*(long *)(*(long *)(lVar15 + 0x488) + 8) != 0)) &&
      ((*(long *)(lVar15 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar15 + 0x2b0) + 8) != 0)))))) {
    uVar10 = FUN_0277d6c4(&local_68);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar10 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
      FUN_0124c030(&local_c8,&local_68);
      fVar24 = 0.0;
      if ((local_b8 != 0) &&
         (pfVar14 = (float *)FUN_01246470(local_b8,0,0xc315945,*(undefined8 *)PTR_DAT_04bbbca8),
         pfVar14 != (float *)0x0)) {
        fVar24 = *pfVar14;
      }
      if (((fVar24 < -1.1920929e-07) || (1.1920929e-07 < fVar24)) &&
         ((iVar9 = FUN_0277ebd0(&local_68), iVar9 == 2 ||
          (iVar9 = FUN_0277ebd0(&local_68), iVar9 == 1)))) {
        return 1;
      }
    }
  }
  if (((*(long *)PTR_DAT_04bb27c8 == 0) ||
      (lVar15 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar15 == 0)) ||
     (uVar10 = *(uint *)(param_1 + 8), (int)uVar10 < 0)) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((int)uVar1 < 0) {
    return 0;
  }
  if (*(uint *)(lVar15 + 0x38) <= uVar10) {
    return 0;
  }
  if (*(uint *)(lVar15 + 0x3c) <= uVar1) {
    return 0;
  }
  uVar10 = uVar10 + *(uint *)(lVar15 + 0x38) * uVar1;
  if (*(uint *)(lVar15 + 0x68) <= uVar10) {
    return 0;
  }
  if (*(long *)(lVar15 + 0x70) == 0) {
    return 0;
  }
  return *(uint *)(*(long *)(lVar15 + 0x70) + (long)(int)uVar10 * 4) >> 6 & 1;
}

