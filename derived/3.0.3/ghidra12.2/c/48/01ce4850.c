
undefined8 FUN_01ce4850(undefined1 *param_1,uint *param_2,uint *param_3,undefined8 *param_4)

{
  undefined8 *__s;
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined2 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  ushort *puVar15;
  undefined2 uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ushort uVar23;
  long lVar24;
  undefined1 uVar25;
  undefined2 *puVar26;
  undefined1 uVar27;
  ushort *puVar28;
  undefined *local_11a8;
  undefined1 *puStack_11a0;
  undefined4 local_1198;
  undefined1 local_1194;
  undefined8 local_1190;
  undefined8 uStack_1188;
  undefined4 local_1180;
  undefined *local_1178;
  undefined1 *puStack_1170;
  undefined4 local_1168;
  undefined1 local_1164 [63];
  undefined1 local_1125;
  undefined *local_1120;
  undefined1 *puStack_1118;
  undefined4 local_1110;
  undefined1 local_110c [63];
  undefined1 local_10cd;
  undefined1 local_10c8 [8];
  undefined6 uStack_10c0;
  undefined2 local_10ba;
  undefined6 uStack_10b8;
  undefined2 uStack_10b2;
  undefined8 local_10b0;
  undefined8 local_10a8;
  undefined8 uStack_10a0;
  undefined8 local_1098;
  undefined8 uStack_1090;
  undefined1 auStack_1088 [1984];
  undefined8 local_8c8;
  undefined8 local_8c0;
  undefined4 local_8b8;
  undefined4 uStack_8b4;
  undefined4 local_8b0;
  undefined8 local_8ac;
  undefined8 local_8a4;
  undefined8 local_89c;
  uint local_894;
  undefined8 local_890;
  ulong local_888;
  undefined8 local_880;
  undefined8 *local_878;
  undefined4 local_870;
  undefined2 local_86c;
  undefined8 local_868;
  undefined8 local_860;
  undefined4 local_858;
  undefined *local_850;
  undefined1 *local_848;
  undefined4 local_840;
  undefined1 local_83c [63];
  undefined1 local_7fd;
  undefined *local_7f8;
  undefined1 *local_7f0;
  undefined4 local_7e8;
  undefined1 local_7e4 [63];
  undefined1 local_7a5;
  undefined8 local_7a0;
  undefined6 uStack_798;
  undefined2 local_792;
  undefined6 uStack_790;
  undefined1 auStack_78a [82];
  long local_738 [217];
  undefined2 local_6e;
  
  memset(param_1,0,0x3c8);
  puVar26 = (undefined2 *)(param_1 + 0xc0);
  *puVar26 = 0xfffe;
  param_1[0xc3] = 0;
  FUN_0277d4ac(puVar26);
  __s = (undefined8 *)(param_1 + 0xce);
  param_1[200] = 0;
  param_1[0xcc] = 0;
  memset(__s,0,0x2a2);
  *(undefined2 *)(param_1 + 0x370) = 0xfffe;
  *(undefined8 *)(param_1 + 0x374) = 0;
  *(undefined8 *)(param_1 + 0x37c) = 0;
  *(undefined8 *)(param_1 + 900) = 0;
  *(undefined8 *)(param_1 + 0x38c) = 0;
  *(undefined8 *)(param_1 + 0x394) = 0;
  *(undefined8 *)(param_1 + 0x39c) = 0;
  *(undefined8 *)(param_1 + 0x3a4) = 0;
  *(undefined8 *)(param_1 + 0x3ac) = 0;
  uVar13 = *param_2;
  if (0x2ff < uVar13) {
    return 0;
  }
  if ((uVar13 & 0xff) != 4) {
    return 0;
  }
  if ((char)param_2[0x14] != (char)param_3[0x14]) {
    return 0;
  }
  if (((char)param_2[0x14] != '\0') &&
     (*(char *)((long)param_2 + 0x46) != *(char *)((long)param_3 + 0x46))) {
    return 0;
  }
  if (*(char *)((long)param_2 + 0x51) != *(char *)((long)param_3 + 0x51)) {
    return 0;
  }
  if ((*(char *)((long)param_2 + 0x51) != '\0') &&
     (*(long *)(param_2 + 0x12) != *(long *)(param_3 + 0x12))) {
    return 0;
  }
  if ((char)param_2[0x17] != (char)param_3[0x17]) {
    return 0;
  }
  if ((char)param_2[0x17] == '\0') {
    if (uVar13 != *param_3) {
      return 0;
    }
  }
  else {
    if (*(short *)((long)param_2 + 0x5a) != *(short *)((long)param_3 + 0x5a)) {
      return 0;
    }
    if (uVar13 != *param_3) {
      return 0;
    }
  }
  puVar1 = param_2 + 2;
  iVar12 = FUN_00a7f6d4(param_3 + 2);
  uVar14 = 0;
  if (iVar12 != -1) {
    uVar14 = (long)iVar12;
  }
  iVar12 = FUN_00a7f6d4(puVar1);
  uVar5 = 0;
  if (iVar12 != -1) {
    uVar5 = (long)iVar12;
  }
  if (uVar5 != uVar14) {
    return 0;
  }
  if (uVar14 != 0) {
    uVar5 = 1;
    uVar19 = 0;
    do {
      uVar17 = uVar5;
      if (*(char *)((long)puVar1 + uVar19) != *(char *)((long)(param_3 + 2) + uVar19)) {
        return 0;
      }
      uVar5 = (ulong)((int)uVar17 + 1);
      uVar19 = uVar17;
    } while (uVar17 < uVar14);
  }
  uVar14 = FUN_01ce59c0((long)param_2 + 0x27,(long)param_3 + 0x27);
  if ((uVar14 & 1) == 0) {
    return 0;
  }
  if (*(char *)((long)param_2 + 0x47) != *(char *)((long)param_3 + 0x47)) {
    return 0;
  }
  if (*(long *)(param_2 + 0x12) != *(long *)(param_3 + 0x12)) {
    return 0;
  }
  uVar14 = FUN_01ce5a60((undefined8 *)((long)param_2 + 0x52),(long)param_3 + 0x52);
  if ((uVar14 & 1) == 0) {
    return 0;
  }
  if (*(short *)((long)param_2 + 0x5a) != *(short *)((long)param_3 + 0x5a)) {
    return 0;
  }
  uVar14 = FUN_01ce5bc0((long)param_2 + 0x5d,(long)param_3 + 0x5d);
  if ((uVar14 & 1) == 0) {
    return 0;
  }
  if (param_2[1] != param_3[1]) {
    return 0;
  }
  if ((char)param_3[0x22] == '\0') {
    if (*(char *)((long)param_3 + 0x289) == '\0') {
      return 0;
    }
    local_1194 = 0;
    local_1198 = 0x20;
    local_1190 = 0xffffffff;
    uStack_1188 = 0xffffffff00000000;
    puStack_11a0 = local_10c8;
    local_1180 = 0xffffffff;
    puStack_1170 = local_1164;
    local_1168 = 0x40;
    local_1125 = 0;
    local_1164[0] = 0;
    local_1178 = PTR_DAT_04bb2bc0 + 0x10;
    local_1110 = 0x40;
    local_10cd = 0;
    local_110c[0] = 0;
    puStack_1118 = local_110c;
    local_11a8 = PTR_DAT_04bb4e10 + 0x10;
    local_1098 = 0;
    uStack_1090 = 0;
    local_10a8 = 0;
    uStack_10a0 = 0;
    uStack_10b8 = 0;
    uStack_10b2 = 0;
    local_10b0 = 0;
    local_10c8 = (undefined1  [8])0x0;
    uStack_10c0 = 0;
    local_10ba = 0;
    puVar7 = auStack_1088;
    if (auStack_1088 <= local_10c8 + 2) {
      puVar7 = local_10c8 + 2;
    }
    local_1120 = local_1178;
    memset(puStack_11a0,0,(size_t)(puVar7 + (-0xe0 - (long)&local_11a8)));
    puVar15 = (ushort *)FUN_006f5b20(&local_11a8);
    uVar13 = (**(code **)(local_11a8 + 0x20))(&local_11a8);
    if (uVar13 != 0) {
      lVar18 = 0;
      uVar14 = (ulong)uVar13;
      while (puVar28 = puVar15, lVar18 != 0x7fffffff) {
        pbVar4 = (byte *)((long)param_3 + lVar18 + 0x89);
        bVar9 = *pbVar4;
        uVar23 = (ushort)bVar9;
        if (bVar9 == 0) break;
        if ((char)bVar9 < '\0') {
          uVar23 = (ushort)bVar9;
          if ((uVar23 & 0xe0) == 0xc0) {
            if (pbVar4[1] == 0) break;
            uVar23 = pbVar4[1] & 0x3f | (uVar23 & 0x1f) << 6;
            lVar24 = 2;
          }
          else {
            if ((((uVar23 & 0xf0) != 0xe0) || (pbVar4[1] == 0)) || (pbVar4[2] == 0)) break;
            uVar23 = (ushort)bVar9 << 0xc | (pbVar4[1] & 0x3f) << 6 | pbVar4[2] & 0x3f;
            lVar24 = 3;
          }
        }
        else {
          lVar24 = 1;
        }
        lVar18 = lVar24 + lVar18;
        uVar14 = uVar14 - 1;
        *puVar28 = uVar23;
        puVar15 = puVar28 + 1;
        if (uVar14 == 0) break;
      }
      *puVar28 = 0;
    }
    if (*(char *)((long)param_3 + 0x7aa) == '\0') {
      if (*(char *)((long)param_3 + 0x47) == '\0') {
        local_880 = (undefined *)0xfffe;
        FUN_0277d4ac(&local_880);
      }
      else {
        uVar16 = *(undefined2 *)((long)param_3 + 0x6e);
        local_880 = (undefined *)(ulong)(ushort)param_3[0x1b];
        uVar13 = param_3[0x1c];
        FUN_0277d4ac(&local_880);
        local_880._0_4_ = CONCAT22(uVar16,(undefined2)local_880);
        local_880 = (undefined *)CONCAT44(uVar13,(undefined4)local_880);
      }
      memset(param_1,0,0x3c8);
      *(undefined2 *)(param_1 + 0xc0) = 0xfffe;
      FUN_0277d4ac(puVar26);
      memset(param_1,0,0x3b4);
      *(undefined2 *)(param_1 + 0xc0) = 0xfffe;
      FUN_0277d4ac(puVar26);
      param_1[200] = 0;
      param_1[0xcc] = 0;
      memset(__s,0,0x2a2);
      *(undefined2 *)(param_1 + 0x370) = 0xfffe;
      FUN_027ae310(param_1,&local_11a8,param_4,&local_880);
      param_1[0xcc] = 0;
      goto LAB_01ce5284;
    }
    local_880 = (undefined *)CONCAT62(local_880._2_6_,(short)param_3[0x1e]);
    memset(param_1,0,0x3c8);
    *(undefined2 *)(param_1 + 0xc0) = 0xfffe;
    FUN_0277d4ac(puVar26);
    param_1[200] = 0;
    param_1[0xcc] = 0;
    memset(__s,0,0x2a2);
    *(undefined2 *)(param_1 + 0x370) = 0xfffe;
    *(undefined8 *)(param_1 + 0x374) = 0;
    *(undefined8 *)(param_1 + 0x37c) = 0;
    *(undefined8 *)(param_1 + 900) = 0;
    *(undefined8 *)(param_1 + 0x38c) = 0;
    *(undefined8 *)(param_1 + 0x394) = 0;
    *(undefined8 *)(param_1 + 0x39c) = 0;
    *(undefined8 *)(param_1 + 0x3a4) = 0;
    *(undefined8 *)(param_1 + 0x3ac) = 0;
    FUN_027b19c0(param_1,&local_11a8,param_4,&local_880);
    if (*(char *)((long)param_3 + 0x47) == '\0') {
      local_880 = (undefined *)0xfffe;
      FUN_0277d4ac(&local_880);
      uVar25 = local_880._2_1_;
      uVar27 = local_880._3_1_;
      uVar13 = local_880._4_4_;
      uVar16 = (undefined2)local_880;
    }
    else {
      uVar25 = *(undefined1 *)((long)param_3 + 0x6e);
      local_880 = (undefined *)(ulong)(ushort)param_3[0x1b];
      uVar27 = *(undefined1 *)((long)param_3 + 0x6f);
      uVar13 = param_3[0x1c];
      FUN_0277d4ac(&local_880);
      uVar16 = (undefined2)local_880;
    }
  }
  else {
    if ((char)*puVar1 == '\0') {
      return 0;
    }
    if (*(char *)((long)param_2 + 0x27) == '\0') {
      return 0;
    }
    if ((char)param_2[0x14] == '\0') {
      return 0;
    }
    if (*(char *)((long)param_2 + 0x51) == '\0') {
      return 0;
    }
    local_1194 = 0;
    local_1198 = 0xb;
    local_1190 = 0xffffffff;
    uStack_1188 = 0xffffffff00000000;
    puStack_11a0 = local_10c8;
    local_1180 = 0xffffffff;
    puStack_1170 = local_1164;
    local_1168 = 0x40;
    local_1125 = 0;
    local_1164[0] = 0;
    puVar2 = PTR_DAT_04bb2bc0 + 0x10;
    local_1110 = 0x40;
    local_10cd = 0;
    local_110c[0] = 0;
    puStack_1118 = local_110c;
    puVar3 = PTR_DAT_04bb5128 + 0x10;
    uStack_10b8 = 0;
    local_10c8 = (undefined1  [8])0x0;
    uStack_10c0 = 0;
    local_10ba = 0;
    puVar6 = &uStack_10b2;
    if (&uStack_10b2 <= local_10c8 + 2) {
      puVar6 = (undefined2 *)(local_10c8 + 2);
    }
    local_11a8 = puVar3;
    local_1178 = puVar2;
    local_1120 = puVar2;
    memset(puStack_11a0,0,(long)puVar6 + (-0xe1 - (long)&local_11a8) & 0xfffffffffffffffcU | 2);
    local_10b0 = CONCAT44(local_10b0._4_4_,2);
    FUN_01c138cc(&local_11a8);
    puVar15 = (ushort *)(**(code **)(local_11a8 + 0x10))(&local_11a8);
    uVar13 = (**(code **)(local_11a8 + 0x20))(&local_11a8);
    if (uVar13 != 0) {
      lVar18 = 0;
      uVar14 = (ulong)uVar13;
      while (puVar28 = puVar15, lVar18 != 0x7fffffff) {
        pbVar4 = (byte *)((long)puVar1 + lVar18);
        bVar9 = *pbVar4;
        uVar23 = (ushort)bVar9;
        if (bVar9 == 0) break;
        if ((char)bVar9 < '\0') {
          uVar23 = (ushort)bVar9;
          if ((uVar23 & 0xe0) == 0xc0) {
            if (pbVar4[1] == 0) break;
            uVar23 = pbVar4[1] & 0x3f | (uVar23 & 0x1f) << 6;
            lVar24 = 2;
          }
          else {
            if ((((uVar23 & 0xf0) != 0xe0) || (pbVar4[1] == 0)) || (pbVar4[2] == 0)) break;
            uVar23 = (ushort)bVar9 << 0xc | (pbVar4[1] & 0x3f) << 6 | pbVar4[2] & 0x3f;
            lVar24 = 3;
          }
        }
        else {
          lVar24 = 1;
        }
        lVar18 = lVar24 + lVar18;
        uVar14 = uVar14 - 1;
        *puVar28 = uVar23;
        puVar15 = puVar28 + 1;
        if (uVar14 == 0) break;
      }
      *puVar28 = 0;
    }
    local_860 = 0xffffffff00000000;
    local_870 = 0xb;
    local_840 = 0x40;
    local_7e8 = 0x40;
    local_878 = &local_7a0;
    local_868 = 0xffffffff;
    local_858 = 0xffffffff;
    local_848 = local_83c;
    local_7f0 = local_7e4;
    puVar7 = auStack_78a;
    if (auStack_78a <= (undefined1 *)((long)&local_7a0 + 2U)) {
      puVar7 = (undefined1 *)((long)&local_7a0 + 2U);
    }
    local_86c = (ushort)local_86c._1_1_ << 8;
    local_7fd = 0;
    local_83c[0] = 0;
    local_7a5 = 0;
    local_7e4[0] = 0;
    uStack_790 = 0;
    uStack_798 = 0;
    local_792 = 0;
    local_7a0 = 0;
    local_880 = puVar3;
    local_850 = puVar2;
    local_7f8 = puVar2;
    memset(local_878,0,(ulong)(puVar7 + (-0xe1 - (long)&local_880)) & 0xfffffffffffffffc | 2);
    puVar15 = (ushort *)FUN_006f5b20(&local_880);
    uVar13 = (**(code **)(local_880 + 0x20))(&local_880);
    if (uVar13 != 0) {
      lVar18 = 0;
      uVar14 = (ulong)uVar13;
      while (puVar28 = puVar15, lVar18 != 0x7fffffff) {
        pbVar4 = (byte *)((long)param_2 + 0x27 + lVar18);
        bVar9 = *pbVar4;
        uVar23 = (ushort)bVar9;
        if (bVar9 == 0) break;
        if ((char)bVar9 < '\0') {
          uVar23 = (ushort)bVar9;
          if ((uVar23 & 0xe0) == 0xc0) {
            if (pbVar4[1] == 0) break;
            uVar23 = pbVar4[1] & 0x3f | (uVar23 & 0x1f) << 6;
            lVar24 = 2;
          }
          else {
            if ((((uVar23 & 0xf0) != 0xe0) || (pbVar4[1] == 0)) || (pbVar4[2] == 0)) break;
            uVar23 = (ushort)bVar9 << 0xc | (pbVar4[1] & 0x3f) << 6 | pbVar4[2] & 0x3f;
            lVar24 = 3;
          }
        }
        else {
          lVar24 = 1;
        }
        lVar18 = lVar24 + lVar18;
        uVar14 = uVar14 - 1;
        *puVar28 = uVar23;
        puVar15 = puVar28 + 1;
        if (uVar14 == 0) break;
      }
      *puVar28 = 0;
    }
    uVar13 = param_3[0x1f];
    local_888 = (ulong)&local_8c8 | 4;
    local_894 = 0;
    local_89c = 0;
    local_8a4 = 0;
    local_8ac = 0;
    local_8c8._0_4_ = 0;
    local_8b0 = 2;
    local_8c0._4_4_ = 0;
    local_8b8 = 0;
    uStack_8b4 = 0;
    local_8c8._4_4_ = 0;
    local_8c0._0_4_ = 0;
    local_890._0_4_ = 10;
    FUN_02906c90(&local_890,&local_11a8);
    bVar9 = *(byte *)((long)param_2 + 0x46);
    local_890 = CONCAT44(local_890._4_4_,10);
    local_8b0 = CONCAT31(local_8b0._1_3_,(char)param_3[0x20]);
    local_8ac = CONCAT44(local_8ac._4_4_,param_3[0x21]);
    local_8c8._0_4_ = uVar13;
    local_888 = (long)&local_8ac + 4;
    FUN_02906c90(&local_890,&local_880);
    local_894 = (uint)bVar9;
    if (1 < local_894) {
      local_894 = 0;
    }
    if (*(char *)((long)param_3 + 0x7aa) == '\0') {
      FUN_01ce56b4(&local_890,param_3);
      FUN_027ad234(param_1,&local_8c8,param_4,&local_890);
      goto LAB_01ce5284;
    }
    uVar11 = param_3[0x1e];
    memset(param_1,0,0x3c8);
    *(undefined2 *)(param_1 + 0xc0) = 0xfffe;
    FUN_0277d4ac(puVar26);
    memset(param_1,0,0x3b4);
    *(undefined2 *)(param_1 + 0xc0) = 0xfffe;
    FUN_0277d4ac(puVar26);
    param_1[200] = 0;
    param_1[0xcc] = 0;
    memset(__s,0,0x2a2);
    *(undefined2 *)(param_1 + 0x370) = 0xfffe;
    *param_1 = 1;
    param_1[0x5c] = 0;
    param_1[0xb8] = 0;
    *(ulong *)(param_1 + 4) = CONCAT44(local_8c8._4_4_,(uint)local_8c8);
    *(ulong *)(param_1 + 0xc) = CONCAT44(local_8c0._4_4_,(undefined4)local_8c0);
    *(ulong *)(param_1 + 0x14) = CONCAT44(uStack_8b4,local_8b8);
    param_1[0x1c] = (undefined1)local_8b0;
    *(undefined8 *)(param_1 + 0x20) = local_8ac;
    *(undefined8 *)(param_1 + 0x28) = local_8a4;
    *(undefined8 *)(param_1 + 0x30) = local_89c;
    uVar13 = local_894;
    if (1 < local_894) {
      uVar13 = 0;
    }
    *(uint *)(param_1 + 0x38) = uVar13;
    uVar22 = param_4[2];
    uVar20 = *param_4;
    uVar21 = param_4[1];
    param_1[0x78] = *(undefined1 *)(param_4 + 3);
    *(undefined8 *)(param_1 + 0x68) = uVar21;
    *(undefined8 *)(param_1 + 0x70) = uVar22;
    *(undefined8 *)(param_1 + 0x60) = uVar20;
    uVar20 = *(undefined8 *)((long)param_4 + 0x1c);
    uVar21 = *(undefined8 *)((long)param_4 + 0x24);
    *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)((long)param_4 + 0x2c);
    *(undefined8 *)(param_1 + 0x84) = uVar21;
    *(undefined8 *)(param_1 + 0x7c) = uVar20;
    uVar13 = *(uint *)((long)param_4 + 0x34);
    param_1[0xcc] = 1;
    *(short *)(param_1 + 0x36e) = (short)uVar11;
    if (1 < uVar13) {
      uVar13 = 0;
    }
    *(uint *)(param_1 + 0x94) = uVar13;
    if (*(char *)((long)param_3 + 0x47) == '\0') {
      local_890 = 0xfffe;
      FUN_0277d4ac(&local_890);
      uVar25 = local_890._2_1_;
      uVar27 = local_890._3_1_;
      uVar13 = local_890._4_4_;
    }
    else {
      uVar25 = *(undefined1 *)((long)param_3 + 0x6e);
      local_890 = (ulong)(ushort)param_3[0x1b];
      uVar27 = *(undefined1 *)((long)param_3 + 0x6f);
      uVar13 = param_3[0x1c];
      FUN_0277d4ac(&local_890);
    }
    uVar16 = (undefined2)local_890;
  }
  *(undefined2 *)(param_1 + 0xc0) = uVar16;
  param_1[0xc2] = uVar25;
  param_1[0xc3] = uVar27;
  *(uint *)(param_1 + 0xc4) = uVar13;
LAB_01ce5284:
  *(undefined8 *)(param_1 + 0x390) = *(undefined8 *)((long)param_2 + 0x52);
  *(short *)(param_1 + 0x370) = (short)param_3[0x1a];
  uVar13 = param_3[0x1d];
  bVar9 = *(byte *)((long)param_3 + 0x76);
  bVar10 = *(byte *)((long)param_3 + 0x77);
  uVar14 = nn::time::IsValidDate((uint)(ushort)uVar13,(uint)bVar9,(uint)bVar10);
  if ((uVar14 & 1) != 0) {
    *(ushort *)(param_1 + 0xbc) = (ushort)uVar13;
    param_1[0xbe] = bVar9;
    param_1[0xbf] = bVar10;
  }
  if (*(char *)((long)param_3 + 0x7aa) == '\0') {
    return 1;
  }
  param_1[0xcc] = 1;
  local_1190 = 0xffffffff;
  uStack_1188 = 0xffffffff00000000;
  local_1194 = 0;
  local_1198 = 0x400;
  puStack_1170 = local_1164;
  local_1180 = 0xffffffff;
  local_1168 = 0x40;
  local_1125 = 0;
  local_1164[0] = 0;
  local_1178 = PTR_DAT_04bb2bc0 + 0x10;
  local_1110 = 0x40;
  local_10cd = 0;
  local_110c[0] = 0;
  puStack_1118 = local_110c;
  local_11a8 = &DAT_04a4c950;
  puStack_11a0 = local_10c8;
  local_1120 = local_1178;
  memset(local_10c8,0,0x800);
  puVar8 = &local_8c8;
  if (&local_8c8 <= local_10c8 + 2) {
    puVar8 = (undefined8 *)(local_10c8 + 2);
  }
  memset(local_10c8,0,(long)puVar8 + (-0xe0 - (long)&local_11a8));
  puVar3 = PTR_DAT_04bb62a0;
  puVar2 = PTR_DAT_04bb2020;
  local_8c0 = param_3 + 0xa3;
  local_8c8 = PTR_DAT_04bb2020 + 0x10;
  for (lVar18 = 0; *(char *)((long)param_3 + lVar18 + 0x28c) != '\0'; lVar18 = lVar18 + 2) {
    if (lVar18 == 0x90) {
      lVar18 = 0xffffffff;
      break;
    }
    if (*(char *)((long)param_3 + lVar18 + 0x28d) == '\0') {
      lVar18 = lVar18 + 1;
      break;
    }
  }
  local_6e = 0;
  local_870 = 0x400;
  local_878 = (undefined8 *)&local_86c;
  local_86c = 0;
  local_880 = PTR_DAT_04bb62a0 + 0x10;
  uVar14 = FUN_01df33d0(&local_880,&local_8c8,lVar18);
  if ((uVar14 & 1) != 0) {
    uVar14 = FUN_006f5580(&local_11a8,&local_880);
    if ((uVar14 & 1) != 0) {
      if (*(char *)((long)param_3 + 0x682) == '\0' && (char)param_3[0x1ea] == '\0') {
        local_880 = (undefined *)CONCAT44(local_880._4_4_,0x30);
        local_878 = __s;
        FUN_02906c90(&local_880,&local_11a8);
      }
      else {
        FUN_01ce57b4(&local_880);
        local_880 = (undefined *)CONCAT44(local_880._4_4_,0xffffffff);
        (*(code *)local_878[7])(&local_878);
        (**(code **)(local_738[0] + 0x38))(local_738);
        if (*(char *)((long)param_3 + 0x682) != '\0') {
          local_880 = (undefined *)CONCAT62(local_880._2_6_,(short)param_3[0x1a0]);
        }
        if ((char)param_3[0x1ea] != '\0') {
          local_8c0 = (uint *)((long)param_3 + 0x686);
          local_880._0_4_ = CONCAT22((short)param_3[0x1a1],(undefined2)local_880);
          local_8c8 = puVar2 + 0x10;
          for (lVar18 = 0; *(char *)((long)param_3 + lVar18 + 0x686) != '\0'; lVar18 = lVar18 + 2) {
            if (lVar18 == 0x90) {
              lVar18 = 0xffffffff;
              break;
            }
            if (*(char *)((long)param_3 + lVar18 + 0x687) == '\0') {
              lVar18 = lVar18 + 1;
              break;
            }
          }
          uVar14 = FUN_01ce5930(&local_878,&local_8c8,lVar18);
          if ((uVar14 & 1) == 0) {
            return 0;
          }
          local_8c0 = (uint *)((long)param_3 + 0x717);
          local_8c8 = puVar2 + 0x10;
          for (lVar18 = 0; *(char *)((long)param_3 + lVar18 + 0x717) != '\0'; lVar18 = lVar18 + 2) {
            if (lVar18 == 0x90) {
              lVar18 = 0xffffffff;
              break;
            }
            if (*(char *)((long)param_3 + lVar18 + 0x718) == '\0') {
              lVar18 = lVar18 + 1;
              break;
            }
          }
          uVar14 = FUN_01ce5930(local_738,&local_8c8,lVar18);
          if ((uVar14 & 1) == 0) {
            return 0;
          }
        }
        uVar14 = FUN_01c06840(__s,&local_11a8,&local_880,param_4);
        if ((uVar14 & 1) == 0) {
          return 0;
        }
      }
      local_8c0 = (uint *)((long)param_3 + 0x31d);
      local_8c8 = puVar2 + 0x10;
      for (lVar18 = 0; *(char *)((long)param_3 + lVar18 + 0x31d) != '\0'; lVar18 = lVar18 + 2) {
        if (lVar18 == 0x2d0) {
          lVar18 = 0xffffffff;
          break;
        }
        if (*(char *)((long)param_3 + lVar18 + 0x31e) == '\0') {
          lVar18 = lVar18 + 1;
          break;
        }
      }
      local_880 = puVar3 + 0x10;
      local_6e = 0;
      local_870 = 0x400;
      local_878 = (undefined8 *)&local_86c;
      local_86c = 0;
      uVar14 = FUN_01df33d0(&local_880,&local_8c8,lVar18);
      if ((uVar14 & 1) != 0) {
        uVar14 = FUN_006f5580(&local_11a8,&local_880);
        if ((uVar14 & 1) != 0) {
          local_880 = (undefined *)CONCAT44(local_880._4_4_,0xf0);
          local_878 = (undefined8 *)(param_1 + 0x12e);
          FUN_02906c90(&local_880,&local_11a8);
          local_878 = (undefined8 *)((long)param_3 + 0x5ee);
          lVar18 = 0;
          local_880 = puVar2 + 0x10;
          do {
            if (*(char *)((long)param_3 + lVar18 + 0x5ee) == '\0') {
LAB_01ce5680:
              uVar14 = FUN_01ce5730(&local_11a8,&local_880,lVar18);
              if ((uVar14 & 1) == 0) {
                return 0;
              }
              local_880 = (undefined *)CONCAT44(local_880._4_4_,0x30);
              local_878 = (undefined8 *)(param_1 + 0x30e);
              FUN_02906c90(&local_880,&local_11a8);
              return 1;
            }
            if (lVar18 == 0x90) {
              lVar18 = 0xffffffff;
              goto LAB_01ce5680;
            }
            if (*(char *)((long)param_3 + lVar18 + 0x5ef) == '\0') {
              lVar18 = lVar18 + 1;
              goto LAB_01ce5680;
            }
            lVar18 = lVar18 + 2;
          } while( true );
        }
      }
    }
  }
  (**(code **)(local_11a8 + 0x38))(&local_11a8);
  return 0;
}

