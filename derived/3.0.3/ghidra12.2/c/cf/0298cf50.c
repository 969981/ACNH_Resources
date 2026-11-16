
void FUN_0298cf50(long param_1,ulong *param_2)

{
  short *psVar1;
  MutexType *pMVar2;
  byte *pbVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  short sVar8;
  byte bVar9;
  bool bVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined1 uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  uint uVar24;
  undefined8 *puVar25;
  uint *puVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint local_164;
  uint local_10c;
  uint uStack_108;
  uint local_104;
  undefined8 local_100;
  float local_f8;
  uint local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  ulong local_e0;
  char *local_d8;
  uint local_d0;
  uint local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  
  local_e0 = param_2[2];
  local_d8 = (char *)param_2[3];
  local_f0 = *param_2;
  local_e8 = param_2[1];
  *(char *)(param_1 + 0xb0) = (char)local_f0;
  lVar12 = DAT_055f6860;
  uVar24 = *(uint *)(FUN_0011e5e0 + DAT_055f6860);
  if ((uVar24 != 0xffffffff) && (*(long *)(DAT_055f6860 + 0x11e610) != 0)) {
    if (*(uint *)(DAT_055f6860 + 0x11e608) <= uVar24) {
      uVar24 = 0;
    }
    lVar21 = *(long *)(DAT_055f6860 + 0x11e610) + (long)(int)uVar24 * 0x80;
    uVar19 = *(uint *)(lVar21 + 8);
    uVar24 = uVar19 - 0x20;
    if ((int)uVar19 < 0x20) {
      uVar24 = uVar19;
    }
    uVar20 = 0x1ffbf;
    if ((int)uVar19 < 0x20) {
      uVar20 = 0xfffffff8;
    }
    *(byte *)(param_1 + 0xb1) = (byte)(uVar20 >> (ulong)(uVar24 & 0x1f)) & 1;
    uVar24 = *(uint *)(lVar21 + 8);
    local_c8 = (undefined **)CONCAT44(local_c8._4_4_,uVar24);
    pbVar3 = (byte *)(*(long *)PTR_DAT_04bb28b0 + 0x1f60) + (ulong)uVar24 * 0x50;
    if (0x32 < uVar24) {
      pbVar3 = (byte *)(*(long *)PTR_DAT_04bb28b0 + 0x1f60);
    }
    *(bool *)(param_1 + 0xb2) = pbVar3[1] == 1;
    *(byte *)(param_1 + 0x743b) = *pbVar3 >> 5 & 1;
  }
  if ((local_f0 & 0xff) == 0) {
LAB_0298d108:
    local_164 = 0;
  }
  else {
    iVar5 = *(int *)(lVar12 + 0x7c0);
    if (iVar5 == -1) {
LAB_0298d0d8:
      iVar5 = *(int *)(DAT_055f6860 + 0x7c0);
      if (iVar5 == -1) goto LAB_0298d108;
      if (iVar5 == 0) {
        lVar12 = FUN_0299a520(DAT_055f6860 + 0x7c8,(long)&local_e8 + 4,4);
        if (lVar12 == 0) goto LAB_0298d108;
      }
      else {
        uVar24 = iVar5 - 1;
        if (*(uint *)(DAT_055f6860 + 0x2e70) <= uVar24) {
          uVar24 = 0;
        }
        lVar12 = *(long *)(DAT_055f6860 + 0x2e78) + (long)(int)uVar24 * 0x228 + 0x130;
      }
      local_164 = ~*(uint *)(lVar12 + 0xc) >> 0x1f;
    }
    else {
      if (iVar5 == 0) {
        lVar12 = FUN_0299a520(lVar12 + 0x7c8,(long)&local_e8 + 4,2);
        if (lVar12 == 0) goto LAB_0298d0d8;
        iVar5 = *(int *)(lVar12 + 0xc);
      }
      else {
        uVar24 = iVar5 - 1;
        if (*(uint *)(lVar12 + 0x2e70) <= uVar24) {
          uVar24 = 0;
        }
        iVar5 = *(int *)(*(long *)(lVar12 + 0x2e78) + (long)(int)uVar24 * 0x228 + 0x3c);
      }
      if (iVar5 < 0) goto LAB_0298d0d8;
      local_164 = 1;
    }
  }
  uVar24 = *(uint *)(DAT_055f6860 + 0x728);
  if ((uVar24 == 0xffffffff) || (*(long *)(DAT_055f6860 + 0x778) == 0)) {
LAB_0298d184:
    uVar24 = *(uint *)(DAT_055f6860 + 0x72c);
    if ((uVar24 == 0xffffffff) || (*(long *)(DAT_055f6860 + 0x778) == 0)) {
      uVar24 = 0;
    }
    else {
      if (*(uint *)(DAT_055f6860 + 0x770) <= uVar24) {
        uVar24 = 0;
      }
      uVar24 = ~*(uint *)(*(long *)(DAT_055f6860 + 0x778) + (long)(int)uVar24 * 400 + 0xc) >> 0x1f;
    }
  }
  else {
    if (*(uint *)(DAT_055f6860 + 0x770) <= uVar24) {
      uVar24 = 0;
    }
    if (*(int *)(*(long *)(DAT_055f6860 + 0x778) + (long)(int)uVar24 * 400 + 0xc) < 0)
    goto LAB_0298d184;
    uVar24 = 1;
  }
  if (*(char *)(param_1 + 0x7439) == '\0') {
    if (*(char *)(param_1 + 0x743a) != '\0') {
      uVar18 = 0;
      goto LAB_0298d1ec;
    }
  }
  else if (*(char *)(param_1 + 0x743a) == '\0') {
    uVar18 = 1;
LAB_0298d1ec:
    *(undefined1 *)(param_1 + 0x7438) = uVar18;
  }
  *(undefined2 *)(param_1 + 0x7439) = 0;
  local_f4 = 0xffffffff;
  lVar12 = *(long *)(param_1 + 0x1790);
  if ((lVar12 == 0) || (*(int *)(param_1 + 0x1798) != *(int *)(lVar12 + 0x10))) {
    *(undefined1 *)(param_1 + 0x1778) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x1778) = 1;
    *(byte *)(param_1 + 0x1779) = *(byte *)(lVar12 + 0x1d0) >> 5 & 1;
    *(undefined2 *)(param_1 + 0x177a) = *(undefined2 *)(lVar12 + 0x1d2);
    *(uint *)(param_1 + 0x177c) = (uint)*(ushort *)(lVar12 + 0xe8);
    *(undefined4 *)(param_1 + 0x1780) = *(undefined4 *)(*(long *)(lVar12 + 0xd8) + 0x38);
    *(undefined8 *)(param_1 + 0x1788) = *(undefined8 *)(lVar12 + 0x1b8);
  }
  uVar19 = *(uint *)(param_1 + 0xf0);
  if (0 < (int)uVar19) {
    *(undefined4 *)(param_1 + 0x1580) = 0;
    *(undefined8 *)(param_1 + 0x13c) = 0xff7fffff;
    uVar20 = uVar19 & 3;
    *(undefined8 *)(param_1 + 0x15c) = 0;
    *(undefined4 *)(param_1 + 0x164) = 0;
    *(undefined8 *)(param_1 + 0x144) = 0x7f7fffff7f7fffff;
    *(undefined8 *)(param_1 + 0x14c) = 0x7f7fffff7f7fffff;
    *(undefined8 *)(param_1 + 0x154) = 0x3f8000007f7fffff;
    if (3 < uVar19) {
      uVar19 = uVar19 & 0xfffffffc;
      do {
        uVar19 = uVar19 - 4;
        *(undefined8 *)(param_1 + 0x168) = 0;
        *(undefined8 *)(param_1 + 0x170) = 0;
      } while (uVar19 != 0);
    }
    for (; uVar20 != 0; uVar20 = uVar20 - 1) {
      *(undefined8 *)(param_1 + 0x168) = 0;
      *(undefined8 *)(param_1 + 0x170) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x1774) = 0;
  *(undefined4 *)(param_1 + 0x16bc) = 0;
  *(undefined2 *)(param_1 + 0x16c0) = 0xffff;
  local_b0 = 0;
  local_c8 = (undefined **)0x0;
  local_c0 = 0;
  local_b8 = 0;
  FUN_02a078bc(param_1 + 0xf8,&local_c8);
  lVar12 = *(long *)(param_1 + 0x2e78);
  if ((lVar12 == 0) || (*(int *)(param_1 + 0x2e80) != *(int *)(lVar12 + 0x10))) {
    *(undefined1 *)(param_1 + 0x2e60) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x2e60) = 1;
    *(byte *)(param_1 + 0x2e61) = *(byte *)(lVar12 + 0x1d0) >> 5 & 1;
    *(undefined2 *)(param_1 + 0x2e62) = *(undefined2 *)(lVar12 + 0x1d2);
    *(uint *)(param_1 + 0x2e64) = (uint)*(ushort *)(lVar12 + 0xe8);
    *(undefined4 *)(param_1 + 0x2e68) = *(undefined4 *)(*(long *)(lVar12 + 0xd8) + 0x38);
    *(undefined8 *)(param_1 + 0x2e70) = *(undefined8 *)(lVar12 + 0x1b8);
  }
  uVar19 = *(uint *)(param_1 + 0x17d8);
  if (0 < (int)uVar19) {
    *(undefined4 *)(param_1 + 0x2c68) = 0;
    *(undefined4 *)(param_1 + 0x184c) = 0;
    *(undefined8 *)(param_1 + 0x1824) = 0xff7fffff;
    uVar20 = uVar19 & 3;
    *(undefined8 *)(param_1 + 0x1844) = 0;
    *(undefined8 *)(param_1 + 0x182c) = 0x7f7fffff7f7fffff;
    *(undefined8 *)(param_1 + 0x1834) = 0x7f7fffff7f7fffff;
    *(undefined8 *)(param_1 + 0x183c) = 0x3f8000007f7fffff;
    if (3 < uVar19) {
      uVar19 = uVar19 & 0xfffffffc;
      do {
        uVar19 = uVar19 - 4;
        *(undefined8 *)(param_1 + 0x1850) = 0;
        *(undefined8 *)(param_1 + 0x1858) = 0;
      } while (uVar19 != 0);
    }
    for (; uVar20 != 0; uVar20 = uVar20 - 1) {
      *(undefined8 *)(param_1 + 0x1850) = 0;
      *(undefined8 *)(param_1 + 0x1858) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x2e5c) = 0;
  *(undefined4 *)(param_1 + 0x2da4) = 0;
  local_b0 = 0;
  local_c8 = (undefined **)0x0;
  *(undefined2 *)(param_1 + 0x2da8) = 0xffff;
  local_c0 = 0;
  local_b8 = 0;
  FUN_02a078bc(param_1 + 0x17e0,&local_c8);
  lVar12 = *(long *)(param_1 + 0x4560);
  if ((lVar12 == 0) || (*(int *)(param_1 + 0x4568) != *(int *)(lVar12 + 0x10))) {
    *(undefined1 *)(param_1 + 0x4548) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x4548) = 1;
    *(byte *)(param_1 + 0x4549) = *(byte *)(lVar12 + 0x1d0) >> 5 & 1;
    *(undefined2 *)(param_1 + 0x454a) = *(undefined2 *)(lVar12 + 0x1d2);
    *(uint *)(param_1 + 0x454c) = (uint)*(ushort *)(lVar12 + 0xe8);
    *(undefined4 *)(param_1 + 0x4550) = *(undefined4 *)(*(long *)(lVar12 + 0xd8) + 0x38);
    *(undefined8 *)(param_1 + 0x4558) = *(undefined8 *)(lVar12 + 0x1b8);
  }
  uVar19 = *(uint *)(param_1 + 0x2ec0);
  if (0 < (int)uVar19) {
    *(undefined4 *)(param_1 + 0x4350) = 0;
    *(undefined4 *)(param_1 + 0x2f34) = 0;
    *(undefined8 *)(param_1 + 0x2f0c) = 0xff7fffff;
    uVar20 = uVar19 & 3;
    *(undefined8 *)(param_1 + 0x2f2c) = 0;
    *(undefined8 *)(param_1 + 0x2f14) = 0x7f7fffff7f7fffff;
    *(undefined8 *)(param_1 + 0x2f1c) = 0x7f7fffff7f7fffff;
    *(undefined8 *)(param_1 + 0x2f24) = 0x3f8000007f7fffff;
    if (3 < uVar19) {
      uVar19 = uVar19 & 0xfffffffc;
      do {
        uVar19 = uVar19 - 4;
        *(undefined8 *)(param_1 + 0x2f38) = 0;
        *(undefined8 *)(param_1 + 0x2f40) = 0;
      } while (uVar19 != 0);
    }
    for (; uVar20 != 0; uVar20 = uVar20 - 1) {
      *(undefined8 *)(param_1 + 0x2f38) = 0;
      *(undefined8 *)(param_1 + 0x2f40) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x4544) = 0;
  *(undefined2 *)(param_1 + 0x4490) = 0xffff;
  *(undefined4 *)(param_1 + 0x448c) = 0;
  local_b0 = 0;
  local_c8 = (undefined **)0x0;
  local_c0 = 0;
  local_b8 = 0;
  FUN_02a078bc(param_1 + 0x2ec8,&local_c8);
  lVar12 = *(long *)(param_1 + 0x5c48);
  if ((lVar12 == 0) || (*(int *)(param_1 + 0x5c50) != *(int *)(lVar12 + 0x10))) {
    *(undefined1 *)(param_1 + 0x5c30) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x5c30) = 1;
    *(byte *)(param_1 + 0x5c31) = *(byte *)(lVar12 + 0x1d0) >> 5 & 1;
    *(undefined2 *)(param_1 + 0x5c32) = *(undefined2 *)(lVar12 + 0x1d2);
    *(uint *)(param_1 + 0x5c34) = (uint)*(ushort *)(lVar12 + 0xe8);
    *(undefined4 *)(param_1 + 0x5c38) = *(undefined4 *)(*(long *)(lVar12 + 0xd8) + 0x38);
    *(undefined8 *)(param_1 + 0x5c40) = *(undefined8 *)(lVar12 + 0x1b8);
  }
  uVar19 = *(uint *)(param_1 + 0x45a8);
  if (0 < (int)uVar19) {
    *(undefined4 *)(param_1 + 0x5a38) = 0;
    *(undefined8 *)(param_1 + 0x45f4) = 0xff7fffff;
    uVar20 = uVar19 & 3;
    *(undefined8 *)(param_1 + 0x4614) = 0;
    *(undefined4 *)(param_1 + 0x461c) = 0;
    *(undefined8 *)(param_1 + 0x45fc) = 0x7f7fffff7f7fffff;
    *(undefined8 *)(param_1 + 0x4604) = 0x7f7fffff7f7fffff;
    *(undefined8 *)(param_1 + 0x460c) = 0x3f8000007f7fffff;
    if (3 < uVar19) {
      uVar19 = uVar19 & 0xfffffffc;
      do {
        uVar19 = uVar19 - 4;
        *(undefined8 *)(param_1 + 0x4620) = 0;
        *(undefined8 *)(param_1 + 0x4628) = 0;
      } while (uVar19 != 0);
    }
    for (; uVar20 != 0; uVar20 = uVar20 - 1) {
      *(undefined8 *)(param_1 + 0x4620) = 0;
      *(undefined8 *)(param_1 + 0x4628) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x5c2c) = 0;
  *(undefined2 *)(param_1 + 0x5b78) = 0xffff;
  *(undefined4 *)(param_1 + 0x5b74) = 0;
  local_b0 = 0;
  local_c8 = (undefined **)0x0;
  local_c0 = 0;
  local_b8 = 0;
  FUN_02a078bc(param_1 + 0x45b0,&local_c8);
  lVar12 = *(long *)(param_1 + 0x7330);
  if ((lVar12 == 0) || (*(int *)(param_1 + 0x7338) != *(int *)(lVar12 + 0x10))) {
    *(undefined1 *)(param_1 + 0x7318) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x7318) = 1;
    *(byte *)(param_1 + 0x7319) = *(byte *)(lVar12 + 0x1d0) >> 5 & 1;
    *(undefined2 *)(param_1 + 0x731a) = *(undefined2 *)(lVar12 + 0x1d2);
    *(uint *)(param_1 + 0x731c) = (uint)*(ushort *)(lVar12 + 0xe8);
    *(undefined4 *)(param_1 + 0x7320) = *(undefined4 *)(*(long *)(lVar12 + 0xd8) + 0x38);
    *(undefined8 *)(param_1 + 0x7328) = *(undefined8 *)(lVar12 + 0x1b8);
  }
  uVar19 = *(uint *)(param_1 + 0x5c90);
  if (0 < (int)uVar19) {
    *(undefined4 *)(param_1 + 0x7120) = 0;
    *(undefined8 *)(param_1 + 0x5cdc) = 0xff7fffff;
    uVar20 = uVar19 & 3;
    *(undefined8 *)(param_1 + 0x5cfc) = 0;
    *(undefined4 *)(param_1 + 0x5d04) = 0;
    *(undefined8 *)(param_1 + 0x5ce4) = 0x7f7fffff7f7fffff;
    *(undefined8 *)(param_1 + 0x5cec) = 0x7f7fffff7f7fffff;
    *(undefined8 *)(param_1 + 0x5cf4) = 0x3f8000007f7fffff;
    if (3 < uVar19) {
      uVar19 = uVar19 & 0xfffffffc;
      do {
        uVar19 = uVar19 - 4;
        *(undefined8 *)(param_1 + 0x5d08) = 0;
        *(undefined8 *)(param_1 + 0x5d10) = 0;
      } while (uVar19 != 0);
    }
    for (; uVar20 != 0; uVar20 = uVar20 - 1) {
      *(undefined8 *)(param_1 + 0x5d08) = 0;
      *(undefined8 *)(param_1 + 0x5d10) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x7314) = 0;
  *(undefined2 *)(param_1 + 0x7260) = 0xffff;
  *(undefined4 *)(param_1 + 0x725c) = 0;
  local_b0 = 0;
  local_c8 = (undefined **)0x0;
  local_c0 = 0;
  local_b8 = 0;
  FUN_02a078bc(param_1 + 0x5c98,&local_c8);
  lVar12 = *(long *)PTR_DAT_04bb26a8;
  if (*(long *)(*(long *)(lVar12 + 0xb4510) + 0x50) == 0) {
    fVar31 = 0.0;
    fVar32 = 0.0;
    fVar33 = 0.0;
  }
  else {
    fVar31 = *(float *)(lVar12 + 0xb44d4);
    fVar32 = *(float *)(lVar12 + 0xb44d8);
    fVar33 = *(float *)(lVar12 + 0xb44dc);
  }
  lVar12 = param_1 + 0xb8;
  puVar17 = (undefined8 *)(param_1 + 0x73f8);
  if (*(char *)(param_1 + 0xb1) != '\0') {
    puVar17 = (undefined8 *)(param_1 + 0x7418);
  }
  if (*local_d8 == '\0') {
    nn::os::LockMutex((MutexType *)(param_1 + 0x7360));
    uVar22 = 0;
    bVar9 = 0;
    fVar29 = 3.4028235e+38;
    do {
      lVar21 = param_1 + 0x7380 + uVar22 * 0x18;
      if (*(long *)(lVar21 + 8) != lVar21) {
        lVar23 = (long)*(int *)(lVar21 + 0x14);
        lVar13 = *(long *)(lVar21 + 8) - lVar23;
        do {
          local_10c = *(uint *)(lVar13 + 0x24);
          local_100 = 0;
          local_f8 = 0.0;
          uStack_108 = *(uint *)(lVar13 + 0x34);
          cVar7 = *(char *)(lVar13 + 0x11);
          uVar19 = *(uint *)(lVar13 + 0x14);
          local_104 = *(uint *)(lVar13 + 0x44);
          lVar14 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0xb4510);
          local_c8 = *(undefined ***)(lVar14 + 0x130);
          local_c0._0_4_ = (int)*(undefined8 *)(lVar14 + 0x138);
          FUN_02a1e144(lVar14,&local_100,&local_10c,&local_c8,0);
          local_10c = (uint)uVar22;
          local_c8 = (undefined **)
                     CONCAT44(*(undefined4 *)(lVar13 + 0x34),*(undefined4 *)(lVar13 + 0x24));
          local_d0 = (uint)local_e8;
          if ((char)local_f0 == '\0') {
            local_d0 = 0xffffffff;
          }
          local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar13 + 0x44));
          uVar30 = 0x3e3645a2;
          puVar25 = puVar17;
          switch(uVar19) {
          case 0:
            break;
          case 1:
            uVar30 = 0x3ea1cac1;
            puVar25 = puVar17 + 1;
            break;
          case 2:
            uVar30 = 0x3f0fdf3b;
            puVar25 = puVar17 + 2;
            break;
          case 3:
            uVar30 = 0x3f800000;
            puVar25 = puVar17 + 3;
            break;
          default:
            uVar30 = 0x3f0fdf3b;
            uVar16 = 0;
            goto LAB_0298db10;
          }
          uVar16 = *puVar25;
LAB_0298db10:
          if (*(char *)(param_1 + 0x7438) != '\0') {
            uVar30 = 0x3f800000;
          }
          if ((local_d0 != 0xffffffff) && (local_10c != local_d0)) {
            uVar30 = 0;
          }
          lVar14 = lVar13 + 0x18;
          if (*(char *)(param_1 + 0x7438) != '\0') {
            uVar16 = puVar17[3];
          }
          if (cVar7 != '\0') {
            lVar14 = 0;
          }
          lVar4 = lVar12 + (uVar22 & 0xffffffff) * 0x16e8;
          if (4 < local_10c) {
            lVar4 = lVar12;
          }
          local_cc = uVar19;
          FUN_02a06e90(uVar30,lVar4 + 0x20,&local_c8,uVar16,lVar14,0);
          fVar27 = (local_100._4_4_ - fVar32) * (local_100._4_4_ - fVar32) +
                   ((float)local_100 - fVar31) * ((float)local_100 - fVar31) +
                   (local_f8 - fVar33) * (local_f8 - fVar33);
          if (fVar27 < fVar29) {
            fVar29 = fVar27;
            local_f4 = uVar19;
          }
          lVar13 = *(long *)(lVar13 + lVar23 + 8) - lVar23;
        } while (lVar13 != lVar21 - lVar23);
        bVar9 = 1;
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != 5);
    fVar31 = SQRT(fVar29);
    if (NAN(fVar31)) {
      fVar31 = sqrtf(fVar29);
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x7360));
  }
  else {
    fVar29 = 3.4028235e+38;
    uVar22 = 0;
    bVar9 = 0;
    do {
      if (*(int *)(local_d8 + uVar22 * 0x1e60 + 8) != 0) {
        puVar25 = *(undefined8 **)(local_d8 + uVar22 * 0x1e60 + 0x10);
        lVar21 = (long)*(int *)(local_d8 + uVar22 * 0x1e60 + 8) << 3;
        do {
          puVar26 = (uint *)*puVar25;
          local_100 = 0;
          local_f8 = 0.0;
          uVar35 = puVar26[4];
          uVar36 = puVar26[8];
          uVar34 = puVar26[0xc];
          uVar19 = *puVar26;
          uVar20 = puVar26[0xd];
          lVar13 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0xb4510);
          local_c8 = *(undefined ***)(lVar13 + 0x130);
          local_10c = uVar35;
          uStack_108 = uVar36;
          local_104 = uVar34;
          local_c0._0_4_ = (int)*(undefined8 *)(lVar13 + 0x138);
          FUN_02a1e144(lVar13,&local_100,&local_10c,&local_c8,0);
          local_10c = (uint)uVar22;
          local_c8 = (undefined **)CONCAT44(uVar36,uVar35);
          local_c0 = CONCAT44(local_c0._4_4_,uVar34);
          local_d0 = (uint)local_e8;
          if ((char)local_f0 == '\0') {
            local_d0 = 0xffffffff;
          }
          uVar30 = 0x3e3645a2;
          puVar15 = puVar17;
          switch(uVar19) {
          case 0:
            break;
          case 1:
            uVar30 = 0x3ea1cac1;
            puVar15 = puVar17 + 1;
            break;
          case 2:
            uVar30 = 0x3f0fdf3b;
            puVar15 = puVar17 + 2;
            break;
          case 3:
            uVar30 = 0x3f800000;
            puVar15 = puVar17 + 3;
            break;
          default:
            uVar30 = 0x3f0fdf3b;
            uVar16 = 0;
            goto LAB_0298d8b0;
          }
          uVar16 = *puVar15;
LAB_0298d8b0:
          if (*(char *)(param_1 + 0x7438) != '\0') {
            uVar30 = 0x3f800000;
          }
          if ((local_d0 != 0xffffffff) && (local_10c != local_d0)) {
            uVar30 = 0;
          }
          puVar26 = puVar26 + 1;
          if (*(char *)(param_1 + 0x7438) != '\0') {
            uVar16 = puVar17[3];
          }
          if ((char)uVar20 != '\0') {
            puVar26 = (uint *)0x0;
          }
          lVar13 = lVar12 + (uVar22 & 0xffffffff) * 0x16e8;
          if (4 < local_10c) {
            lVar13 = lVar12;
          }
          local_cc = uVar19;
          FUN_02a06e90(uVar30,lVar13 + 0x20,&local_c8,uVar16,puVar26,0);
          fVar27 = (local_100._4_4_ - fVar32) * (local_100._4_4_ - fVar32) +
                   ((float)local_100 - fVar31) * ((float)local_100 - fVar31) +
                   (local_f8 - fVar33) * (local_f8 - fVar33);
          if (fVar27 < fVar29) {
            fVar29 = fVar27;
            local_f4 = uVar19;
          }
          puVar25 = puVar25 + 1;
          lVar21 = lVar21 + -8;
        } while (lVar21 != 0);
        bVar9 = 1;
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != 5);
    fVar31 = SQRT(fVar29);
    if (NAN(fVar31)) {
      fVar31 = sqrtf(fVar29);
    }
  }
  uVar30 = DAT_055dfc2c;
  if ((char)local_f0 == '\0') {
    uVar28 = 0;
LAB_0298dc3c:
    fVar33 = *(float *)(param_1 + 0xd4) + -0.11111111;
    fVar32 = 0.0;
    if (0.0 <= fVar33) {
      fVar32 = fVar33;
    }
  }
  else {
    if (local_f0._4_4_ < 4) {
      uVar28 = *(undefined4 *)(&DAT_041027f0 + (long)(int)local_f0._4_4_ * 4);
    }
    else {
      uVar28 = 0x3f0fdf3b;
    }
    if (local_164 == 0) {
      uVar28 = 0;
    }
    if ((uint)local_e8 != 0) goto LAB_0298dc3c;
    *(undefined4 *)(param_1 + 0xd0) = uVar28;
    fVar33 = *(float *)(param_1 + 0xd4) + 0.11111111;
    fVar32 = 1.0;
    if (fVar33 <= 1.0) {
      fVar32 = fVar33;
    }
  }
  *(float *)(param_1 + 0xd4) = fVar32;
  local_c8 = (undefined **)CONCAT44(uVar30,0x3c23d70a);
  local_c0 = CONCAT44(uVar30,0x3c23d70a);
  local_b8 = CONCAT44(uVar30,0x3c23d70a);
  FUN_02a069d0(param_1 + 0xd8,&local_c8);
  uVar19 = uVar24 ^ 1;
  if (*(int *)(param_1 + 0x1774) == 0) {
    uVar19 = 1;
  }
  if (uVar19 == 0) {
    fVar33 = *(float *)(param_1 + 0x13c);
    *(bool *)(param_1 + 0xb8) = 0.31600013 < *(float *)(param_1 + 0x158);
    fVar32 = -3.4028235e+38;
    if (-3.4028235e+38 < fVar33) {
      lVar12 = *(long *)(param_1 + 0xc0);
      if (lVar12 != 0) {
        uVar30 = *(undefined4 *)(param_1 + 0x164);
        *(undefined8 *)(lVar12 + 0xc0) = *(undefined8 *)(param_1 + 0x15c);
        *(undefined4 *)(lVar12 + 200) = uVar30;
        *(ushort *)(lVar12 + 0x98) = *(ushort *)(lVar12 + 0x98) | 0x200;
        *(ushort *)(lVar12 + 0x9a) = *(ushort *)(lVar12 + 0x9a) | 0x200;
      }
      fVar32 = fVar33;
    }
  }
  else {
    fVar32 = -3.4028235e+38;
  }
  uVar30 = DAT_055dfc2c;
  if (((char)local_f0 == '\0') || ((uint)local_e8 != 1)) {
    fVar29 = *(float *)(param_1 + 0x17bc) + -0.11111111;
    fVar33 = 0.0;
    if (0.0 <= fVar29) {
      fVar33 = fVar29;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x17b8) = uVar28;
    fVar29 = *(float *)(param_1 + 0x17bc) + 0.11111111;
    fVar33 = 1.0;
    if (fVar29 <= 1.0) {
      fVar33 = fVar29;
    }
  }
  *(float *)(param_1 + 0x17bc) = fVar33;
  local_c8 = (undefined **)CONCAT44(uVar30,0x3c23d70a);
  local_c0 = CONCAT44(uVar30,0x3c23d70a);
  local_b8 = CONCAT44(uVar30,0x3c23d70a);
  FUN_02a069d0(param_1 + 0x17c0,&local_c8);
  uVar19 = uVar24 ^ 1;
  if (*(int *)(param_1 + 0x2e5c) == 0) {
    uVar19 = 1;
  }
  if (uVar19 == 0) {
    fVar33 = *(float *)(param_1 + 0x1824);
    *(bool *)(param_1 + 0x17a0) = 0.31600013 < *(float *)(param_1 + 0x1840);
    if (fVar32 < fVar33) {
      lVar12 = *(long *)(param_1 + 0x17a8);
      if (lVar12 != 0) {
        uVar30 = *(undefined4 *)(param_1 + 0x184c);
        *(undefined8 *)(lVar12 + 0xc0) = *(undefined8 *)(param_1 + 0x1844);
        *(undefined4 *)(lVar12 + 200) = uVar30;
        *(ushort *)(lVar12 + 0x98) = *(ushort *)(lVar12 + 0x98) | 0x200;
        *(ushort *)(lVar12 + 0x9a) = *(ushort *)(lVar12 + 0x9a) | 0x200;
      }
      fVar32 = fVar33;
    }
  }
  uVar30 = DAT_055dfc2c;
  if (((char)local_f0 == '\0') || ((uint)local_e8 != 2)) {
    fVar29 = *(float *)(param_1 + 0x2ea4) + -0.11111111;
    fVar33 = 0.0;
    if (0.0 <= fVar29) {
      fVar33 = fVar29;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x2ea0) = uVar28;
    fVar29 = *(float *)(param_1 + 0x2ea4) + 0.11111111;
    fVar33 = 1.0;
    if (fVar29 <= 1.0) {
      fVar33 = fVar29;
    }
  }
  *(float *)(param_1 + 0x2ea4) = fVar33;
  local_c8 = (undefined **)CONCAT44(uVar30,0x3c23d70a);
  local_c0 = CONCAT44(uVar30,0x3c23d70a);
  local_b8 = CONCAT44(uVar30,0x3c23d70a);
  FUN_02a069d0(param_1 + 0x2ea8,&local_c8);
  uVar19 = uVar24 ^ 1;
  if (*(int *)(param_1 + 0x4544) == 0) {
    uVar19 = 1;
  }
  if (uVar19 == 0) {
    fVar33 = *(float *)(param_1 + 0x2f0c);
    *(bool *)(param_1 + 0x2e88) = 0.31600013 < *(float *)(param_1 + 0x2f28);
    if (fVar32 < fVar33) {
      lVar12 = *(long *)(param_1 + 0x2e90);
      if (lVar12 != 0) {
        uVar30 = *(undefined4 *)(param_1 + 0x2f34);
        *(undefined8 *)(lVar12 + 0xc0) = *(undefined8 *)(param_1 + 0x2f2c);
        *(undefined4 *)(lVar12 + 200) = uVar30;
        *(ushort *)(lVar12 + 0x98) = *(ushort *)(lVar12 + 0x98) | 0x200;
        *(ushort *)(lVar12 + 0x9a) = *(ushort *)(lVar12 + 0x9a) | 0x200;
      }
      fVar32 = fVar33;
    }
  }
  uVar30 = DAT_055dfc2c;
  if (((char)local_f0 == '\0') || ((uint)local_e8 != 3)) {
    fVar29 = *(float *)(param_1 + 0x458c) + -0.11111111;
    fVar33 = 0.0;
    if (0.0 <= fVar29) {
      fVar33 = fVar29;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x4588) = uVar28;
    fVar29 = *(float *)(param_1 + 0x458c) + 0.11111111;
    fVar33 = 1.0;
    if (fVar29 <= 1.0) {
      fVar33 = fVar29;
    }
  }
  *(float *)(param_1 + 0x458c) = fVar33;
  local_c8 = (undefined **)CONCAT44(uVar30,0x3c23d70a);
  local_c0 = CONCAT44(uVar30,0x3c23d70a);
  local_b8 = CONCAT44(uVar30,0x3c23d70a);
  FUN_02a069d0(param_1 + 0x4590,&local_c8);
  uVar19 = uVar24 ^ 1;
  if (*(int *)(param_1 + 0x5c2c) == 0) {
    uVar19 = 1;
  }
  if (uVar19 == 0) {
    fVar33 = *(float *)(param_1 + 0x45f4);
    *(bool *)(param_1 + 0x4570) = 0.31600013 < *(float *)(param_1 + 0x4610);
    if (fVar32 < fVar33) {
      lVar12 = *(long *)(param_1 + 0x4578);
      if (lVar12 != 0) {
        uVar30 = *(undefined4 *)(param_1 + 0x461c);
        *(undefined8 *)(lVar12 + 0xc0) = *(undefined8 *)(param_1 + 0x4614);
        *(undefined4 *)(lVar12 + 200) = uVar30;
        *(ushort *)(lVar12 + 0x98) = *(ushort *)(lVar12 + 0x98) | 0x200;
        *(ushort *)(lVar12 + 0x9a) = *(ushort *)(lVar12 + 0x9a) | 0x200;
      }
      fVar32 = fVar33;
    }
  }
  local_c8._4_4_ = DAT_055dfc2c;
  if (((char)local_f0 == '\0') || ((uint)local_e8 != 4)) {
    fVar29 = *(float *)(param_1 + 0x5c74) + -0.11111111;
    fVar33 = 0.0;
    if (0.0 <= fVar29) {
      fVar33 = fVar29;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x5c70) = uVar28;
    fVar29 = *(float *)(param_1 + 0x5c74) + 0.11111111;
    fVar33 = 1.0;
    if (fVar29 <= 1.0) {
      fVar33 = fVar29;
    }
  }
  *(float *)(param_1 + 0x5c74) = fVar33;
  local_c8._0_4_ = 0x3c23d70a;
  local_c0 = CONCAT44(local_c8._4_4_,0x3c23d70a);
  local_b8 = CONCAT44(local_c8._4_4_,0x3c23d70a);
  FUN_02a069d0(param_1 + 0x5c78,&local_c8);
  uVar24 = uVar24 ^ 1;
  if (*(int *)(param_1 + 0x7314) == 0) {
    uVar24 = 1;
  }
  if (((uVar24 == 0) &&
      (*(bool *)(param_1 + 0x5c58) = 0.31600013 < *(float *)(param_1 + 0x5cf8),
      fVar32 < *(float *)(param_1 + 0x5cdc))) && (lVar12 = *(long *)(param_1 + 0x5c60), lVar12 != 0)
     ) {
    uVar30 = *(undefined4 *)(param_1 + 0x5d04);
    *(undefined8 *)(lVar12 + 0xc0) = *(undefined8 *)(param_1 + 0x5cfc);
    *(ushort *)(lVar12 + 0x98) = *(ushort *)(lVar12 + 0x98) | 0x200;
    *(undefined4 *)(lVar12 + 200) = uVar30;
    *(ushort *)(lVar12 + 0x9a) = *(ushort *)(lVar12 + 0x9a) | 0x200;
  }
  lVar12 = DAT_055f6860;
  psVar1 = (short *)(DAT_055f6860 + 0x895ea);
  uVar24 = *(uint *)(FUN_0011e5e0 + DAT_055f6860);
  if ((uVar24 == 0xffffffff) || (*(long *)(DAT_055f6860 + 0x11e610) == 0)) {
    uVar24 = 0;
  }
  else {
    if (*(uint *)(DAT_055f6860 + 0x11e608) <= uVar24) {
      uVar24 = 0;
    }
    local_c8._0_4_ = *(uint *)(*(long *)(DAT_055f6860 + 0x11e610) + (long)(int)uVar24 * 0x80 + 8);
    uVar24 = (uint)local_c8 - 0x20;
    if ((int)(uint)local_c8 < 0x20) {
      uVar24 = (uint)local_c8;
    }
    uVar19 = 0x1ffbf;
    if ((int)(uint)local_c8 < 0x20) {
      uVar19 = 0xfffffff8;
    }
    uVar24 = uVar19 >> (ulong)(uVar24 & 0x1f) & 1;
  }
  pMVar2 = (MutexType *)(DAT_055f6860 + 0x89660);
  nn::os::LockMutex(pMVar2);
  sVar8 = *psVar1;
  iVar5 = *(int *)(lVar12 + 0x89620);
  iVar6 = *(int *)(lVar12 + 0x8962c);
  nn::os::UnlockMutex(pMVar2);
  if (((uVar24 == 0) && (iVar5 != sVar8)) && (iVar6 != sVar8)) {
    fVar32 = 0.0;
    if (*(char *)(param_1 + 8) != '\0') {
      if (local_f4 < 4) {
        fVar32 = *(float *)(&DAT_04102520 + (long)(int)local_f4 * 4);
      }
      if (fVar31 < fVar32) {
        return;
      }
      goto LAB_0298e29c;
    }
    if (local_f4 < 4) {
      fVar32 = *(float *)(&DAT_04102520 + (long)(int)local_f4 * 4);
    }
    if (fVar32 <= fVar31) {
      return;
    }
    puVar17 = (undefined8 *)(param_1 + 0x28);
    goto LAB_0298e308;
  }
  uVar24 = *(uint *)(DAT_055f6860 + 0x728);
  if ((uVar24 == 0xffffffff) || (*(long *)(DAT_055f6860 + 0x778) == 0)) {
LAB_0298e24c:
    uVar24 = *(uint *)(DAT_055f6860 + 0x72c);
    if ((uVar24 == 0xffffffff) || (*(long *)(DAT_055f6860 + 0x778) == 0)) {
      if (*(char *)(param_1 + 8) == '\0') {
        return;
      }
LAB_0298e29c:
      FUN_02a55844(param_1 + 0x10,0);
      puVar11 = PTR_DAT_04c4b988;
      *(undefined1 *)(param_1 + 8) = 0;
      *(undefined **)(param_1 + 0x18) = puVar11;
      return;
    }
    if (*(uint *)(DAT_055f6860 + 0x770) <= uVar24) {
      uVar24 = 0;
    }
    bVar10 = (bool)(0 < *(int *)(*(long *)(DAT_055f6860 + 0x778) + (long)(int)uVar24 * 400 + 0xc) &
                   bVar9);
    if (*(char *)(param_1 + 8) != '\0') {
      if (bVar10) {
        return;
      }
      goto LAB_0298e29c;
    }
    if (!bVar10) {
      return;
    }
  }
  else {
    if (*(uint *)(DAT_055f6860 + 0x770) <= uVar24) {
      uVar24 = 0;
    }
    if (!(bool)(0 < *(int *)(*(long *)(DAT_055f6860 + 0x778) + (long)(int)uVar24 * 400 + 0xc) &
               bVar9)) goto LAB_0298e24c;
    if (*(char *)(param_1 + 8) != '\0') {
      return;
    }
  }
  puVar17 = (undefined8 *)(param_1 + 0x60);
LAB_0298e308:
  local_c8 = &PTR_LAB_048f9770;
  local_c0 = *puVar17;
  FUN_02a55754(0x3f800000,&local_c8,0,local_f0 & 0xff);
  *(undefined8 *)(param_1 + 0x18) = local_c0;
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}

