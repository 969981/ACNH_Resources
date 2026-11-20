
ulong FUN_03fc1114(long param_1,ulong param_2)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  byte bVar11;
  
  plVar1 = (long *)(param_1 + 0x45940);
  uVar9 = (uint)param_2;
  if ((uVar9 >> 8 & 0xff) < 0x21) goto switchD_03fc1180_caseD_2100;
  if ((uVar9 >> 6 & 0x3ff) == 0x85) {
    return (ulong)*(byte *)(*plVar1 + (param_2 & 3) + 8);
  }
  if (0xc3 < (uVar9 & 0xffff) - 0x2100) {
switchD_03fc1180_caseD_2140:
    if (((uVar9 - 0x3000 & 0xffff) < 0x300) &&
       (plVar7 = *(long **)(*plVar1 + 0x34e078), (char)plVar7[1] != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x03fc134c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)(*plVar7 + 0x20))();
      return uVar8;
    }
    return (ulong)*(byte *)(*plVar1 + 0x34e0b8);
  }
  puVar2 = (uint *)(&LAB_00316ab4 + param_1);
  switch(uVar9 & 0xffff) {
  case 0x2104:
  case 0x2105:
  case 0x2106:
  case 0x2108:
  case 0x2109:
  case 0x210a:
  case 0x2114:
  case 0x2115:
  case 0x2116:
  case 0x2118:
  case 0x2119:
  case 0x211a:
  case 0x2124:
  case 0x2125:
  case 0x2126:
  case 0x2128:
  case 0x2129:
  case 0x212a:
    uVar8 = (ulong)*(byte *)(param_1 + 0x45949);
    break;
  case 0x2134:
    uVar8 = (ulong)*puVar2;
    *(char *)(param_1 + 0x45949) = (char)*puVar2;
    break;
  case 0x2135:
    uVar8 = (ulong)(*puVar2 >> 8);
    *(char *)(param_1 + 0x45949) = (char)(*puVar2 >> 8);
    break;
  case 0x2136:
    uVar8 = (ulong)(*puVar2 >> 0x10);
    *(char *)(param_1 + 0x45949) = (char)(*puVar2 >> 0x10);
    break;
  case 0x2137:
    FUN_03fc13f4(*plVar1,0);
  case 0x2100:
  case 0x2101:
  case 0x2102:
  case 0x2103:
  case 0x2107:
  case 0x210b:
  case 0x210c:
  case 0x210d:
  case 0x210e:
  case 0x210f:
  case 0x2110:
  case 0x2111:
  case 0x2112:
  case 0x2113:
  case 0x2117:
  case 0x211b:
  case 0x211c:
  case 0x211d:
  case 0x211e:
  case 0x211f:
  case 0x2120:
  case 0x2121:
  case 0x2122:
  case 0x2123:
  case 0x2127:
  case 0x212b:
  case 0x212c:
  case 0x212d:
  case 0x212e:
  case 0x212f:
  case 0x2130:
  case 0x2131:
  case 0x2132:
  case 0x2133:
  case 0x2181:
  case 0x2182:
  case 0x2183:
  case 0x2184:
  case 0x2185:
  case 0x2186:
  case 0x2187:
  case 0x2188:
  case 0x2189:
  case 0x218a:
  case 0x218b:
  case 0x218c:
  case 0x218d:
  case 0x218e:
  case 0x218f:
  case 0x2190:
switchD_03fc1180_caseD_2100:
    uVar8 = (ulong)*(byte *)(*plVar1 + 0x34e0b8);
    break;
  case 0x2138:
    uVar8 = FUN_03fc1d08();
    *(char *)(param_1 + 0x45949) = (char)uVar8;
    break;
  case 0x2139:
    uVar8 = FUN_03fc1470();
    *(char *)(param_1 + 0x45949) = (char)uVar8;
    break;
  case 0x213a:
    uVar8 = FUN_03fc1518();
    *(char *)(param_1 + 0x45949) = (char)uVar8;
    break;
  case 0x213b:
    uVar5 = *(ushort *)(&LAB_00316ac0 + param_1);
    bVar11 = *(byte *)(param_1 + 0x4594a);
    uVar6 = uVar5 + 1;
    *(ushort *)(&LAB_00316ac0 + param_1) = uVar6 & 0x1ff;
    lVar10 = param_1 + (ulong)(uVar5 >> 1) * 2;
    if ((uVar6 & 1) == 0) {
      uVar9 = bVar11 & 0x80 | (uint)*(byte *)(lVar10 + 0x316ac3);
      uVar8 = (ulong)uVar9;
      *(char *)(param_1 + 0x4594a) = (char)uVar9;
    }
    else {
      uVar6 = *(ushort *)(lVar10 + 0x316ac2);
      uVar8 = (ulong)uVar6;
      *(char *)(param_1 + 0x4594a) = (char)uVar6;
    }
    break;
  case 0x213c:
    lVar10 = *plVar1;
    bVar11 = (&LAB_0038a444)[lVar10];
    bVar4 = (&LAB_0038a440)[lVar10];
    uVar9 = (uint)*(byte *)(lVar10 + 0x38a441) | *(byte *)(param_1 + 0x4594a) & 0xfffffffe;
    (&LAB_0038a444)[lVar10] = bVar11 ^ 1;
    goto LAB_03fc12a8;
  case 0x213d:
    lVar10 = *plVar1;
    bVar11 = *(byte *)(lVar10 + 0x38a445);
    bVar4 = *(byte *)(lVar10 + 0x38a442);
    uVar9 = (uint)*(byte *)(lVar10 + 0x38a443) | *(byte *)(param_1 + 0x4594a) & 0xfffffffe;
    *(byte *)(lVar10 + 0x38a445) = bVar11 ^ 1;
LAB_03fc12a8:
    uVar3 = (uint)bVar4;
    if (bVar11 != 0) {
      uVar3 = uVar9;
    }
    uVar8 = (ulong)uVar3;
    *(char *)(param_1 + 0x4594a) = (char)uVar3;
    break;
  case 0x213e:
    lVar10 = *plVar1;
    uVar9 = 0x41;
    if ((int)*(short *)(lVar10 + 0x34e122) <= (int)(uint)*(ushort *)(lVar10 + 0x76716)) {
      uVar9 = 1;
    }
    uVar9 = uVar9 | *(byte *)(param_1 + 0x45949) & 0x10 |
            (uint)((int)(uint)*(ushort *)(lVar10 + 0x76718) < (int)*(short *)(lVar10 + 0x34e122)) <<
            7;
    uVar8 = (ulong)uVar9;
    *(char *)(param_1 + 0x45949) = (char)uVar9;
    break;
  case 0x213f:
    uVar8 = FUN_03fc15c0(*plVar1,*(undefined1 *)(param_1 + 0x4594a));
    *(char *)(param_1 + 0x4594a) = (char)uVar8;
    break;
  default:
    goto switchD_03fc1180_caseD_2140;
  case 0x2180:
    lVar10 = *plVar1;
    bVar11 = *(byte *)(*(long *)(lVar10 + 0x34e170) + (ulong)*(uint *)(lVar10 + 0x3761b0));
    uVar8 = (ulong)bVar11;
    *(uint *)(lVar10 + 0x3761b0) = *(uint *)(lVar10 + 0x3761b0) + 1 & 0x1ffff;
    *(byte *)(*plVar1 + 0x34e0b8) = bVar11;
    break;
  case 0x21c2:
    lVar10 = *plVar1;
    if (*(char *)(lVar10 + 0x34e124) == '\x02') {
      return 0x20;
    }
    goto LAB_03fc13d0;
  case 0x21c3:
    lVar10 = *plVar1;
    if (*(char *)(lVar10 + 0x34e124) == '\x02') {
      return 0;
    }
LAB_03fc13d0:
    uVar8 = (ulong)*(byte *)(lVar10 + 0x34e0b8);
  }
  return uVar8;
}

