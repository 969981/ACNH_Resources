
void FUN_03fe5eb0(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  undefined *puVar14;
  bool bVar15;
  bool bVar16;
  long lVar17;
  long lVar18;
  char cVar19;
  uint uVar20;
  uint uVar21;
  char cVar22;
  ulong uVar23;
  undefined1 uVar24;
  ulong uVar25;
  long lVar26;
  uint uVar27;
  byte *pbVar28;
  long lVar29;
  undefined4 *puVar30;
  undefined4 *puVar31;
  
  uVar21 = *(uint *)(param_1 + 0x3170d0);
  uVar25 = (ulong)*(byte *)(param_1 + 0x3170e6);
  uVar6 = *(ushort *)(param_1 + 0x3170d8);
  uVar7 = *(ushort *)(param_1 + 0x3170e4);
  lVar26 = uVar25 * 8;
  if (((uVar21 ^ 0xffffffff) & 10) == 0) {
    uVar27 = (uVar6 & 3) + (uint)(byte)(&DAT_04101668)[((ulong)uVar21 & 0xf) - uVar25];
  }
  else {
    uVar27 = (uint)(byte)(&DAT_041ec388)[lVar26 + ((ulong)uVar21 & 0xf)];
  }
  bVar5 = *(byte *)(param_1 + 0x3170e8);
  *(undefined *)(param_1 + 0x45ab0) = (&DAT_041ec3a6)[(ulong)(uVar27 + uVar7) & 0xffff];
  uVar23 = (ulong)(uVar21 >> 4) & 0xf;
  if (((uVar21 ^ 0xffffffff) & 0xa0) == 0) {
    uVar27 = (uVar6 >> 2 & 3) + (uint)(byte)(&DAT_04101668)[uVar23 - uVar25];
  }
  else {
    uVar27 = (uint)(byte)(&DAT_041ec388)[uVar23 + lVar26];
  }
  *(undefined *)(param_1 + 0x45ab1) = (&DAT_041ec3a6)[(ulong)(uVar27 + uVar7) & 0xffff];
  uVar23 = (ulong)(uVar21 >> 8) & 0xf;
  if (((uVar21 ^ 0xffffffff) & 0xa00) == 0) {
    uVar27 = (uVar6 >> 4 & 3) + (uint)(byte)(&DAT_04101668)[uVar23 - uVar25];
  }
  else {
    uVar27 = (uint)(byte)(&DAT_041ec388)[uVar23 + lVar26];
  }
  uVar20 = (uint)uVar7;
  *(undefined *)(param_1 + 0x45ab2) = (&DAT_041ec3a6)[(ulong)(uVar27 + uVar20) & 0xffff];
  uVar23 = (ulong)(uVar21 >> 0xc) & 0xf;
  if (((uVar21 ^ 0xffffffff) & 0xa000) == 0) {
    uVar27 = (uVar6 >> 6 & 3) + (uint)(byte)(&DAT_04101668)[uVar23 - uVar25];
  }
  else {
    uVar27 = (uint)(byte)(&DAT_041ec388)[uVar23 + lVar26];
  }
  *(undefined *)(param_1 + 0x45ab3) = (&DAT_041ec3a6)[(ulong)(uVar27 + uVar20) & 0xffff];
  uVar23 = (ulong)(uVar21 >> 0x10) & 0xf;
  if (((uVar21 ^ 0xffffffff) & 0xa0000) == 0) {
    uVar27 = (uVar6 >> 8 & 3) + (uint)(byte)(&DAT_04101668)[uVar23 - uVar25];
  }
  else {
    uVar27 = (uint)(byte)(&DAT_041ec388)[uVar23 + lVar26];
  }
  puVar2 = (undefined8 *)(param_1 + 0x3170f8);
  *(undefined *)(param_1 + 0x45ab4) = (&DAT_041ec3a6)[(ulong)(uVar27 + uVar20) & 0xffff];
  uVar23 = (ulong)(uVar21 >> 0x14) & 0xf;
  if (((uVar21 ^ 0xffffffff) & 0xa00000) == 0) {
    uVar21 = (uVar6 >> 10 & 3) + (uint)(byte)(&DAT_04101668)[uVar23 - uVar25];
  }
  else {
    uVar21 = (uint)(byte)(&DAT_041ec388)[lVar26 + uVar23];
  }
  lVar26 = 0;
  bVar15 = true;
  *(undefined *)(param_1 + 0x45ab5) = (&DAT_041ec3a6)[(ulong)(uVar21 + uVar20) & 0xffff];
  bVar1 = false;
LAB_03fe61a4:
  bVar16 = bVar1;
  lVar17 = param_1 + lVar26 * 0xb0;
  pbVar28 = (byte *)(lVar17 + 0x45963);
  *pbVar28 = 0;
  cVar19 = *(char *)(lVar17 + 0x45966);
  if (cVar19 == '\x02') {
    uVar25 = (ulong)*(byte *)(param_1 + 0x45ab5);
  }
  else if (cVar19 == '\x01') {
    uVar25 = (ulong)(byte)(&DAT_041ec6af)[*(byte *)(param_1 + 0x45ab5)];
  }
  else {
    uVar25 = 0;
    if (cVar19 == '\0') {
      uVar25 = 1;
    }
  }
  cVar19 = *(char *)(param_1 + 0x3170f2);
  *(char *)(lVar17 + 0x459f6) = (char)uVar25;
  uVar21 = (uint)uVar25;
  if (cVar19 != '\0') {
    uVar21 = 1;
  }
  if (!bVar15) {
    uVar21 = (uint)uVar25;
  }
  lVar17 = param_1 + lVar26 * 0xb0;
  lVar18 = 5;
  lVar29 = 0;
  puVar30 = (undefined4 *)(lVar17 + 0x459f8);
  puVar31 = (undefined4 *)(param_1 + 0x459d0 + lVar26 * 0xb0);
  do {
    cVar19 = '\0';
    *(undefined *)(param_1 + lVar26 * 0xb0 + lVar18 * 8 + 0x459cf) = (&DAT_041ec9db)[uVar25];
    *puVar30 = 0;
    cVar22 = '\0';
    switch(uVar25) {
    case 0:
      *pbVar28 = *pbVar28 | (byte)(1 << (ulong)((uint)lVar29 & 0x1f));
      cVar22 = *(char *)((long)puVar30 + 1);
      cVar19 = *(char *)((long)puVar30 + 3);
      break;
    case 1:
      break;
    case 2:
      uVar24 = *(undefined1 *)(param_1 + 0x3170e1);
      goto LAB_03fe6400;
    case 3:
      cVar22 = *(char *)(param_1 + 0x3170e1);
      goto LAB_03fe6304;
    case 4:
      uVar24 = *(undefined1 *)(param_1 + 0x3170e2);
      goto LAB_03fe6400;
    case 5:
      cVar22 = *(char *)(param_1 + 0x3170e2);
LAB_03fe6304:
      cVar19 = '\0';
      *(char *)((long)puVar30 + 1) = cVar22;
      break;
    case 6:
      cVar22 = *(char *)(param_1 + 0x3170e1);
      goto LAB_03fe6414;
    case 7:
      uVar24 = *(undefined1 *)(param_1 + 0x3170e1);
      goto LAB_03fe6448;
    case 8:
      goto LAB_03fe6388;
    case 9:
      uVar8 = *(undefined2 *)(param_1 + 0x3170e2);
      cVar19 = '\0';
      *(undefined2 *)puVar30 = uVar8;
      cVar22 = (char)((ushort)uVar8 >> 8);
      break;
    case 10:
      cVar22 = *(char *)(param_1 + 0x3170e0);
      cVar19 = '\0';
      *(char *)((long)puVar30 + 1) = cVar22;
      *(undefined1 *)((long)puVar30 + 2) = *(undefined1 *)(param_1 + 0x3170e1);
      break;
    case 0xb:
      cVar19 = '\0';
      *(undefined1 *)puVar30 = *(undefined1 *)(param_1 + 0x3170e0);
      cVar22 = *(char *)(param_1 + 0x3170e1);
      break;
    case 0xc:
      uVar24 = *(undefined1 *)(param_1 + 0x3170e0);
      goto LAB_03fe6400;
    case 0xd:
      cVar22 = *(char *)(param_1 + 0x3170e0);
      cVar19 = '\0';
      break;
    case 0xe:
    case 0x13:
      cVar22 = *(char *)(param_1 + 0x3170e0);
      *(char *)((long)puVar30 + 1) = cVar22;
      *(undefined1 *)((long)puVar30 + 2) = *(undefined1 *)(param_1 + 0x3170e1);
      cVar19 = *(char *)(param_1 + 0x3170e2);
      *(char *)((long)puVar30 + 3) = cVar19;
      *(undefined1 *)(puVar30 + 1) = *(undefined1 *)(param_1 + 0x3170e3);
      break;
    case 0xf:
      *(undefined1 *)puVar30 = *(undefined1 *)(param_1 + 0x3170e1);
LAB_03fe6388:
      cVar22 = *(char *)(param_1 + 0x3170e2);
      goto LAB_03fe6460;
    case 0x10:
      cVar19 = '\0';
      *(undefined1 *)puVar30 = *(undefined1 *)(param_1 + 0x3170e0);
      cVar22 = *(char *)(param_1 + 0x3170e1);
      *(char *)((long)puVar30 + 1) = cVar22;
      uVar24 = *(undefined1 *)(param_1 + 0x3170e2);
      *(undefined1 *)((long)puVar30 + 3) = 0;
      *(undefined1 *)((long)puVar30 + 2) = uVar24;
      break;
    case 0x11:
      *(undefined1 *)puVar30 = *(undefined1 *)(param_1 + 0x3170e0);
      cVar22 = *(char *)(param_1 + 0x3170e1);
      *(char *)((long)puVar30 + 1) = cVar22;
      *(undefined1 *)((long)puVar30 + 2) = *(undefined1 *)(param_1 + 0x3170e2);
      cVar19 = *(char *)(param_1 + 0x3170e3);
      break;
    case 0x12:
      cVar22 = *(char *)(param_1 + 0x3170e1);
      *(char *)((long)puVar30 + 1) = cVar22;
      *(undefined1 *)((long)puVar30 + 2) = *(undefined1 *)(param_1 + 0x3170e2);
      cVar19 = *(char *)(param_1 + 0x3170e3);
      *(undefined1 *)puVar30 = 0;
      *(char *)((long)puVar30 + 3) = cVar19;
      break;
    case 0x14:
      cVar22 = *(char *)(param_1 + 0x3170e0);
      goto LAB_03fe6460;
    case 0x15:
      uVar24 = *(undefined1 *)(param_1 + 0x3170e3);
LAB_03fe6400:
      cVar19 = '\0';
      cVar22 = '\0';
      *(undefined1 *)puVar30 = uVar24;
      break;
    case 0x16:
      cVar22 = *(char *)(param_1 + 0x3170e0);
LAB_03fe6414:
      cVar19 = '\0';
      *(char *)((long)puVar30 + 1) = cVar22;
      *(undefined1 *)((long)puVar30 + 2) = *(undefined1 *)(param_1 + 0x3170e2);
      break;
    case 0x17:
      *(undefined1 *)puVar30 = *(undefined1 *)(param_1 + 0x3170e0);
      goto LAB_03fe643c;
    case 0x18:
LAB_03fe643c:
      cVar19 = '\0';
      cVar22 = *(char *)(param_1 + 0x3170e3);
      break;
    case 0x19:
      uVar24 = *(undefined1 *)(param_1 + 0x3170e0);
LAB_03fe6448:
      cVar19 = '\0';
      *(undefined1 *)puVar30 = uVar24;
      cVar22 = *(char *)(param_1 + 0x3170e2);
      break;
    case 0x1a:
      cVar22 = *(char *)(param_1 + 0x3170e1);
LAB_03fe6460:
      cVar19 = '\0';
      *(char *)((long)puVar30 + 1) = cVar22;
      *(undefined1 *)((long)puVar30 + 2) = *(undefined1 *)(param_1 + 0x3170e3);
      break;
    case 0x1b:
      cVar19 = '\0';
      *(undefined1 *)puVar30 = *(undefined1 *)(param_1 + 0x3170e1);
      cVar22 = *(char *)(param_1 + 0x3170e3);
      *(char *)((long)puVar30 + 1) = cVar22;
      break;
    default:
      cVar22 = '\0';
    }
    *(char *)((long)puVar30 + 1) = cVar22 + -1;
    *(char *)((long)puVar30 + 3) = cVar19 + -1;
    if (lVar29 == 5) break;
    uVar25 = (ulong)uVar21;
    if ((*(byte *)(lVar17 + 0x45964) >> (ulong)((uint)lVar29 & 0x1f) & 1) != 0) {
      uVar25 = (ulong)(byte)(&UNK_041ec6cb)
                            [(ulong)*(byte *)(param_1 + 0x45ab0 + lVar29) + (ulong)uVar21 * 0x1c];
    }
    *(char *)((long)puVar31 + -2) = (char)uVar25;
    lVar18 = lVar29;
    lVar29 = lVar29 + 1;
    puVar30 = puVar31;
    puVar31 = puVar31 + 2;
  } while( true );
  bVar15 = false;
  lVar26 = 1;
  bVar1 = true;
  if (bVar16) goto LAB_03fe64c4;
  goto LAB_03fe61a4;
LAB_03fe64c4:
  bVar3 = (*(byte *)(param_1 + 0x45963) >> 1 ^ 0x1f) &
          (&DAT_041015f8)[*(byte *)(param_1 + 0x316a9e)];
  bVar4 = *(byte *)(param_1 + 0x45961) & bVar3;
  *(byte *)(param_1 + 0x45963) = bVar3;
  *(byte *)(param_1 + 0x45962) = bVar4;
  *(bool *)(param_1 + 0x3170e9) = bVar4 != 0;
  bVar3 = (*(byte *)(param_1 + 0x3170ea) ^ 3 | bVar4 != 0) & *(byte *)(param_1 + 0x3170f0);
  *(byte *)(param_1 + 0x3170ef) = bVar3;
  bVar3 = bVar3 & 1;
  *(byte *)(param_1 + 0x3170f1) = bVar3;
  bVar15 = *(char *)(param_1 + 0x459f6) != '\0';
  bVar16 = *(char *)(param_1 + 0x3170f2) != '\0';
  bVar1 = bVar15 && bVar16;
  uVar21 = (uint)bVar1;
  *(bool *)(param_1 + 0x3170e7) = bVar1;
  bVar13 = 0;
  if (*(char *)(param_1 + 0x3170f6) != '\0') {
    bVar13 = bVar4;
  }
  bVar13 = (*(byte *)(param_1 + 0x3170ea) & bVar1) * bVar4 | bVar13;
  *(byte *)(param_1 + 0x3170e8) = bVar13;
  puVar14 = PTR_LAB_04bdf288;
  if (((((0x94U >> (ulong)(*(byte *)(param_1 + 0x316a9e) & 0x1f) & 1) == 0) &&
       (*(char *)(param_1 + 0x316a9f) != '\x02')) &&
      (*(int *)(*(long *)(param_1 + 0x45e68) + 0x50) == 0)) &&
     ((*(int *)(*(long *)(param_1 + 0x45e68) + 0x60) == 0 && (*(byte *)(param_1 + 0x316aa1) < 2))))
  {
    pbVar28 = (byte *)(param_1 + 0x3170f4);
    if (bVar13 == 0) {
      uVar27 = (uint)*pbVar28;
      *(undefined1 *)(param_1 + 0x317100) = 4;
      *pbVar28 = 0;
      *puVar2 = puVar14;
      goto LAB_03fe6644;
    }
    uVar27 = (uint)*pbVar28;
    *puVar2 = &LAB_03fcbe70;
    *(undefined1 *)(param_1 + 0x317100) = 1;
LAB_03fe65b4:
    *(byte *)(param_1 + 0x3170f4) = bVar1;
    if (bVar5 != bVar13) {
      FUN_03fc56a4(param_1,param_1 + 0x45950);
      bVar5 = *(byte *)(param_1 + 0x3170f4);
      uVar21 = (uint)bVar5;
      if (uVar27 == bVar5) goto LAB_03fe6710;
      goto LAB_03fe6668;
    }
LAB_03fe6660:
    if (uVar27 == uVar21) goto LAB_03fe6710;
  }
  else {
    uVar27 = (uint)*(byte *)(param_1 + 0x3170f4);
    *puVar2 = &LAB_03fcbe70;
    *(undefined1 *)(param_1 + 0x317100) = 1;
    *(undefined1 *)(param_1 + 0x3170f4) = 0;
    if (bVar13 != 0) goto LAB_03fe65b4;
LAB_03fe6644:
    if (!bVar15 || !bVar16) goto LAB_03fe6660;
    if (*(short *)(param_1 + 0x316cc2) != 0 || bVar3 != 0) {
      uVar21 = 1;
      *(undefined1 *)(param_1 + 0x3170f4) = 1;
      goto LAB_03fe6660;
    }
    uVar21 = 0;
    if (uVar27 == 0) goto LAB_03fe6710;
  }
LAB_03fe6668:
  bVar5 = *(byte *)(param_1 + 0x3170f2);
  uVar6 = *(ushort *)(&LAB_00316cc4 + param_1);
  uVar20 = (uint)bVar5;
  uVar27 = 1;
  if ((bVar5 & 0x20) != 0) {
    uVar27 = ~uVar21;
  }
  uVar7 = (ushort)(uVar27 << 0xf);
  *(ushort *)(param_1 + 0x3170ca) = uVar7;
  iVar9 = (uVar21 & (int)(uVar20 << 0x1e) >> 0x1f) * -0x202;
  *(uint *)(param_1 + 0x45a78) = (uVar21 & (int)((uint)bVar5 << 0x1b) >> 0x1f) << 7;
  *(ushort *)(param_1 + 0x3170cc) = uVar6 | uVar7;
  iVar10 = (-(uVar20 & 1) & uVar21) * -0x202;
  *(int *)(param_1 + 0x45bd8) = iVar9;
  iVar11 = (uVar21 & (int)(uVar20 << 0x1d) >> 0x1f) * -0x202;
  iVar12 = (uVar21 & (int)(uVar20 << 0x1c) >> 0x1f) * -0x202;
  *(int *)(param_1 + 0x45b20) = iVar10;
  *(int *)(param_1 + 0x45d48) = iVar12;
  *(int *)(param_1 + 0x45c90) = iVar11;
  *(long *)(param_1 + 0x45a60) = *(long *)(param_1 + 0x459b0) + (long)iVar9;
  *(long *)(param_1 + 0x45a58) = *(long *)(param_1 + 0x459a8) + (long)iVar10;
  *(long *)(param_1 + 0x45a68) = *(long *)(param_1 + 0x459b8) + (long)iVar11;
  *(long *)(param_1 + 0x45a70) = *(long *)(param_1 + 0x459c0) + (long)iVar12;
LAB_03fe6710:
  FUN_03fc56a4(param_1,param_1 + 0x45a00);
  FUN_03fc3320(param_1);
  return;
}

