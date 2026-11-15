
/* WARNING: Removing unreachable block (ram,0x022e2f40) */
/* WARNING: Removing unreachable block (ram,0x022e2f50) */

ulong FUN_022e2e54(long param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  uint uVar16;
  ulong uVar17;
  byte bVar18;
  long lVar19;
  long lVar20;
  short *psVar21;
  undefined8 *puVar22;
  byte *pbVar23;
  uint *puVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  short local_194;
  undefined1 local_192;
  undefined *local_190;
  int local_188;
  int iStack_184;
  uint local_180 [2];
  undefined *local_178;
  undefined *puStack_170;
  int local_168;
  int iStack_164;
  undefined *local_160;
  int local_158;
  int iStack_154;
  undefined2 local_150;
  undefined4 local_14e;
  undefined1 local_14a;
  undefined8 local_148;
  undefined1 local_140;
  undefined8 local_13c;
  undefined2 local_134;
  undefined1 local_130 [4];
  uint uStack_12c;
  float local_128;
  undefined8 local_124;
  undefined4 local_11c;
  uint local_118;
  long local_110;
  undefined1 local_108;
  int local_104;
  undefined1 local_9c;
  undefined2 local_9a;
  short local_88 [2];
  undefined2 local_84 [2];
  
  puVar24 = (uint *)(param_1 + 0x38);
  puVar24[0] = 0;
  puVar24[1] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x3d) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x48) = 7;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x55) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  local_190 = PTR_DAT_04bb2018 + 0x10;
  iVar5 = (int)((float)(int)*(float *)(param_2 + 8) / 10.0) - (uint)(*(float *)(param_2 + 8) < 0.0);
  iVar6 = (int)((float)(int)*(float *)(param_2 + 0x10) / 10.0) -
          (uint)(*(float *)(param_2 + 0x10) < 0.0);
  local_188 = iVar5;
  iStack_184 = iVar6;
  FUN_007ef010(local_88,param_2 + 0x28);
  _local_130 = (ulong)uStack_12c << 0x20;
  lVar19 = *(long *)PTR_DAT_04bb27a8;
  psVar21 = (short *)PTR_DAT_04bb3170;
  if ((*(long *)(lVar19 + 0x1f8) != 0) &&
     (lVar20 = *(long *)(*(long *)(lVar19 + 0x1f8) + 0xb0), lVar20 != 0)) {
    uVar16 = iVar5 - *(int *)(lVar20 + 0x28);
    uVar1 = *(uint *)(lVar20 + 0x18);
    uVar7 = iVar6 - *(int *)(lVar20 + 0x2c);
    if ((uVar16 < uVar1 && uVar7 <= *(uint *)(lVar20 + 0x1c)) &&
        (uVar1 <= uVar16 || *(uint *)(lVar20 + 0x1c) != uVar7)) {
      uVar16 = uVar16 + uVar1 * uVar7;
LAB_022e2fdc:
      if (*(uint *)(lVar20 + 0x30) <= uVar16) {
        uVar16 = 0;
      }
      puVar22 = (undefined8 *)(*(long *)(lVar20 + 0x38) + (long)(int)uVar16 * 0x68);
    }
    else {
      if (*(char *)(lVar20 + 0x88) != '\0') {
        uVar1 = iVar5 - *(int *)(lVar20 + 0x98);
        uVar16 = *(uint *)(lVar20 + 0xa0);
        uVar7 = iVar6 - *(int *)(lVar20 + 0x9c);
        if ((uVar1 < uVar16 && uVar7 <= *(uint *)(lVar20 + 0xa4)) &&
            (uVar16 <= uVar1 || *(uint *)(lVar20 + 0xa4) != uVar7)) {
          uVar16 = uVar1 + uVar16 * uVar7 + *(int *)(lVar20 + 0x8c);
          goto LAB_022e2fdc;
        }
      }
      puVar22 = &DAT_051a50f0;
    }
    if (((*(byte *)((long)puVar22 + 0xe) >> 5 & 1) == 0) &&
       (cVar2 = *(char *)((long)puVar22 + 0x1e), cVar2 != -1)) {
      psVar21 = (short *)(*(long *)(lVar19 + 0x4740) + (long)(int)cVar2 * 0x70 + 0x28);
      if (*(uint *)(lVar19 + 0x4738) <= (uint)(int)cVar2) {
        psVar21 = (short *)PTR_DAT_04bb3170;
      }
    }
  }
  if (local_88[0] == *(short *)PTR_DAT_04bb3170) {
    if (*psVar21 != local_88[0]) goto LAB_022e318c;
    if (*(int *)(param_2 + 0x30) == 1) {
      uVar16 = FUN_01318aa0(&local_190,0);
      _local_130 = CONCAT44(uStack_12c,uVar16);
      local_180[0] = 0;
      if (*(uint *)(param_2 + 0x24) < 10) {
        local_180[0] = *(uint *)(param_2 + 0x24);
      }
      if ((uVar16 == local_180[0]) && (uVar17 = FUN_013185e0(&local_190), (uVar17 & 1) == 0))
      goto LAB_022e3300;
    }
    local_104 = *(int *)(param_2 + 0x30);
    local_128 = *(float *)(param_2 + 0x10);
    _local_130 = *(undefined8 *)(param_2 + 8);
    local_124 = *(undefined8 *)(param_2 + 0x14);
    local_11c = *(undefined4 *)(param_2 + 0x1c);
    local_118 = 0;
    if (*(uint *)(param_2 + 0x24) < 10 && local_104 != 2) {
      local_118 = *(uint *)(param_2 + 0x24);
    }
    pbVar23 = (byte *)(param_1 + 0x10);
    if (*pbVar23 < 8) {
      uVar16 = FUN_02582d8c(pbVar23,1);
      puVar15 = PTR_DAT_04bb4fb8;
      if (((uVar16 < 8) &&
          (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar16 * 0x13f0 + 0x13d4) != '\0')) &&
         (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar16 * 0x13f0 + 0x13d6) != '\0')) {
        uVar16 = FUN_02582d8c(pbVar23,1);
        if (uVar16 < 8) {
          lVar19 = *(long *)puVar15 + (ulong)uVar16 * 0x13f0;
          lVar20 = 0;
          if (*(char *)(lVar19 + 0x13d4) != '\0') {
            lVar20 = lVar19;
          }
        }
        else {
          lVar20 = 0;
        }
        lVar19 = 0;
        if (lVar20 != 0) {
          lVar19 = lVar20 + 8;
        }
      }
      else {
        lVar19 = 0;
      }
      local_104 = *(int *)(param_2 + 0x30);
      local_110 = 0;
      if (lVar19 != 0) {
        local_110 = lVar19 + 0x588;
      }
    }
    else {
      local_110 = 0;
    }
    local_108 = *(undefined1 *)(param_2 + 0x2c);
    FUN_022eb068(param_1 + 0x18,local_130);
    if (*(char *)(param_1 + 0x5c) == '\0') {
      if ((*(int *)(param_1 + 0x40) == 0) && (local_180[0] = *puVar24, local_180[0] != 0))
      goto LAB_022e32a4;
    }
    else if (*(uint *)(param_1 + 0x28) < 2) {
LAB_022e32a4:
      local_128 = *(float *)(param_1 + 0x68);
      _local_130 = *(undefined8 *)(param_1 + 0x60);
      local_180[0] = local_180[0] & 0xffffff00;
      uVar17 = FUN_022e26e0(param_1,local_130,local_180);
      if ((uVar17 & 1) == 0) {
        uVar17 = 1;
      }
      else {
        uVar17 = 0;
        *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 1;
        *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x14);
        *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x18);
        *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x1c);
      }
      goto LAB_022e3304;
    }
  }
  else if (*(int *)(param_2 + 0x30) == 1) {
    sVar4 = *psVar21;
    if (local_88[0] != sVar4) goto joined_r0x022e3188;
  }
  else if (*(int *)(param_2 + 0x30) == 2) {
    if (*psVar21 != *(short *)PTR_DAT_04bb3170) goto LAB_022e318c;
  }
  else {
    sVar4 = *psVar21;
joined_r0x022e3188:
    if (local_88[0] == sVar4) {
LAB_022e318c:
      uVar17 = FUN_022e3504(param_1,param_2);
      return uVar17;
    }
    fVar27 = *(float *)(param_2 + 8);
    uVar14 = *(undefined8 *)(param_2 + 8);
    fVar28 = *(float *)(param_2 + 0x10);
    uVar13 = *(undefined8 *)(param_2 + 0x14);
    uVar29 = *(undefined4 *)(param_2 + 0x1c);
    uVar3 = *(undefined1 *)(param_2 + 0x2c);
    local_194 = local_88[0];
    local_192 = uVar3;
    FUN_007ef010(local_84,&local_194);
    local_118 = 0;
    local_104 = 0;
    _local_130 = uVar14;
    local_128 = fVar28;
    local_124 = uVar13;
    local_11c = uVar29;
    local_108 = uVar3;
    FUN_022ebbb4(param_1 + 0x18,local_130);
    if (*(char *)(param_1 + 0x5c) == '\0') {
      if (*(int *)(param_1 + 0x40) == 0) {
        _local_130 = CONCAT44(uStack_12c,*puVar24);
        if (*puVar24 != 0) goto LAB_022e3348;
      }
    }
    else if (*(uint *)(param_1 + 0x28) < 2) {
LAB_022e3348:
      iVar8 = (int)((float)(int)fVar27 / 10.0) - (uint)(fVar27 < 0.0);
      iVar9 = (int)((float)(int)fVar28 / 10.0) - (uint)(fVar28 < 0.0);
      fVar27 = (float)iVar8 * 10.0;
      fVar25 = (float)iVar9 * 10.0;
      fVar28 = fVar27 + 2.5;
      fVar26 = fVar25 + 2.5;
      fVar27 = fVar27 + 10.0 + -2.5;
      fVar25 = fVar25 + 10.0 + -2.5;
      iVar6 = (int)((float)(int)fVar28 / 5.0) - (uint)(fVar28 < 0.0);
      iVar10 = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
      iVar11 = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0);
      iVar5 = iVar6;
      if (iVar10 <= iVar6) {
        iVar5 = iVar10;
      }
      if (iVar6 <= iVar10) {
        iVar6 = iVar10;
      }
      iVar12 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
      iVar10 = iVar11;
      if (iVar12 <= iVar11) {
        iVar10 = iVar12;
      }
      if (iVar11 <= iVar12) {
        iVar11 = iVar12;
      }
      FUN_0131a4e4(&local_128);
      uVar13 = _local_130;
      bVar18 = *(byte *)(param_1 + 0x10);
      uStack_12c._3_1_ = SUB81(uVar13,7);
      _local_130 = (uint7)CONCAT24((short)iVar9,CONCAT22((short)iVar8,local_130._0_2_));
      local_9c = 1;
      local_9a = local_84[0];
      if (7 < bVar18) {
        bVar18 = 0xff;
      }
      local_178 = PTR_DAT_04bbc1a0 + 0x10;
      _local_130 = CONCAT71(stack0xfffffffffffffed1,bVar18);
      local_14e = 0;
      local_14a = 0;
      puStack_170 = PTR_DAT_04bb2010 + 0x10;
      local_140 = 0;
      local_148 = 0xffffffffffffffff;
      local_150 = 0xff00;
      local_13c = 0x41200000;
      local_134 = 0xff00;
      local_180[0] = CONCAT22(local_180[0]._2_2_,*(undefined2 *)PTR_DAT_04bb6298);
      local_168 = iVar5;
      iStack_164 = iVar10;
      local_160 = puStack_170;
      local_158 = iVar6;
      iStack_154 = iVar11;
      uVar16 = FUN_022e39a0(param_1,local_180,local_130);
      return (ulong)((uVar16 ^ 0xffffffff) & 1);
    }
  }
LAB_022e3300:
  uVar17 = 2;
LAB_022e3304:
  return uVar17;
}

