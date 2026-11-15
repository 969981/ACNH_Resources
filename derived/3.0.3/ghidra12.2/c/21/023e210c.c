
void FUN_023e210c(long param_1)

{
  byte *pbVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  ushort uVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  undefined4 *puVar11;
  float *pfVar12;
  ulong uVar13;
  uint *puVar14;
  undefined1 uVar15;
  int iVar16;
  byte *pbVar17;
  byte bVar18;
  byte bVar19;
  int iVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  byte local_a4 [4];
  int local_a0;
  float local_9c;
  float fStack_98;
  float local_94;
  ulong local_90;
  float fStack_88;
  ulong local_80;
  undefined4 local_78;
  
  fVar26 = *(float *)(param_1 + 0x1900);
  fVar25 = *(float *)(param_1 + 0x1906);
  fVar27 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
  local_9c = fVar26;
  fStack_98 = fVar27;
  local_94 = fVar25;
  lVar10 = FUN_0251e98c(1);
  puVar11 = (undefined4 *)(**(code **)(*(long *)(lVar10 + 0x1380) + 0xf0))(lVar10 + 0x1380);
  puVar4 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_90 = (ulong)(uint)local_9c;
  fStack_88 = local_94;
  local_78 = *(undefined4 *)(puVar4 + 0x50);
  local_80 = puVar4[0x4f] & 0xffffffff;
  FUN_03eb4b60(*puVar11,0x41200000,0x3e4ccccc,&local_80,&local_90);
  *(undefined4 *)(puVar4 + 0x4f) = (undefined4)local_80;
  *(undefined4 *)(puVar4 + 0x50) = local_78;
  uVar5 = *(ushort *)(param_1 + 0x190a);
  iVar20 = (uint)uVar5 * 0x10000;
  local_a0 = iVar20;
  lVar10 = FUN_0251e98c(1);
  pfVar12 = (float *)(**(code **)(*(long *)(lVar10 + 0x13b0) + 0xf0))(lVar10 + 0x13b0);
  fVar28 = *pfVar12;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_90 = CONCAT44(local_90._4_4_,10);
    local_80 = CONCAT44(local_80._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_023e2270;
LAB_023e22fc:
    if (((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) &&
       (uVar13 = FUN_02430730(param_1,0,0,0), (uVar13 & 1) != 0)) {
      return;
    }
  }
  else {
LAB_023e2270:
    plVar3 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar3 = *(long **)(param_1 + 0x4c8);
    }
    lVar10 = (**(code **)(*plVar3 + 0x148))();
    iVar16 = iVar20 - *(int *)(lVar10 + 4);
    if (0xb60b5e < iVar16 + 0x5b05afU) {
      iVar6 = 0x15555560;
      iVar20 = -0x15555560;
      iVar16 = (int)(fVar28 * (float)iVar16);
      if (iVar16 < 1) {
        iVar6 = -0x5b05b0;
      }
      else {
        iVar20 = 0x5b05b0;
      }
      iVar2 = iVar16;
      if (iVar6 <= iVar16) {
        iVar2 = iVar6;
      }
      if (iVar20 <= iVar16) {
        iVar20 = iVar2;
      }
      iVar20 = iVar20 + *(int *)(lVar10 + 4);
    }
    *(int *)(lVar10 + 4) = iVar20;
    if (*(int *)(param_1 + 0x178) == 0) goto LAB_023e22fc;
  }
  uVar9 = *(uint *)(param_1 + 0x1810);
  if ((uVar9 & 0xfffffff7) != 1) {
    *(undefined4 *)(param_1 + 0x1bf4) = 0x3f000000;
    lVar10 = FUN_0251e98c(1);
    pfVar12 = (float *)(**(code **)(*(long *)(lVar10 + 0x2a0) + 0xf0))(lVar10 + 0x2a0);
    fVar28 = *pfVar12;
    *(undefined4 *)(param_1 + 0x1bf4) = 0x3f800000;
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x400;
    uVar9 = *(uint *)(param_1 + 0x1810);
    *(float *)(param_1 + 0x1bf0) = fVar28 * 0.5;
  }
  if ((uVar9 & 0xfffffff7) == 1) {
    uVar8 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar10 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar10 + 0x278) * 999.99994);
    iVar20 = (int)(*(float *)(lVar10 + 0x27c) * 4.0);
    if (0x7ffe < iVar20) {
      iVar20 = 0x7fff;
    }
    if (iVar20 < -0x7fff) {
      iVar20 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar20;
    fVar28 = *(float *)(lVar10 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar28 * 999.99994);
    uVar8 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar8;
  if (uVar9 - 2 < 3) {
    puVar4 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar21 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar4 + 0x2ec) = uVar21;
    *(undefined1 *)((long)puVar4 + 0x2e5) = 1;
  }
  if (*(int *)(param_1 + 0x178) == 1) {
    return;
  }
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  lVar10 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0x15c) != 0)) {
    bVar19 = *pbVar1;
    pbVar17 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar10 + 0x15c) != 0) {
      pbVar17 = (byte *)(lVar10 + 0x158);
    }
    bVar18 = *pbVar17;
    if (7 < bVar18) {
      bVar18 = 0xff;
    }
    if (7 < bVar19) {
      bVar19 = 0xff;
    }
    if (bVar18 != bVar19) {
      pbVar17 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar10 + 0x15c) != 0) {
        pbVar17 = (byte *)(lVar10 + 0x158);
      }
      if ((*pbVar17 < 8) ||
         (((*(int *)(lVar10 + 0x15c) != 0 && (DAT_054f5738 != 0)) &&
          (pbVar17 = (byte *)(DAT_054f5738 + 0x11a5), *pbVar17 < 8)))) {
LAB_023e257c:
        local_a4[0] = *pbVar17;
        if (7 < local_a4[0]) {
          local_a4[0] = 0xff;
        }
      }
      else {
        if (DAT_0537d558 == (long *)0x0) {
LAB_023e2574:
          pbVar17 = &DAT_0548e168;
          goto LAB_023e257c;
        }
        lVar10 = *DAT_0537d558;
        bVar19 = *(byte *)(lVar10 + 0x473);
        pbVar17 = PTR_DAT_04bb5038;
        if ((long)(char)bVar19 != 0xffffffffffffffff) {
          puVar14 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar19 & 0xffffffffU) * 0x20;
          if (7 < bVar19) {
            puVar14 = (uint *)(lVar10 + 0x48);
          }
          if ((*puVar14 & 8) != 0) {
            pbVar17 = (byte *)(lVar10 + 0x471);
          }
        }
        local_a4[0] = *pbVar17;
        if (7 < local_a4[0]) goto LAB_023e2574;
      }
      iVar20 = FUN_00a74b78(local_a4);
      local_90 = CONCAT44(local_90._4_4_,iVar20);
      if ((iVar20 != 0x13) && (iVar20 != 9)) goto LAB_023e27ac;
    }
  }
  lVar10 = *(long *)(param_1 + 0x68);
  fVar23 = *(float *)(param_1 + 0x1900) - *(float *)(lVar10 + 0x278);
  fVar28 = *(float *)(param_1 + 0x1906);
  fVar22 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25 - *(float *)(lVar10 + 0x27c);
  fVar24 = fVar28 - *(float *)(lVar10 + 0x280);
  if (SQRT(fVar22 * fVar22 + fVar23 * fVar23 + fVar24 * fVar24) < 0.25) {
    puVar4 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 0x4c8);
    }
    *(float *)(puVar4 + 0x5d) = *(float *)(param_1 + 0x1900);
    *(undefined1 *)((long)puVar4 + 0x2e4) = 1;
    puVar4 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 0x4c8);
    }
    *(float *)(puVar4 + 0x5e) = fVar28;
    *(undefined1 *)((long)puVar4 + 0x2e6) = 1;
  }
  if (((*(int *)(param_1 + 0x178) == 0) && (*(int *)(param_1 + 0x1810) == 7)) &&
     (uVar13 = FUN_0245f360(param_1), (uVar13 & 1) != 0)) {
    return;
  }
  if (*(char *)(param_1 + 0x17ac) == '\0') {
    local_80 = local_80 & 0xffffffff00000000;
    uVar9 = *(uint *)(param_1 + 0xec8) & 1;
  }
  else {
    uVar9 = 0;
  }
  if (((*(uint *)(param_1 + 0x1c04) < 2) || (uVar8 = FUN_023de480(param_1), ((uVar8 ^ 1) & 1) == 0))
     && (uVar9 == 1)) {
    if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) != 1) {
      return;
    }
    fVar28 = fVar26 - *(float *)(*(long *)(param_1 + 0x68) + 0x278);
    fVar22 = fVar25 - *(float *)(*(long *)(param_1 + 0x68) + 0x280);
    fVar22 = SQRT(fVar22 * fVar22 + fVar28 * fVar28);
    fVar28 = -fVar22;
    if (0.0 <= fVar22) {
      fVar28 = fVar22;
    }
    if ((0.1 <= fVar28) && (*(uint *)(param_1 + 0x1c04) < 10)) {
      return;
    }
    local_90 = CONCAT44(local_90._4_4_,4);
    if ((int)*(uint *)(param_1 + 0x17cc) < 0) {
      local_90 = CONCAT44(local_90._4_4_,*(undefined4 *)(param_1 + 0x159c));
    }
    else if ((*(char *)(param_1 + 0x12f8) != '\0') && (*(int *)(param_1 + 0x159c) == 4)) {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x80000000;
    }
    iVar20 = (int)local_90;
    switch(local_90 & 0xffffffff) {
    case 0:
      FUN_023e2aa0(param_1,&local_9c,&local_a0);
      return;
    case 1:
    case 3:
      goto switchD_023e2808_caseD_1;
    case 2:
      FUN_023e2d10(param_1,&local_9c,&local_a0);
      return;
    default:
      return;
    }
  }
  if ((*(long *)(param_1 + 0x70) != 0) && (*(int *)(*(long *)(param_1 + 0x70) + 0x288) == 0x47)) {
    uVar9 = *(uint *)(param_1 + 0x1c04);
    lVar10 = FUN_0251e98c(1);
    puVar14 = (uint *)(**(code **)(*(long *)(lVar10 + 0x450) + 0xf0))(lVar10 + 0x450);
    if (uVar9 < *puVar14) {
      uVar13 = FUN_023df5e4(param_1,0);
      if ((uVar13 & 1) == 0) {
        FUN_02373e70(param_1,6,1);
        return;
      }
      return;
    }
  }
LAB_023e27ac:
  uVar13 = FUN_02546f34(pbVar1,*(undefined4 *)(param_1 + 0x230));
  if ((uVar13 & 1) == 0) {
    local_78 = 0;
    local_80 = CONCAT35(local_80._5_3_,0x100000006);
    FUN_02374e74(param_1,&local_80);
  }
  return;
switchD_023e2808_caseD_1:
  if (*(int *)(param_1 + 0x178) == 1) {
    return;
  }
  if (7 < *pbVar1) {
    return;
  }
  uVar9 = FUN_02582d8c(pbVar1,1);
  puVar7 = PTR_DAT_04bb4fb8;
  if (7 < uVar9) {
    return;
  }
  if (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar9 * 0x13f0 + 0x13d4) == '\0') {
    return;
  }
  if (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar9 * 0x13f0 + 0x13d6) == '\0') {
    return;
  }
  uVar9 = FUN_02582d8c(pbVar1,1);
  if (7 < uVar9) {
    return;
  }
  if (*(char *)(*(long *)puVar7 + (ulong)uVar9 * 0x13f0 + 0x13d4) == '\0') {
    return;
  }
  if (*(int *)(*(long *)puVar7 + (ulong)uVar9 * 0x13f0 + 0x4f8) == 0) {
    return;
  }
  lVar10 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*pbVar1 * 0x740;
  if (7 < *pbVar1) {
    lVar10 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  *(undefined8 *)(lVar10 + 0x5b0) = 0x100000000;
  *(undefined4 *)(lVar10 + 0x650) = 0;
  if (iVar20 == 1) {
    uVar13 = FUN_022ce8b0(lVar10 + 0x658,0);
    if ((uVar13 & 1) == 0) {
      local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)(lVar10 + 0x66c));
      *(undefined4 *)(param_1 + 0x20f0) = *(undefined4 *)(lVar10 + 0x66c);
      uVar9 = *(uint *)(param_1 + 0x17d0) & 0xfffffffe;
    }
    else {
      uVar9 = *(uint *)(param_1 + 0x17d0) | 1;
    }
    uVar15 = 1;
  }
  else {
    uVar13 = FUN_022ce8b0(lVar10 + 0x658,1);
    uVar15 = 0;
    if ((uVar13 & 1) == 0) {
      local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)(lVar10 + 0x66c));
      *(undefined4 *)(param_1 + 0x20f0) = *(undefined4 *)(lVar10 + 0x66c);
      uVar9 = *(uint *)(param_1 + 0x17d0) & 0xfffffffe;
    }
    else {
      uVar9 = *(uint *)(param_1 + 0x17d0) | 1;
    }
  }
  *(uint *)(param_1 + 0x17d0) = uVar9;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined1 *)(param_1 + 0x199d) = uVar15;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(float *)(param_1 + 0x1980) = fVar26;
  *(float *)(param_1 + 0x1986) = fVar25;
  *(ushort *)(param_1 + 0x198a) = uVar5;
  *(byte *)(param_1 + 0x199e) = (byte)uVar9 & 1;
  local_80 = CONCAT44(local_80._4_4_,0x51);
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  iVar20 = (int)(fVar27 * 4.0);
  if (0x7ffe < iVar20) {
    iVar20 = 0x7fff;
  }
  if (iVar20 < -0x7fff) {
    iVar20 = -0x8000;
  }
  *(short *)(param_1 + 0x1984) = (short)iVar20;
  *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
  *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
  *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
  *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
  *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
  *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
  *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
  *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
  *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
  *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
  *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
  *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
  *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
  *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
  *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
  *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
  lVar10 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar10 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar10,0x51);
  return;
}

