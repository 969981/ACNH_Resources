
bool FUN_0233dcb4(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  short sVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined1 uVar17;
  uint *puVar18;
  uint *puVar19;
  byte bVar20;
  undefined4 uVar21;
  long lVar22;
  short *psVar23;
  long lVar24;
  uint local_1b8;
  byte local_1b4;
  short local_1b0;
  undefined1 local_1ae;
  undefined1 local_1ad;
  undefined4 local_1ac;
  undefined *local_1a8;
  char *pcStack_1a0;
  undefined4 local_198;
  undefined8 local_194;
  undefined8 local_18c;
  undefined8 local_184;
  undefined *local_178;
  undefined1 *puStack_170;
  undefined4 local_168;
  undefined1 local_164 [127];
  undefined1 local_e5;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined1 local_db;
  undefined8 local_d8;
  byte local_d0;
  uint local_c4;
  undefined *local_c0;
  short local_b8;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined *local_a8;
  short local_a0;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_78;
  
  puVar6 = PTR_DAT_04bb43c0;
  local_198 = 0;
  local_168 = 0x80;
  plVar1 = (long *)(param_1 + 0xbdd0);
  local_e5 = 0;
  local_1a8 = (undefined *)0xffffffff00000000;
  pcStack_1a0 = (char *)0x0;
  local_194 = 0x3f800000;
  puStack_170 = local_164;
  local_164[0] = 0;
  local_178 = PTR_DAT_04bb2d88 + 0x10;
  local_d8 = 0;
  local_db = 0;
  local_18c = 0;
  local_184 = 0;
  local_e0 = 7;
  local_dc = *(undefined1 *)(*(long *)(param_1 + 0x48) + 0x224);
  lVar22 = *plVar1;
  local_d0 = (byte)(*(uint *)(*(long *)(param_1 + 0x48) + 0x248) >> 1) & 1;
  if (*(char *)(lVar22 + 0x1d5) == '\0') {
LAB_0233dde0:
    psVar23 = (short *)(lVar22 + 0xd4);
  }
  else {
    lVar24 = *(long *)PTR_DAT_04bb43c0;
    psVar23 = (short *)(lVar22 + 0xcc);
    uVar7 = FUN_0277d6c4(psVar23);
    if (*(long *)puVar6 == 0) {
LAB_0233ddbc:
      iVar16 = FUN_0277d6c4(psVar23);
      if (iVar16 != 0xfffd) goto LAB_0233dde0;
      psVar23 = (short *)PTR_DAT_04bb37e0;
    }
    else {
      lVar24 = *(long *)(lVar24 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
      if ((*(uint *)(lVar24 + 0x1d8) <= uVar7) ||
         (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_0233ddbc;
    }
  }
  sVar5 = *psVar23;
  uVar3 = (undefined1)psVar23[1];
  uVar4 = *(undefined1 *)((long)psVar23 + 3);
  uVar21 = *(undefined4 *)(psVar23 + 2);
  if (**(char **)(param_1 + 0x5fa8) == '\0') {
    if (*(char *)(param_1 + 0xc208) == '\0') {
      uVar7 = (uint)*(byte *)(param_1 + 0xc1a8);
    }
    else {
      uVar7 = 0x1e;
    }
  }
  else {
    uVar7 = 0x15;
  }
  if (**(char **)(param_1 + 0x5fa8) == '\0') {
    if (*(char *)(param_1 + 0xc208) == '\0') {
      uVar17 = *(undefined1 *)(param_1 + 0xc1a8);
    }
    else {
      uVar17 = 0x1e;
    }
  }
  else {
    uVar17 = 0x15;
  }
  local_1b8 = uVar7;
  local_1b0 = sVar5;
  local_1ae = uVar3;
  local_1ad = uVar4;
  local_1ac = uVar21;
  if (sVar5 == -2) {
    local_1b4 = 0;
    bVar20 = 0;
    goto LAB_0233e174;
  }
  FUN_0090a7d0(&local_a8,*(undefined8 *)PTR_DAT_04bb4868,uVar17);
  bVar20 = 0;
  if (*local_78 != '\0') {
    local_c0 = PTR_DAT_04bc0510 + 0x10;
    lVar22 = *(long *)puVar6;
    local_b0 = 0;
    local_b8 = sVar5;
    local_b6 = uVar3;
    local_b5 = uVar4;
    local_b4 = uVar21;
    uVar8 = FUN_0277d6c4(&local_b8);
    if (*(long *)puVar6 == 0) {
LAB_0233dfd0:
      local_c4 = 0x21;
    }
    else {
      lVar22 = *(long *)(lVar22 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
      if ((*(uint *)(lVar22 + 0x1d8) <= uVar8) ||
         (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_0233dfd0;
      lVar22 = *(long *)PTR_DAT_04bc0428;
      uVar8 = FUN_0277d6c4(&local_1b0);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
      if ((*(uint *)(lVar22 + 0x1d8) <= uVar8) ||
         (puVar18 = *(uint **)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar8 * 8),
         puVar18 == (uint *)0x0)) goto LAB_0233dfd0;
      uVar8 = *puVar18;
      local_c4 = 0;
      if ((uVar8 != 0) && (puVar18 != (uint *)(ulong)uVar8)) {
        puVar19 = (uint *)((long)puVar18 - (long)(ulong)uVar8);
        local_c4 = 0;
        if (*puVar19 != 0) {
          uVar8 = puVar19[1];
          if ((uVar8 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
            lVar22 = 0xc;
            if (*(char *)((long)puVar19 + 10) != '\0') {
              lVar22 = 0x1c;
            }
            lVar22 = (long)puVar19 + lVar22 + (ulong)(ushort)puVar19[2] * 8;
            if (lVar22 != 0) {
              uVar9 = 0;
              if ((ulong)uVar8 != 0) {
                uVar9 = (uint)((ulong)((long)puVar18 - lVar22) / (ulong)uVar8);
              }
              if (*puVar19 <= uVar9) {
                uVar9 = 0xffffffff;
              }
              if ((uVar9 < *(uint *)PTR_DAT_04bc0148) &&
                 (local_c4 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc0148 + 8) + (long)(int)uVar9 * 2),
                 local_c4 < 0xa2)) goto LAB_0233dfdc;
            }
          }
          local_c4 = 0;
        }
      }
    }
LAB_0233dfdc:
    bVar20 = 0x13 < local_c4 | (byte)(0x3dff >> (ulong)(local_c4 & 0x1f));
  }
  bVar20 = bVar20 & 1;
  local_a8 = PTR_DAT_04bc0510 + 0x10;
  lVar22 = *(long *)puVar6;
  local_98 = 0;
  local_1b4 = bVar20;
  local_a0 = sVar5;
  local_9e = uVar3;
  local_9d = uVar4;
  local_9c = uVar21;
  uVar8 = FUN_0277d6c4(&local_a0);
  if (*(long *)puVar6 == 0) {
LAB_0233e130:
    uVar8 = 0x21;
  }
  else {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((*(uint *)(lVar22 + 0x1d8) <= uVar8) ||
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_0233e130;
    lVar22 = *(long *)PTR_DAT_04bc0428;
    uVar8 = FUN_0277d6c4(&local_1b0);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((*(uint *)(lVar22 + 0x1d8) <= uVar8) ||
       (puVar18 = *(uint **)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar8 * 8),
       puVar18 == (uint *)0x0)) goto LAB_0233e130;
    uVar9 = *puVar18;
    uVar8 = 0;
    if ((uVar9 != 0) && (puVar18 != (uint *)(ulong)uVar9)) {
      puVar19 = (uint *)((long)puVar18 - (long)(ulong)uVar9);
      uVar8 = 0;
      if (*puVar19 != 0) {
        uVar8 = puVar19[1];
        if ((uVar8 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
          lVar22 = 0xc;
          if (*(char *)((long)puVar19 + 10) != '\0') {
            lVar22 = 0x1c;
          }
          lVar22 = (long)puVar19 + lVar22 + (ulong)(ushort)puVar19[2] * 8;
          if (lVar22 != 0) {
            uVar9 = 0;
            if ((ulong)uVar8 != 0) {
              uVar9 = (uint)((ulong)((long)puVar18 - lVar22) / (ulong)uVar8);
            }
            if (*puVar19 <= uVar9) {
              uVar9 = 0xffffffff;
            }
            if ((uVar9 < *(uint *)PTR_DAT_04bc0148) &&
               (uVar8 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0148 + 8) + (long)(int)uVar9 * 2),
               uVar8 < 0xa2)) goto LAB_0233e134;
          }
        }
        uVar8 = 0;
      }
    }
  }
LAB_0233e134:
  local_c0 = (undefined *)CONCAT44(local_c0._4_4_,uVar8);
  if (uVar8 < 0x15) {
    if ((1 << (ulong)(uVar8 & 0x1f) & 0x103800U) != 0) {
      local_1b8 = DAT_05493920;
      local_1b4 = DAT_05493924;
      uVar7 = DAT_05493920;
      bVar20 = DAT_05493924;
    }
  }
LAB_0233e174:
  if (((**(char **)(param_1 + 0x5fa8) == '\0') &&
      (lVar22 = *(long *)(param_1 + 0xbe10), *(int *)(lVar22 + 0xc) != 0)) &&
     (*(int *)(lVar22 + 8) != -1)) {
    uVar8 = 1;
    *(undefined1 *)(lVar22 + 0x3c) = 1;
    *(uint *)(lVar22 + 0x90) = uVar7;
    *(byte *)(lVar22 + 0x94) = bVar20;
    iVar16 = FUN_0234f144(lVar22,&local_1b8,&local_1a8,0,1,local_d0);
    lVar22 = *plVar1;
    uVar21 = *(undefined4 *)(lVar22 + 0xe8);
    if (iVar16 == 0) {
      *(undefined4 *)(lVar22 + 0xe8) = 1;
      uVar8 = 0;
      lVar22 = *plVar1;
    }
  }
  else {
    lVar22 = *plVar1;
    uVar8 = 1;
    uVar21 = *(undefined4 *)(lVar22 + 0xe8);
  }
  uVar7 = FUN_017322f0(lVar22,&local_1a8);
  *(undefined4 *)(*plVar1 + 0xe8) = uVar21;
  uVar9 = FUN_017322f0(*(undefined8 *)(param_1 + 0xbdd8),&local_1a8);
  uVar10 = FUN_017322f0(*(undefined8 *)(param_1 + 0xbde0),&local_1a8);
  uVar11 = FUN_017322f0(*(undefined8 *)(param_1 + 0xbde8),&local_1a8);
  uVar12 = FUN_017322f0(*(undefined8 *)(param_1 + 0xbdf0),&local_1a8);
  uVar13 = FUN_017322f0(*(undefined8 *)(param_1 + 0xbdf8),&local_1a8);
  uVar14 = FUN_017322f0(*(undefined8 *)(param_1 + 0xbe00),&local_1a8);
  uVar15 = FUN_017322f0(*(undefined8 *)(param_1 + 0xbe08),&local_1a8);
  uVar7 = uVar8 & uVar15 & uVar7 & uVar9 & uVar10 & uVar11 & uVar12 & uVar13 & uVar14;
  uVar8 = uVar7;
  if (**(char **)(param_1 + 0x5fa8) == '\0') {
    FUN_00764ff0(param_1 + 0xbe18);
    iVar16 = *(int *)(param_1 + 0xbe18);
    FUN_00764ff0((int *)(param_1 + 0xbf88));
    iVar2 = *(int *)(param_1 + 0xbf88);
    FUN_00759290((int *)(param_1 + 0xc0f8));
    uVar8 = 0;
    if ((iVar2 == 0 && iVar16 == 0) && *(int *)(param_1 + 0xc0f8) == 0) {
      uVar8 = uVar7;
    }
  }
  if (uVar8 != 0) {
    local_1a8 = PTR_DAT_04bb2020 + 0x10;
    pcStack_1a0 = "Gmo/Gmo_Player.byml";
    (**(code **)(*(long *)(param_1 + 0x16e0) + 0x108))(param_1 + 0x16e0,&local_1a8);
  }
  return uVar8 == 0;
}

