
uint FUN_0035bd70(long param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  bool bVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  
  uVar2 = *(uint *)(*(long *)(param_1 + 0x20) + 0x14);
  if (uVar2 == 0) {
    return 0xffff;
  }
  while( true ) {
    puVar7 = (uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar2);
    iVar4 = param_2 - *puVar7;
    if ((*puVar7 <= param_2) && (param_2 <= puVar7[1])) break;
    uVar2 = puVar7[3];
    if (uVar2 == 0) {
      return 0xffff;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x80);
  if (uVar2 != 0) {
    if ((int)uVar2 < 1) {
      return 0xffff;
    }
    uVar9 = 0;
    bVar5 = true;
    do {
      lVar8 = param_1 + uVar9 * 4;
      if ((*(uint *)(lVar8 + 0x84) <= param_2) && (param_2 <= *(uint *)(lVar8 + 0xc4))) break;
      uVar9 = uVar9 + 1;
      bVar5 = uVar9 < uVar2;
    } while (uVar2 != uVar9);
    if (!bVar5) {
      return 0xffff;
    }
  }
  sVar3 = (short)puVar7[2];
  if (sVar3 == 2) {
    if ((ulong)(ushort)puVar7[4] != 0) {
      puVar6 = puVar7 + 5;
      puVar7 = puVar6 + (ulong)(ushort)puVar7[4] * 2 + -2;
      do {
        while( true ) {
          lVar8 = (long)puVar7 - (long)puVar6 >> 3;
          if (lVar8 < 0) {
            lVar8 = lVar8 + 1;
          }
          puVar1 = puVar6 + (lVar8 >> 1) * 2;
          if (*puVar1 < param_2) break;
          if (*puVar1 <= param_2) {
            return (uint)(ushort)puVar1[1];
          }
          puVar7 = puVar1 + -2;
          if (puVar7 < puVar6) {
            return 0xffff;
          }
        }
        puVar6 = puVar1 + 2;
      } while (puVar6 <= puVar7);
    }
  }
  else {
    if (sVar3 == 1) {
      return (uint)*(ushort *)((long)puVar7 + (long)iVar4 * 2 + 0x10);
    }
    if (sVar3 == 0) {
      return (uint)(ushort)puVar7[4] + iVar4;
    }
  }
  return 0xffff;
}

