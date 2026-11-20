
void FUN_03fc5ab8(long param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  byte bVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  if (*(char *)(*(long *)(param_1 + 0x45940) + 0x34710) == '\0') {
    bVar1 = *(byte *)(param_1 + 0x3170ea);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x3170ea);
    if (((uint)*(byte *)(param_1 + 0x45966) << 4 | (uint)*(byte *)(param_1 + 0x45a16) << 6 |
        (uint)bVar1 << 1) == (param_2 & 0xff)) {
      return;
    }
  }
  *(byte *)(param_1 + 0x45a16) = (byte)(param_2 >> 6) & 3;
  bVar9 = (byte)(param_2 >> 4) & 3;
  if (*(int *)(*(long *)(param_1 + 0x45e68) + 0x38) == 0) {
    *(byte *)(param_1 + 0x45966) = bVar9;
    bVar9 = (byte)(param_2 >> 1) & 1;
  }
  else {
    *(byte *)(param_1 + 0x45965) = bVar9;
    *(byte *)(param_1 + 0x45966) = bVar9;
    bVar9 = (byte)(param_2 >> 1) & 1;
    *(byte *)(param_1 + 0x3170ec) = bVar9;
    *(byte *)(param_1 + 0x3170ea) = bVar9;
    if (*(char *)(param_1 + 0x316a9f) != '\x02') goto LAB_03fc5b98;
    *(undefined1 *)(param_1 + 0x45966) = 0;
    bVar9 = 1;
  }
  *(byte *)(param_1 + 0x3170ea) = bVar9;
LAB_03fc5b98:
  bVar9 = (*(byte *)(param_1 + 0x3170e9) | bVar9 ^ 3) & *(byte *)(param_1 + 0x3170f0);
  *(byte *)(param_1 + 0x3170ef) = bVar9;
  *(byte *)(param_1 + 0x3170f1) = bVar9 & 1;
  FUN_03fe5eb0(param_1);
  bVar9 = 0;
  if (*(char *)(param_1 + 0x3170f6) != '\0') {
    bVar9 = *(byte *)(param_1 + 0x45962);
  }
  bVar9 = bVar9 | (*(byte *)(param_1 + 0x3170ea) & *(byte *)(param_1 + 0x3170e7)) *
                  *(byte *)(param_1 + 0x45962);
  *(byte *)(param_1 + 0x3170e8) = bVar9;
  if (((((0x94U >> (ulong)(*(byte *)(param_1 + 0x316a9e) & 0x1f) & 1) == 0) &&
       (*(char *)(param_1 + 0x316a9f) != '\x02')) &&
      (*(int *)(*(long *)(param_1 + 0x45e68) + 0x50) == 0)) &&
     (((*(int *)(*(long *)(param_1 + 0x45e68) + 0x60) == 0 && (*(byte *)(param_1 + 0x316aa1) < 2))
      && (bVar9 == 0)))) {
    *(undefined8 *)(param_1 + 0x3170f8) = &LAB_03fcb350;
    uVar10 = 4;
  }
  else {
    *(undefined8 *)(param_1 + 0x3170f8) = &LAB_03fcbe70;
    uVar10 = 1;
  }
  *(undefined1 *)(param_1 + 0x317100) = uVar10;
  FUN_03fc56a4(param_1,param_1 + 0x45a00);
  bVar9 = *(byte *)(param_1 + 0x3170f4);
  *(undefined1 *)(param_1 + 0x3170f4) = 0;
  bVar2 = *(byte *)(param_1 + 0x3170e7);
  uVar11 = (uint)bVar2;
  if (*(char *)(param_1 + 0x3170e8) == '\0') {
    uVar11 = 0;
    if (((uint)*(ushort *)(param_1 + 0x316cc2) | (uint)*(byte *)(param_1 + 0x3170f1)) * (uint)bVar2
        != 0) {
      uVar11 = 1;
      *(undefined1 *)(param_1 + 0x3170f4) = 1;
    }
  }
  else {
    *(byte *)(param_1 + 0x3170f4) = bVar2;
    if (bVar1 == 0) {
      FUN_03fc56a4(param_1,param_1 + 0x45950);
      uVar11 = (uint)*(byte *)(param_1 + 0x3170f4);
    }
  }
  if (bVar9 != uVar11) {
    bVar1 = *(byte *)(param_1 + 0x3170f2);
    uVar3 = *(ushort *)(&LAB_00316cc4 + param_1);
    uVar12 = (uint)bVar1;
    uVar13 = 1;
    if ((bVar1 & 0x20) != 0) {
      uVar13 = ~uVar11;
    }
    uVar8 = (ushort)(uVar13 << 0xf);
    *(ushort *)(param_1 + 0x3170ca) = uVar8;
    iVar4 = (uVar11 & (int)(uVar12 << 0x1e) >> 0x1f) * -0x202;
    *(uint *)(param_1 + 0x45a78) = (uVar11 & (int)((uint)bVar1 << 0x1b) >> 0x1f) << 7;
    *(ushort *)(param_1 + 0x3170cc) = uVar3 | uVar8;
    iVar5 = (-(uVar12 & 1) & uVar11) * -0x202;
    *(int *)(param_1 + 0x45bd8) = iVar4;
    iVar6 = (uVar11 & (int)(uVar12 << 0x1d) >> 0x1f) * -0x202;
    iVar7 = (uVar11 & (int)(uVar12 << 0x1c) >> 0x1f) * -0x202;
    *(int *)(param_1 + 0x45b20) = iVar5;
    *(int *)(param_1 + 0x45d48) = iVar7;
    *(int *)(param_1 + 0x45c90) = iVar6;
    *(long *)(param_1 + 0x45a58) = *(long *)(param_1 + 0x459a8) + (long)iVar5;
    *(long *)(param_1 + 0x45a60) = *(long *)(param_1 + 0x459b0) + (long)iVar4;
    *(long *)(param_1 + 0x45a68) = *(long *)(param_1 + 0x459b8) + (long)iVar6;
    *(long *)(param_1 + 0x45a70) = *(long *)(param_1 + 0x459c0) + (long)iVar7;
  }
  FUN_03fc3320(param_1);
  *(byte *)(param_1 + 0x3170eb) = (byte)param_2 & 1;
  return;
}

