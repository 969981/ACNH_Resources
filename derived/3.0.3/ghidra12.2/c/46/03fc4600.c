
void FUN_03fc4600(long param_1,uint param_2)

{
  ushort *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ushort uVar13;
  undefined1 uVar14;
  undefined2 uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  uint uVar19;
  undefined1 uVar20;
  
  uVar19 = param_2 & 0xff;
  if ((byte)(&LAB_00316a9c)[param_1] == uVar19) {
    return;
  }
  (&LAB_00316a9c)[param_1] = (char)param_2;
  uVar17 = param_2 & 7;
  *(char *)(param_1 + 0x316a9e) = (char)uVar17;
  puVar1 = (ushort *)(param_1 + 0x45b88);
  plVar2 = (long *)(param_1 + 0x45a68);
  cVar5 = *(char *)(param_1 + 0x316a9f);
  if (cVar5 == '\x01') {
    *(undefined8 *)(&LAB_00316a88 + param_1) = *(undefined8 *)(param_1 + 0x45a00);
  }
  else {
    if (*(char *)(param_1 + 0x3170f6) == '\0') {
      *(undefined1 *)(param_1 + 0x316a9f) = 1;
      *(undefined8 *)(&LAB_00316a90 + param_1) = *(undefined8 *)(param_1 + 0x45a00);
    }
    else {
      *(undefined8 *)(&LAB_00316a90 + param_1) = *(undefined8 *)(param_1 + 0x45a00);
      if ((0x94U >> (ulong)uVar17 & 1) == 0) goto LAB_03fc46cc;
      *(undefined1 *)(param_1 + 0x316a9f) = 1;
    }
    *(undefined8 *)(param_1 + 0x45a00) = *(undefined8 *)(&LAB_00316a88 + param_1);
    *(undefined4 *)(&LAB_00316a98 + param_1) = 0x100;
  }
LAB_03fc46cc:
  if (uVar17 == 0) {
    *(undefined1 *)(param_1 + 0x316a9d) = 0;
    *(long *)(param_1 + 0x459a8) = param_1 + 0x316ec6;
    *(long *)(param_1 + 0x459b0) = param_1 + 0x316f06;
    *(long *)(param_1 + 0x459b8) = param_1 + 0x316f46;
    *(long *)(param_1 + 0x459c0) = param_1 + 0x316f86;
    *(long *)(param_1 + 0x45a58) = (long)*(int *)(param_1 + 0x45b20) + param_1 + 0x316ec6;
    *(long *)(param_1 + 0x45a60) = (long)*(int *)(param_1 + 0x45bd8) + param_1 + 0x316f06;
    *plVar2 = (long)*(int *)(param_1 + 0x45c90) + param_1 + 0x316f46;
    *(long *)(param_1 + 0x45a70) = (long)*(int *)(param_1 + 0x45d48) + param_1 + 0x316f86;
    *(byte *)(param_1 + 0x4596c) = *(byte *)(param_1 + 0x4596c) & 0x10 | (byte)(uVar19 >> 4) & 1;
    *(byte *)(param_1 + 0x45a1c) = *(byte *)(param_1 + 0x45a1c) & 0x10 | (byte)(uVar19 >> 4) & 1;
    uVar8 = (short)(0x200 << (ulong)(uVar19 >> 4 & 1)) - 1;
    *(ushort *)(param_1 + 0x45ada) = uVar8;
    *(ushort *)(param_1 + 0x45ad8) = uVar8;
    *(undefined1 *)(param_1 + 0x45ae4) = 1;
    *(undefined1 *)(param_1 + 0x45b9c) = 1;
    *(undefined1 *)(param_1 + 0x45c54) = 1;
    *(undefined1 *)(param_1 + 0x45d0c) = 1;
    *(ushort *)(param_1 + 0x45ad6) = *(short *)(param_1 + 0x45ad2) + 1U & uVar8;
    *(ushort *)(param_1 + 0x45ad4) = *(ushort *)(param_1 + 0x45ad0) & uVar8;
    *(byte *)(param_1 + 0x4596d) = *(byte *)(param_1 + 0x4596d) & 0x10 | (byte)(uVar19 >> 5) & 1;
    *(byte *)(param_1 + 0x45a1d) = *(byte *)(param_1 + 0x45a1d) & 0x10 | (byte)(uVar19 >> 5) & 1;
    uVar8 = (short)(0x200 << (ulong)(uVar19 >> 5 & 1)) - 1;
    *(ushort *)(param_1 + 0x45b92) = uVar8;
    *(ushort *)(param_1 + 0x45b90) = uVar8;
    *(ushort *)(param_1 + 0x45b8e) = *(short *)(param_1 + 0x45b8a) + 1U & uVar8;
    *(ushort *)(param_1 + 0x45b8c) = *puVar1 & uVar8;
    *(byte *)(param_1 + 0x4596e) = *(byte *)(param_1 + 0x4596e) & 0x10 | (byte)(uVar19 >> 6) & 1;
    *(byte *)(param_1 + 0x45a1e) = *(byte *)(param_1 + 0x45a1e) & 0x10 | (byte)(uVar19 >> 6) & 1;
    uVar8 = (short)(0x200 << (ulong)(uVar19 >> 6 & 1)) - 1;
    *(ushort *)(param_1 + 0x45c4a) = uVar8;
    *(ushort *)(param_1 + 0x45c48) = uVar8;
    *(ushort *)(param_1 + 0x45c44) = *(ushort *)(param_1 + 0x45c40) & uVar8;
    *(ushort *)(param_1 + 0x45c46) = *(short *)(param_1 + 0x45c42) + 1U & uVar8;
    bVar7 = (byte)(uVar19 >> 7);
    *(byte *)(param_1 + 0x4596f) = *(byte *)(param_1 + 0x4596f) & 0x10 | bVar7;
    *(byte *)(param_1 + 0x45a1f) = *(byte *)(param_1 + 0x45a1f) & 0x10 | bVar7;
    uVar8 = (short)(0x200 << (ulong)(uVar19 >> 7)) - 1;
    *(ushort *)(param_1 + 0x45d02) = uVar8;
    *(ushort *)(param_1 + 0x45d00) = uVar8;
    *(ushort *)(param_1 + 0x45cfc) = *(ushort *)(param_1 + 0x45cf8) & uVar8;
    *(ushort *)(param_1 + 0x45cfe) = *(short *)(param_1 + 0x45cfa) + 1U & uVar8;
    *(undefined8 *)(param_1 + 0x45bd0) = *(undefined8 *)(param_1 + 0x45bb0);
    *(undefined8 *)(param_1 + 0x45d40) = *(undefined8 *)(param_1 + 0x45d20);
    *(undefined8 *)(param_1 + 0x45b18) = *(undefined8 *)(param_1 + 0x45af8);
    *(undefined8 *)(param_1 + 0x45c88) = *(undefined8 *)(param_1 + 0x45c68);
    *(uint *)(param_1 + 0x45ab8) =
         0x22U >> (ulong)(-(uint)*(byte *)(param_1 + 0x45adf) & 0x1f) |
         0x22 << (ulong)(*(byte *)(param_1 + 0x45adf) & 0x1f);
    *(uint *)(param_1 + 0x45abc) =
         0x22U >> (ulong)(-(uint)*(byte *)(param_1 + 0x45b97) & 0x1f) |
         0x22 << (ulong)(*(byte *)(param_1 + 0x45b97) & 0x1f);
    *(uint *)(param_1 + 0x45ac0) =
         0x22U >> (ulong)(-(uint)*(byte *)(param_1 + 0x45c4f) & 0x1f) |
         0x22 << (ulong)(*(byte *)(param_1 + 0x45c4f) & 0x1f);
    *(uint *)(param_1 + 0x45ac4) =
         0x22U >> (ulong)(-(uint)*(byte *)(param_1 + 0x45d07) & 0x1f) |
         0x22 << (ulong)(*(byte *)(param_1 + 0x45d07) & 0x1f);
    *(undefined1 *)(param_1 + 0x45970) = 8;
    *(undefined1 *)(param_1 + 0x45a20) = 8;
    *(undefined1 *)(param_1 + 0x45ae2) = 0x16;
    *(undefined2 *)(param_1 + 0x45b9a) = 0x1a12;
    if (*(int *)(*(long *)(param_1 + 0x45e68) + 0x3c) != 0) {
      *(undefined1 *)(param_1 + 0x45c53) = 0xe;
    }
    goto switchD_03fc4734_default;
  }
  lVar3 = param_1 + 0x316ec6;
  *(long *)(param_1 + 0x459c0) = lVar3;
  *(long *)(param_1 + 0x459b8) = lVar3;
  *(long *)(param_1 + 0x459b0) = lVar3;
  *(long *)(param_1 + 0x459a8) = lVar3;
  *(long *)(param_1 + 0x45a58) = *(int *)(param_1 + 0x45b20) + lVar3;
  *(long *)(param_1 + 0x45a60) = *(int *)(param_1 + 0x45bd8) + lVar3;
  *plVar2 = *(int *)(param_1 + 0x45c90) + lVar3;
  *(long *)(param_1 + 0x45a70) = *(int *)(param_1 + 0x45d48) + lVar3;
  switch(uVar17) {
  case 1:
    *(char *)(param_1 + 0x316a9d) = (char)(param_2 & 8);
    *(byte *)(param_1 + 0x45c53) = (byte)(((param_2 & 8) >> 3) << 5) | 0xe;
    uVar8 = (short)(0x200 << (ulong)(uVar19 >> 4 & 1)) - 1;
    *(ushort *)(param_1 + 0x45ada) = uVar8;
    *(ushort *)(param_1 + 0x45ad8) = uVar8;
    *(byte *)(param_1 + 0x4596c) = *(byte *)(param_1 + 0x4596c) & 0x10 | (byte)(uVar19 >> 4) & 1 | 2
    ;
    *(ushort *)(param_1 + 0x45ad4) = *(ushort *)(param_1 + 0x45ad0) & uVar8;
    *(undefined1 *)(param_1 + 0x45ae4) = 2;
    *(undefined1 *)(param_1 + 0x45b9c) = 2;
    *(byte *)(param_1 + 0x45a1c) = *(byte *)(param_1 + 0x45a1c) & 0x10 | (byte)(uVar19 >> 4) & 1 | 2
    ;
    *(ushort *)(param_1 + 0x45ad6) = *(short *)(param_1 + 0x45ad2) + 1U & uVar8;
    *(byte *)(param_1 + 0x4596d) = *(byte *)(param_1 + 0x4596d) & 0x10 | (byte)(uVar19 >> 5) & 1 | 2
    ;
    *(byte *)(param_1 + 0x45a1d) = *(byte *)(param_1 + 0x45a1d) & 0x10 | (byte)(uVar19 >> 5) & 1 | 2
    ;
    uVar8 = (short)(0x200 << (ulong)(uVar19 >> 5 & 1)) - 1;
    *(ushort *)(param_1 + 0x45b92) = uVar8;
    *(ushort *)(param_1 + 0x45b90) = uVar8;
    *(ushort *)(param_1 + 0x45b8c) = *puVar1 & uVar8;
    *(ushort *)(param_1 + 0x45b8e) = *(short *)(param_1 + 0x45b8a) + 1U & uVar8;
    *(byte *)(param_1 + 0x4596e) = *(byte *)(param_1 + 0x4596e) & 0x10 | (byte)(uVar19 >> 6) & 1;
    *(undefined1 *)(param_1 + 0x45c54) = 1;
    uVar8 = (short)(0x200 << (ulong)(uVar19 >> 6 & 1)) - 1;
    *(byte *)(param_1 + 0x45a1e) = *(byte *)(param_1 + 0x45a1e) & 0x10 | (byte)(uVar19 >> 6) & 1;
    *(ushort *)(param_1 + 0x45c4a) = uVar8;
    *(ushort *)(param_1 + 0x45c48) = uVar8;
    *(ushort *)(param_1 + 0x45c44) = *(ushort *)(param_1 + 0x45c40) & uVar8;
    *(ushort *)(param_1 + 0x45c46) = *(short *)(param_1 + 0x45c42) + 1U & uVar8;
    *(undefined8 *)(param_1 + 0x45b18) = *(undefined8 *)(param_1 + 0x45af0);
    *(undefined8 *)(param_1 + 0x45bd0) = *(undefined8 *)(param_1 + 0x45ba8);
    *(undefined8 *)(param_1 + 0x45c88) = *(undefined8 *)(param_1 + 0x45c68);
    *(uint *)(param_1 + 0x45ab8) =
         0x4444U >> (ulong)(-(uint)*(byte *)(param_1 + 0x45adf) & 0x1f) |
         0x4444 << (ulong)(*(byte *)(param_1 + 0x45adf) & 0x1f);
    *(uint *)(param_1 + 0x45abc) =
         0x4444U >> (ulong)(-(uint)*(byte *)(param_1 + 0x45b97) & 0x1f) |
         0x4444 << (ulong)(*(byte *)(param_1 + 0x45b97) & 0x1f);
    *(uint *)(param_1 + 0x45ac0) =
         0x22U >> (ulong)(-(uint)*(byte *)(param_1 + 0x45c4f) & 0x1f) |
         0x22 << (ulong)(*(byte *)(param_1 + 0x45c4f) & 0x1f);
    *(undefined4 *)(param_1 + 0x45ac4) = 0;
    *(undefined1 *)(param_1 + 0x45970) = 8;
    *(undefined1 *)(param_1 + 0x45a20) = 8;
    *(undefined1 *)(param_1 + 0x45ae2) = 0x16;
    uVar15 = 0x1a12;
    goto LAB_03fc4fec;
  case 2:
    uVar8 = (short)(0x200 << (ulong)(uVar19 >> 4 & 1)) - 1;
    *(ushort *)(param_1 + 0x45ada) = uVar8;
    *(ushort *)(param_1 + 0x45ad8) = uVar8;
    *(ushort *)(param_1 + 0x45ad4) = *(ushort *)(param_1 + 0x45ad0) & uVar8;
    *(ushort *)(param_1 + 0x45ad6) = *(short *)(param_1 + 0x45ad2) + 1U & uVar8;
    *(undefined1 *)(param_1 + 0x45ae4) = 2;
    *(undefined1 *)(param_1 + 0x45b9c) = 2;
    *(byte *)(param_1 + 0x4596c) =
         *(byte *)(param_1 + 0x4596c) & 0x10 | (byte)(uVar19 >> 4) & 1 | 0x22;
    *(byte *)(param_1 + 0x45a1c) =
         *(byte *)(param_1 + 0x45a1c) & 0x10 | (byte)(uVar19 >> 4) & 1 | 0x22;
    *(byte *)(param_1 + 0x4596d) =
         *(byte *)(param_1 + 0x4596d) & 0x10 | (byte)(uVar19 >> 5) & 1 | 0x22;
    uVar8 = (short)(0x200 << (ulong)(uVar19 >> 5 & 1)) - 1;
    *(ushort *)(param_1 + 0x45b92) = uVar8;
    *(ushort *)(param_1 + 0x45b90) = uVar8;
    *(byte *)(param_1 + 0x45a1d) =
         *(byte *)(param_1 + 0x45a1d) & 0x10 | (byte)(uVar19 >> 5) & 1 | 0x22;
    *(ushort *)(param_1 + 0x45b8c) = *puVar1 & uVar8;
    *(ushort *)(param_1 + 0x45b8e) = *(short *)(param_1 + 0x45b8a) + 1U & uVar8;
    *(undefined8 *)(param_1 + 0x45b18) = *(undefined8 *)(param_1 + 0x45af0);
    *(undefined8 *)(param_1 + 0x45bd0) = *(undefined8 *)(param_1 + 0x45ba8);
    uVar16 = 0x4444U >> (ulong)(-(uint)*(byte *)(param_1 + 0x45adf) & 0x1f) |
             0x4444 << (ulong)(*(byte *)(param_1 + 0x45adf) & 0x1f);
    uVar19 = 0x4444 << (ulong)(*(byte *)(param_1 + 0x45b97) & 0x1f);
    uVar17 = 0x4444 >> (ulong)(-(uint)*(byte *)(param_1 + 0x45b97) & 0x1f);
    goto LAB_03fc4e0c;
  case 3:
    *(undefined1 *)(param_1 + 0x45ae4) = 3;
    uVar8 = (short)(0x200 << (ulong)(uVar19 >> 4 & 1)) - 1;
    *(ushort *)(param_1 + 0x45ada) = uVar8;
    *(ushort *)(param_1 + 0x45ad8) = uVar8;
    *(ushort *)(param_1 + 0x45ad4) = *(ushort *)(param_1 + 0x45ad0) & uVar8;
    *(ushort *)(param_1 + 0x45ad6) = *(short *)(param_1 + 0x45ad2) + 1U & uVar8;
    *(byte *)(param_1 + 0x4596c) = *(byte *)(param_1 + 0x4596c) & 0x10 | (byte)(uVar19 >> 4) & 1 | 4
    ;
    *(byte *)(param_1 + 0x45a1c) = *(byte *)(param_1 + 0x45a1c) & 0x10 | (byte)(uVar19 >> 4) & 1 | 4
    ;
    *(byte *)(param_1 + 0x4596d) = *(byte *)(param_1 + 0x4596d) & 0x10 | (byte)(uVar19 >> 5) & 1 | 2
    ;
    uVar17 = 0x4444;
    uVar8 = (short)(0x200 << (ulong)(uVar19 >> 5 & 1)) - 1;
    *(byte *)(param_1 + 0x45a1d) = *(byte *)(param_1 + 0x45a1d) & 0x10 | (byte)(uVar19 >> 5) & 1 | 2
    ;
    *(ushort *)(param_1 + 0x45b92) = uVar8;
    *(ushort *)(param_1 + 0x45b90) = uVar8;
    *(undefined1 *)(param_1 + 0x45b9c) = 2;
    *(ushort *)(param_1 + 0x45b8c) = *puVar1 & uVar8;
    bVar7 = *(byte *)(param_1 + 0x45b97);
    *(ushort *)(param_1 + 0x45b8e) = *(short *)(param_1 + 0x45b8a) + 1U & uVar8;
    *(undefined8 *)(param_1 + 0x45b18) = *(undefined8 *)(param_1 + 0x45ae8);
    uVar18 = *(undefined8 *)(param_1 + 0x45ba8);
    break;
  case 4:
    *(undefined1 *)(param_1 + 0x45ae4) = 3;
    uVar8 = (short)(0x200 << (ulong)(uVar19 >> 4 & 1)) - 1;
    *(ushort *)(param_1 + 0x45ada) = uVar8;
    *(ushort *)(param_1 + 0x45ad8) = uVar8;
    *(ushort *)(param_1 + 0x45ad4) = *(ushort *)(param_1 + 0x45ad0) & uVar8;
    *(ushort *)(param_1 + 0x45ad6) = *(short *)(param_1 + 0x45ad2) + 1U & uVar8;
    *(byte *)(param_1 + 0x4596c) =
         *(byte *)(param_1 + 0x4596c) & 0x10 | (byte)(uVar19 >> 4) & 1 | 0x24;
    *(byte *)(param_1 + 0x45a1c) =
         *(byte *)(param_1 + 0x45a1c) & 0x10 | (byte)(uVar19 >> 4) & 1 | 0x24;
    *(byte *)(param_1 + 0x4596d) =
         *(byte *)(param_1 + 0x4596d) & 0x10 | (byte)(uVar19 >> 5) & 1 | 0x20;
    uVar17 = 0x22;
    uVar8 = (short)(0x200 << (ulong)(uVar19 >> 5 & 1)) - 1;
    *(byte *)(param_1 + 0x45a1d) =
         *(byte *)(param_1 + 0x45a1d) & 0x10 | (byte)(uVar19 >> 5) & 1 | 0x20;
    *(ushort *)(param_1 + 0x45b92) = uVar8;
    *(ushort *)(param_1 + 0x45b90) = uVar8;
    *(undefined1 *)(param_1 + 0x45b9c) = 1;
    *(ushort *)(param_1 + 0x45b8c) = *puVar1 & uVar8;
    bVar7 = *(byte *)(param_1 + 0x45b97);
    *(ushort *)(param_1 + 0x45b8e) = *(short *)(param_1 + 0x45b8a) + 1U & uVar8;
    *(undefined8 *)(param_1 + 0x45b18) = *(undefined8 *)(param_1 + 0x45ae8);
    uVar18 = *(undefined8 *)(param_1 + 0x45bb0);
    break;
  case 5:
    uVar18 = *(undefined8 *)(&LAB_00316a90 + param_1);
    *(undefined4 *)(&LAB_00316a98 + param_1) = 0xfffffe00;
    *(undefined1 *)(param_1 + 0x316a9f) = 2;
    *(undefined1 *)(param_1 + 0x45ae4) = 2;
    *(undefined8 *)(param_1 + 0x45a00) = uVar18;
    *(undefined8 *)(param_1 + 0x45ac0) = 0;
    *(byte *)(param_1 + 0x4596c) = *(byte *)(param_1 + 0x4596c) & 0x10 | 3;
    *(byte *)(param_1 + 0x45a1c) = *(byte *)(param_1 + 0x45a1c) & 0x10 | 3;
    uVar13 = (short)(0x200 << (ulong)(uVar19 >> 4 & 1)) - 1;
    uVar8 = (short)(0x200 << (ulong)(uVar19 >> 5 & 1)) - 1;
    *(ushort *)(param_1 + 0x45b92) = uVar8;
    *(ushort *)(param_1 + 0x45b90) = uVar8;
    *(ushort *)(param_1 + 0x45ada) = uVar13;
    *(ushort *)(param_1 + 0x45ad8) = uVar13;
    *(ushort *)(param_1 + 0x45ad4) = *(ushort *)(param_1 + 0x45ad0) & uVar13;
    *(ushort *)(param_1 + 0x45ad6) = *(short *)(param_1 + 0x45ad2) + 1U & uVar13;
    *(byte *)(param_1 + 0x4596d) = *(byte *)(param_1 + 0x4596d) & 0x10 | 1;
    *(byte *)(param_1 + 0x45a1d) = *(byte *)(param_1 + 0x45a1d) & 0x10 | 1;
    *(undefined1 *)(param_1 + 0x45b9c) = 1;
    *(ushort *)(param_1 + 0x45b8c) = *puVar1 & uVar8;
    *(ushort *)(param_1 + 0x45b8e) = *(short *)(param_1 + 0x45b8a) + 1U & uVar8;
    *(undefined8 *)(param_1 + 0x45b18) = *(undefined8 *)(param_1 + 0x45af0);
    *(undefined8 *)(param_1 + 0x45bd0) = *(undefined8 *)(param_1 + 0x45bb0);
    *(uint *)(param_1 + 0x45ab8) =
         0x4444U >> (ulong)(-(uint)*(byte *)(param_1 + 0x45adf) & 0x1f) |
         0x4444 << (ulong)(*(byte *)(param_1 + 0x45adf) & 0x1f);
    *(uint *)(param_1 + 0x45abc) =
         0x22U >> (ulong)(-(uint)*(byte *)(param_1 + 0x45b97) & 0x1f) |
         0x22 << (ulong)(*(byte *)(param_1 + 0x45b97) & 0x1f);
    goto LAB_03fc4fd4;
  case 6:
    *(undefined8 *)(param_1 + 0x45abc) = 0;
    *(undefined1 *)(param_1 + 0x316a9f) = 2;
    *(undefined1 *)(param_1 + 0x45ae4) = 2;
    uVar8 = *(ushort *)(param_1 + 0x45ad0);
    *(undefined4 *)(&LAB_00316a98 + param_1) = 0xfffffe00;
    uVar13 = (short)(0x200 << (ulong)(uVar19 >> 4 & 1)) - 1;
    uVar18 = *(undefined8 *)(&LAB_00316a90 + param_1);
    *(ushort *)(param_1 + 0x45ada) = uVar13;
    *(ushort *)(param_1 + 0x45ad8) = uVar13;
    *(undefined4 *)(param_1 + 0x45ac4) = 0;
    *(ushort *)(param_1 + 0x45ad4) = uVar8 & uVar13;
    *(undefined8 *)(param_1 + 0x45a00) = uVar18;
    *(ushort *)(param_1 + 0x45ad6) = *(short *)(param_1 + 0x45ad2) + 1U & uVar13;
    *(byte *)(param_1 + 0x4596c) = *(byte *)(param_1 + 0x4596c) & 0x10 | 0x23;
    *(undefined8 *)(param_1 + 0x45b18) = *(undefined8 *)(param_1 + 0x45af0);
    *(byte *)(param_1 + 0x45a1c) = *(byte *)(param_1 + 0x45a1c) & 0x10 | 0x23;
    *(uint *)(param_1 + 0x45ab8) =
         0x4444U >> (ulong)(-(uint)*(byte *)(param_1 + 0x45adf) & 0x1f) |
         0x4444 << (ulong)(*(byte *)(param_1 + 0x45adf) & 0x1f);
LAB_03fc4fd4:
    uVar14 = 9;
    goto LAB_03fc4fd8;
  case 7:
    *(undefined8 *)(param_1 + 0x45ab8) = 0;
    *(undefined8 *)(param_1 + 0x45ac0) = 0;
    *(undefined8 *)(param_1 + 0x45b18) = *(undefined8 *)(param_1 + 0x45ae8);
    *(undefined8 *)(param_1 + 0x45bd0) = *(undefined8 *)(param_1 + 0x45ba0);
    if (*(char *)(param_1 + 0x3170f5) == '\0') {
      *(byte *)(param_1 + 0x4596c) = *(byte *)(param_1 + 0x4596c) & 0x10 | 6;
      *(byte *)(param_1 + 0x45a1c) = *(byte *)(param_1 + 0x45a1c) & 0x10 | 6;
    }
    else {
      *(byte *)(param_1 + 0x4596d) = *(byte *)(param_1 + 0x4596d) & 0x10 | 7;
      *(byte *)(param_1 + 0x45a1d) = *(byte *)(param_1 + 0x45a1d) & 0x10 | 7;
      uVar14 = 2;
      if ((*(byte *)(param_1 + 0x45a12) & 1) != 0) {
        uVar14 = 0xb;
      }
      *(undefined1 *)(param_1 + 0x45b9a) = uVar14;
      *(undefined1 *)(param_1 + 0x45b9b) = 0x12;
    }
    *(undefined1 *)(param_1 + 0x45ae2) = 0xe;
    *(undefined1 *)(param_1 + 0x45970) = 8;
    *(undefined1 *)(param_1 + 0x45a20) = 8;
    *(undefined4 *)(param_1 + 0x45ad8) = 0x1fff1fff;
    *(ushort *)(param_1 + 0x45ad4) =
         *(ushort *)(param_1 + 0x45ad0) & 0x1fff | -(*(ushort *)(param_1 + 0x45ad0) & 0x1000);
    uVar8 = *(short *)(param_1 + 0x45ad2) + 1;
    *(ushort *)(param_1 + 0x45ad6) = uVar8 & 0x1fff | -(uVar8 & 0x1000);
  default:
    goto switchD_03fc4734_default;
  }
  *(undefined8 *)(param_1 + 0x45bd0) = uVar18;
  uVar16 = 0x88888888;
  uVar19 = uVar17 << (ulong)(bVar7 & 0x1f);
  uVar17 = uVar17 >> (ulong)(-(uint)bVar7 & 0x1f);
LAB_03fc4e0c:
  *(undefined8 *)(param_1 + 0x45ac0) = 0;
  *(uint *)(param_1 + 0x45ab8) = uVar16;
  *(uint *)(param_1 + 0x45abc) = uVar17 | uVar19;
  uVar14 = 8;
LAB_03fc4fd8:
  *(undefined1 *)(param_1 + 0x45970) = uVar14;
  *(undefined1 *)(param_1 + 0x45a20) = uVar14;
  *(undefined1 *)(param_1 + 0x45ae2) = 0xe;
  uVar15 = 0x1202;
LAB_03fc4fec:
  *(undefined2 *)(param_1 + 0x45b9a) = uVar15;
switchD_03fc4734_default:
  cVar6 = *(char *)(param_1 + 0x316a9f);
  if (cVar5 != cVar6) {
    plVar4 = (long *)(param_1 + 0x226a80);
    if (*(int *)(*(long *)(param_1 + 0x45e68) + 0x38) != 0) {
      if (cVar6 == '\x02') {
        uVar14 = 0;
        uVar19 = 0x2f;
        uVar20 = 1;
      }
      else {
        uVar14 = *(undefined1 *)(param_1 + 0x45965);
        uVar20 = *(undefined1 *)(param_1 + 0x3170ec);
        uVar19 = (uint)*(byte *)(param_1 + 0x3170ed);
      }
      *(undefined1 *)(param_1 + 0x45966) = uVar14;
      bVar7 = *(byte *)(param_1 + 0x3170f4);
      *(undefined1 *)(param_1 + 0x3170ea) = uVar20;
      *(char *)(param_1 + 0x3170f2) = (char)uVar19;
      uVar16 = (uint)bVar7;
      uVar17 = 1;
      if ((uVar19 & 0x20) != 0) {
        uVar17 = ~uVar16;
      }
      uVar13 = (ushort)(uVar17 << 0xf);
      *(ushort *)(param_1 + 0x3170ca) = uVar13;
      iVar9 = (uVar16 & (int)(uVar19 << 0x1c) >> 0x1f) * -0x202;
      *(uint *)(param_1 + 0x45a78) = ((uint)bVar7 & (int)(uVar19 << 0x1b) >> 0x1f) << 7;
      iVar10 = (-(uVar19 & 1) & uVar16) * -0x202;
      iVar11 = ((uint)bVar7 & (int)(uVar19 << 0x1e) >> 0x1f) * -0x202;
      iVar12 = (uVar16 & (int)(uVar19 << 0x1d) >> 0x1f) * -0x202;
      uVar8 = *(ushort *)(&LAB_00316cc4 + param_1);
      *(int *)(param_1 + 0x45d48) = iVar9;
      *(int *)(param_1 + 0x45b20) = iVar10;
      *(int *)(param_1 + 0x45bd8) = iVar11;
      *(int *)(param_1 + 0x45c90) = iVar12;
      *(ushort *)(param_1 + 0x3170cc) = uVar8 | uVar13;
      *(long *)(param_1 + 0x45a58) = *(long *)(param_1 + 0x459a8) + (long)iVar10;
      *(long *)(param_1 + 0x45a60) = *(long *)(param_1 + 0x459b0) + (long)iVar11;
      *plVar2 = *(long *)(param_1 + 0x459b8) + (long)iVar12;
      *(long *)(param_1 + 0x45a70) = *(long *)(param_1 + 0x459c0) + (long)iVar9;
    }
    if ((ushort)*(byte *)(param_1 + 0x45e7c) != *(ushort *)(param_1 + 0x45e7a)) {
      *(char *)(param_1 + 0x45e7c) = (char)*(ushort *)(param_1 + 0x45e7a);
      *(char *)(*plVar4 + 0x7802b) = *(char *)(*plVar4 + 0x7802b) + '\x01';
      *(undefined1 *)(*plVar4 + (ulong)*(byte *)(*plVar4 + 0x7802b) * 3 + 0x7802c) =
           *(undefined1 *)(param_1 + 0x45e7a);
      *(undefined1 *)(*plVar4 + (ulong)*(byte *)(*plVar4 + 0x7802b) * 3 + 0x7802e) =
           *(undefined1 *)(param_1 + 0x45e71);
      cVar6 = *(char *)(param_1 + 0x316a9f);
    }
    *(char *)(*plVar4 + (ulong)*(byte *)(*plVar4 + 0x7802b) * 3 + 0x7802d) = cVar6 + -1;
  }
  if (((&LAB_00316aa0)[param_1] != '\0') && (*(char *)(param_1 + 0x316aa1) == '\x01')) {
    FUN_03fc5434(param_1);
  }
  FUN_03fe5eb0(param_1);
  FUN_03fc56a4(param_1,param_1 + 0x45a00);
  if (*(char *)(param_1 + 0x3170e8) != '\0') {
    FUN_03fc56a4(param_1,param_1 + 0x45950);
  }
  FUN_03fc3320(param_1);
  uVar19 = (*(byte *)(param_1 + 0x3170ea) ^ 3 | (uint)*(byte *)(param_1 + 0x3170e9)) &
           (uint)*(byte *)(param_1 + 0x3170f0);
  bVar7 = *(byte *)(param_1 + 0x3170f4);
  *(char *)(param_1 + 0x3170ef) = (char)uVar19;
  uVar19 = uVar19 & 1;
  *(char *)(param_1 + 0x3170f1) = (char)uVar19;
  uVar19 = *(byte *)(param_1 + 0x3170e7) & uVar19 | (uint)bVar7;
  *(char *)(param_1 + 0x3170f4) = (char)uVar19;
  if (bVar7 != uVar19) {
    bVar7 = *(byte *)(param_1 + 0x3170f2);
    uVar8 = *(ushort *)(&LAB_00316cc4 + param_1);
    uVar16 = (uint)bVar7;
    uVar17 = 1;
    if ((bVar7 & 0x20) != 0) {
      uVar17 = ~uVar19;
    }
    uVar13 = (ushort)(uVar17 << 0xf);
    *(ushort *)(param_1 + 0x3170ca) = uVar13;
    *(ushort *)(param_1 + 0x3170cc) = uVar8 | uVar13;
    *(uint *)(param_1 + 0x45a78) = (uVar19 & (int)(uVar16 << 0x1b) >> 0x1f) << 7;
    iVar9 = (-(uVar16 & 1) & uVar19) * -0x202;
    iVar10 = (uVar19 & (int)((uint)bVar7 << 0x1e) >> 0x1f) * -0x202;
    iVar11 = (uVar19 & (int)(uVar16 << 0x1d) >> 0x1f) * -0x202;
    iVar12 = (uVar19 & (int)(uVar16 << 0x1c) >> 0x1f) * -0x202;
    *(int *)(param_1 + 0x45b20) = iVar9;
    *(int *)(param_1 + 0x45d48) = iVar12;
    *(int *)(param_1 + 0x45bd8) = iVar10;
    *(int *)(param_1 + 0x45c90) = iVar11;
    *(long *)(param_1 + 0x45a58) = *(long *)(param_1 + 0x459a8) + (long)iVar9;
    *(long *)(param_1 + 0x45a60) = *(long *)(param_1 + 0x459b0) + (long)iVar10;
    *plVar2 = *(long *)(param_1 + 0x459b8) + (long)iVar11;
    *(long *)(param_1 + 0x45a70) = *(long *)(param_1 + 0x459c0) + (long)iVar12;
  }
  if (((((0x94U >> (ulong)(*(byte *)(param_1 + 0x316a9e) & 0x1f) & 1) == 0) &&
       (*(char *)(param_1 + 0x316a9f) != '\x02')) &&
      (*(int *)(*(long *)(param_1 + 0x45e68) + 0x50) == 0)) &&
     (((*(int *)(*(long *)(param_1 + 0x45e68) + 0x60) == 0 && (*(byte *)(param_1 + 0x316aa1) < 2))
      && (*(char *)(param_1 + 0x3170e8) == '\0')))) {
    *(undefined8 *)(param_1 + 0x3170f8) = &LAB_03fcb350;
    uVar14 = 4;
  }
  else {
    *(undefined8 *)(param_1 + 0x3170f8) = &LAB_03fcbe70;
    uVar14 = 1;
  }
  *(undefined1 *)(param_1 + 0x317100) = uVar14;
  return;
}

