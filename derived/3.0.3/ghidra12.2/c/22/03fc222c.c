
undefined8 FUN_03fc222c(undefined1 *param_1,uint param_2,ulong param_3)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  
  puVar7 = PTR_DAT_04bdf2c8;
  if ((param_2 >> 8 & 0xff) < 0x21) {
    return 0;
  }
  uVar14 = param_3 & 0xffffffff;
  plVar1 = (long *)(param_1 + 0x45940);
  bVar3 = (byte)uVar14;
  if ((param_2 >> 6 & 0x3ff) == 0x85) {
    pbVar11 = (byte *)(*plVar1 + (ulong)(param_2 & 3 | 0xf4) + 0x60);
    goto LAB_03fc22d8;
  }
  if (0x8f < (param_2 & 0xffff) - 0x2100) {
switchD_03fc22c4_caseD_2140:
    if (((param_2 - 0x3000 & 0xffff) < 0x300) &&
       (plVar9 = *(long **)(*plVar1 + 0x34e078), (char)plVar9[1] != '\0')) {
      (**(code **)(*plVar9 + 0x28))(plVar9,param_2,uVar14);
    }
    goto switchD_03fc22c4_caseD_2134;
  }
  pbVar11 = param_1 + 0x316aa3;
  uVar13 = (uint)param_3;
  switch(param_2 & 0xffff) {
  case 0x2100:
    FUN_03fc55c0(param_1,uVar14);
    break;
  case 0x2101:
    FUN_03fc1800(param_1,uVar14);
    break;
  case 0x2102:
    FUN_03fc1a94(param_1 + 0x41cd8,uVar14);
    break;
  case 0x2103:
    FUN_03fc1ae4(param_1 + 0x41cd8,uVar14);
    break;
  case 0x2104:
    FUN_03fc1b3c(param_1,uVar14);
    break;
  case 0x2105:
    FUN_03fc4600(param_1,uVar14);
    break;
  case 0x2106:
    FUN_03fc5434(param_1,uVar14);
    break;
  case 0x2107:
    uVar10 = 0;
    goto LAB_03fc2394;
  case 0x2108:
    uVar10 = 1;
    goto LAB_03fc2394;
  case 0x2109:
    uVar10 = 2;
    goto LAB_03fc2394;
  case 0x210a:
    uVar10 = 3;
LAB_03fc2394:
    FUN_03fc456c(param_1,uVar10,uVar14);
    break;
  case 0x210b:
    FUN_03fc2900(param_1,uVar14);
    break;
  case 0x210c:
    FUN_03fc2bb0(param_1,uVar14);
    break;
  case 0x210d:
    bVar2 = *pbVar11;
    *pbVar11 = bVar3;
    uVar6 = bVar2 & 0xf8 | (ushort)(uVar13 << 8) | (byte)param_1[0x45ad1] & 7;
    uVar5 = *(ushort *)(param_1 + 0x45ad8) & uVar6;
    *(ushort *)(param_1 + 0x45ad0) = uVar6;
    *(ushort *)(param_1 + 0x45ad4) = uVar5 | -(uVar5 & 0x1000);
    break;
  case 0x210e:
    bVar2 = *pbVar11;
    *pbVar11 = bVar3;
    uVar5 = (ushort)bVar2 | (ushort)(uVar13 << 8);
    *(ushort *)(param_1 + 0x45ad2) = uVar5;
    uVar5 = uVar5 + 1 & *(ushort *)(param_1 + 0x45ada);
    *(ushort *)(param_1 + 0x45ad6) = uVar5 | -(uVar5 & 0x1000);
    break;
  case 0x210f:
    bVar2 = *pbVar11;
    *pbVar11 = bVar3;
    uVar6 = bVar2 & 0xf8 | (ushort)(uVar13 << 8) | (byte)param_1[0x45b89] & 7;
    uVar5 = *(ushort *)(param_1 + 0x45b90) & uVar6;
    *(ushort *)(param_1 + 0x45b88) = uVar6;
    *(ushort *)(param_1 + 0x45b8c) = uVar5 | -(uVar5 & 0x1000);
    break;
  case 0x2110:
    bVar2 = *pbVar11;
    *pbVar11 = bVar3;
    uVar5 = (ushort)bVar2 | (ushort)(uVar13 << 8);
    *(ushort *)(param_1 + 0x45b8a) = uVar5;
    uVar5 = uVar5 + 1 & *(ushort *)(param_1 + 0x45b92);
    *(ushort *)(param_1 + 0x45b8e) = uVar5 | -(uVar5 & 0x1000);
    break;
  case 0x2111:
    bVar2 = *pbVar11;
    *pbVar11 = bVar3;
    uVar6 = bVar2 & 0xf8 | (ushort)(uVar13 << 8) | (byte)param_1[0x45c41] & 7;
    uVar5 = *(ushort *)(param_1 + 0x45c48) & uVar6;
    *(ushort *)(param_1 + 0x45c40) = uVar6;
    *(ushort *)(param_1 + 0x45c44) = uVar5 | -(uVar5 & 0x1000);
    break;
  case 0x2112:
    bVar2 = *pbVar11;
    *pbVar11 = bVar3;
    uVar5 = (ushort)bVar2 | (ushort)(uVar13 << 8);
    *(ushort *)(param_1 + 0x45c42) = uVar5;
    uVar5 = uVar5 + 1 & *(ushort *)(param_1 + 0x45c4a);
    *(ushort *)(param_1 + 0x45c46) = uVar5 | -(uVar5 & 0x1000);
    break;
  case 0x2113:
    bVar2 = *pbVar11;
    *pbVar11 = bVar3;
    uVar6 = bVar2 & 0xf8 | (ushort)(uVar13 << 8) | (byte)param_1[0x45cf9] & 7;
    uVar5 = *(ushort *)(param_1 + 0x45d00) & uVar6;
    *(ushort *)(param_1 + 0x45cf8) = uVar6;
    *(ushort *)(param_1 + 0x45cfc) = uVar5 | -(uVar5 & 0x1000);
    break;
  case 0x2114:
    bVar2 = *pbVar11;
    *pbVar11 = bVar3;
    uVar5 = (ushort)bVar2 | (ushort)(uVar13 << 8);
    *(ushort *)(param_1 + 0x45cfa) = uVar5;
    uVar5 = uVar5 + 1 & *(ushort *)(param_1 + 0x45d02);
    *(ushort *)(param_1 + 0x45cfe) = uVar5 | -(uVar5 & 0x1000);
    break;
  case 0x2115:
    uVar4 = uVar13 >> 7 & 1;
    *param_1 = (char)uVar4;
    *(undefined2 *)(param_1 + (ulong)uVar4 * 2 + 4) = *(undefined2 *)(puVar7 + (param_3 & 3) * 2);
    *(undefined2 *)(param_1 + (ulong)(uVar4 ^ 1) * 2 + 4) = 0;
    param_1[1] = (byte)(uVar13 >> 2) & 3;
    break;
  case 0x2116:
    FUN_03fc2e14(param_1,uVar14);
    break;
  case 0x2117:
    FUN_03fc2e9c(param_1,uVar14);
    break;
  case 0x2118:
    FUN_03ff9b90(param_1,uVar14);
    break;
  case 0x2119:
    FUN_03ff9d90(param_1,uVar14);
    break;
  case 0x211a:
    uVar4 = uVar13 & 0x3f;
    if (*(int *)(*(long *)(param_1 + 0x45e68) + 0x4c) == 0 || (uVar13 & 0xc0) != 0x40) {
      uVar4 = uVar13;
    }
    param_1[0x316ab9] = (byte)(uVar4 >> 1) & 1;
    param_1[0x316aba] = (byte)uVar4 & 1;
    param_1[0x316abb] = (byte)(uVar4 >> 6) & 3;
    break;
  case 0x211b:
    param_1[0x316ab8] = 1;
    uVar5 = (ushort)((param_3 << 0x20) >> 0x18) | *(ushort *)(param_1 + 0x316aa4) >> 8;
    *(ushort *)(param_1 + 0x316aa4) = uVar5;
    *(int *)(param_1 + 0x316ab4) = (int)(char)param_1[0x316aa7] * (int)(short)uVar5;
    break;
  case 0x211c:
    param_1[0x316ab8] = 1;
    uVar14 = param_3 << 0x20 | (ulong)*(ushort *)(param_1 + 0x316aa6) << 0x10;
    *(short *)(param_1 + 0x316aa6) = (short)(uVar14 >> 0x18);
    *(int *)(param_1 + 0x316ab4) =
         (((int)(uVar14 >> 0x18) << 0x10) >> 0x18) * (int)*(short *)(param_1 + 0x316aa4);
    break;
  case 0x211d:
    *(ushort *)(param_1 + 0x316aa8) =
         (ushort)((param_3 << 0x20) >> 0x18) | *(ushort *)(param_1 + 0x316aa8) >> 8;
    goto LAB_03fc26c4;
  case 0x211e:
    *(ushort *)(param_1 + 0x316aaa) =
         (ushort)((param_3 << 0x20) >> 0x18) | *(ushort *)(param_1 + 0x316aaa) >> 8;
    goto LAB_03fc26c4;
  case 0x211f:
    uVar14 = param_3 << 0x20 | (ulong)*(ushort *)(param_1 + 0x316aac) << 0x10;
    *(short *)(param_1 + 0x316aac) = (short)(uVar14 >> 0x18);
    *(short *)(param_1 + 0x316ab0) = (short)(((int)(uVar14 >> 0x18) << 0x13) >> 0x13);
    goto LAB_03fc26c4;
  case 0x2120:
    uVar14 = param_3 << 0x20 | (ulong)*(ushort *)(param_1 + 0x316aae) << 0x10;
    *(short *)(param_1 + 0x316aae) = (short)(uVar14 >> 0x18);
    *(short *)(param_1 + 0x316ab2) = (short)(((int)(uVar14 >> 0x18) << 0x13) >> 0x13);
LAB_03fc26c4:
    param_1[0x316ab8] = 1;
    break;
  case 0x2121:
    *(short *)(param_1 + 0x316ac0) = (short)((uVar13 & 0xff) << 1);
    break;
  case 0x2122:
    FUN_03fc2f24(param_1,uVar14);
    break;
  case 0x2123:
    FUN_03fe6958(param_1,uVar14);
    break;
  case 0x2124:
    FUN_03fe69ac(param_1,uVar14);
    break;
  case 0x2125:
    FUN_03fe6a04(param_1,uVar14);
    break;
  case 0x2126:
    if ((uint)(byte)param_1[0x3170dc] != (uVar13 & 0xff)) {
      param_1[0x3170dc] = bVar3;
LAB_03fc276c:
      FUN_03fe6754(param_1);
    }
    break;
  case 0x2127:
    if ((uint)(byte)param_1[0x3170dd] != (uVar13 & 0xff)) {
      param_1[0x3170dd] = bVar3;
      goto LAB_03fc276c;
    }
    break;
  case 0x2128:
    if ((uint)(byte)param_1[0x3170de] != (uVar13 & 0xff)) {
      param_1[0x3170de] = bVar3;
      goto LAB_03fc276c;
    }
    break;
  case 0x2129:
    if ((uint)(byte)param_1[0x3170df] != (uVar13 & 0xff)) {
      param_1[0x3170df] = bVar3;
      goto LAB_03fc276c;
    }
    break;
  case 0x212a:
    FUN_03fe6a5c(param_1,uVar14);
    break;
  case 0x212b:
    FUN_03fe6ab0(param_1,uVar14);
    break;
  case 0x212c:
    FUN_03fc57d8(param_1,uVar14);
    break;
  case 0x212d:
    FUN_03fc586c(param_1,uVar14);
    break;
  case 0x212e:
    if ((uint)(byte)param_1[0x45a14] != (uVar13 & 0xff)) {
      param_1[0x45a14] = bVar3;
LAB_03fc27dc:
      FUN_03fe5eb0(param_1);
    }
    break;
  case 0x212f:
    if ((uint)(byte)param_1[0x45964] != (uVar13 & 0xff)) {
      param_1[0x45964] = bVar3;
      goto LAB_03fc27dc;
    }
    break;
  case 0x2130:
    FUN_03fc5ab8(param_1,uVar14);
    break;
  case 0x2131:
    FUN_03fc5d7c(param_1,uVar14);
    break;
  case 0x2132:
    iVar8 = (**(code **)(**(long **)(*(long *)(param_1 + 0x45e68) + 0x78) + 0x50))
                      (*(long **)(*(long *)(param_1 + 0x45e68) + 0x78),param_1,uVar14);
    if (-1 < iVar8) {
      FUN_03fc0fbc(param_1,iVar8);
    }
    break;
  case 0x2133:
    FUN_03fc2ff8(param_1,uVar14);
    break;
  case 0x2134:
  case 0x2135:
  case 0x2136:
  case 0x2137:
  case 0x2138:
  case 0x2139:
  case 0x213a:
  case 0x213b:
  case 0x213c:
  case 0x213d:
  case 0x213e:
  case 0x213f:
  case 0x2184:
  case 0x2185:
  case 0x2186:
  case 0x2187:
  case 0x2188:
  case 0x218a:
  case 0x218b:
  case 0x218c:
  case 0x218d:
  case 0x218e:
  case 0x218f:
    break;
  default:
    goto switchD_03fc22c4_caseD_2140;
  case 0x2180:
    lVar12 = *plVar1;
    *(byte *)(*(long *)(lVar12 + 0x34e170) + (ulong)*(uint *)(lVar12 + 0x3761b0)) = bVar3;
    *(uint *)(lVar12 + 0x3761b0) = *(int *)(lVar12 + 0x3761b0) + 1U & 0x1ffff;
    break;
  case 0x2181:
    lVar12 = *plVar1;
    uVar13 = 0x61b0;
    goto LAB_03fc28d0;
  case 0x2182:
    lVar12 = *plVar1;
    uVar13 = 0x61b1;
LAB_03fc28d0:
    *(byte *)(lVar12 + (ulong)(uVar13 | 0x370000)) = bVar3;
    break;
  case 0x2183:
    *(ushort *)(*plVar1 + 0x3761b2) = (ushort)param_3 & 1;
  }
switchD_03fc22c4_caseD_2134:
  pbVar11 = (byte *)(*plVar1 + (ulong)(ushort)param_2 + 0x36e1a8);
LAB_03fc22d8:
  *pbVar11 = bVar3;
  return 0;
}

