
uint FUN_0010d0f0(undefined8 param_1,long param_2,uint *param_3)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  undefined2 uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  byte local_4c [4];
  byte local_48 [4];
  undefined2 local_44 [2];
  
  local_48[0] = 0;
  *(undefined1 *)(param_3 + 0x5c) = 0xff;
  puVar10 = param_3 + 8;
  *(undefined2 *)puVar10 = 0;
  puVar9 = param_3 + 0x24;
  *(undefined2 *)puVar9 = 0;
  *(undefined2 *)(param_3 + 0x40) = 0;
  *(undefined2 *)(param_3 + 6) = 0;
  puVar11 = param_3 + 4;
  puVar11[0] = 0;
  puVar11[1] = 0;
  *(undefined2 *)(param_3 + 7) = 0;
  *(undefined8 *)((long)param_3 + 6) = 0;
  param_3[0] = 0;
  param_3[1] = 0;
  uVar6 = FUN_0012e3d0(param_1,param_2,0xff,param_3 + 0x40,0x70);
  if ((int)uVar6 < 0) {
    return uVar6;
  }
  if ((*(ushort *)(param_2 + 0x80) & 0xf) != 3) {
    sVar3 = FUN_0012dfe0(param_1,param_2,puVar10,0x70);
    if (sVar3 < 0) {
      return (int)sVar3;
    }
    sVar4 = FUN_0012df60(param_1,param_2,puVar9,0x70);
    if (sVar4 < 0) {
      return (int)sVar4;
    }
    uVar1 = *(ushort *)(param_2 + 0x7a) & 0x7f;
    *(ushort *)(param_3 + 5) = uVar1;
    uVar2 = *(ushort *)(param_2 + 0x7c) & 0x7f;
    *(ushort *)((long)param_3 + 0x16) = uVar2;
    param_3[4] = CONCAT22(*(ushort *)(param_2 + 0x7a) >> 7,*(ushort *)(param_2 + 0x7c) >> 7);
    uVar5 = *(undefined2 *)(param_2 + 0x78);
    *(ushort *)(param_3 + 2) = sVar3 - uVar1;
    *(ushort *)((long)param_3 + 10) = sVar4 - uVar2;
    *(undefined2 *)(param_3 + 6) = uVar5;
    *param_3 = CONCAT22(*(ushort *)(param_2 + 0x70) >> 7,*(ushort *)(param_2 + 0x72) >> 7);
    *(undefined2 *)(param_3 + 3) = *(undefined2 *)(param_2 + 8);
    param_3[1] = *(uint *)(param_2 + 0x60);
    *(undefined2 *)(param_3 + 7) = 0;
    lVar7 = *(long *)(param_2 + 0x10);
    if (lVar7 == 0) {
      return 1;
    }
    if (*(byte *)(param_2 + 0x68) - 1 < 2) {
      return 1;
    }
    if (*(byte *)(param_2 + 0x68) == 3) {
      uVar6 = *(uint *)(lVar7 + 0x70);
    }
    else {
      uVar6 = (*(uint *)(lVar7 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar7 + 8) & 0xff00ff) << 8;
      uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    }
    if (uVar6 != 0x80020000) {
      return 1;
    }
    uVar1 = *(ushort *)(param_2 + 0x80);
    if (((uVar1 & 0xf) == 0) ||
       (((uVar1 & 0xf) == 2 &&
        ((((uVar1 & 0xf0) == 0 || ((uVar1 & 0xf0) == 0x80)) || ((uVar1 & 0xf0) == 0x40)))))) {
      uVar5 = FUN_0011d980(param_1,param_2);
      *(undefined2 *)(param_3 + 7) = uVar5;
    }
    if ((*(byte *)(param_2 + 0x66) & 0xf0) != 0x10) {
      return 1;
    }
    if (*(char *)(param_2 + 0x74) != '\0') {
      return 1;
    }
    sVar3 = FUN_0011da90(param_1,param_2,local_44,local_4c);
    if (sVar3 == 0) {
      return 1;
    }
    if (local_4c[0] == 0) {
      return 1;
    }
    uVar1 = (ushort)param_3[2];
    uVar6 = (uint)local_4c[0];
    if ((uint)uVar1 <= (uint)local_4c[0] && uVar6 != uVar1) {
      return 1;
    }
    uVar2 = *(ushort *)((long)param_3 + 10);
    if (uVar2 < uVar6) {
      return 1;
    }
    sVar3 = (short)param_3[5];
    if ((uVar1 - uVar6 == 0) && (uVar2 == local_4c[0])) {
      uVar8 = *param_3;
      if (sVar3 != 0) {
        uVar8 = (uint)(ushort)*puVar11 | uVar8 & 0xffff0000;
      }
      param_3[4] = uVar8;
      *param_3 = 0;
      *(short *)(param_3 + 6) = (short)param_3[3];
      *(undefined2 *)(param_3 + 3) = 0;
    }
    else {
      param_3[4] = (ushort)param_3[(ulong)(sVar3 != 0) * 4] | 0x10000;
      *(undefined2 *)param_3 = local_44[0];
    }
    *(ushort *)((long)param_3 + 10) = uVar2 - local_4c[0];
    *(ushort *)(param_3 + 5) = sVar3 + (ushort)local_4c[0];
    *(short *)(param_3 + 2) = (short)(uVar1 - uVar6);
    *(ushort *)((long)param_3 + 0x16) = *(short *)((long)param_3 + 0x16) + (ushort)local_4c[0];
    return 1;
  }
  if ((*(ushort *)(param_2 + 0x80) & 0xf0) == 0x60) {
    uVar6 = FUN_00100950(param_1,param_2,puVar10,0x70,local_48,0);
  }
  else {
    sVar3 = FUN_0012dfe0(param_1,param_2,puVar10,0x70);
    uVar6 = (uint)sVar3;
    if (0 < (int)uVar6) {
      local_48[0] = (char)sVar3 - (*(byte *)(param_2 + 0x7a) & 0x7f);
      goto LAB_0010d2c8;
    }
  }
  if ((short)uVar6 < 0) {
    return uVar6;
  }
  if ((uVar6 & 0xffff) == 0) {
    return 0x9b8d;
  }
LAB_0010d2c8:
  sVar3 = FUN_0012df60(param_1,param_2,puVar9,0x70);
  if (sVar3 < 0) {
    return (int)sVar3;
  }
  sVar3 = FUN_001003e0(puVar10);
  sVar4 = FUN_001003e0(puVar9);
  sVar3 = sVar3 - (ushort)local_48[0];
  *(ushort *)(param_3 + 2) = (ushort)local_48[0];
  *(short *)((long)param_3 + 10) = sVar4 - sVar3;
  *param_3 = CONCAT22(*(ushort *)(param_2 + 0x70) >> 7,*(ushort *)(param_2 + 0x72) >> 7);
  *(undefined2 *)(param_3 + 3) = *(undefined2 *)(param_2 + 8);
  param_3[1] = *(uint *)(param_2 + 0x60);
  *(short *)(param_3 + 5) = sVar3;
  *(short *)((long)param_3 + 0x16) = sVar3;
  param_3[4] = CONCAT22(*(ushort *)(param_2 + 0x7a) >> 7,*(ushort *)(param_2 + 0x7c) >> 7);
  *(undefined2 *)(param_3 + 6) = *(undefined2 *)(param_2 + 0x78);
  *(undefined2 *)(param_3 + 7) = 0;
  return 1;
}

