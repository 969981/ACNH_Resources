
void FUN_0011e5e0(long param_1,long param_2,long param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  short sVar9;
  short sVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  ulong local_40;
  byte local_28 [4];
  byte local_24 [4];
  
  if (*(char *)(param_1 + 3) != '\0') {
    return;
  }
  if (1 < *(ushort *)(param_1 + 0x6d63a) - 3) {
    return;
  }
  if (*(char *)(param_2 + 0x53) < '\0') {
    return;
  }
  if (*(byte *)(param_3 + 0x60) - 1 < 2) {
    return;
  }
  lVar13 = *(long *)(param_3 + 8);
  uVar11 = (ulong)param_4;
  if (*(byte *)(param_3 + 0x60) == 3) {
    uVar3 = *(uint *)(lVar13 + 0x70);
  }
  else {
    uVar3 = (*(uint *)(lVar13 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar13 + 8) & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  }
  if (uVar3 != 0x80020000) {
    return;
  }
  if (*(char *)(param_2 + 0x50) != '\x01') {
    return;
  }
  uVar4 = *(undefined1 *)(lVar13 + 0x2b);
  uVar5 = *(undefined1 *)(lVar13 + 0x2a);
  uVar3 = (uint)CONCAT11(uVar5,uVar4);
  if (uVar3 == 0) {
    return;
  }
  uVar12 = (uint)CONCAT11(*(undefined1 *)(lVar13 + 0x32),*(undefined1 *)(lVar13 + 0x33));
  uVar15 = 0;
  if ((param_4 + 1 & 0xffff) < uVar3) {
    uVar15 = param_4 + 1;
  }
  uVar17 = uVar15 & 0xffff;
  if (uVar12 == uVar17) {
    return;
  }
  uVar16 = 0;
  while( true ) {
    if (CONCAT11(uVar5,uVar4) <= uVar17) {
      return;
    }
    lVar1 = lVar13 + ((ulong)*(byte *)(lVar13 + 0x20) << 0x18 |
                      (ulong)*(byte *)(lVar13 + 0x21) << 0x10 | (ulong)*(byte *)(lVar13 + 0x22) << 8
                     | (ulong)*(byte *)(lVar13 + 0x23));
    lVar18 = (ulong)CONCAT11(*(undefined1 *)(lVar13 + 0x2e),*(undefined1 *)(lVar13 + 0x2f)) *
             (ulong)uVar17;
    bVar7 = *(byte *)(lVar1 + lVar18);
    bVar6 = bVar7 & 3;
    *(byte *)(param_1 + 0x6079e) = bVar6;
    bVar8 = *(byte *)(lVar1 + lVar18) >> 6 & 1;
    *(byte *)(param_1 + 0x607a3) = bVar8;
    if (bVar6 == 3) {
      return;
    }
    if ((bVar7 & 3) != 0) break;
    uVar16 = uVar16 + 1;
    if (uVar3 <= (uVar16 & 0xffff)) {
      return;
    }
    uVar4 = *(undefined1 *)(lVar13 + 0x2b);
    uVar5 = *(undefined1 *)(lVar13 + 0x2a);
    uVar2 = 0;
    if ((uVar15 + 1 & 0xffff) < (uint)CONCAT11(uVar5,uVar4)) {
      uVar2 = uVar15 + 1;
    }
    uVar17 = uVar2 & 0xffff;
    uVar15 = uVar2;
    if (uVar12 == uVar17) {
      return;
    }
  }
  if (bVar8 == 0) {
    return;
  }
  lVar13 = *(long *)(param_3 + 8);
  if ((uint)CONCAT11(*(undefined1 *)(lVar13 + 0x2a),*(undefined1 *)(lVar13 + 0x2b)) <=
      (param_4 & 0xffff)) {
    return;
  }
  pbVar14 = (byte *)(lVar13 + ((ulong)*(byte *)(lVar13 + 0x20) << 0x18 |
                               (ulong)*(byte *)(lVar13 + 0x21) << 0x10 |
                               (ulong)*(byte *)(lVar13 + 0x22) << 8 |
                              (ulong)*(byte *)(lVar13 + 0x23)) +
                    (ulong)CONCAT11(*(undefined1 *)(lVar13 + 0x2e),*(undefined1 *)(lVar13 + 0x2f)) *
                    (uVar11 & 0xffff));
  bVar6 = *pbVar14;
  *(byte *)(param_1 + 0x6079e) = (byte)(bVar6 & 3);
  bVar7 = pbVar14[2];
  *(byte *)(param_1 + 0x607a1) = bVar7 & 0x7f;
  *(byte *)(param_1 + 0x6079f) = bVar7 >> 1 & 0x3f;
  bVar7 = pbVar14[4] >> 1 & 0x3f;
  *(byte *)(param_1 + 0x607a2) = pbVar14[4] & 0x7f;
  *(byte *)(param_1 + 0x607a0) = bVar7;
  if (1 < (bVar6 & 3) - 1) {
    return;
  }
  lVar13 = *(long *)(param_3 + 8);
  if ((bVar7 == 0) &&
     ((*(byte *)(lVar13 + ((ulong)*(byte *)(lVar13 + 0x20) << 0x18 |
                           (ulong)*(byte *)(lVar13 + 0x21) << 0x10 |
                           (ulong)*(byte *)(lVar13 + 0x22) << 8 | (ulong)*(byte *)(lVar13 + 0x23)) +
                (ulong)CONCAT11(*(undefined1 *)(lVar13 + 0x2e),*(undefined1 *)(lVar13 + 0x2f)) *
                (uVar11 & 0xffff)) >> 4 & 1) == 0)) {
    return;
  }
  lVar13 = FUN_00119860(param_1,lVar13,param_4,local_24,1);
  if (lVar13 == 0) {
    return;
  }
  if ((ushort)local_24[0] != *(ushort *)(param_2 + 0x4c)) {
    return;
  }
  sVar9 = FUN_001004d0();
  lVar13 = *(long *)(param_3 + 8);
  uVar3 = (uint)CONCAT11(*(undefined1 *)(lVar13 + 0x2a),*(undefined1 *)(lVar13 + 0x2b));
  if (uVar3 != 0) {
    uVar12 = 0;
    local_40 = uVar11;
    do {
      uVar15 = 0;
      if (((int)local_40 + 1U & 0xffff) < uVar3) {
        uVar15 = (int)local_40 + 1;
      }
      local_40 = (ulong)uVar15;
      if ((*(byte *)(lVar13 + ((ulong)*(byte *)(lVar13 + 0x20) << 0x18 |
                               (ulong)*(byte *)(lVar13 + 0x21) << 0x10 |
                               (ulong)*(byte *)(lVar13 + 0x22) << 8 |
                              (ulong)*(byte *)(lVar13 + 0x23)) +
                    (ulong)CONCAT11(*(undefined1 *)(lVar13 + 0x2e),*(undefined1 *)(lVar13 + 0x2f)) *
                    (local_40 & 0xffff)) & 3) != 0) goto LAB_0011e924;
      uVar12 = uVar12 + 1;
    } while ((uVar12 & 0xffff) < uVar3);
  }
  local_40 = 0;
LAB_0011e924:
  lVar13 = FUN_00119860(param_1,lVar13,local_40,local_28,1);
  if ((((lVar13 != 0) &&
       (sVar10 = FUN_001004d0(), (ushort)((ushort)local_28[0] + (ushort)local_24[0]) < 0x38)) &&
      ((ushort)*(byte *)(param_1 + 0x6d648) <= (ushort)(sVar10 + sVar9))) &&
     ((ushort)(sVar10 + sVar9) <= (ushort)*(byte *)(param_1 + 0x6d649))) {
    local_24[0] = 0;
    local_28[0] = 0;
    lVar13 = FUN_00119c10(param_1,*(undefined8 *)(param_3 + 8),uVar11,local_24,1);
    if ((((lVar13 != 0) &&
         (lVar13 = FUN_00119c10(param_1,*(undefined8 *)(param_3 + 8),local_40,local_28,1),
         lVar13 != 0)) && ((uint)local_28[0] + (uint)local_24[0] < 0x38)) &&
       (((lVar13 = *(long *)(param_3 + 8),
         uVar3 = (*(uint *)(lVar13 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar13 + 8) & 0xff00ff) << 8
         , (uVar3 >> 0x10 | uVar3 << 0x10) == 0x80020000 &&
         (uVar3 = (*(uint *)(lVar13 + 4) & 0xff00ff00) >> 8 |
                  (*(uint *)(lVar13 + 4) & 0xff00ff) << 8,
         (uVar3 >> 0x10 | uVar3 << 0x10) != 0x40000)) ||
        (lVar13 = lVar13 + ((ulong)*(byte *)(lVar13 + 0x38) << 0x18 |
                            (ulong)*(byte *)(lVar13 + 0x39) << 0x10 |
                            (ulong)*(byte *)(lVar13 + 0x3a) << 8 | (ulong)*(byte *)(lVar13 + 0x3b)),
        (byte)((*(byte *)(lVar13 + (local_40 & 0xffff) * 0x70) >> 1) +
              (*(byte *)(lVar13 + (uVar11 & 0xffff) * 0x70) >> 1)) < 0x38)))) {
      *(undefined1 *)(param_3 + 0x5e) = 0x90;
      return;
    }
  }
  return;
}

