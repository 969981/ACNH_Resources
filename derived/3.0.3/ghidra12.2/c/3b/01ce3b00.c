
undefined8 FUN_01ce3b00(undefined8 *param_1,undefined4 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  char cVar10;
  undefined2 uVar11;
  ushort uVar12;
  short sVar13;
  byte bVar14;
  undefined *puVar15;
  uint uVar16;
  int iVar17;
  ushort *puVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  undefined2 uVar22;
  undefined1 *puVar23;
  byte *pbVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined *puVar27;
  int *piVar28;
  undefined8 *puVar29;
  undefined *local_988;
  undefined8 *puStack_980;
  undefined4 local_978;
  undefined1 local_974;
  undefined8 local_970;
  undefined8 uStack_968;
  undefined4 local_960;
  undefined *local_958;
  undefined1 *puStack_950;
  undefined4 local_948;
  undefined1 local_944 [63];
  undefined1 local_905;
  undefined *local_900;
  undefined1 *puStack_8f8;
  undefined4 local_8f0;
  undefined1 local_8ec [63];
  undefined1 local_8ad;
  undefined8 local_8a8;
  undefined6 uStack_8a0;
  undefined2 local_89a;
  undefined6 uStack_898;
  undefined1 auStack_892 [1002];
  undefined1 auStack_4a8 [1024];
  uint local_a8 [2];
  long local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6c;
  
  if (*(char *)(param_3 + 0xcc) == '\0') {
    uVar19 = FUN_027aed78(param_3,0);
    if ((uVar19 & 1) == 0) {
      return 0;
    }
    if (*(short *)(param_3 + 0xc0) == -2) {
      return 0;
    }
  }
  else {
    uVar16 = FUN_027aed78(param_3,1);
    lVar21 = *(long *)PTR_DAT_04bb4788;
    uVar20 = (uint)*(ushort *)(param_3 + 0x36e) - (uint)*(ushort *)(lVar21 + 0x1f8);
    if (*(uint *)(lVar21 + 0x1d8) <= uVar20) {
      return 0;
    }
    if (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar20 * 8) == 0 ||
        ((uVar16 ^ 0xffffffff) & 1) != 0) {
      return 0;
    }
  }
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0;
  *(undefined2 *)(param_1 + 10) = 0x101;
  FUN_027ae510(param_3 + 0x60);
  if (*(char *)(param_3 + 0x5c) == '\0') {
    piVar28 = (int *)(param_3 + 4);
    if (*(int *)(param_3 + 0x20) == 0) {
      return 0;
    }
    if (*piVar28 == 0) {
      return 0;
    }
    uVar20 = *(uint *)(param_3 + 0x38);
    if (1 < uVar20) {
      uVar20 = 0;
    }
    local_988 = (undefined *)CONCAT44(local_988._4_4_,uVar20);
    *(char *)((long)param_1 + 0x46) = (char)uVar20;
    iVar17 = FUN_026698a0(piVar28);
    if ((iVar17 == -1) || (uVar19 = FUN_007b3cbc(&local_988,iVar17), (uVar19 & 1) == 0)) {
      return 0;
    }
    local_a8[0] = local_a8[0] & 0xffffff00;
    iVar17 = nn::account::IsNetworkServiceAccountAvailable
                       ((bool *)local_a8,(UserHandle *)&local_988);
    if (iVar17 != 0) {
      return 0;
    }
    if (local_a8[0]._0_1_ == false) {
      return 0;
    }
    iVar17 = nn::account::GetNetworkServiceAccountId
                       ((NetworkServiceAccountId *)&local_98,(UserHandle *)&local_988);
    if (iVar17 != 0) {
      return 0;
    }
    param_1[9] = local_98;
  }
  else {
    piVar28 = (int *)0x0;
  }
  uVar22 = *(undefined2 *)(param_3 + 0xc0);
  uVar8 = *(undefined1 *)(param_3 + 0xc2);
  uVar9 = *(undefined1 *)(param_3 + 0xc3);
  uVar6 = *(undefined4 *)(param_3 + 0xc4);
  *param_1 = 0x2200000204;
  puVar15 = PTR_DAT_04bc0cd8;
  puVar27 = PTR_DAT_04bb5128;
  if (*(char *)(param_3 + 0x5c) == '\x01') {
    lVar21 = param_3 + 8;
LAB_01ce3ccc:
    local_978 = 0xb;
    local_948 = 0x40;
    local_905 = 0;
    puStack_950 = local_944;
    local_8f0 = 0x40;
    local_988 = PTR_DAT_04bb5128 + 0x10;
    local_958 = PTR_DAT_04bb2bc0 + 0x10;
    local_8ad = 0;
    local_8a8 = 0;
    uStack_8a0 = 0;
    local_89a = 0;
    uStack_898 = 0;
    puStack_8f8 = local_8ec;
    puVar2 = auStack_892;
    if (auStack_892 <= (undefined1 *)((long)&local_8a8 + 2U)) {
      puVar2 = (undefined1 *)((long)&local_8a8 + 2U);
    }
    puStack_980 = &local_8a8;
    local_900 = local_958;
    memset(&local_8a8,0,(ulong)(puVar2 + (-0xe1 - (long)&local_988)) & 0xfffffffffffffffc | 2);
    local_a8[0] = 10;
    local_a0 = lVar21 + 4;
    memset(&local_8a8,0,(ulong)(puVar2 + ~(ulong)&local_8a8) & 0xfffffffffffffffc | 2);
    local_974 = 0;
    local_970 = 0xffffffff;
    uStack_968 = 0xffffffff00000000;
    local_70 = 1;
    local_98 = puVar15 + 0x10;
    local_960 = 0xffffffff;
    local_944[0] = 0;
    local_8ec[0] = 0;
    local_6c = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    FUN_02906b00(&local_98,&local_988,local_a8);
    puVar18 = (ushort *)(**(code **)(local_988 + 0x18))(&local_988);
    puVar27 = PTR_DAT_04bb5128;
    uVar20 = 0;
    lVar21 = 0x7fffffff;
    do {
      pbVar24 = (byte *)((long)param_1 + (ulong)uVar20 + 8);
      if (lVar21 == 0) goto LAB_01ce3e90;
      uVar12 = *puVar18;
      if (uVar12 == 0) goto LAB_01ce3e90;
      bVar14 = (byte)uVar12;
      if (uVar12 < 0x80) {
        *pbVar24 = bVar14;
        iVar17 = 1;
      }
      else if (uVar12 < 0x800) {
        if (0x1d < uVar20) break;
        *pbVar24 = (byte)(uVar12 >> 6) | 0xc0;
        pbVar24[1] = bVar14 & 0x3f | 0x80;
        iVar17 = 2;
      }
      else {
        if (0x1e < uVar20 + 2) break;
        *pbVar24 = (byte)(uVar12 >> 0xc) | 0xe0;
        pbVar24[1] = (byte)(uVar12 >> 6) & 0x3f | 0x80;
        pbVar24[2] = bVar14 & 0x3f | 0x80;
        iVar17 = 3;
      }
      uVar20 = iVar17 + uVar20;
      lVar21 = lVar21 + -1;
      puVar18 = puVar18 + 1;
    } while (uVar20 < 0x1f);
    pbVar24 = (byte *)((long)param_1 + (ulong)(uVar20 - 1) + 8);
LAB_01ce3e90:
    *pbVar24 = 0;
  }
  else {
    if (*(char *)(param_3 + 0x5c) == '\0') {
      lVar21 = param_3 + 4;
      goto LAB_01ce3ccc;
    }
    *(undefined8 *)((long)param_1 + 0x1f) = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  local_978 = 0xb;
  local_970 = 0xffffffff;
  uStack_968 = 0xffffffff00000000;
  puStack_950 = local_944;
  puStack_980 = &local_8a8;
  local_960 = 0xffffffff;
  local_974 = 0;
  local_948 = 0x40;
  local_905 = 0;
  local_944[0] = 0;
  local_958 = PTR_DAT_04bb2bc0 + 0x10;
  local_8f0 = 0x40;
  local_8ad = 0;
  local_8ec[0] = 0;
  uStack_898 = 0;
  puStack_8f8 = local_8ec;
  local_988 = puVar27 + 0x10;
  puVar2 = auStack_892;
  if (auStack_892 <= (undefined1 *)((long)&local_8a8 + 2U)) {
    puVar2 = (undefined1 *)((long)&local_8a8 + 2U);
  }
  local_8a8 = 0;
  uStack_8a0 = 0;
  local_89a = 0;
  local_900 = local_958;
  memset(puStack_980,0,(ulong)(puVar2 + (-0xe1 - (long)&local_988)) & 0xfffffffffffffffc | 2);
  FUN_027ae654(param_3 + 4,&local_988);
  puVar1 = (undefined8 *)((long)param_1 + 0x27);
  puVar18 = (ushort *)(**(code **)(local_988 + 0x18))(&local_988);
  uVar20 = 0;
  lVar21 = 0x7fffffff;
  do {
    pbVar24 = (byte *)((long)puVar1 + (ulong)uVar20);
    if (lVar21 == 0) goto LAB_01ce4004;
    uVar12 = *puVar18;
    if (uVar12 == 0) goto LAB_01ce4004;
    bVar14 = (byte)uVar12;
    if (uVar12 < 0x80) {
      *pbVar24 = bVar14;
      iVar17 = 1;
    }
    else if (uVar12 < 0x800) {
      if (0x1d < uVar20) break;
      *pbVar24 = (byte)(uVar12 >> 6) | 0xc0;
      pbVar24[1] = bVar14 & 0x3f | 0x80;
      iVar17 = 2;
    }
    else {
      if (0x1e < uVar20 + 2) break;
      *pbVar24 = (byte)(uVar12 >> 0xc) | 0xe0;
      pbVar24[1] = (byte)(uVar12 >> 6) & 0x3f | 0x80;
      pbVar24[2] = bVar14 & 0x3f | 0x80;
      iVar17 = 3;
    }
    uVar20 = iVar17 + uVar20;
    lVar21 = lVar21 + -1;
    puVar18 = puVar18 + 1;
  } while (uVar20 < 0x1f);
  pbVar24 = (byte *)((long)puVar1 + (ulong)(uVar20 - 1));
LAB_01ce4004:
  *pbVar24 = 0;
  sVar13 = *(short *)(param_3 + 0xc0);
  puVar29 = (undefined8 *)((long)param_1 + 0x52);
  *puVar29 = 0;
  *(bool *)((long)param_1 + 0x47) = sVar13 != -2;
  uVar7 = *(undefined4 *)(param_3 + 0x390);
  *(undefined4 *)((long)param_1 + 0x55) = *(undefined4 *)(param_3 + 0x393);
  *(undefined4 *)puVar29 = uVar7;
  uVar11 = *(undefined2 *)(param_3 + 0x370);
  *(undefined2 *)(param_2 + 0x1b) = uVar22;
  *(undefined1 *)((long)param_2 + 0x6e) = uVar8;
  *(undefined1 *)((long)param_2 + 0x6f) = uVar9;
  param_2[0x1c] = uVar6;
  *(undefined2 *)(param_2 + 0x1a) = uVar11;
  uVar19 = nn::time::IsValidDate
                     ((uint)*(ushort *)(param_3 + 0xbc),(uint)*(byte *)(param_3 + 0xbe),
                      (uint)*(byte *)(param_3 + 0xbf));
  uVar22 = *(undefined2 *)(param_3 + 0xbc);
  if ((uVar19 & 1) == 0) {
    uVar22 = 2000;
  }
  *(undefined2 *)(param_2 + 0x1d) = uVar22;
  uVar19 = nn::time::IsValidDate
                     ((uint)*(ushort *)(param_3 + 0xbc),(uint)*(byte *)(param_3 + 0xbe),
                      (uint)*(byte *)(param_3 + 0xbf));
  uVar8 = *(undefined1 *)(param_3 + 0xbe);
  if ((uVar19 & 1) == 0) {
    uVar8 = 1;
  }
  *(undefined1 *)((long)param_2 + 0x76) = uVar8;
  uVar19 = nn::time::IsValidDate
                     ((uint)*(ushort *)(param_3 + 0xbc),(uint)*(byte *)(param_3 + 0xbe),
                      (uint)*(byte *)(param_3 + 0xbf));
  uVar8 = *(undefined1 *)(param_3 + 0xbf);
  if ((uVar19 & 1) == 0) {
    uVar8 = 1;
  }
  *(undefined1 *)((long)param_2 + 0x77) = uVar8;
  uVar22 = *(undefined2 *)(param_3 + 0x36e);
  *(undefined1 *)((long)param_2 + 0x289) = 0;
  *(undefined2 *)(param_2 + 0x1e) = uVar22;
  if (piVar28 != (int *)0x0) {
    *(undefined1 *)(param_2 + 0x22) = 1;
    param_2[0x21] = piVar28[7];
    param_2[0x1f] = *piVar28;
    bVar14 = 2;
    if (*(byte *)(piVar28 + 6) < 4) {
      bVar14 = *(byte *)(piVar28 + 6);
    }
    *(byte *)(param_2 + 0x20) = bVar14;
    goto LAB_01ce4378;
  }
  *(undefined1 *)(param_2 + 0x22) = 0;
  local_978 = 0x200;
  local_974 = 0;
  local_970 = 0xffffffff;
  uStack_968 = 0xffffffff00000000;
  local_960 = 0xffffffff;
  puStack_950 = local_944;
  local_948 = 0x40;
  local_905 = 0;
  local_944[0] = 0;
  local_958 = PTR_DAT_04bb2bc0 + 0x10;
  local_8f0 = 0x40;
  local_8ad = 0;
  local_8ec[0] = 0;
  puStack_8f8 = local_8ec;
  local_988 = PTR_DAT_04bc0c30 + 0x10;
  puStack_980 = &local_8a8;
  local_900 = local_958;
  memset(&local_8a8,0,0x400);
  puVar2 = auStack_4a8;
  if (auStack_4a8 <= (undefined1 *)((long)&local_8a8 + 2U)) {
    puVar2 = (undefined1 *)((long)&local_8a8 + 2U);
  }
  memset(&local_8a8,0,(size_t)(puVar2 + (-0xe0 - (long)&local_988)));
  uVar20 = (uint)*(byte *)(param_3 + 0x5c);
  local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar20);
  if (uVar20 == 2) {
    local_a0 = param_3 + 6;
    local_a8[0] = 0x19;
    puVar23 = (undefined1 *)((ulong)&local_8a8 | 2);
    puVar2 = auStack_4a8;
    if (auStack_4a8 <= puVar23) {
      puVar2 = puVar23;
    }
    memset(&local_8a8,0,((ulong)(puVar2 + ~(ulong)&local_8a8) & 0xfffffffffffffffe) + 2);
LAB_01ce4260:
    local_960 = 0xffffffff;
    uStack_968 = 0xffffffff00000000;
    local_970 = 0xffffffff;
    local_974 = 0;
    local_944[0] = 0;
    local_70 = 1;
    local_98 = puVar15 + 0x10;
    local_8ec[0] = 0;
    local_6c = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    FUN_02906b00(&local_98,&local_988,local_a8);
  }
  else if (uVar20 == 0) {
    local_a0 = param_3 + 0x24;
    local_a8[0] = 10;
    puVar23 = (undefined1 *)((ulong)&local_8a8 | 2);
    puVar2 = auStack_4a8;
    if (auStack_4a8 <= puVar23) {
      puVar2 = puVar23;
    }
    memset(&local_8a8,0,((ulong)(puVar2 + ~(ulong)&local_8a8) & 0xfffffffffffffffe) + 2);
    goto LAB_01ce4260;
  }
  puVar18 = (ushort *)(**(code **)(local_988 + 0x18))(&local_988);
  uVar20 = 0;
  lVar21 = 0x7fffffff;
  do {
    pbVar24 = (byte *)((long)param_2 + (ulong)uVar20 + 0x89);
    if (lVar21 == 0) goto LAB_01ce4354;
    uVar12 = *puVar18;
    if (uVar12 == 0) goto LAB_01ce4354;
    bVar14 = (byte)uVar12;
    if (uVar12 < 0x80) {
      *pbVar24 = bVar14;
      iVar17 = 1;
    }
    else if (uVar12 < 0x800) {
      if (0x1fe < uVar20) break;
      *pbVar24 = (byte)(uVar12 >> 6) | 0xc0;
      pbVar24[1] = bVar14 & 0x3f | 0x80;
      iVar17 = 2;
    }
    else {
      if (0x1ff < uVar20 + 2) break;
      *pbVar24 = (byte)(uVar12 >> 0xc) | 0xe0;
      pbVar24[1] = (byte)(uVar12 >> 6) & 0x3f | 0x80;
      pbVar24[2] = bVar14 & 0x3f | 0x80;
      iVar17 = 3;
    }
    uVar20 = iVar17 + uVar20;
    lVar21 = lVar21 + -1;
    puVar18 = puVar18 + 1;
  } while (uVar20 < 0x200);
  pbVar24 = (byte *)((long)param_2 + (ulong)(uVar20 - 1) + 0x89);
LAB_01ce4354:
  *pbVar24 = 0;
  *(undefined1 *)((long)param_2 + 0x289) = 1;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[7] = 0;
  *(undefined8 *)((long)param_1 + 0x3e) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
LAB_01ce4378:
  cVar10 = *(char *)(param_3 + 0xcc);
  *(char *)((long)param_2 + 0x7aa) = cVar10;
  if (cVar10 != '\0') {
    local_905 = 0;
    local_978 = 0x400;
    local_948 = 0x40;
    puStack_950 = local_944;
    local_8f0 = 0x40;
    local_8ad = 0;
    local_958 = PTR_DAT_04bb2bc0 + 0x10;
    local_988 = &DAT_04a4c950;
    puStack_8f8 = local_8ec;
    puStack_980 = &local_8a8;
    local_900 = local_958;
    memset(&local_8a8,0,0x800);
    puVar3 = local_a8;
    if (local_a8 <= (uint *)((long)&local_8a8 + 2U)) {
      puVar3 = (uint *)((long)&local_8a8 + 2U);
    }
    memset(&local_8a8,0,(long)puVar3 + (-0xe0 - (long)&local_988));
    local_a0 = param_3 + 0xce;
    local_a8[0] = 0x30;
    memset(&local_8a8,0,((long)puVar3 + ~(ulong)&local_8a8 & 0xfffffffffffffffe) + 2);
    local_974 = 0;
    local_970 = 0xffffffff;
    uStack_968 = 0xffffffff00000000;
    local_70 = 1;
    local_98 = puVar15 + 0x10;
    local_960 = 0xffffffff;
    local_944[0] = 0;
    local_8ec[0] = 0;
    local_6c = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    FUN_02906b00(&local_98,&local_988,local_a8);
    puVar18 = (ushort *)(**(code **)(local_988 + 0x18))(&local_988);
    uVar20 = 0;
    lVar21 = 0x7fffffff;
    do {
      pbVar24 = (byte *)((long)param_2 + (ulong)uVar20 + 0x28c);
      if (lVar21 == 0) goto LAB_01ce4540;
      uVar12 = *puVar18;
      if (uVar12 == 0) goto LAB_01ce4540;
      bVar14 = (byte)uVar12;
      if (uVar12 < 0x80) {
        *pbVar24 = bVar14;
        iVar17 = 1;
      }
      else if (uVar12 < 0x800) {
        if (0x8f < uVar20) break;
        *pbVar24 = (byte)(uVar12 >> 6) | 0xc0;
        pbVar24[1] = bVar14 & 0x3f | 0x80;
        iVar17 = 2;
      }
      else {
        if (0x90 < uVar20 + 2) break;
        *pbVar24 = (byte)(uVar12 >> 0xc) | 0xe0;
        pbVar24[1] = (byte)(uVar12 >> 6) & 0x3f | 0x80;
        pbVar24[2] = bVar14 & 0x3f | 0x80;
        iVar17 = 3;
      }
      uVar20 = iVar17 + uVar20;
      lVar21 = lVar21 + -1;
      puVar18 = puVar18 + 1;
    } while (uVar20 < 0x91);
    pbVar24 = (byte *)((long)param_2 + (ulong)(uVar20 - 1) + 0x28c);
LAB_01ce4540:
    local_a0 = param_3 + 0x12e;
    *pbVar24 = 0;
    local_a8[0] = 0xf0;
    (**(code **)(local_988 + 0x38))(&local_988);
    local_6c = 0;
    local_70 = 1;
    local_98 = puVar15 + 0x10;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    FUN_02906b00(&local_98,&local_988,local_a8);
    puVar18 = (ushort *)(**(code **)(local_988 + 0x18))(&local_988);
    uVar20 = 0;
    lVar21 = 0x7fffffff;
    do {
      pbVar24 = (byte *)((long)param_2 + (ulong)uVar20 + 0x31d);
      if (lVar21 == 0) goto LAB_01ce4650;
      uVar12 = *puVar18;
      if (uVar12 == 0) goto LAB_01ce4650;
      bVar14 = (byte)uVar12;
      if (uVar12 < 0x80) {
        *pbVar24 = bVar14;
        iVar17 = 1;
      }
      else if (uVar12 < 0x800) {
        if (0x2cf < uVar20) break;
        *pbVar24 = (byte)(uVar12 >> 6) | 0xc0;
        pbVar24[1] = bVar14 & 0x3f | 0x80;
        iVar17 = 2;
      }
      else {
        if (0x2d0 < uVar20 + 2) break;
        *pbVar24 = (byte)(uVar12 >> 0xc) | 0xe0;
        pbVar24[1] = (byte)(uVar12 >> 6) & 0x3f | 0x80;
        pbVar24[2] = bVar14 & 0x3f | 0x80;
        iVar17 = 3;
      }
      uVar20 = iVar17 + uVar20;
      lVar21 = lVar21 + -1;
      puVar18 = puVar18 + 1;
    } while (uVar20 < 0x2d1);
    pbVar24 = (byte *)((long)param_2 + (ulong)(uVar20 - 1) + 0x31d);
LAB_01ce4650:
    local_a0 = param_3 + 0x30e;
    *pbVar24 = 0;
    local_a8[0] = 0x30;
    (**(code **)(local_988 + 0x38))(&local_988);
    local_6c = 0;
    local_70 = 1;
    local_98 = puVar15 + 0x10;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    FUN_02906b00(&local_98,&local_988,local_a8);
    puVar18 = (ushort *)(**(code **)(local_988 + 0x18))(&local_988);
    uVar20 = 0;
    lVar21 = 0x7fffffff;
    do {
      pbVar24 = (byte *)((long)param_2 + (ulong)uVar20 + 0x5ee);
      if (lVar21 == 0) goto LAB_01ce4760;
      uVar12 = *puVar18;
      if (uVar12 == 0) goto LAB_01ce4760;
      bVar14 = (byte)uVar12;
      if (uVar12 < 0x80) {
        *pbVar24 = bVar14;
        iVar17 = 1;
      }
      else if (uVar12 < 0x800) {
        if (0x8f < uVar20) break;
        *pbVar24 = (byte)(uVar12 >> 6) | 0xc0;
        pbVar24[1] = bVar14 & 0x3f | 0x80;
        iVar17 = 2;
      }
      else {
        if (0x90 < uVar20 + 2) break;
        *pbVar24 = (byte)(uVar12 >> 0xc) | 0xe0;
        pbVar24[1] = (byte)(uVar12 >> 6) & 0x3f | 0x80;
        pbVar24[2] = bVar14 & 0x3f | 0x80;
        iVar17 = 3;
      }
      uVar20 = iVar17 + uVar20;
      lVar21 = lVar21 + -1;
      puVar18 = puVar18 + 1;
    } while (uVar20 < 0x91);
    pbVar24 = (byte *)((long)param_2 + (ulong)(uVar20 - 1) + 0x5ee);
LAB_01ce4760:
    *pbVar24 = 0;
  }
  *param_2 = *(undefined4 *)param_1;
  uVar6 = *(undefined4 *)((long)param_1 + 4);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)((long)param_2 + 0x1f) = 0;
  param_2[1] = uVar6;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  uVar25 = param_1[3];
  uVar26 = *(undefined8 *)((long)param_1 + 0x1e);
  *(undefined8 *)((long)param_2 + 0x27) = 0;
  *(undefined8 *)((long)param_2 + 0x2f) = 0;
  *(undefined8 *)((long)param_2 + 0x37) = 0;
  *(undefined8 *)((long)param_2 + 0x3e) = 0;
  *(undefined8 *)((long)param_2 + 0x1e) = uVar26;
  *(undefined8 *)(param_2 + 4) = uVar5;
  *(undefined8 *)(param_2 + 6) = uVar25;
  *(undefined8 *)(param_2 + 2) = uVar4;
  uVar4 = *puVar1;
  uVar5 = *(undefined8 *)((long)param_1 + 0x2f);
  uVar25 = *(undefined8 *)((long)param_1 + 0x37);
  *(undefined8 *)((long)param_2 + 0x3d) = *(undefined8 *)((long)param_1 + 0x3d);
  *(undefined8 *)((long)param_2 + 0x37) = uVar25;
  *(undefined8 *)((long)param_2 + 0x2f) = uVar5;
  *(undefined8 *)((long)param_2 + 0x27) = uVar4;
  *(undefined1 *)((long)param_2 + 0x46) = *(undefined1 *)((long)param_1 + 0x46);
  *(undefined1 *)(param_2 + 0x14) = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)((long)param_2 + 0x47) = *(undefined1 *)((long)param_1 + 0x47);
  *(undefined8 *)(param_2 + 0x12) = param_1[9];
  uVar8 = *(undefined1 *)((long)param_1 + 0x51);
  *(undefined8 *)((long)param_2 + 0x52) = 0;
  *(undefined1 *)((long)param_2 + 0x51) = uVar8;
  uVar6 = *(undefined4 *)puVar29;
  *(undefined4 *)((long)param_2 + 0x55) = *(undefined4 *)((long)param_1 + 0x55);
  *(undefined4 *)((long)param_2 + 0x52) = uVar6;
  *(undefined2 *)((long)param_2 + 0x5a) = *(undefined2 *)((long)param_1 + 0x5a);
  uVar8 = *(undefined1 *)((long)param_1 + 0x5c);
  *(undefined4 *)((long)param_2 + 0x5d) = 0;
  *(undefined1 *)((long)param_2 + 0x61) = 0;
  *(undefined1 *)(param_2 + 0x17) = uVar8;
  uVar6 = *(undefined4 *)((long)param_1 + 0x5d);
  *(undefined1 *)((long)param_2 + 0x682) = 0;
  *(undefined1 *)(param_2 + 0x1ea) = 0;
  *(undefined4 *)((long)param_2 + 0x5d) = uVar6;
  return 1;
}

