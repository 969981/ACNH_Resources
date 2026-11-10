
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_0013f870(ushort *param_1,long param_2,ushort *param_3,uint param_4,byte param_5,
            undefined8 *param_6)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  ushort uVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ushort uVar12;
  undefined8 uVar13;
  wchar16 *pwVar14;
  undefined2 uVar15;
  short *psVar16;
  undefined1 uVar17;
  ushort uVar18;
  ushort *puVar19;
  long lVar20;
  int iVar21;
  ushort *puVar22;
  ushort *puVar23;
  undefined *puVar24;
  ushort local_64 [2];
  
  if (param_2 == 0) {
    return 0x8837;
  }
  if (param_3 == (ushort *)0x0) {
    return 0x8137;
  }
  if ((param_4 & 0xffff) == 0) {
    return 0x8137;
  }
  if (param_6 == (undefined8 *)0x0) {
    return 0x8537;
  }
  if (param_5 < 2) {
    return 0;
  }
  if ((byte)(param_5 - 0x25) < 0x85) {
    return 0;
  }
  uVar8 = FUN_0011f660(param_2,1);
  uVar9 = FUN_0011f660(param_2,2);
  uVar10 = FUN_0011f660(param_2,0xe);
  if ((uVar8 & 0xffff) == 0) {
    return 0;
  }
  if ((uVar9 & 0xffff) == 0) {
    return 0;
  }
  if ((uVar10 & 0xffff) == 0) {
    return 0;
  }
  *(undefined2 *)(param_6 + 0x10) = 0;
  *param_6 = 0;
  *(undefined2 *)(param_6 + 1) = 0;
  *(undefined2 *)((long)param_6 + 0x7c) = 0;
  *(undefined4 *)(param_6 + 0xf) = 0;
  *(undefined1 *)(param_6 + 0xd) = 0;
  *(undefined2 *)((long)param_6 + 100) = 0;
  *(undefined4 *)(param_6 + 9) = 0;
  param_6[2] = 0;
  *(undefined2 *)((long)param_6 + 0x74) = 0;
  *(undefined4 *)(param_6 + 0xe) = 0;
  *(undefined2 *)((long)param_6 + 0x66) = 0x110;
  *(undefined8 *)((long)param_6 + 0x5c) = 0;
  *(undefined8 *)((long)param_6 + 0x54) = 0;
  *(undefined8 *)((long)param_6 + 0x4c) = 0;
  param_6[7] = 0;
  param_6[8] = 0;
  param_6[5] = 0;
  param_6[6] = 0;
  param_6[3] = 0;
  param_6[4] = 0;
  uVar11 = FUN_00113d80(param_3,param_4);
  uVar3 = (ushort)param_4;
  switch(param_5) {
  case 2:
    if ((((uint)uVar11 & 0xffff) < 0x25) && ((1L << (uVar11 & 0x3f) & 0x1e00003800U) != 0)) {
      uVar6 = uVar3 & 0x7f | (ushort)(uVar10 << 7);
      *param_6 = param_3;
    }
    else {
      *param_6 = param_3;
      uVar6 = uVar3 & 0x7f | (ushort)(uVar9 << 7);
    }
    *(undefined2 *)(param_6 + 0x10) = 1;
    *(ushort *)((long)param_6 + 0x72) = uVar6;
    *(ushort *)(param_6 + 0xe) = uVar3 & 0x7f | (ushort)(uVar8 << 7);
    uVar17 = 2;
    break;
  case 3:
    uVar10 = 0;
    sVar7 = 0;
    uVar6 = 0;
    puVar19 = param_3;
    do {
      sVar5 = FUN_00141680(*puVar19 >> 8 | *puVar19 << 8,local_64);
      if (sVar5 != 0) {
        return 0;
      }
      if ((short)local_64[0] < 0) {
        local_64[0] = local_64[0] ^ 0x8000;
        psVar16 = (short *)(&DAT_04059880 + (ulong)local_64[0] * 2);
        uVar6 = uVar6 - (sVar7 == 0x30a6 && local_64[0] == 0xf);
      }
      else {
        if ((ulong)local_64[0] - 0x4f < 2) {
          return 0;
        }
        psVar16 = (short *)(&DAT_040598a8 + (ulong)local_64[0] * 2);
      }
      sVar7 = *psVar16;
      uVar10 = uVar10 + 1 & 0xffff;
      uVar6 = uVar6 + 1;
      puVar19 = puVar19 + 1;
    } while (uVar10 < (param_4 & 0xffff));
    if (0x37 < uVar6) {
      return 0;
    }
    uVar17 = 3;
    *(undefined2 *)(param_6 + 0x10) = 1;
    *param_6 = param_3;
    *(ushort *)(param_6 + 0xe) = uVar3 & 0x7f | (ushort)(uVar8 << 7);
    *(ushort *)((long)param_6 + 0x72) = uVar6 & 0x7f | (ushort)(uVar9 << 7);
    goto LAB_0013fbb4;
  case 4:
    uVar10 = 0;
    uVar6 = 0;
    local_64[0] = 0;
    puVar19 = param_3;
    do {
      sVar7 = FUN_00141680(*puVar19 >> 8 | *puVar19 << 8,local_64);
      if (sVar7 != 0) {
        return 0;
      }
      if ((short)local_64[0] < 0) {
        local_64[0] = local_64[0] ^ 0x8000;
        psVar16 = (short *)(&DAT_04059bba + (ulong)local_64[0] * 4);
        sVar7 = *(short *)(&DAT_04059bb8 + (ulong)local_64[0] * 4);
      }
      else {
        psVar16 = (short *)(&DAT_04059c0a + (ulong)local_64[0] * 4);
        sVar7 = *(short *)(&DAT_04059c08 + (ulong)local_64[0] * 4);
      }
      if (sVar7 == 0) {
        return 0;
      }
      uVar10 = uVar10 + 1 & 0xffff;
      sVar7 = 1;
      if (*psVar16 != 0) {
        sVar7 = 2;
      }
      uVar6 = sVar7 + uVar6;
      puVar19 = puVar19 + 1;
    } while (uVar10 < (param_4 & 0xffff));
    if (0x37 < uVar6) {
      return 0;
    }
    *(undefined2 *)(param_6 + 0x10) = 1;
    *param_6 = param_3;
    *(ushort *)(param_6 + 0xe) = uVar3 & 0x7f | (ushort)(uVar8 << 7);
    *(ushort *)((long)param_6 + 0x72) = uVar6 & 0x7f | (ushort)(uVar9 << 7);
    uVar17 = 4;
LAB_0013fbb4:
    *(undefined1 *)((long)param_6 + 0x74) = uVar17;
    uVar15 = 0x8ad0;
    if (-0x8001 < (short)uVar3 * -1000) {
      uVar15 = (short)((uint)((short)uVar3 * -0x3e80000) >> 0x10);
    }
    goto LAB_0014128c;
  case 5:
    uVar10 = 0;
    uVar6 = 0;
    pwVar14 = L":.~@";
    local_64[0] = 0;
    puVar19 = param_3;
    do {
      sVar7 = FUN_00141680(*puVar19 >> 8 | *puVar19 << 8,local_64);
      if (sVar7 != 0) {
        return 0;
      }
      if ((short)local_64[0] < 0) {
        return 0;
      }
      if (pwVar14[local_64[0]] == L'\0') {
        return 0;
      }
      uVar6 = uVar6 + 1;
      uVar10 = uVar10 + 1 & 0xffff;
      puVar19 = puVar19 + 1;
      pwVar14 = L":.~@";
    } while (uVar10 < (param_4 & 0xffff));
    if (0x37 < uVar6) {
      return 0;
    }
    *(undefined2 *)(param_6 + 0x10) = 1;
    *param_6 = param_3;
    *(ushort *)(param_6 + 0xe) = uVar3 & 0x7f | (ushort)(uVar8 << 7);
    *(ushort *)((long)param_6 + 0x72) = uVar6 & 0x7f | (ushort)(uVar9 << 7);
    uVar17 = 5;
    break;
  case 6:
    uVar10 = 0;
    uVar6 = 0;
    puVar24 = &DAT_04059798;
    local_64[0] = 0;
    puVar19 = param_3;
    do {
      sVar7 = FUN_00141680(*puVar19 >> 8 | *puVar19 << 8,local_64);
      if (sVar7 != 0) {
        return 0;
      }
      if ((short)local_64[0] < 0) {
        return 0;
      }
      if (*(short *)(puVar24 + (ulong)local_64[0] * 2) == 0) {
        return 0;
      }
      uVar6 = uVar6 + 1;
      uVar10 = uVar10 + 1 & 0xffff;
      puVar19 = puVar19 + 1;
      puVar24 = &DAT_040596f2;
    } while (uVar10 < (param_4 & 0xffff));
    if (0x37 < uVar6) {
      return 0;
    }
    *(undefined2 *)(param_6 + 0x10) = 1;
    *param_6 = param_3;
    *(ushort *)(param_6 + 0xe) = uVar3 & 0x7f | (ushort)(uVar8 << 7);
    *(ushort *)((long)param_6 + 0x72) = uVar6 & 0x7f | (ushort)(uVar9 << 7);
    uVar17 = 6;
    break;
  case 7:
    uVar10 = 0;
    uVar6 = 0;
    local_64[0] = 0;
    puVar19 = param_3;
    do {
      sVar7 = FUN_00141680(*puVar19 >> 8 | *puVar19 << 8,local_64);
      if (sVar7 != 0) {
        return 0;
      }
      if ((short)local_64[0] < 0) {
        return 0;
      }
      if (L":.~@"[local_64[0]] == L'\0') {
        return 0;
      }
      uVar6 = uVar6 + 1;
      uVar10 = uVar10 + 1 & 0xffff;
      puVar19 = puVar19 + 1;
    } while (uVar10 < (param_4 & 0xffff));
    if (0x37 < uVar6) {
      return 0;
    }
    *(undefined2 *)(param_6 + 0x10) = 1;
    *param_6 = param_3;
    *(ushort *)(param_6 + 0xe) = uVar3 & 0x7f | (ushort)(uVar8 << 7);
    *(ushort *)((long)param_6 + 0x72) = uVar6 & 0x7f | (ushort)(uVar9 << 7);
    uVar17 = 7;
    break;
  case 8:
    uVar10 = 0;
    uVar6 = 0;
    local_64[0] = 0;
    puVar19 = param_3;
    do {
      sVar7 = FUN_00141680(*puVar19 >> 8 | *puVar19 << 8,local_64);
      if (sVar7 != 0) {
        return 0;
      }
      if ((short)local_64[0] < 0) {
        return 0;
      }
      if (*(short *)(&DAT_04059798 + (ulong)local_64[0] * 2) == 0) {
        return 0;
      }
      uVar6 = uVar6 + 1;
      uVar10 = uVar10 + 1 & 0xffff;
      puVar19 = puVar19 + 1;
    } while (uVar10 < (param_4 & 0xffff));
    if (0x37 < uVar6) {
      return 0;
    }
    *(undefined2 *)(param_6 + 0x10) = 1;
    *param_6 = param_3;
    *(ushort *)(param_6 + 0xe) = uVar3 & 0x7f | (ushort)(uVar8 << 7);
    *(ushort *)((long)param_6 + 0x72) = uVar6 & 0x7f | (ushort)(uVar9 << 7);
    uVar17 = 8;
    break;
  case 9:
    uVar10 = 0;
    uVar6 = 0;
    local_64[0] = 0;
    puVar19 = param_3;
    do {
      sVar7 = FUN_00141680(*puVar19 >> 8 | *puVar19 << 8,local_64);
      if (sVar7 != 0) {
        return 0;
      }
      if ((short)local_64[0] < 0) {
        return 0;
      }
      if (L":.~@"[local_64[0]] == L'\0') {
        return 0;
      }
      uVar6 = uVar6 + 1;
      uVar10 = uVar10 + 1 & 0xffff;
      puVar19 = puVar19 + 1;
    } while (uVar10 < (param_4 & 0xffff));
    if (0x37 < uVar6) {
      return 0;
    }
    *(undefined2 *)(param_6 + 0x10) = 1;
    *param_6 = param_3;
    *(ushort *)(param_6 + 0xe) = uVar3 & 0x7f | (ushort)(uVar8 << 7);
    *(ushort *)((long)param_6 + 0x72) = uVar6 & 0x7f | (ushort)(uVar9 << 7);
    uVar17 = 9;
    break;
  case 10:
    uVar10 = 0;
    uVar6 = 0;
    local_64[0] = 0;
    puVar19 = param_3;
    do {
      sVar7 = FUN_00141680(*puVar19 >> 8 | *puVar19 << 8,local_64);
      if (sVar7 != 0) {
        return 0;
      }
      if ((short)local_64[0] < 0) {
        return 0;
      }
      if (*(short *)(&DAT_040596f2 + (ulong)local_64[0] * 2) == 0) {
        return 0;
      }
      uVar6 = uVar6 + 1;
      uVar10 = uVar10 + 1 & 0xffff;
      puVar19 = puVar19 + 1;
    } while (uVar10 < (param_4 & 0xffff));
    if (0x37 < uVar6) {
      return 0;
    }
    *(undefined2 *)(param_6 + 0x10) = 1;
    *param_6 = param_3;
    *(ushort *)(param_6 + 0xe) = uVar3 & 0x7f | (ushort)(uVar8 << 7);
    *(ushort *)((long)param_6 + 0x72) = uVar6 & 0x7f | (ushort)(uVar9 << 7);
    uVar17 = 10;
    break;
  case 0xb:
    uVar13 = 0xb;
    goto LAB_0013ffa4;
  case 0xc:
    pwVar14 = L"０１２３４５６７８９";
    uVar13 = 0xc;
    goto LAB_0013ffb8;
  case 0xd:
    uVar13 = 0xd;
LAB_0013ffa4:
    pwVar14 = L"0123456789";
LAB_0013ffb8:
    uVar13 = FUN_00141450(uVar8,uVar10,param_3,param_4,param_6,uVar13,pwVar14);
    return uVar13;
  case 0xe:
    uVar6 = FUN_00141820(param_1,&DAT_04059d54,param_3,param_4);
    if (uVar6 == 0) {
      return 0;
    }
    if (param_1[0x39] == 2) {
      uVar18 = param_1[0x3a];
      if (param_1[0x3b] == 0 && uVar18 == 0) {
        return 0;
      }
      uVar10 = (uint)param_1[0x3b] + ((uint)uVar18 + (uint)uVar18 * 4 & 0x7f) * 2;
    }
    else {
      if (param_1[0x39] != 1) {
        return 0;
      }
      uVar10 = (uint)param_1[0x3a];
    }
    if (0x1bfffffe < (uVar10 << 0x18 | 0xffffff)) {
      return 0;
    }
    *(undefined2 *)(param_6 + 0x10) = 1;
    *param_6 = param_3;
    *(ushort *)(param_6 + 0xe) = uVar3 & 0x7f | (ushort)(uVar8 << 7);
    *(ushort *)((long)param_6 + 0x72) = uVar6 & 0x7f | (ushort)(uVar9 << 7);
    uVar17 = 0xe;
    break;
  case 0xf:
    uVar6 = FUN_00141820(param_1,&DAT_04059d5c,param_3,param_4);
    if (uVar6 == 0) {
      return 0;
    }
    if (3 < (short)param_1[0x39]) {
      return 0;
    }
    if (((1 < (short)param_1[0x39]) && (param_1[0x3a] == 0)) && (param_1[0x3b] == 0)) {
      return 0;
    }
    *(undefined2 *)(param_6 + 0x10) = 1;
    *param_6 = param_3;
    *(ushort *)(param_6 + 0xe) = uVar3 & 0x7f | (ushort)(uVar8 << 7);
    *(ushort *)((long)param_6 + 0x72) = uVar6 & 0x7f | (ushort)(uVar9 << 7);
    uVar17 = 0xf;
    break;
  case 0x10:
    uVar6 = FUN_00141820(param_1,&DAT_04059d64,param_3,param_4);
    if (uVar6 == 0) {
      return 0;
    }
    if (param_1[0x39] != 2) {
      return 0;
    }
    if (0x1bfffffe < ((uint)param_1[0x3a] << 0x18 | 0xffffff)) {
      return 0;
    }
    if (0x3cfffffe < ((uint)param_1[0x3b] << 0x18 | 0xffffff)) {
      return 0;
    }
    *(undefined2 *)(param_6 + 0x10) = 1;
    *param_6 = param_3;
    *(ushort *)(param_6 + 0xe) = uVar3 & 0x7f | (ushort)(uVar8 << 7);
    *(ushort *)((long)param_6 + 0x72) = uVar6 & 0x7f | (ushort)(uVar9 << 7);
    uVar17 = 0x10;
    break;
  case 0x11:
    uVar6 = FUN_00141820(param_1,&DAT_04059d6c,param_3,param_4);
    if (uVar6 == 0) {
      return 0;
    }
    if (param_1[0x39] != 3) {
      return 0;
    }
    if (0x1bfffffe < ((uint)param_1[0x3a] << 0x18 | 0xffffff)) {
      return 0;
    }
    if (0x3cfffffe < ((uint)param_1[0x3b] * 0xa000000 + (uint)param_1[0x3c] * 0x1000000 | 0xffffff))
    {
      return 0;
    }
    *(undefined2 *)(param_6 + 0x10) = 1;
    *param_6 = param_3;
    *(ushort *)(param_6 + 0xe) = uVar3 & 0x7f | (ushort)(uVar8 << 7);
    *(ushort *)((long)param_6 + 0x72) = uVar6 & 0x7f | (ushort)(uVar9 << 7);
    uVar17 = 0x11;
    break;
  case 0x12:
    uVar6 = FUN_00141820(param_1,&DAT_04059d74,param_3,param_4);
    if (uVar6 == 0) {
      return 0;
    }
    if (param_1[0x39] != 3) {
      return 0;
    }
    if (param_1[0x3b] == 0 && param_1[0x3a] == 0) {
      return 0;
    }
    if (0x1bfffffe < ((uint)param_1[0x3a] * 0xa000000 + (uint)param_1[0x3b] * 0x1000000 | 0xffffff))
    {
      return 0;
    }
    if (0x3cfffffe < ((uint)param_1[0x3c] << 0x18 | 0xffffff)) {
      return 0;
    }
    *(undefined2 *)(param_6 + 0x10) = 1;
    *param_6 = param_3;
    *(ushort *)(param_6 + 0xe) = uVar3 & 0x7f | (ushort)(uVar8 << 7);
    *(ushort *)((long)param_6 + 0x72) = uVar6 & 0x7f | (ushort)(uVar9 << 7);
    uVar17 = 0x12;
    break;
  case 0x13:
    uVar6 = FUN_00141820(param_1,&DAT_04059d7c,param_3,param_4);
    if (uVar6 == 0) {
      return 0;
    }
    if (param_1[0x39] != 4) {
      return 0;
    }
    if (param_1[0x3b] == 0 && param_1[0x3a] == 0) {
      return 0;
    }
    if (0x1bfffffe < ((uint)param_1[0x3a] * 0xa000000 + (uint)param_1[0x3b] * 0x1000000 | 0xffffff))
    {
      return 0;
    }
    if (0x3cfffffe < ((uint)param_1[0x3c] * 0xa000000 + (uint)param_1[0x3d] * 0x1000000 | 0xffffff))
    {
      return 0;
    }
    *(undefined2 *)(param_6 + 0x10) = 1;
    *param_6 = param_3;
    *(ushort *)(param_6 + 0xe) = uVar3 & 0x7f | (ushort)(uVar8 << 7);
    *(ushort *)((long)param_6 + 0x72) = uVar6 & 0x7f | (ushort)(uVar9 << 7);
    uVar17 = 0x13;
    break;
  case 0x14:
    uVar6 = FUN_00141820(param_1,&DAT_04059d84,param_3,param_4);
    if (uVar6 == 0) {
      return 0;
    }
    if (param_1[0x39] != 3) {
      return 0;
    }
    if (0x1bfffffe < ((uint)param_1[0x3a] << 0x18 | 0xffffff)) {
      return 0;
    }
    if (0x3cfffffe < ((uint)param_1[0x3b] * 0xa000000 + (uint)param_1[0x3c] * 0x1000000 | 0xffffff))
    {
      return 0;
    }
    *(undefined2 *)(param_6 + 0x10) = 1;
    *param_6 = param_3;
    *(ushort *)(param_6 + 0xe) = uVar3 & 0x7f | (ushort)(uVar8 << 7);
    *(ushort *)((long)param_6 + 0x72) = uVar6 & 0x7f | (ushort)(uVar9 << 7);
    uVar17 = 0x14;
    break;
  case 0x15:
    uVar6 = FUN_00141820(param_1,&DAT_04059d8c,param_3,param_4);
    if (uVar6 == 0) {
      return 0;
    }
    if (param_1[0x39] != 4) {
      return 0;
    }
    if (param_1[0x3b] == 0 && param_1[0x3a] == 0) {
      return 0;
    }
    if (0x1bfffffe < ((uint)param_1[0x3a] * 0xa000000 + (uint)param_1[0x3b] * 0x1000000 | 0xffffff))
    {
      return 0;
    }
    if (0x3cfffffe < ((uint)param_1[0x3c] * 0xa000000 + (uint)param_1[0x3d] * 0x1000000 | 0xffffff))
    {
      return 0;
    }
    *(undefined2 *)(param_6 + 0x10) = 1;
    *param_6 = param_3;
    *(ushort *)(param_6 + 0xe) = uVar3 & 0x7f | (ushort)(uVar8 << 7);
    *(ushort *)((long)param_6 + 0x72) = uVar6 & 0x7f | (ushort)(uVar9 << 7);
    uVar17 = 0x15;
    break;
  case 0x16:
    uVar6 = FUN_00141820(param_1,&DAT_04059d94,param_3,param_4);
    if (uVar6 == 0) {
      return 0;
    }
    switch(param_1[0x39]) {
    case 1:
      uVar10 = (uint)param_1[0x3a];
      break;
    case 2:
      uVar10 = (uint)param_1[0x3b] + (uint)param_1[0x3a] * 10;
      break;
    case 3:
      iVar21 = (uint)param_1[0x3a] * 100 + (uint)param_1[0x3b] * 10;
      uVar18 = param_1[0x3c];
      goto LAB_00141184;
    case 4:
      iVar21 = (uint)param_1[0x3a] * 1000 + (uint)param_1[0x3b] * 100 + (uint)param_1[0x3c] * 10;
      uVar18 = param_1[0x3d];
LAB_00141184:
      uVar10 = iVar21 + (uint)uVar18;
      break;
    default:
      goto LAB_0014111c;
    }
    if (0x270e < uVar10 - 1) {
LAB_0014111c:
      return 0;
    }
    *(undefined2 *)(param_6 + 0x10) = 1;
    *param_6 = param_3;
    *(ushort *)(param_6 + 0xe) = uVar3 & 0x7f | (ushort)(uVar8 << 7);
    *(ushort *)((long)param_6 + 0x72) = uVar6 & 0x7f | (ushort)(uVar9 << 7);
    uVar17 = 0x16;
    break;
  case 0x17:
    uVar6 = FUN_00141820(param_1,&DAT_04059d9c,param_3,param_4);
    if (uVar6 == 0) {
      return 0;
    }
    if (param_1[0x39] == 2) {
      if (param_1[0x3a] == 0) {
        return 0;
      }
      uVar18 = param_1[0x3b] + param_1[0x3a] * 10;
    }
    else {
      if (param_1[0x39] != 1) {
        return 0;
      }
      uVar18 = (ushort)(byte)param_1[0x3a];
    }
    if (0xb < (ushort)((uVar18 & 0xff) - 1)) {
      return 0;
    }
    *(undefined2 *)(param_6 + 0x10) = 1;
    *param_6 = param_3;
    *(ushort *)(param_6 + 0xe) = uVar3 & 0x7f | (ushort)(uVar8 << 7);
    *(ushort *)((long)param_6 + 0x72) = uVar6 & 0x7f | (ushort)(uVar9 << 7);
    uVar17 = 0x17;
    break;
  case 0x18:
    uVar6 = FUN_00141820(param_1,&DAT_04059da4,param_3,param_4);
    if (uVar6 == 0) {
      return 0;
    }
    if (param_1[0x39] == 2) {
      if (param_1[0x3a] == 0) {
        return 0;
      }
      uVar18 = param_1[0x3b] + param_1[0x3a] * 10;
    }
    else {
      if (param_1[0x39] != 1) {
        return 0;
      }
      uVar18 = (ushort)(byte)param_1[0x3a];
    }
    if (0x1e < (ushort)((uVar18 & 0xff) - 1)) {
      return 0;
    }
    *(undefined2 *)(param_6 + 0x10) = 1;
    *param_6 = param_3;
    *(ushort *)(param_6 + 0xe) = uVar3 & 0x7f | (ushort)(uVar8 << 7);
    *(ushort *)((long)param_6 + 0x72) = uVar6 & 0x7f | (ushort)(uVar9 << 7);
    uVar17 = 0x18;
    break;
  case 0x19:
    uVar6 = FUN_00141820(param_1,&DAT_04059dac,param_3,param_4);
    if (uVar6 == 0) {
      return 0;
    }
    if (param_1[0x39] != 2) {
      return 0;
    }
    if (0xb < (ushort)((byte)param_1[0x3a] - 1)) {
      return 0;
    }
    if ((byte)param_1[0x3b] == 0) {
      return 0;
    }
    if ((byte)(&DAT_04059df3)[(byte)param_1[0x3a]] < (byte)param_1[0x3b]) {
      return 0;
    }
    *(undefined2 *)(param_6 + 0x10) = 1;
    *param_6 = param_3;
    *(ushort *)(param_6 + 0xe) = uVar3 & 0x7f | (ushort)(uVar8 << 7);
    *(ushort *)((long)param_6 + 0x72) = uVar6 & 0x7f | (ushort)(uVar9 << 7);
    uVar17 = 0x19;
    break;
  case 0x1a:
    uVar6 = FUN_00141820(param_1,&DAT_04059db4,param_3,param_4);
    if (uVar6 == 0) {
      return 0;
    }
    if (param_1[0x39] != 3) {
      return 0;
    }
    if (param_1[0x3b] == 0) {
      return 0;
    }
    if (0xb < (ushort)((byte)param_1[0x3a] - 1)) {
      return 0;
    }
    uVar18 = param_1[0x3c] + param_1[0x3b] * 10 & 0xff;
    if (uVar18 == 0) {
      return 0;
    }
    if ((byte)(&DAT_04059df3)[(byte)param_1[0x3a]] < uVar18) {
      return 0;
    }
    *(undefined2 *)(param_6 + 0x10) = 1;
    *param_6 = param_3;
    *(ushort *)(param_6 + 0xe) = uVar3 & 0x7f | (ushort)(uVar8 << 7);
    *(ushort *)((long)param_6 + 0x72) = uVar6 & 0x7f | (ushort)(uVar9 << 7);
    uVar17 = 0x1a;
    break;
  case 0x1b:
    uVar6 = FUN_00141820(param_1,&DAT_04059dbc,param_3,param_4);
    if (uVar6 == 0) {
      return 0;
    }
    if (param_1[0x39] != 3) {
      return 0;
    }
    if (param_1[0x3a] == 0) {
      return 0;
    }
    uVar10 = (uint)param_1[0x3b] + (uint)param_1[0x3a] * 10 & 0xff;
    if (0xb < (uVar10 - 1 & 0xffff)) {
      return 0;
    }
    if ((byte)param_1[0x3c] == 0) {
      return 0;
    }
    if ((byte)(&DAT_04059df3)[uVar10] < (byte)param_1[0x3c]) {
      return 0;
    }
    *(undefined2 *)(param_6 + 0x10) = 1;
    *param_6 = param_3;
    *(ushort *)(param_6 + 0xe) = uVar3 & 0x7f | (ushort)(uVar8 << 7);
    *(ushort *)((long)param_6 + 0x72) = uVar6 & 0x7f | (ushort)(uVar9 << 7);
    uVar17 = 0x1b;
    break;
  case 0x1c:
    uVar6 = FUN_00141820(param_1,&DAT_04059dc4,param_3,param_4);
    if (uVar6 == 0) {
      return 0;
    }
    if (param_1[0x39] != 4) {
      return 0;
    }
    if (param_1[0x3a] == 0) {
      return 0;
    }
    uVar10 = (uint)param_1[0x3b] + (uint)param_1[0x3a] * 10 & 0xff;
    if (0xb < (uVar10 - 1 & 0xffff)) {
      return 0;
    }
    uVar18 = param_1[0x3d] + param_1[0x3c] * 10 & 0xff;
    if (uVar18 == 0) {
      return 0;
    }
    if ((byte)(&DAT_04059df3)[uVar10] < uVar18) {
      return 0;
    }
    *(undefined2 *)(param_6 + 0x10) = 1;
    *param_6 = param_3;
    *(ushort *)(param_6 + 0xe) = uVar3 & 0x7f | (ushort)(uVar8 << 7);
    *(ushort *)((long)param_6 + 0x72) = uVar6 & 0x7f | (ushort)(uVar9 << 7);
    uVar17 = 0x1c;
    break;
  case 0x1d:
    uVar6 = FUN_00141820(param_1,&DAT_04059dcc,param_3,param_4);
    if (uVar6 == 0) {
      return 0;
    }
    if (param_1[0x39] != 2) {
      return 0;
    }
    if (0xb < (ushort)((byte)param_1[0x3a] - 1)) {
      return 0;
    }
    if ((byte)param_1[0x3b] == 0) {
      return 0;
    }
    if ((byte)(&DAT_04059df3)[(byte)param_1[0x3a]] < (byte)param_1[0x3b]) {
      return 0;
    }
    *(undefined2 *)(param_6 + 0x10) = 1;
    *param_6 = param_3;
    *(ushort *)(param_6 + 0xe) = uVar3 & 0x7f | (ushort)(uVar8 << 7);
    *(ushort *)((long)param_6 + 0x72) = uVar6 & 0x7f | (ushort)(uVar9 << 7);
    uVar17 = 0x1d;
    break;
  case 0x1e:
    uVar6 = FUN_00141820(param_1,&DAT_04059dd4,param_3,param_4);
    if (uVar6 == 0) {
      return 0;
    }
    if (param_1[0x39] != 3) {
      return 0;
    }
    if (param_1[0x3b] == 0) {
      return 0;
    }
    if (0xb < (ushort)((byte)param_1[0x3a] - 1)) {
      return 0;
    }
    uVar18 = param_1[0x3c] + param_1[0x3b] * 10 & 0xff;
    if (uVar18 == 0) {
      return 0;
    }
    if ((byte)(&DAT_04059df3)[(byte)param_1[0x3a]] < uVar18) {
      return 0;
    }
    *(undefined2 *)(param_6 + 0x10) = 1;
    *param_6 = param_3;
    *(ushort *)(param_6 + 0xe) = uVar3 & 0x7f | (ushort)(uVar8 << 7);
    *(ushort *)((long)param_6 + 0x72) = uVar6 & 0x7f | (ushort)(uVar9 << 7);
    uVar17 = 0x1e;
    break;
  case 0x1f:
    uVar6 = FUN_00141820(param_1,&DAT_04059ddc,param_3,param_4);
    if (uVar6 == 0) {
      return 0;
    }
    if (param_1[0x39] != 3) {
      return 0;
    }
    if (param_1[0x3a] == 0) {
      return 0;
    }
    uVar10 = (uint)param_1[0x3b] + (uint)param_1[0x3a] * 10 & 0xff;
    if (0xb < (uVar10 - 1 & 0xffff)) {
      return 0;
    }
    if ((byte)param_1[0x3c] == 0) {
      return 0;
    }
    if ((byte)(&DAT_04059df3)[uVar10] < (byte)param_1[0x3c]) {
      return 0;
    }
    *(undefined2 *)(param_6 + 0x10) = 1;
    *param_6 = param_3;
    *(ushort *)(param_6 + 0xe) = uVar3 & 0x7f | (ushort)(uVar8 << 7);
    *(ushort *)((long)param_6 + 0x72) = uVar6 & 0x7f | (ushort)(uVar9 << 7);
    uVar17 = 0x1f;
    break;
  case 0x20:
    uVar6 = FUN_00141820(param_1,&DAT_04059de4,param_3,param_4);
    if (uVar6 == 0) {
      return 0;
    }
    if (param_1[0x39] != 4) {
      return 0;
    }
    uVar10 = (uint)param_1[0x3b] + (uint)param_1[0x3a] * 10 & 0xff;
    if (0xb < (uVar10 - 1 & 0xffff)) {
      return 0;
    }
    uVar18 = param_1[0x3d] + param_1[0x3c] * 10 & 0xff;
    if (uVar18 == 0) {
      return 0;
    }
    if ((byte)(&DAT_04059df3)[uVar10] < uVar18) {
      return 0;
    }
    *(undefined2 *)(param_6 + 0x10) = 1;
    *param_6 = param_3;
    *(ushort *)(param_6 + 0xe) = uVar3 & 0x7f | (ushort)(uVar8 << 7);
    *(ushort *)((long)param_6 + 0x72) = uVar6 & 0x7f | (ushort)(uVar9 << 7);
    uVar17 = 0x20;
    break;
  case 0x21:
    uVar6 = 0;
    uVar9 = 0;
    param_1[0x38] = 0;
    puVar19 = param_1;
    while (uVar9 = uVar9 & 0xffff, uVar9 < (param_4 & 0xffff)) {
      puVar1 = param_3 + uVar9;
      uVar18 = CONCAT11((char)*puVar1,*(undefined1 *)((long)puVar1 + 1));
      puVar23 = &DAT_04059e08;
      puVar22 = &DAT_04059e00;
      while (uVar2 = puVar22[3], 0 < (short)uVar2) {
        lVar20 = 0;
        uVar4 = uVar2;
        uVar12 = uVar18;
        while (uVar12 <= *(ushort *)((long)puVar22 + lVar20)) {
          if (uVar12 < *(ushort *)((long)puVar22 + lVar20)) goto LAB_00140a88;
          uVar4 = uVar4 - 1;
          uVar12 = CONCAT11(*(undefined1 *)((long)puVar1 + lVar20 + 2),
                            *(undefined1 *)((long)puVar1 + lVar20 + 3));
          lVar20 = lVar20 + 2;
          if ((short)uVar4 < 1) goto LAB_00140aa4;
        }
        if (uVar18 != *puVar22) {
          return 0;
        }
LAB_00140a88:
        puVar23 = puVar22 + 9;
        puVar22 = puVar22 + 5;
        if ((short)*puVar23 < 1) {
          return 0;
        }
      }
LAB_00140aa4:
      uVar18 = *puVar23;
      if ((short)uVar18 < 1) {
        return 0;
      }
      iVar21 = (int)(short)uVar18;
      if ((((9 < iVar21) && (3 < iVar21 - 0x65U)) && (iVar21 != 0x3f0)) && (uVar18 != 0x3ec)) {
        return 0;
      }
      uVar9 = uVar9 + (byte)uVar2;
      param_1[0x38] = uVar6 + 1;
      *puVar19 = uVar18;
      if ((param_4 & 0xffff) < (uVar9 & 0xffff)) {
        return 0;
      }
      uVar6 = param_1[0x38];
      puVar19 = puVar19 + 1;
      if (0x36 < (short)uVar6) {
        return 0;
      }
    }
    *puVar19 = 0;
    sVar7 = FUN_00141a70(param_1);
    if (sVar7 < 0) {
      return 0;
    }
    if ((long)(short)param_1[0x39] < 1) {
      uVar6 = 0;
    }
    else {
      lVar20 = 0;
      uVar6 = 0;
      do {
        if (L"0123456789"[(byte)param_1[lVar20 + 0x3a]] == L'\0') {
          return 0;
        }
        uVar6 = uVar6 + 1;
        lVar20 = lVar20 + 1;
      } while (lVar20 < (short)param_1[0x39]);
      if (0x37 < uVar6) {
        return 0;
      }
    }
    *(undefined2 *)(param_6 + 0x10) = 1;
    *param_6 = param_3;
    *(ushort *)(param_6 + 0xe) = uVar3 & 0x7f | (ushort)(uVar8 << 7);
    *(ushort *)((long)param_6 + 0x72) = uVar6 & 0x7f | (ushort)(uVar10 << 7);
    uVar17 = 0x21;
    break;
  case 0x22:
    uVar6 = 0;
    uVar9 = 0;
    param_1[0x38] = 0;
    puVar19 = param_1;
    while (uVar9 = uVar9 & 0xffff, uVar9 < (param_4 & 0xffff)) {
      puVar1 = param_3 + uVar9;
      uVar18 = CONCAT11((char)*puVar1,*(undefined1 *)((long)puVar1 + 1));
      puVar23 = &DAT_04059e08;
      puVar22 = &DAT_04059e00;
      while (uVar2 = puVar22[3], 0 < (short)uVar2) {
        lVar20 = 0;
        uVar4 = uVar2;
        uVar12 = uVar18;
        while (uVar12 <= *(ushort *)((long)puVar22 + lVar20)) {
          if (uVar12 < *(ushort *)((long)puVar22 + lVar20)) goto LAB_00140ba8;
          uVar4 = uVar4 - 1;
          uVar12 = CONCAT11(*(undefined1 *)((long)puVar1 + lVar20 + 2),
                            *(undefined1 *)((long)puVar1 + lVar20 + 3));
          lVar20 = lVar20 + 2;
          if ((short)uVar4 < 1) goto LAB_00140bc4;
        }
        if (uVar18 != *puVar22) {
          return 0;
        }
LAB_00140ba8:
        puVar23 = puVar22 + 9;
        puVar22 = puVar22 + 5;
        if ((short)*puVar23 < 1) {
          return 0;
        }
      }
LAB_00140bc4:
      uVar18 = *puVar23;
      if ((short)uVar18 < 1) {
        return 0;
      }
      iVar21 = (int)(short)uVar18;
      if (((9 < iVar21) && (3 < iVar21 - 0x65U)) && ((iVar21 != 0x3f0 && (uVar18 != 0x3ec)))) {
        return 0;
      }
      uVar9 = uVar9 + (byte)uVar2;
      param_1[0x38] = uVar6 + 1;
      *puVar19 = uVar18;
      if ((param_4 & 0xffff) < (uVar9 & 0xffff)) {
        return 0;
      }
      uVar6 = param_1[0x38];
      puVar19 = puVar19 + 1;
      if (0x36 < (short)uVar6) {
        return 0;
      }
    }
    *puVar19 = 0;
    sVar7 = FUN_00141a70(param_1);
    if (sVar7 < 0) {
      return 0;
    }
    if ((long)(short)param_1[0x39] < 1) {
      uVar6 = 0;
    }
    else {
      lVar20 = 0;
      uVar6 = 0;
      do {
        if (*(short *)(&DAT_04059854 + (ulong)(byte)param_1[lVar20 + 0x3a] * 2) == 0) {
          return 0;
        }
        uVar6 = uVar6 + 1;
        lVar20 = lVar20 + 1;
      } while (lVar20 < (short)param_1[0x39]);
      if (0x37 < uVar6) {
        return 0;
      }
    }
    *(undefined2 *)(param_6 + 0x10) = 1;
    *param_6 = param_3;
    *(ushort *)(param_6 + 0xe) = uVar3 & 0x7f | (ushort)(uVar8 << 7);
    *(ushort *)((long)param_6 + 0x72) = uVar6 & 0x7f | (ushort)(uVar10 << 7);
    uVar17 = 0x22;
    break;
  case 0x23:
    uVar6 = 0;
    uVar9 = 0;
    param_1[0x38] = 0;
    puVar19 = param_1;
    while (uVar9 = uVar9 & 0xffff, uVar9 < (param_4 & 0xffff)) {
      puVar1 = param_3 + uVar9;
      uVar18 = CONCAT11((char)*puVar1,*(undefined1 *)((long)puVar1 + 1));
      puVar23 = &DAT_04059e08;
      puVar22 = &DAT_04059e00;
      while (uVar2 = puVar22[3], 0 < (short)uVar2) {
        lVar20 = 0;
        uVar4 = uVar2;
        uVar12 = uVar18;
        while (uVar12 <= *(ushort *)((long)puVar22 + lVar20)) {
          if (uVar12 < *(ushort *)((long)puVar22 + lVar20)) goto LAB_00140cc8;
          uVar4 = uVar4 - 1;
          uVar12 = CONCAT11(*(undefined1 *)((long)puVar1 + lVar20 + 2),
                            *(undefined1 *)((long)puVar1 + lVar20 + 3));
          lVar20 = lVar20 + 2;
          if ((short)uVar4 < 1) goto LAB_00140ce4;
        }
        if (uVar18 != *puVar22) {
          return 0;
        }
LAB_00140cc8:
        puVar23 = puVar22 + 9;
        puVar22 = puVar22 + 5;
        if ((short)*puVar23 < 1) {
          return 0;
        }
      }
LAB_00140ce4:
      uVar18 = *puVar23;
      if ((short)uVar18 < 1) {
        return 0;
      }
      iVar21 = (int)(short)uVar18;
      if (((9 < iVar21) && (3 < iVar21 - 0x65U)) && ((iVar21 != 0x3f0 && (uVar18 != 0x3ec)))) {
        return 0;
      }
      uVar9 = uVar9 + (byte)uVar2;
      param_1[0x38] = uVar6 + 1;
      *puVar19 = uVar18;
      if ((param_4 & 0xffff) < (uVar9 & 0xffff)) {
        return 0;
      }
      uVar6 = param_1[0x38];
      puVar19 = puVar19 + 1;
      if (0x36 < (short)uVar6) {
        return 0;
      }
    }
    *puVar19 = 0;
    sVar7 = FUN_00141a70(param_1);
    if (sVar7 < 0) {
      return 0;
    }
    if ((long)(short)param_1[0x39] < 1) {
      uVar6 = 0;
    }
    else {
      lVar20 = 0;
      uVar6 = 0;
      do {
        if (*(short *)(&DAT_0405986a + (ulong)(byte)param_1[lVar20 + 0x3a] * 2) == 0) {
          return 0;
        }
        uVar6 = uVar6 + 1;
        lVar20 = lVar20 + 1;
      } while (lVar20 < (short)param_1[0x39]);
      if (0x37 < uVar6) {
        return 0;
      }
    }
    *(undefined2 *)(param_6 + 0x10) = 1;
    *param_6 = param_3;
    *(ushort *)(param_6 + 0xe) = uVar3 & 0x7f | (ushort)(uVar8 << 7);
    *(ushort *)((long)param_6 + 0x72) = uVar6 & 0x7f | (ushort)(uVar10 << 7);
    uVar17 = 0x23;
    break;
  case 0x24:
    uVar6 = 0;
    uVar9 = 0;
    param_1[0x38] = 0;
    puVar19 = param_1;
    while (uVar9 = uVar9 & 0xffff, uVar9 < (param_4 & 0xffff)) {
      puVar1 = param_3 + uVar9;
      uVar18 = CONCAT11((char)*puVar1,*(undefined1 *)((long)puVar1 + 1));
      puVar23 = &DAT_04059e08;
      puVar22 = &DAT_04059e00;
      while (uVar2 = puVar22[3], 0 < (short)uVar2) {
        lVar20 = 0;
        uVar4 = uVar2;
        uVar12 = uVar18;
        while (uVar12 <= *(ushort *)((long)puVar22 + lVar20)) {
          if (uVar12 < *(ushort *)((long)puVar22 + lVar20)) goto LAB_00140de8;
          uVar4 = uVar4 - 1;
          uVar12 = CONCAT11(*(undefined1 *)((long)puVar1 + lVar20 + 2),
                            *(undefined1 *)((long)puVar1 + lVar20 + 3));
          lVar20 = lVar20 + 2;
          if ((short)uVar4 < 1) goto LAB_00140e04;
        }
        if (uVar18 != *puVar22) {
          return 0;
        }
LAB_00140de8:
        puVar23 = puVar22 + 9;
        puVar22 = puVar22 + 5;
        if ((short)*puVar23 < 1) {
          return 0;
        }
      }
LAB_00140e04:
      uVar18 = *puVar23;
      if ((short)uVar18 < 1) {
        return 0;
      }
      iVar21 = (int)(short)uVar18;
      if ((((9 < iVar21) && (3 < iVar21 - 0x65U)) && (iVar21 != 0x3f0)) && (uVar18 != 0x3ec)) {
        return 0;
      }
      uVar9 = uVar9 + (byte)uVar2;
      param_1[0x38] = uVar6 + 1;
      *puVar19 = uVar18;
      if ((param_4 & 0xffff) < (uVar9 & 0xffff)) {
        return 0;
      }
      uVar6 = param_1[0x38];
      puVar19 = puVar19 + 1;
      if (0x36 < (short)uVar6) {
        return 0;
      }
    }
    *puVar19 = 0;
    sVar7 = FUN_00141a70(param_1);
    if (sVar7 < 0) {
      return 0;
    }
    uVar6 = param_1[0x38];
    if (0x37 < uVar6) {
      return 0;
    }
    *(undefined2 *)(param_6 + 0x10) = 1;
    *(ushort *)((long)param_6 + 0x72) = uVar6 & 0x7f | (ushort)(uVar10 << 7);
    uVar17 = 0x24;
    *param_6 = param_3;
    *(ushort *)(param_6 + 0xe) = uVar3 & 0x7f | (ushort)(uVar8 << 7);
    break;
  default:
    goto LAB_0014111c;
  }
  *(undefined1 *)((long)param_6 + 0x74) = uVar17;
  uVar15 = 0x8ad0;
  if (-0x8001 < (short)uVar3 * -1000) {
    uVar15 = (short)((uint)((short)uVar3 * -0x3e80000) >> 0x10);
  }
LAB_0014128c:
  *(undefined2 *)(param_6 + 1) = uVar15;
  return 1;
}

