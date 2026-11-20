
void FUN_03fc586c(long param_1,byte param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ushort uVar11;
  undefined *puVar12;
  undefined *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  if (*(byte *)(param_1 + 0x45961) == param_2) {
    return;
  }
  *(byte *)(param_1 + 0x45961) = param_2;
  bVar3 = *(byte *)(param_1 + 0x3170e7);
  param_2 = *(byte *)(param_1 + 0x45963) & param_2;
  *(byte *)(param_1 + 0x45962) = param_2;
  *(bool *)(param_1 + 0x3170e9) = param_2 != 0;
  puVar1 = (undefined8 *)(param_1 + 0x3170f8);
  bVar6 = (bVar3 & *(byte *)(param_1 + 0x3170ea)) * param_2;
  uVar16 = (*(byte *)(param_1 + 0x3170ea) ^ 3 | (uint)(param_2 != 0)) &
           (uint)*(byte *)(param_1 + 0x3170f0);
  bVar4 = 0;
  if (*(char *)(param_1 + 0x3170f6) != '\0') {
    bVar4 = param_2;
  }
  *(char *)(param_1 + 0x3170ef) = (char)uVar16;
  uVar16 = uVar16 & 1;
  *(char *)(param_1 + 0x3170f1) = (char)uVar16;
  *(byte *)(param_1 + 0x3170e8) = bVar4 | bVar6;
  puVar13 = PTR_LAB_04bdf290;
  puVar12 = PTR_LAB_04bdf288;
  if (((((0x94U >> (ulong)(*(byte *)(param_1 + 0x316a9e) & 0x1f) & 1) == 0) &&
       (*(char *)(param_1 + 0x316a9f) != '\x02')) &&
      (*(int *)(*(long *)(param_1 + 0x45e68) + 0x50) == 0)) &&
     ((*(int *)(*(long *)(param_1 + 0x45e68) + 0x60) == 0 && (*(byte *)(param_1 + 0x316aa1) < 2))))
  {
    pbVar2 = (byte *)(param_1 + 0x3170f4);
    if (bVar4 == 0 && bVar6 == 0) {
      uVar15 = (uint)*pbVar2;
      *(undefined1 *)(param_1 + 0x317100) = 4;
      *pbVar2 = 0;
      *puVar1 = puVar12;
LAB_03fc59e0:
      uVar14 = 0;
      if ((*(ushort *)(param_1 + 0x316cc2) | uVar16) * (uint)bVar3 != 0) {
        uVar14 = 1;
        *(undefined1 *)(param_1 + 0x3170f4) = 1;
      }
      goto LAB_03fc59f8;
    }
    uVar15 = (uint)*pbVar2;
    *puVar1 = &LAB_03fcbe70;
    *(undefined1 *)(param_1 + 0x317100) = 1;
  }
  else {
    uVar15 = (uint)*(byte *)(param_1 + 0x3170f4);
    *(undefined1 *)(param_1 + 0x3170f4) = 0;
    *puVar1 = puVar13;
    *(undefined1 *)(param_1 + 0x317100) = 1;
    if (bVar4 == 0 && bVar6 == 0) goto LAB_03fc59e0;
  }
  *(byte *)(param_1 + 0x3170f4) = bVar3;
  FUN_03fc56a4(param_1,param_1 + 0x45950);
  FUN_03fc3320(param_1);
  uVar14 = (uint)*(byte *)(param_1 + 0x3170f4);
LAB_03fc59f8:
  if (uVar15 != uVar14) {
    bVar4 = *(byte *)(param_1 + 0x3170f2);
    uVar5 = *(ushort *)(&LAB_00316cc4 + param_1);
    uVar15 = (uint)bVar4;
    uVar16 = 1;
    if ((bVar4 & 0x20) != 0) {
      uVar16 = ~uVar14;
    }
    uVar11 = (ushort)(uVar16 << 0xf);
    *(ushort *)(param_1 + 0x3170ca) = uVar11;
    iVar7 = (uVar14 & (int)(uVar15 << 0x1e) >> 0x1f) * -0x202;
    *(uint *)(param_1 + 0x45a78) = (uVar14 & (int)((uint)bVar4 << 0x1b) >> 0x1f) << 7;
    *(ushort *)(param_1 + 0x3170cc) = uVar5 | uVar11;
    iVar8 = (-(uVar15 & 1) & uVar14) * -0x202;
    *(int *)(param_1 + 0x45bd8) = iVar7;
    iVar9 = (uVar14 & (int)(uVar15 << 0x1d) >> 0x1f) * -0x202;
    iVar10 = (uVar14 & (int)(uVar15 << 0x1c) >> 0x1f) * -0x202;
    *(int *)(param_1 + 0x45b20) = iVar8;
    *(int *)(param_1 + 0x45d48) = iVar10;
    *(int *)(param_1 + 0x45c90) = iVar9;
    *(long *)(param_1 + 0x45a60) = *(long *)(param_1 + 0x459b0) + (long)iVar7;
    *(long *)(param_1 + 0x45a58) = *(long *)(param_1 + 0x459a8) + (long)iVar8;
    *(long *)(param_1 + 0x45a68) = *(long *)(param_1 + 0x459b8) + (long)iVar9;
    *(long *)(param_1 + 0x45a70) = *(long *)(param_1 + 0x459c0) + (long)iVar10;
  }
  return;
}

