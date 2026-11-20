
void FUN_03fc5d7c(long param_1,uint param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  ushort uVar11;
  undefined *puVar12;
  undefined *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  
  if ((uint)*(byte *)(param_1 + 0x3170ee) == (param_2 & 0xff)) {
    return;
  }
  *(char *)(param_1 + 0x3170ee) = (char)param_2;
  puVar2 = (undefined8 *)(param_1 + 0x3170f8);
  lVar17 = *(long *)(param_1 + 0x45e68);
  uVar15 = param_2 >> 6 & 3;
  *(char *)(param_1 + 0x3170f0) = (char)uVar15;
  uVar15 = ((uint)*(byte *)(param_1 + 0x3170e9) | *(byte *)(param_1 + 0x3170ea) ^ 0xffffffff) &
           uVar15;
  *(char *)(param_1 + 0x3170ef) = (char)uVar15;
  uVar15 = uVar15 & 1;
  param_2 = param_2 & 0x3f;
  *(char *)(param_1 + 0x3170f1) = (char)uVar15;
  uVar14 = param_2;
  if (*(int *)(lVar17 + 0x38) != 0) {
    *(char *)(param_1 + 0x3170ed) = (char)param_2;
    uVar14 = 0x2f;
    if (*(char *)(param_1 + 0x316a9f) != '\x02') {
      uVar14 = param_2;
    }
  }
  *(char *)(param_1 + 0x3170f3) = (char)(uVar14 >> 5);
  bVar4 = *(byte *)(param_1 + 0x3170f2);
  *(char *)(param_1 + 0x3170f2) = (char)uVar14;
  bVar1 = *(char *)(param_1 + 0x459f6) != '\0' && uVar14 != 0;
  bVar10 = 0;
  if (*(char *)(param_1 + 0x3170f6) != '\0') {
    bVar10 = *(byte *)(param_1 + 0x45962);
  }
  *(bool *)(param_1 + 0x3170e7) = bVar1;
  bVar10 = bVar10 | (*(byte *)(param_1 + 0x3170ea) & bVar1) * *(byte *)(param_1 + 0x45962);
  *(byte *)(param_1 + 0x3170e8) = bVar10;
  puVar13 = PTR_LAB_04bdf290;
  puVar12 = PTR_LAB_04bdf288;
  if (((((0x94U >> (ulong)(*(byte *)(param_1 + 0x316a9e) & 0x1f) & 1) == 0) &&
       (*(char *)(param_1 + 0x316a9f) != '\x02')) && (*(int *)(lVar17 + 0x50) == 0)) &&
     ((*(int *)(lVar17 + 0x60) == 0 && (*(byte *)(param_1 + 0x316aa1) < 2)))) {
    pbVar3 = (byte *)(param_1 + 0x3170f4);
    if (bVar10 == 0) {
      uVar18 = (uint)*pbVar3;
      *(undefined1 *)(param_1 + 0x317100) = 4;
      *pbVar3 = 0;
      *puVar2 = puVar12;
      goto LAB_03fc5f34;
    }
    uVar18 = (uint)*pbVar3;
    *puVar2 = &LAB_03fcbe70;
    *(undefined1 *)(param_1 + 0x317100) = 1;
    *pbVar3 = bVar1;
  }
  else {
    uVar18 = (uint)*(byte *)(param_1 + 0x3170f4);
    *(undefined1 *)(param_1 + 0x3170f4) = 0;
    *puVar2 = puVar13;
    *(undefined1 *)(param_1 + 0x317100) = 1;
    if (bVar10 == 0) {
LAB_03fc5f34:
      uVar16 = 0;
      if ((bVar1 != 0) && (*(short *)(param_1 + 0x316cc2) != 0 || uVar15 != 0)) {
        uVar16 = 1;
        *(undefined1 *)(param_1 + 0x3170f4) = 1;
      }
      goto LAB_03fc5f54;
    }
    *(bool *)(param_1 + 0x3170f4) = bVar1;
  }
  if (bVar4 == 0) {
    FUN_03fc56a4(param_1,param_1 + 0x45950);
    FUN_03fc3320(param_1);
    uVar16 = (uint)*(byte *)(param_1 + 0x3170f4);
    uVar14 = (uint)*(byte *)(param_1 + 0x3170f2);
  }
  else {
    uVar16 = (uint)bVar1;
  }
LAB_03fc5f54:
  if ((uVar18 != uVar16) || (bVar4 != uVar14)) {
    iVar6 = (uVar16 & (uint)(int)(char)(uVar14 << 6) >> 7) * -0x202;
    iVar7 = (-(uVar14 & 1) & uVar16) * -0x202;
    iVar8 = (uVar16 & (uint)(int)(char)(uVar14 << 5) >> 7) * -0x202;
    *(int *)(param_1 + 0x45b20) = iVar7;
    *(int *)(param_1 + 0x45bd8) = iVar6;
    iVar9 = (uVar16 & (uint)(int)(char)(uVar14 << 4) >> 7) * -0x202;
    uVar15 = 1;
    if ((uVar14 & 0x20) != 0) {
      uVar15 = ~uVar16;
    }
    uVar5 = *(ushort *)(&LAB_00316cc4 + param_1);
    uVar11 = (ushort)(uVar15 << 0xf);
    *(ushort *)(param_1 + 0x3170ca) = uVar11;
    *(int *)(param_1 + 0x45c90) = iVar8;
    *(int *)(param_1 + 0x45d48) = iVar9;
    *(uint *)(param_1 + 0x45a78) = (uVar16 & (uint)(int)(char)(uVar14 << 3) >> 7) << 7;
    *(ushort *)(param_1 + 0x3170cc) = uVar5 | uVar11;
    *(long *)(param_1 + 0x45a58) = *(long *)(param_1 + 0x459a8) + (long)iVar7;
    *(long *)(param_1 + 0x45a60) = *(long *)(param_1 + 0x459b0) + (long)iVar6;
    *(long *)(param_1 + 0x45a68) = *(long *)(param_1 + 0x459b8) + (long)iVar8;
    *(long *)(param_1 + 0x45a70) = *(long *)(param_1 + 0x459c0) + (long)iVar9;
  }
  return;
}

